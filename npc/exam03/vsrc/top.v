module top(
	input [3:0] x,
	input [3:0] y,
	output[3:0] res,
	input [2:0] sel,
	output		cf,
	output		zf,
	output		of,	
	input clk,
	input rst,
	output [7:0] HEX0
);
wire	[3:0]	add;
wire	[3:0]	sub;
wire	[3:0]	rev;
wire 	[3:0] 	and_res;
wire	[3:0]	or_res;
wire	[3:0]	xor_res;
wire		comp_res;
wire		equ_res;
wire		sub_mode;
assign	sub_mode = sel == 3'b001;
sel_res sel_res_inst
	(
		.i(sel),
		.add(add),
		.sub(add),
		.rev(rev),
		.and_res(and_res),
		.or_res(or_res),
		.xor_res(xor_res),
		.comp_res(comp_res),
		.equ_res(equ_res),
		.res(res)
	);

adder_sub4 adder_sub4_inst
	(
		.x(x),
		.y(y),
		.sub(sub_mode),
		.sum(add),
		.cf(cf),
		.zf(zf),
		.of(of)
	);
reverse reverse_inst
	(
		.x(x),
		.rev(rev)
	);
andm 	andm_inst
	(
		.x(x),
		.y(y),
		.and_res(and_res)	
	);
orm	orm_inst
	(
		.x(x),
		.y(y),
		.or_res(or_res)
	);
xorm	xorm_inst
	(
		.x(x),
		.y(y),
		.xor_res(xor_res)
	);

comp	comp_inst
	(
		.x(x),
		.y(y),
		.out(comp_res)
	);
equal equal_inst
	(
		.x(x),
		.y(y),
		.out(equ_res)
	);
endmodule
