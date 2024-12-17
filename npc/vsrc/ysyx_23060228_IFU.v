module ysyx_23060228_IFU #(DATA_WIDTH = 32)(
	input		clk,
	input		rst,
	input		PCSrc,
	input[DATA_WIDTH - 1 :0]	tnpc,		// target next pc
	input[DATA_WIDTH - 1 :0]	snpc,
	input [31:0]    FromMem_inst,
	output [31:0]	inst,	
	output reg [DATA_WIDTH - 1:0]	pc		// current pc
	
);
assign inst = FromMem_inst;

always@(posedge clk) begin
	if(rst== 1'b1)
		pc <= DATA_WIDTH'('d2147483648);
	else
		pc <= PCSrc == 1'b0 ? snpc : tnpc;
end



endmodule
