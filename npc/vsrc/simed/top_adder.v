module top(
	input		clk,
	input  [31:0]	srca,
	input  [31:0]	srcb,
	input  [2:0]	ALUCtrl,
	output [31:0]	ALURes,
	output		Zero 
);
ysyx_23060228_ALU #(.DATA_WIDTH('d32))ysyx_ALU(
	.srca(srca),
	.srcb(srcb),
	.ALUCtrl(ALUCtrl),
	.ALURes(ALURes),
	.Zero(Zero)
);
endmodule
