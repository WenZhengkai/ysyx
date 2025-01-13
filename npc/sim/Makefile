sim:
	verilator --cc --exe -j 0 -Wall -I../vsrc -I../vsrc/chisel-npc/generated sim_main.cpp ../vsrc/top.v --trace
simnw:
	verilator --cc --exe -j 0 -I../vsrc sim_main.cpp ../vsrc/top.v --trace

build: sim
	$(MAKE) -w -j -C obj_dir -f Vtop.mk VM_USER_LDLIBS+=-lreadline Vtop 

run: build
	obj_dir/Vtop $(ARGS)

gtk:
	gtkwave wave.vcd
clean:
	rm -r obj_dir
	rm wave.vcd
