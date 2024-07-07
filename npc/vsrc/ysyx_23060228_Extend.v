module ysyx_23060228_Extend #(DATA_WIDTH = 32)(
	input  [31:7]	inst,
	input  [2:0]	ImmSrc,
	output reg [DATA_WIDTH -  1 :0]	ImmExt

);
always@(*)begin
	case(ImmSrc)
		3'b000:	  ImmExt = {{(DATA_WIDTH -  12){inst[31]}},inst[31:20]};		//addi
		3'b100:	  ImmExt = {{(DATA_WIDTH -  20){inst[31]}},inst[31:12]}<<12;		// U, auipc, lui
		3'b011:   ImmExt = {{(DATA_WIDTH -  21){inst[31]}},inst[31],inst[19:12],inst[20],inst[30:21],1'b0};	// J, jal
		3'b001:	  ImmExt = {{(DATA_WIDTH -  12){inst[31]}},inst[31:25],inst[11:7]};	// S, sd

		default:  ImmExt = DATA_WIDTH'('b0);

	endcase
end

endmodule
