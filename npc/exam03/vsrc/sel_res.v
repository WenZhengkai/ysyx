module sel_res
(
	input [2:0] i,
	input [3:0] add,
	input [3:0] sub,
	input [3:0] rev,
	input [3:0] and_res,
	input [3:0] or_res,
	input [3:0] xor_res,
	input 	    comp_res,
	input 	    equ_res,

	output reg [3:0]res
);
	always@(*)
	begin
		case(i)
			3'b000: res = add;
			3'b001: res = sub;
			3'b010: res = rev;
			3'b011: res = and_res;
			3'b100: res = or_res;
			3'b101: res = xor_res;
			3'b110: res = {3'b0,comp_res};
			3'b111: res = {3'b0,equ_res};
		default:	res = add;
		endcase
	end

endmodule
