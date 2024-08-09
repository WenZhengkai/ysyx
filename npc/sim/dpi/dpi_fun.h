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
