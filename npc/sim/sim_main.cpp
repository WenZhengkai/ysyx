/**********CONFIG DEFINES*********/
//#define CONFIG_ISA64
//#define CONFIG_RVE
#define CONFIG_DIFFTEST
//#define CONFIG_ITRACE
#define CONFIG_WAVE
//#define CONFIG_TIMER_GETTIMEOFDAY
//#define CONFIG_TARGET_AM

#ifdef CONFIG_RVE
#define NR_GPR 16
#else
#define NR_GPR 32
#endif

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

#ifdef CONFIG_DIFFTEST
bool skip_ref = false;
#endif

vluint64_t main_time = 0;	//initial 
double sc_time_stamp()
{
	return main_time;
}
static void print_instr(Vtop *top) {
	printf("Last commited: 0x" FMT_ADDR  ":\t0x%08x\n", top->commit_pc, top->commit_inst);
}
static void trace_and_difftest(vaddr_t pc, vaddr_t npc) {
#ifdef CONFIG_ITRACE
	print_instr(top);
#endif

#ifdef CONFIG_DIFFTEST
	/* skip the difftest in next inst commit */
	if(skip_ref){
		difftest_skip_ref();
		skip_ref =false;
	}
	difftest_step(pc, npc);
#endif

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
	for(; n > 0; ){
		//while(!contextp->gotFinish()){
		pc_tmp = cpu.pc;
		/* Low value of clock */
		main_time++;
		top->clk = 0;
		top->eval();
		#ifdef CONFIG_WAVE
		tfp->dump(main_time);
		#endif


		//>>>>>> change npc sim env state >>>>>>>>>
		if(top->commit_inst == 0x00100073){
			npc_state.state = NPC_END;
			npc_state.halt_ret = cpu.gpr[10];
		} 
		if(npc_state.state != NPC_RUNNING){
			npc_state.halt_pc = top->commit_pc;
			break;
		}
		//<<<<< change npc sim env state <<<<<<<<<		

		/* High value of clock */
		main_time++;
		top->clk = 1;
		top->eval();
		#ifdef CONFIG_WAVE
		tfp->dump(main_time);
		#endif

		if(top->commit_valid){
			CPU_state_update(top->commit_next_pc);	// define in dpi.c, must execute it after top->eval(), to copy the cpu state to simulation environment
			trace_and_difftest(top->commit_pc, cpu.pc);

			//loop counter
			n--;
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

/*
	// test for auipc, lui:
	paddr_write(0x80000000,4,0x0180026f);	// jal x4, 24
	paddr_write(0x80000004,4,0x022911b7);	// lui x3, 8849
	paddr_write(0x80000008,4,0x02010593);	// addi a1,sp,32
	paddr_write(0x8000000c,4,0x02010593);	// addi a1,sp,32
	paddr_write(0x80000010,4,0x00058613);	// addi a2,a1,0
	paddr_write(0x80000014,4,0x012b1217);	// auipc x4, 4785
	paddr_write(0x80000018,4,0x00100073);	// ebreak
*/
/*
	// test for data hazard: read after write
	paddr_write(0x80000000,4,0x02010593);	// addi a1,sp,32
	paddr_write(0x80000004,4,0x02010593);	// addi a1,sp,32
	paddr_write(0x80000008,4,0x02010593);	// addi a1,sp,32
	paddr_write(0x8000000c,4,0x02010593);	// addi a1,sp,32
	paddr_write(0x80000010,4,0x00058613);	// addi a2,a1,0
	paddr_write(0x80000014,4,0x02010593);	// addi a1,sp,32
	paddr_write(0x80000018,4,0x00100073);	// ebreak

*/
/*	
	// test for data hazard: multi inst, single busy rd
	paddr_write(0x80000000,4,0x02010593);	// addi a1,sp,32
	paddr_write(0x80000004,4,0x02010593);	// addi a1,sp,32
	paddr_write(0x80000008,4,0x02010593);	// addi a1,sp,32
	paddr_write(0x8000000c,4,0x02010593);	// addi a1,sp,32
	paddr_write(0x80000010,4,0x02010593);	// addi a1,sp,32
	paddr_write(0x80000014,4,0x02010593);	// addi a1,sp,32
	paddr_write(0x80000018,4,0x00100073);	// ebreak
*/

/*
	paddr_write(0x80000000,4,0x02010593);	// addi a1,sp,32
	paddr_write(0x80000004,4,0x00148493);	// addi	s1,s1,1
	paddr_write(0x80000008,4,0x02010593);	// addi a1,sp,32
	paddr_write(0x8000000c,4,0xffc10113);	// addi	sp,sp,-4
	paddr_write(0x80000010,4,0x23578793);	// addi	a5,a5,565
	paddr_write(0x80000014,4,0x00100073);	// ebreak

*/
	
	paddr_write(0x80000000,4,0x00000117);	// auipc x2, 0x0
	paddr_write(0x80000004,4,0x108100e7);	// jalr x1,x2 0x80000108
	paddr_write(0x80000108,4,0xfffff0b7);	// lui x1, 0xfffff000
	paddr_write(0x8000010c,4,0x00100073);	// ebreak

	parse_args(argc, argv);

	isa_init();

	top->pc = cpu.pc;
	long img_size = load_img();

	init_difftest(img_size);

	// reset
	top->clk = 0;
	top->rst = 1;
	top->eval();
	main_time++;
	tfp->dump(main_time);
	top->clk = 1;
	top->rst = 1;
	top->eval();
	main_time++;
	tfp->dump(main_time);
	

	top->rst    = 0;
	//top->DataFromMem = 0;
	top->clk   = 1;
	// reset end

	sdb_mainloop();

	top->final();
	tfp->close();
	delete top;
	delete contextp;
	
	return 0;
}
