module top #(DATA_WIDTH = 64)(
	input		clk,
	input		rst,
	input  [DATA_WIDTH - 1:0]	DataFromMem,
	input  [31:0]	inst,
	output [DATA_WIDTH - 1:0]	pc,
	output [DATA_WIDTH - 1:0]	AddrMem,
	output [DATA_WIDTH - 1:0]	DataToMem,
	output 		MemWrite
);
ysyx_23060228_RV64IMcore #(DATA_WIDTH, 32) ysyx_core(
	.clk(clk),
	.rst(rst),
	.DataFromMem(DataFromMem),
	.inst(inst),
	.pc(pc),
	.AddrMem(AddrMem),
	.DataToMem(DataToMem),
	.MemWrite(MemWrite)
);
endmodule
