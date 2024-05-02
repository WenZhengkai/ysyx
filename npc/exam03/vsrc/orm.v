module orm
(
	input	[3:0]x,
	input	[3:0]y,
	output  [3:0]or_res
);
	assign	or_res = x | y;

endmodule
