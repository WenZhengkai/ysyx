module ysyx_23060228_RegFile(
	input		clk,
	input  [4:0]	rs1,
	input  [4:0]	rs2,
	input  [4:0]	rd,
	input  [31:0]	dest,
	input		RegWrite,
	output [31:0]	src1,
	output [31:0]	src2
);

reg [31:0] x[31:0];

assign src1 = x[rs1];
assign src2 = x[rs2];

always@(posedge clk)begin
	if(RegWrite)
		x[rd] <= dest;
end



endmodule
