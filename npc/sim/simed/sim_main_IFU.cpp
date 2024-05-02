#include "Vtop.h"
#include "verilated.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "verilated_vcd_c.h"

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

	top->clk = 0;
	top->PCSrc = 0;
	while(!contextp->gotFinish()&& (sc_time_stamp() < 256)){
		top->clk = top->clk?0:1;
		top->rst = sc_time_stamp() < 5 ? 1:0;
		if(sc_time_stamp() >= 14 && sc_time_stamp() <= 15){
			top->PCSrc = 1;
			top->tnpc  = 0x800000fc;
		}else
			top->PCSrc = 0;
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
