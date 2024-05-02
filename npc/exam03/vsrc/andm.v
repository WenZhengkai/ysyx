module andm
(
	input [3:0] x,
	input [3:0] y,
	output[3:0] and_res
);
assign and_res = x & y;

endmodule
