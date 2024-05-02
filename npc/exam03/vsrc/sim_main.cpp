#include "Vencode83.h"
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

	Vencode83* top= new Vencode83{contextp};

	top->trace(tfp,0);
	tfp->open("wave.vcd");
	while(!contextp->gotFinish()&& (sc_time_stamp() < 20)){
		top->x = 0b10000000;top->eval();printf("x = %d,  y = %d\n", top->x, top->y);tfp->dump(main_time); main_time++;	//time go on
	     	top->x = 0b01000000;top->eval();printf("x = %d,  y = %d\n", top->x, top->y);tfp->dump(main_time); main_time++;
		top->x = 0b00100000;top->eval();printf("x = %d,  y = %d\n", top->x, top->y);tfp->dump(main_time); main_time++;
                top->x = 0b00010000;top->eval();printf("x = %d,  y = %d\n", top->x, top->y);tfp->dump(main_time); main_time++;    
                top->x = 0b00001000;top->eval();printf("x = %d,  y = %d\n", top->x, top->y);tfp->dump(main_time); main_time++;     
                top->x = 0b00000100;top->eval();printf("x = %d,  y = %d\n", top->x, top->y);tfp->dump(main_time); main_time++;     
                top->x = 0b00000010;top->eval();printf("x = %d,  y = %d\n", top->x, top->y);tfp->dump(main_time); main_time++;     
                top->x = 0b00000001;top->eval();printf("x = %d,  y = %d\n", top->x, top->y);tfp->dump(main_time); main_time++;     
                top->x = 0b01001001;top->eval();printf("x = %d,  y = %d\n", top->x, top->y);tfp->dump(main_time); main_time++;     
		}
	top->final();
	tfp->close();
	delete top;
	delete contextp;
	
	return 0;
}
