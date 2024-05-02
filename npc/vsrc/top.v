module top(
	input		clk,
	input		rst,
	input  [31:0]	DataFromMem,
	input  [31:0]	inst,
	output [31:0]	pc,
	output [31:0]	AddrMem,
	output [31:0]	DataToMem,
	output 		MemWrite
);
ysyx_23060228_RV32Ecore ysyx_core(
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
