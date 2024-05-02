module ysyx_23060228_Extend(
	input  [31:7]	inst,
	input  [2:0]	ImmSrc,
	output reg [31:0]	ImmExt

);
always@(*)begin
	case(ImmSrc)
		3'b000:	  ImmExt = {inst[31], inst[31],inst[31],inst[31],inst[31],inst[31],inst[31],inst[31],inst[31],inst[31],inst[31],inst[31],inst[31],inst[31],inst[31],inst[31],inst[31],inst[31],inst[31],inst[31],inst[31],inst[30:20]};		//addi
		default:  ImmExt = 32'b0;

	endcase
end

endmodule
