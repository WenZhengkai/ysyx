module ysyx_23060228_IDU(
	input [6:0]	opcode,
	input [2:0]	funt3,
	input [6:0]	funt7,
	input 		Zero,

	output 		PCSrc,
	output [1:0] 	ResSrc,
	output  	MemWrite,
	output reg [2:0]	ALUCtrl,
	output 		ALUSrc,
        output [2:0]	ImmSrc,
	output 		RegWrite	
);
reg [11:0] controls;
wire	Branch;
wire [1:0] ALUop;
wire	Jump;
//	1	  2	  3	  4	    5	    6	    7	   8
assign {RegWrite, ImmSrc, ALUSrc, MemWrite, ResSrc, Branch, ALUop, Jump} = controls;
		/* PCSrc */
assign PCSrc = (Branch & Zero) | Jump;
		/* most signals */
always @(opcode, funt3, funt7, Zero) begin
	case(opcode)
				//	   1 2   3 4 5  6 7  8
		7'b0010011: controls = 12'b1_000_1_0_00_0_00_0;
		default:    controls = 12'bx_xxx_x_x_xx_x_xx_x;

	endcase
end
		/* ALUCtrl */
always @(ALUop)begin
	case(ALUop)
		2'b00:		ALUCtrl <= 3'b000;	//addition
		2'b01:		ALUCtrl <= 3'b001;	//substraction
		default:  case(funt3)
			  default:	ALUCtrl <= 3'bxxx;
			  endcase

	endcase
end

endmodule
