module ysyx_23060228_adder #(DATA_WIDTH = 1)(
	input  [DATA_WIDTH - 1:0]	srca,
	input  [DATA_WIDTH - 1:0]	srcb,
	output [DATA_WIDTH - 1:0]	Res

);
assign Res = srca + srcb;

endmodule
