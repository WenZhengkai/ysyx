module adder_sub4
(
	input [3:0]	x,
	input [3:0]	y,
	input		sub,

	output[3:0]	sum,
	output		cf,
	output		zf,
	output		of

);
wire [3:0]	t_no_cin ;
assign t_no_cin = {4{sub}}^y;
assign {cf,sum} = x + t_no_cin + {3'b0,sub};
assign of = (x[3] == t_no_cin[3]) && (sum[3] != x[3]);
assign zf = ~(| sum);


endmodule
