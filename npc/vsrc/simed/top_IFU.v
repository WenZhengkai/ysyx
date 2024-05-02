module top(
	input		clk,
	input		rst,
	input		PCSrc,
	input[31:0]	tnpc,

	output[31:0]	pc
);
ysyx_23060228_IFU ysyx_IFU(
	.clk(clk),
	.rst(rst),
	.PCSrc(PCSrc),
	.tnpc(tnpc),	// target next pc
	
	.pc(pc)		// current pc
);

endmodule
