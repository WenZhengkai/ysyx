#include "verilated_dpi.h"
#include "../include/common.h"
#include "../include/utils.h"
extern CPU_state cpu;
word_t *cpu_gpr = NULL;
int gprindex=0;
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  	cpu_gpr = (word_t *)(((VerilatedDpiOpenVar*)r)->datap());

}

// 一个输出RTL中通用寄存器的值的示例
void dump_gpr() {
  int i;
  printf("/********Register Print**********/\n");
  printf("pc:  \t" FMT_ADDR "\n", cpu.pc);
  for (i = 0; i < 32; i++) {
    //printf("gpr[%d]:  \t" FMT_WORD "\n", i, cpu_gpr[i]);
    printf("gpr[%d]:  \t" FMT_WORD "\n", i, cpu.gpr[i]);
  }
  printf("/********Register Print End******/\n");
}

void npc_trap() {
	printf("\33[1;34mnpc: \33[0m");
	if(npc_state.state == NPC_ABORT){
		printf("\33[1;31mABORT\33[0m");
	}else{
		if(npc_state.halt_ret == 0) {
			printf("\33[1;32mHIT GOOD TRAP\33[0m");
		} else{
			printf("\33[1;31mHIT BAD TRAP\33[0m");
		}
	}

	printf(" at pc = " FMT_WORD "\n", npc_state.halt_pc);

}

void CPU_state_update(vaddr_t topPC) {
	for(gprindex=0; gprindex < 32; gprindex++){
		cpu.gpr[gprindex] = cpu_gpr[gprindex];
	}
	cpu.pc = topPC;
}

extern "C" void npc_pmem_read(paddr_t raddr, word_t *rdata) {
  // 总是读取地址为`raddr & ~0x7ull`的8字节返回给`rdata`
	//TODO:存在指针访问越界问题
	//paddr_read(raddr, 4);
	//printf("raddr: %016lx\n",raddr);
	if(npc_in_pmem(raddr)){
		//printf("in pmem\n");
#ifdef CONFIG_ISA64
		*rdata = paddr_read(raddr, 8);
#else
		*rdata = paddr_read(raddr, 4);
#endif
	}else{
		//printf("not in pmem\n");
	}
}
/* npc wirte data to memory
 * implement dpi-c in LSU.v
  import "DPI-C" function void npc_pmem_read(input longint raddr, output longint rdata);
  import "DPI-C" function void npc_pmem_write( input longint waddr, input longint wdata, input byte wmask);
  
  always @(*) begin
          npc_pmem_read(AddrMem, DataFromMem);
          if(MemWrite) begin
                  npc_pmem_write(AddrMem, DataToMem, Wmask);
          end
  end
*/
extern "C" void npc_pmem_write(paddr_t waddr, word_t wdata, char wmask) {
  // 总是往地址为`waddr & ~0x7ull`的8字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
  int len;
  switch(wmask){
 	case -1:    len = 8;break;
	case 0x0f:  len = 4;break;
	case 0x3:   len = 2;break;
	case 0x1:   len = 1;break;
	default:    assert(0);
  }
  if(waddr == 0xa00003f8) {
	putc((char)wdata,stderr);
  }else{
	paddr_write(waddr, len, wdata);
  }
}
