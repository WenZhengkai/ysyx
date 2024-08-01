#include "verilated_dpi.h"
#include "../include/common.h"
word_t *cpu_gpr = NULL;
extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (word_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

// 一个输出RTL中通用寄存器的值的示例
void dump_gpr() {
  int i;
  printf("/********Register Print**********/\n");
  for (i = 0; i < 32; i++) {
    printf("gpr[%d]:  \t" FMT_WORD "\n", i, cpu_gpr[i]);
  }
  printf("/********Register Print End******/\n");
}

void npc_trap(word_t pc) {
	printf("\33[1;34mnpc: \33[0m");
	if(cpu_gpr[10] == 0) {
		printf("\33[1;32mHIT GOOD TRAP\33[0m");
	} else{
		printf("\33[1;31mHIT BAD TRAP\33[0m");
	}
	printf(" at pc = " FMT_WORD "\n", pc);

}
