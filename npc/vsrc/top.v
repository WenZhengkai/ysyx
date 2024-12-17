//`define CONFIG_ISA64
`define CONFIG_RVE

`ifdef CONFIG_ISA64
parameter XLEN = 64;
`else
parameter XLEN = 32;
`endif


module top #(DATA_WIDTH = XLEN)(
	input		clk,
	input		rst,
	//input  [DATA_WIDTH - 1:0]	DataFromMem,
	output  [31:0]	inst,
	output [DATA_WIDTH - 1:0]	pc
	//output [DATA_WIDTH - 1:0]	AddrMem,
	//output [DATA_WIDTH - 1:0]	DataToMem,
	//output 		MemWrite
);

wire [DATA_WIDTH - 1: 0] ToMem_Addr;
wire [DATA_WIDTH - 1: 0] ToMem_Data;
wire [DATA_WIDTH - 1: 0] FromMem_Data;
wire [7:0]		Wmask;
wire			MemWrite;
InstMem #(DATA_WIDTH) ysyx_instmem(
	.pc(pc),
	.inst(inst)

);

DataMem #(DATA_WIDTH) ysyx_datamem(
	.FromCore_Addr(ToMem_Addr),
	.Wmask(Wmask),
	.FromCore_Data(ToMem_Data),
	.MemWrite(MemWrite),
	.ToCore_Data(FromMem_Data)

);


`ifdef CONFIG_ISA64
ysyx_23060228_RVcore #(DATA_WIDTH, 32) ysyx_core_rv64im(
	.clk(clk),
	.rst(rst),
	.FromMem_inst(inst),
	.FromMem_Data(FromMem_Data),
	.ToMem_Data(ToMem_Data),
	.ToMem_Addr(ToMem_Addr),
	.Wmask(Wmask),
	.MemWrite(MemWrite),
	.pc(pc)
);
`else

ysyx_23060228_RVcore #(32, 32) ysyx_core_rv32im(
	.clk(clk),
	.rst(rst),
	.FromMem_inst(inst),
	.FromMem_Data(FromMem_Data),
	.ToMem_Data(ToMem_Data),
	.ToMem_Addr(ToMem_Addr),
	.Wmask(Wmask),
	.MemWrite(MemWrite),
	.pc(pc)
);

`endif

endmodule
