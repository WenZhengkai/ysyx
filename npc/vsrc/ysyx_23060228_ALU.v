module ysyx_23060228_ALU #(DATA_WIDTH = 1)(
	input  [DATA_WIDTH - 1:0]	srca,
	input  [DATA_WIDTH - 1:0]	srcb,
	input  [2:0]			ALUCtrl,

	output reg [DATA_WIDTH - 1:0]	ALURes,
	output 				Zero

);
wire [DATA_WIDTH - 1:0]	adder_Res;
assign Zero = ALURes == {DATA_WIDTH{1'b0}};
always@(*)begin
	case(ALUCtrl)
		3'b000:	ALURes = adder_Res;
		default:ALURes = {DATA_WIDTH{1'b0}};
	endcase

end

ysyx_23060228_adder #(.DATA_WIDTH(DATA_WIDTH))
ysyx_ALU_adder(
	.srca(srca),
	.srcb(srcb),
	.Res(adder_Res)
);


endmodule
