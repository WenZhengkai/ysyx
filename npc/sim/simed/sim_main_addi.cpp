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
	pmem_write(0x80000000,0xffc10113);
	top->rst    = 0;
	top->DataFromMem = 0;
	while(!contextp->gotFinish()&& (sc_time_stamp() < 256)){
		if((int)sc_time_stamp()%10 == 0)
			top->clk = top->clk ? 0 : 1;
		top->inst = pmem_read(top->pc);
		top->eval();
		tfp->dump(main_time);
		main_time++;
	}
	top->final();
	tfp->close();
	delete top;
	delete contextp;
	
	return 0;
}
