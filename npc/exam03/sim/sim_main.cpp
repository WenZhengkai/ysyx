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
	int stdres = 0;
	top->x = 0b0000;
	top->sel = 0b000;
	top->y = 0b0000;
	printf("top->x\ttop->y\tcircult result\tactul result\n");
	while(!contextp->gotFinish()&& (sc_time_stamp() < 256)){
		int i = 0;
		while(i < 16){
			top->eval();
			tfp->dump(main_time);
			stdres =(top->x + top->y)%16;
			printf("%d\t%d\t%d\t\t%d\n",top->x, top->y, top->res,stdres);
			main_time++;
			i++;
			top->y++;
		}
		top->y = 0b0000;
		top->x++;
	}
	top->final();
	tfp->close();
	delete top;
	delete contextp;
	
	return 0;
}
