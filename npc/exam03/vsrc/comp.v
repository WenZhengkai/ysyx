module comp
(
	input [3:0] x,
	input [3:0] y,
	output reg	out
);
wire [3:0] sum;
always@(*)
begin
	if(x[3]!=y[3])
		out =(x[3] == 1) ? 1:0;
	else
	begin
		if(x[3] == 0)
			out = (x[2:0]<y[2:0])? 1:0;
		else
			out = sum[3];

	end
end

adder_sub4 adder_sub4_u
(
	.x(x),
	.y(y),
	.sub(1),
	.sum(sum),
	.cf(),
	.zf(),
	.of()

);

endmodule
