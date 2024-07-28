#include "Vtop.h"
#include "verilated.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "verilated_vcd_c.h"
#include <stdint.h>
#include "monitor.h"
#include "sdb/sdb.h"

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
	pmem_write(0x80000000,0x00000117);	// auipc x2, 0x0
	pmem_write(0x80000004,0x108100e7);	// jalr x1,x2 0x80000108
	pmem_write(0x80000108,0xfffff0b7);	// lui x1, 0xfffff000
	pmem_write(0x8000010c,0x00100073);	// ebreak
	
	parse_args(argc, argv);
	load_img();

	top->rst    = 0;
	top->DataFromMem = 0;
	sdb_stru sdb_info = {false};
	while(!contextp->gotFinish()&& (sc_time_stamp() < 512)){
		if((int)sc_time_stamp()%10 == 0)
			top->clk = top->clk ? 0 : 1;
		/* sdb */
		sdb_mainloop(&sdb_info);

		if(sdb_info.end == true) {
			printf("end\n");
			break;
		}
		/* sdb end */
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
