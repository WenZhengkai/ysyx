//`define CONFIG_ISA64

`ifdef CONFIG_ISA64
parameter W = 64;
`else
parameter W = 32;
`endif

module top #(DATA_WIDTH = W)(
	input		clk,
	input		rst,
	//input  [DATA_WIDTH - 1:0]	DataFromMem,
	output  [31:0]	inst,
	output [DATA_WIDTH - 1:0]	pc
	//output [DATA_WIDTH - 1:0]	AddrMem,
	//output [DATA_WIDTH - 1:0]	DataToMem,
	//output 		MemWrite
);


`ifdef CONFIG_ISA64
ysyx_23060228_RVcore #(DATA_WIDTH, 32) ysyx_core_rv64im(
	.clk(clk),
	.rst(rst),
	.inst(inst),
	.pc(pc)
);
`else

ysyx_23060228_RVcore #(32, 32) ysyx_core_rv32im(
	.clk(clk),
	.rst(rst),
	.inst(inst),
	.pc(pc)
);

`endif

endmodule
