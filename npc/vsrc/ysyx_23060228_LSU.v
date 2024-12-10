
module ysyx_23060228_LSU#(DATA_WIDTH = 32)(
	input [DATA_WIDTH -1 : 0]	AddrMem,
	input [7 : 0]			Wmask,
	input [DATA_WIDTH -1 : 0]	DataToMem,
	input				MemWrite,
	input				funt3_2,

	output[DATA_WIDTH -1 : 0]	DataFromMem
);

/* verilator lint_off UNUSEDSIGNAL */
wire [64 - 1 : 0]	Wmask64 = {{8{Wmask[7]}},{8{Wmask[6]}},{8{Wmask[5]}},{8{Wmask[4]}},{8{Wmask[3]}},{8{Wmask[2]}},{8{Wmask[1]}},{8{Wmask[0]}}};
/* verilator lint_on UNUSEDSIGNAL */

/* DPI-C */
`ifdef CONFIG_ISA64
import "DPI-C" function void npc_pmem_read(input longint raddr, output longint rdata);
import "DPI-C" function void npc_pmem_write( input longint waddr, input longint wdata, input byte wmask);
`else
import "DPI-C" function void npc_pmem_read(input int raddr, output int rdata);
import "DPI-C" function void npc_pmem_write( input int waddr, input int wdata, input byte wmask);

`endif

wire [DATA_WIDTH - 1 : 0]	DPI_DataFromMem;
wire [DATA_WIDTH - 1 : 0]	TEMP_DataFromMem = DPI_DataFromMem;

//TODO: truncation the data from memeory according to the instruction
//assign 	DataFromMem = Wmask64 & DPI_DataFromMem;
always @(*) begin
	npc_pmem_read(AddrMem, DPI_DataFromMem);
	if(MemWrite) begin
  		npc_pmem_write(AddrMem, DataToMem, Wmask);
	end	
end
/* DPI-C END */ 

wire sig = 
	`ifdef CONFIG_ISA64
	Wmask[7] ? TEMP_DataFromMem[63] :
	`endif
	(Wmask[3] ? TEMP_DataFromMem[31] :
	(Wmask[1] ? TEMP_DataFromMem[15] : TEMP_DataFromMem[7]));	// To deside which is the sig bit of the DataFromMem according to the load instruchtion
assign DataFromMem = (funt3_2 == 1) || (sig == 0) ? Wmask64[DATA_WIDTH - 1 : 0] & TEMP_DataFromMem : (~Wmask64[DATA_WIDTH - 1 : 0]) | TEMP_DataFromMem;	// when the load instruction is unsigned or sig==0, extend the Data with zero, otherwise extend it with the sig of '1'

endmodule
