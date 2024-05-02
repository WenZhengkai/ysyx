module top(
	input		clk,
	input  [31:0]	dest,
	input  [31:0]	inst,
	input		RegWrite,
	output [31:0]	src1,
	output [31:0]	src2
);
ysyx_23060228_RegFile ysyx_RegFile(
	.clk(clk),
	.rs1(inst[19:15]),
	.rs2(inst[24:20]),
	.rd(inst[11:7]),
	.dest(dest),
	.RegWrite(RegWrite),
	.src1(src1),
	.src2(src2)
);
endmodule
