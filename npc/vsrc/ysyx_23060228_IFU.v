module ysyx_23060228_IFU(
	input		clk,
	input		rst,
	input		PCSrc,
	input[31:0]	tnpc,		// target next pc

	output reg [31:0]	pc		// current pc
);
always@(posedge clk) begin
	if(rst== 1'b1)
		pc <= 32'h80000000;
	else
		pc <= PCSrc == 1'b0 ? pc + 32'd4 : tnpc;
end

endmodule
