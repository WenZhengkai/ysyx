import chisel3._
import chisel3.util._

class WbuToRegIO extends NPCBundle {

        val rd = UInt(5.W)
        val Res = UInt(XLen.W)
        val RegWrite = Bool()
}
class WBU extends NPCModule {
    val io = IO(new Bundle{
        val from_exu = Flipped(Decoupled(new ExuToWbuIO))
        val to_reg = Decoupled(new WbuToRegIO)

        val to_commit = Output(new CtrlFlow)


    })
    val AnyInvalidCondition = false.B // TODO: add condition to it
    // ready/valid setted here
    HandShakeDeal(io.from_exu, io.to_reg, AnyInvalidCondition)

    // io

    val inBits  = io.from_exu.bits
  
    val ResSrc = inBits.ctrl.ResSrc

    val ALURes = inBits.data.Alu0Res.bits
    val to_reg = io.to_reg.bits



    io.to_commit <> inBits.cf
    
    to_reg.rd   := inBits.ctrl.rd

    to_reg.RegWrite := inBits.ctrl.rfWen && io.to_reg.valid // Notice: This signal is important as valid signal
    to_reg.Res := MuxCase(0.U, Array(

        (ResSrc === 0.U) -> ALURes,
        (ResSrc === 1.U) -> inBits.data.data_from_mem,
        (ResSrc === 2.U) -> inBits.data.csrRdata
    ))
    // io
}