sim:
	verilator --cc --exe --build -j 0 -Wall -I../vsrc sim_main.cpp ../vsrc/top.v --trace 
simnw:
	verilator --cc --exe --build -j 0 -I../vsrc sim_main.cpp ../vsrc/top.v --trace

run:
	obj_dir/Vtop

gtk:
	gtkwave wave.vcd
clean:
	rm -r obj_dir
	rm wave.vcd
