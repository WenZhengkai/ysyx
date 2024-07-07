module ysyx_23060228_RegFile #(DATA_WIDTH = 32, ADDR_WIDTH = 5, REG_NUM = 32)(
	input		clk,
	input  [ADDR_WIDTH - 1 :0]	rs1,
	input  [ADDR_WIDTH - 1:0]	rs2,
	input  [ADDR_WIDTH - 1:0]	rd,
	input  [DATA_WIDTH - 1:0]	dest,
	input		RegWrite,
	output [DATA_WIDTH - 1:0]	src1,
	output [DATA_WIDTH - 1:0]	src2
);

reg [DATA_WIDTH - 1 :0] x[REG_NUM - 1:0];

assign src1 = x[rs1];
assign src2 = x[rs2];

always@(posedge clk)begin
	if(RegWrite)begin
		x[rd] <= rd == 0? DATA_WIDTH'('b0):  dest;
	end
end



endmodule
