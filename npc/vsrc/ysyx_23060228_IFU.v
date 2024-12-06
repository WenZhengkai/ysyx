module ysyx_23060228_IFU #(DATA_WIDTH = 32)(
	input		clk,
	input		rst,
	input		PCSrc,
	input[DATA_WIDTH - 1 :0]	tnpc,		// target next pc
	input[DATA_WIDTH - 1 :0]	snpc,
	output [31:0]	inst,	
	output reg [DATA_WIDTH - 1:0]	pc		// current pc
	
);


always@(posedge clk) begin
	if(rst== 1'b1)
		pc <= DATA_WIDTH'('d2147483648);
	else
		pc <= PCSrc == 1'b0 ? snpc : tnpc;
end

/* DPI-C */
wire [31: 0]	DPI_DataFromMem;

assign inst = DPI_DataFromMem;

/* longint raddr is only use in RV64 */
import "DPI-C" function void npc_inst_read(input longint raddr, output int rdata);

always@(*) begin
	npc_inst_read(pc,DPI_DataFromMem);
end

endmodule
