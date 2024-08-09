#include "../include/utils.h"
bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
	if(cpu.pc != ref_r->pc){
		printf("[DIFFERENTIAL TESTING ] next pc is different, after exectue pc: 0x" FMT_ADDR "\n",pc);
		printf("dut next pc: 0x" FMT_ADDR "\nref next pc: 0x" FMT_ADDR "\n", cpu.pc, ref_r->pc);
		return false;
	}
	for(int i = 0; i < 32; i++) {
		if(cpu.gpr[i] != ref_r->gpr[i]) {
			printf("[DIFFERENTIAL TESTING ] gpr[%d] is different, after exectue pc: 0x" FMT_ADDR "\n",i, pc);
			printf("dut gpr: 0x" FMT_WORD "\nref gpr: 0x" FMT_WORD "\n", cpu.gpr[i], ref_r->gpr[i]);
			return false;
		}
	}
	return true;
}
