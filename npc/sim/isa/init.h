
#include "../paddr.h"
extern CPU_state cpu;
static void restart(){
	cpu.pc = RESET_VECTOR;
	cpu.gpr[0] = 0;
}
void isa_init(){
	restart();

}
