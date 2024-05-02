module top(
	input  [31:0]	inst,
	input		Zero,
	
	output		PCSrc,
	output [1:0]	ResSrc,
	output		MemWrite,
	output [2:0] 	ALUCtrl,
	output		ALUSrc,
	output [2:0]	ImmSrc,
	output		RegWrite	
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

endmodule
