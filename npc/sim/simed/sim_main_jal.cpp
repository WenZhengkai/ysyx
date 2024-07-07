#include "Vtop.h"
#include "verilated.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "verilated_vcd_c.h"
#include <stdint.h>
#include "paddr.h"

vluint64_t main_time = 0;	//initial 
double sc_time_stamp()
{
	return main_time;
}
int main(int argc, char** argv){
	VerilatedContext* contextp = new VerilatedContext;
	contextp->commandArgs(argc, argv);

	Verilated::traceEverOn(true);	//export the vcd wave
	
	VerilatedVcdC* tfp = new VerilatedVcdC();	//export the vcd wave

	Vtop* top= new Vtop{contextp};

	top->trace(tfp,0);
	tfp->open("wave.vcd");

	top->inst   = 0x0;
	top->pc     = 0x80000000;
	pmem_write(0x80000000,0xfffff0b7);	// lui x1, 0xfffff000
	pmem_write(0x80000004,0x12345137);	// lui x1, 0x12345000
	pmem_write(0x80000008,0xffc10113);
	pmem_write(0x8000000c,0x0fc000ef);	// jal x1, 0x80000108
	pmem_write(0x80000108,0xfffff0b7);	// lui x1, 0xfffff000
	pmem_write(0x8000010c,0x00100073);	// ebreak

	top->rst    = 0;
	top->DataFromMem = 0;
	while(!contextp->gotFinish()&& (sc_time_stamp() < 256)){
		if((int)sc_time_stamp()%10 == 0)
			top->clk = top->clk ? 0 : 1;
		top->inst = pmem_read(top->pc);
		
		top->eval();
		tfp->dump(main_time);
		main_time++;
		if(top->inst == 0x00100073) break;
	}
	top->final();
	tfp->close();
	delete top;
	delete contextp;
	
	return 0;
}
