module equal
(
	input	[3:0]	x,
	input	[3:0]	y,
	output		out
);
assign out = x==y? 1:0;

endmodule
