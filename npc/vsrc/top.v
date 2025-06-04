//`define CONFIG_ISA64
`define CONFIG_RVE		
`define CONFIG_PIPE

`ifdef CONFIG_ISA64
parameter XLEN = 64;
`else
parameter XLEN = 32;
`endif


module top #(DATA_WIDTH = XLEN)(
	input		clk,
	input		rst,
	// for debug
	output  [31:0]	inst,
	output [DATA_WIDTH - 1:0]	pc,
	output commit_valid,
	output [DATA_WIDTH - 1:0]	commit_pc,
	output [DATA_WIDTH - 1:0]	commit_next_pc,
	output [31 : 0] commit_inst

);

wire [DATA_WIDTH - 1: 0] ToMem_Addr;
wire [DATA_WIDTH - 1: 0] ToMem_Data;
wire [DATA_WIDTH - 1: 0] FromMem_Data;
wire [7:0]		Wmask;			// rewitrte, 8 bits to 2 bits
wire [1:0]		Wmask2Bits;
wire			MemWrite;
InstMem #(DATA_WIDTH) ysyx_instmem(
	.pc(pc),
	.inst(inst)

);

DataMem #(DATA_WIDTH) ysyx_datamem(
	.FromCore_Addr(ToMem_Addr),
	.Wmask(Wmask),				// rewitrte, 8 bits to 2 bits
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
	.Wmask(Wmask),			// TODO: 2 bits
	.MemWrite(MemWrite),
	.pc(pc),
	.commit_valid(commit_valid)
);
`else

`ifdef CONFIG_PIPE
RVCore2 ysyx_core_rv32e(
	.clock(clk),
	.reset(rst),
	.io_from_mem_data(FromMem_Data),
	.io_to_mem_data(ToMem_Data),
	.io_to_mem_addr(ToMem_Addr),
	.io_to_mem_Wmask(Wmask2Bits),
	.io_to_mem_MemWrite(MemWrite),
	.io_inst(inst),
	.io_pc(pc),
	//for debug:commit
	.io_commit_valid(commit_valid),
	.io_commit_pc(commit_pc),
	.io_commit_next_pc(commit_next_pc),
	.io_commit_inst(commit_inst)
);
MaskTrans MaskTrans_inst(Wmask2Bits, Wmask);
`else
ysyx_23060228_RVcore #(32, 32) ysyx_core_rv32im(
	.clk(clk),
	.rst(rst),
	.FromMem_inst(inst),
	.FromMem_Data(FromMem_Data),
	.ToMem_Data(ToMem_Data),
	.ToMem_Addr(ToMem_Addr),
	.Wmask(Wmask),				// TODO: 2 bits
	.MemWrite(MemWrite),
	.pc(pc),
	.commit_valid(commit_valid),
	.commit_pc(commit_pc),
	.commit_next_pc(commit_next_pc),
	.commit_inst(commit_inst)
);
`endif	//end CONFIG_PIPE

`endif	//end CONFIG_ISA64

endmodule


module MaskTrans(
	input [1:0] in,
	output reg [7:0] out
); 

always@(*) begin
	case(in)
		2'b00: out = 8'b0000_0001;	//b
		2'b01: out = 8'b0000_0011;	//h
		2'b10: out = 8'b0000_1111;	//w
		2'b11: out = 8'b1111_1111;	//d
	endcase

end


endmodule
