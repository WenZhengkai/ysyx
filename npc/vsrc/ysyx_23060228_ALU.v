module ysyx_23060228_ALU #(DATA_WIDTH = 1)(
	input  [DATA_WIDTH - 1:0]	srca,
	input  [DATA_WIDTH - 1:0]	srcb,
	input  [2:0]			ALUCtrl,
	input						dw,

	output [DATA_WIDTH - 1:0]	ALURes,
	output 				Zero

);
wire [DATA_WIDTH - 1:0]	adder_Res;
wire [DATA_WIDTH - 1:0] srcb_inv = ALUCtrl[0] == 1 ? ~srcb + 'd1 : srcb;
reg [DATA_WIDTH - 1:0]	ALURes_temp;
assign Zero = ALURes == {DATA_WIDTH{1'b0}};
assign ALURes = dw ? {{32{ALURes_temp[31]}},{ALURes_temp[31:0]}}: ALURes_temp;
wire [DATA_WIDTH - 1:0] right_shift_ari = $signed(srca)>>>srcb;
always@(*)begin
	case(ALUCtrl)
		3'b000:	ALURes_temp = adder_Res;
		3'b001: ALURes_temp = adder_Res;
		3'b110: ALURes_temp = right_shift_ari;
		default:ALURes_temp = {DATA_WIDTH{1'b0}};
	endcase

end

ysyx_23060228_adder #(.DATA_WIDTH(DATA_WIDTH))
ysyx_ALU_adder(
	.srca(srca),
	.srcb(srcb_inv),
	.Res(adder_Res)
);


endmodule
