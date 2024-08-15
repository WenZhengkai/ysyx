
module ysyx_23060228_LSU#(DATA_WIDTH = 32)(
	input [DATA_WIDTH -1 : 0]	AddrMem,
	input [7 : 0]			Wmask,
	input [DATA_WIDTH -1 : 0]	DataToMem,
	input				MemWrite,

	output[DATA_WIDTH -1 : 0]	DataFromMem
);
/* DPI-C */
import "DPI-C" function void npc_pmem_read(input longint raddr, output longint rdata);
import "DPI-C" function void npc_pmem_write( input longint waddr, input longint wdata, input byte wmask);

always @(*) begin
  npc_pmem_read(AddrMem, DataFromMem);
	if(MemWrite) begin
  		npc_pmem_write(AddrMem, DataToMem, Wmask);
	end	
end
/* DPI-C END */ 
endmodule
