module DataMem#(DATA_WIDTH = 32)(
    input [DATA_WIDTH -1 : 0] FromCore_Addr,
    input [7 : 0]			Wmask,
    input [DATA_WIDTH -1 : 0] FromCore_Data,
    input				MemWrite,
    output[DATA_WIDTH -1 : 0] ToCore_Data
);

wire [DATA_WIDTH - 1 : 0] AddrMem = FromCore_Addr;

assign ToCore_Data = DPI_DataFromMem;

wire [DATA_WIDTH - 1 : 0] DataToMem = FromCore_Data;

/* DPI-C */
`ifdef CONFIG_ISA64
import "DPI-C" function void npc_pmem_read(input longint raddr, output longint rdata);
import "DPI-C" function void npc_pmem_write( input longint waddr, input longint wdata, input byte wmask);
`else
import "DPI-C" function void npc_pmem_read(input int raddr, output int rdata);
import "DPI-C" function void npc_pmem_write( input int waddr, input int wdata, input byte wmask);

`endif

wire [DATA_WIDTH - 1 : 0]	DPI_DataFromMem;

//TODO: truncation the data from memeory according to the instruction
//assign 	DataFromMem = Wmask64 & DPI_DataFromMem;
always @(*) begin
	npc_pmem_read(AddrMem, DPI_DataFromMem);
	if(MemWrite) begin
  		npc_pmem_write(AddrMem, DataToMem, Wmask);
	end	
end
/* DPI-C END */

endmodule
