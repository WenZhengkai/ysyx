module adder4
(
	input [3:0]	x,
	input [3:0]	y,

	output[3:0]	sum,
	output		cf,
	output		zf,
	output		of

);

assign {cf,sum} = x + y;
assign of = (x[3] == y[3]) && (sum[3] != x[3]);
assign zf = sum == 4'b0000;


endmodule
