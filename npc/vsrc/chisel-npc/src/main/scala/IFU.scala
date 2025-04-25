import chisel3._
import chisel3.util._


class CtrlFlow extends NPCBundle {
    val inst = UInt(32.W)
    val pc   = UInt(XLen.W)
    val next_pc = UInt(XLen.W)
    val isBranch = Bool()

}

class IFUIO extends NPCBundle {
    val inst = Input(UInt(32.W))
    val to_idu = Decoupled(new CtrlFlow)

    //val redirect = Input(Bool())
    //val tnpc = Input(UInt(XLen.W))
    //val snpc = Input(UInt(XLen.W))
    val pc = Output(UInt(XLen.W))

    //val from_exu_bruRes = Input(new BruRes)

    val redirect = Input(new Redirect)
}

class BruRes extends NPCBundle {
    val valid = Bool()
    val targetPc = UInt(XLen.W)
}

class IFU extends NPCModule 
with HasNPCParameter{
    val io = IO(new IFUIO)
    //val pc = RegNext(Mux(io.redirect, io.tnpc, io.snpc))
    val pc = RegInit("h80000000".U(XLen.W))
    val valid = RegInit(true.B)

    val out = io.to_idu
    /*
    pc := Mux(io.to_idu.ready , next_pc, pc) 
    */
    /*
    (pc, valid) := MuxCase((0.U, false.B), Array(
        (out.ready === false.B) -> (pc, valid),
        (out.ready === true.B)  -> (next_pc, valid)

    ))
    */
    val inInstOp = io.inst(6,0)
    val inInst   = io.inst
    //val bruRes = Wire(new BruRes)
    //val exuBruRes = io.from_exu_bruRes
    val isBranch = MuxLookup(inInstOp,false.B, Array(
        "b1101111".U    -> true.B,      /* jal */
        "b1100111".U    -> true.B,      /* jalr */
        "b1100011".U    -> true.B       /* B type */
    ))
    val isEcall = inInst === "b000000000000_00000_000_00000_1110011".U
    val isMret  = inInst === "b0011000_00010_00000_000_00000_1110011".U
    val needBruRes = isBranch || isEcall || isMret
    out.bits.isBranch := isBranch

    //>>> jal branch process
    val jalBruRes = Wire(new BruRes)
    jalBruRes.valid := inInstOp === "b1101111".U
    val isJal = jalBruRes.valid
    val jalImmExt   = Cat(Fill(XLen - 21, inInst(31)), inInst(31), inInst(19,12), inInst(20), inInst(30, 21), 0.U(1.W))
    jalBruRes.targetPc := pc + jalImmExt

    //<<<

    //>>> branch result
/*     bruRes.valid    := jalBruRes.valid || exuBruRes.valid    // TODO: add more result source
    bruRes.targetPc := MuxCase(0.U, Array(
        (jalBruRes.valid)   ->  jalBruRes.targetPc,
        (exuBruRes.valid)   ->  exuBruRes.targetPc
    )) */

    //<<<

    // BPU
    //val next_pc = Mux(bruRes.valid, bruRes.targetPc, pc + 4.U )     // TODO: change it when get result branch


    val snpc = pc + 4.U
    val predictPc = snpc 
    // BPU end
    val next_pc =   Mux(io.redirect.valid,      io.redirect.target,
                    Mux(out.ready === false.B,  pc,                 /* stop in back */
                    Mux(needBruRes === false.B, snpc,               /* Instruction is not branch type or trap */
                    Mux(isJal,                  jalBruRes.targetPc,
                    Mux(isJal === false.B,      predictPc,           /* branch, jalr, csr */
                    pc)))))                                         // otherwise

    pc := next_pc

/*     when(out.ready === false.B) {       /* stop in back */
        pc := pc 
        valid := valid
    }.elsewhen(needBruRes === false.B) {  /* Instruction is not branch type or trap */
        pc := next_pc
        valid := valid
    }.elsewhen(bruRes.valid === false.B) {  /* have not got valid branch result */
        pc := pc 
        valid := false.B
    }.elsewhen(bruRes.valid === true.B) {   /* already get the valid branch result */
        pc := next_pc
        valid := true.B
    } */
/*     when(io.redirect.valid){
        pc := io.redirect.target
        valid := true.B
    }.elsewhen(out.ready === false.B) {       /* stop in back */
        pc := pc 
        valid := valid
    }.elsewhen(needBruRes === false.B) {  /* Instruction is not branch type or trap */
        pc := snpc
        valid := valid
    }.elsewhen(isJal) {  
        pc := jalBruRes.targetPc
        valid := valid
    }.elsewhen(isJal === false.B) {   /* branch, jalr, csr */
        pc := predictPc
        valid := valid
    } */

    //>>> io
    io.to_idu.bits.pc := pc
    io.pc := pc
    io.to_idu.bits.inst := io.inst
    io.to_idu.bits.next_pc := next_pc

    
    val AnyInvalidCondition = false.B // TODO: add condition to it
    io.to_idu.valid := valid && (!AnyInvalidCondition)
    //<<< io
    


}