#include "Vtop.h"
#include "verilated.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "verilated_vcd_c.h"
#include <stdint.h>
#include "monitor.h"
#include "sdb/sdb.h"
#include "include/utils.h"
#include "isa/init.h"

#pragma GCC diagnostic ignored "-Wimplicit-fallthrough="
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"

NPCState npc_state = {.state = NPC_STOP};
/* isa cpu state (defined in include/utils.h)*/
CPU_state cpu = {};
/* isa cpu state end*/

vluint64_t main_time = 0;	//initial 
double sc_time_stamp()
{
	return main_time;
}
static void print_instr(Vtop *top) {
	printf("0x" FMT_ADDR  ":\t0x%08x\n", top->pc, top->inst);
}
static void trace_and_difftest(vaddr_t pc, vaddr_t npc) {
	//printf("0x" FMT_ADDR  ":\t0x%08x\n", top->pc, top->inst);	
	difftest_step(pc, npc);

}
Vtop* top;
VerilatedVcdC* tfp;
VerilatedContext* contextp;
void cpu_exec(uint64_t n) {
	vaddr_t pc_tmp;

	switch (npc_state.state) {
		case NPC_END: case NPC_ABORT:
			printf("Program execution has ended. To restart the program, exit NPC and run again.\n");
			return;
		default: npc_state.state = NPC_RUNNING;
	}
	for(; n > 0; n--){
		while(!contextp->gotFinish()){
			main_time++;	
			/* clk */
			if((int)sc_time_stamp()%10 == 0&& sc_time_stamp() > 0) {
			top->clk = top->clk ? 0 : 1;
			/* Execute this block once per cycle */
				if((int)sc_time_stamp()%20 == 0) {
					pc_tmp = cpu.pc;
					print_instr(top);
					top->eval();			// to update the pc, let npc become pc through muxplexer, but do not fetch instructions
					CPU_state_update(top->pc);	// define in dpi.c, must execute it after top->eval(), to copy the cpu state to simulation environment
					trace_and_difftest(pc_tmp, cpu.pc);
					break;				
				}
			}
			top->eval();
			top->inst = pmem_read(top->pc);
			tfp->dump(main_time);
		}	

		if(top->inst == 0x00100073){
			npc_state.state = NPC_END;
			npc_state.halt_ret = cpu.gpr[10];
		} 
		if(npc_state.state != NPC_RUNNING){
			npc_state.halt_pc = pc_tmp;
			break;
		}
	}

	switch (npc_state.state) {
		case NPC_RUNNING: npc_state.state = NPC_STOP; break;

		case NPC_END: case NPC_ABORT:
			printf("npc sim end\n");
			npc_trap();
		case NPC_QUIT: printf("npc quit\n");
		case NPC_STOP: return;
	}

}
int main(int argc, char** argv){
	
	contextp = new VerilatedContext;
	contextp->commandArgs(argc, argv);

	Verilated::traceEverOn(true);	//export the vcd wave
	
	tfp = new VerilatedVcdC();	//export the vcd wave

	top= new Vtop{contextp};

	top->trace(tfp,0);
	tfp->open("wave.vcd");

	top->inst   = 0x0;
	pmem_write(0x80000000,0x00000117);	// auipc x2, 0x0
	pmem_write(0x80000004,0x108100e7);	// jalr x1,x2 0x80000108
	pmem_write(0x80000108,0xfffff0b7);	// lui x1, 0xfffff000
	pmem_write(0x8000010c,0x00100073);	// ebreak
	
	parse_args(argc, argv);

	isa_init();

	top->pc = cpu.pc;
	long img_size = load_img();

	init_difftest(img_size);

	top->rst    = 0;
	//top->DataFromMem = 0;
	top->clk   = 1;
	

	sdb_mainloop();

	top->final();
	tfp->close();
	delete top;
	delete contextp;
	
	return 0;
}
