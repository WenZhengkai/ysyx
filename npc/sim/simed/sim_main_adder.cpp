#include "Vtop.h"
#include "verilated.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "verilated_vcd_c.h"
#include <stdint.h>

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
	top->ALUCtrl = 0;	
	while(!contextp->gotFinish()&& (sc_time_stamp() < 256)){
		top->clk = top->clk ? 0 : 1;
		top->srca = (int)sc_time_stamp()+0xffff0000;
		top->srcb = ((int)sc_time_stamp())/2+0xffff0000;
		top->eval();
		tfp->dump(main_time);
		if((int32_t)(top->srca + top->srcb) != top->ALURes)
			printf("error:%d\t%d\t%d\t%d\n",top->srca, top->srcb,top->ALURes,(int32_t)(top->srca + top->srcb));
		main_time++;
	}
	top->final();
	tfp->close();
	delete top;
	delete contextp;
	
	return 0;
}
