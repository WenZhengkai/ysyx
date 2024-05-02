module reverse
(
	input [3:0] x,
	output [3:0] rev
);

assign rev = ~x;

endmodule
