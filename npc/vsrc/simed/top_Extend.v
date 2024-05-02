module top(
	input		clk,
	input  [31:0]	inst,
	input  [2:0]	ImmSrc,
	output [31:0]	ImmExt
);
ysyx_23060228_Extend ysyx_Extend(
	.inst(inst[31:7]),
	.ImmSrc(ImmSrc),
	.ImmExt(ImmExt)
);
endmodule
