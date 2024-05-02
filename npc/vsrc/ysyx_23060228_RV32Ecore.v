module ysyx_23060228_RV32Ecore(
	input		clk,
	input		rst,
	input [31:0]	DataFromMem,
	input [31:0]	inst,
	output [31:0]	pc,
	output [31:0]	AddrMem,
	output [31:0]	DataToMem,
	output 		MemWrite

);
wire		PCSrc;
wire [31:0]	tnpc;
wire		Zero;
wire [1:0]	ResSrc;
wire [2:0]	ALUCtrl;
wire 		ALUSrc;
wire [2:0]	ImmSrc;
wire		RegWrite;
wire [31:0]	Result;
wire [31:0]	src1;
wire [31:0]	src2;
wire [31:0]	ImmExt;
wire [31:0]	srcb;
wire [31:0]	ALURes;
wire [31:0]	Result;
wire [31:0]	PCplus4;

assign		AddrMem		= 	ALURes;	
assign 		DataToMem	= 	src2;

ysyx_23060228_IFU ysyx_IFU(
	.clk(clk),
	.rst(rst),
	.PCSrc(PCSrc),
	.tnpc(tnpc),			//target next pc
	
	.pc(pc)

);
ysyx_23060228_IDU ysyx_IDU(
	.opcode(inst[6:0]),
	.funt3(inst[14:12]),
	.funt7(inst[31:25]),
	.Zero(Zero),

	.PCSrc(PCSrc),
	.ResSrc(ResSrc),
	.MemWrite(MemWrite),
	.ALUCtrl(ALUCtrl),
	.ALUSrc(ALUSrc),
	.ImmSrc(ImmSrc),
	.RegWrite(RegWrite)
);
ysyx_23060228_RegFile ysyx_RegFile(
	.clk(clk),
	.rs1(inst[19:15]),
	.rs2(inst[24:20]),
	.rd(inst[11:7]),
	.dest(Result),	// Data writed to Registers
	.RegWrite(RegWrite),

	.src1(src1),
	.src2(src2)
);

ysyx_23060228_Extend ysyx_Extend(
	.inst(inst[31:7]),
	.ImmSrc(ImmSrc),

	.ImmExt(ImmExt)
);
ysyx_23060228_MuxKey #(2, 1, 32)ysyx_ALUSrc_MuxKey(
	.out(srcb),
	.key(ALUSrc),
	.default_out(32'b0),
	.lut({
		1'b0, src2,
		1'b1, ImmExt	
	})
);

ysyx_23060228_ALU #(32) ysyx_ALU(
	.srca(src1),
	.srcb(srcb),
	.ALUCtrl(ALUCtrl),
	
	.ALURes(ALURes),
	.Zero(Zero)	
);
ysyx_23060228_adder #(32) ysyx_PCplus4(
	.srca(pc),
	.srcb(32'd4),
	.Res(PCplus4)
);
ysyx_23060228_adder #(32) ysyx_PCTarget(
	.srca(pc),
	.srcb(ImmExt),
	.Res(tnpc)
);
ysyx_23060228_MuxKey #(3,2,32) ysyx_ResSrc(
	.out(Result),
	.key(ResSrc),
	.default_out(32'b0),
	.lut({
		2'b00, ALURes,
		2'b01, DataFromMem,
		2'b10, PCplus4	
	})
);

endmodule
