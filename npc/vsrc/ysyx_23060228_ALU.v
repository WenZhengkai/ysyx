module ysyx_23060228_ALU #(DATA_WIDTH = 1)(
	input  [DATA_WIDTH - 1:0]	srca,
	input  [DATA_WIDTH - 1:0]	srcb,
	input  [4:0]			ALUCtrl,
	input						dw,

	output [DATA_WIDTH - 1:0]	ALURes,
	output 				Zero

);
wire [DATA_WIDTH - 1:0]	adder_Res;
wire [DATA_WIDTH - 1:0] srcb_inv = ALUCtrl[0] == 1 ? ~srcb + 'd1 : srcb;
reg [DATA_WIDTH - 1:0]	ALURes_temp;
assign Zero =  (ALUCtrl == 5'b00001) ? ALURes == {DATA_WIDTH{1'b0}}:
				ALUCtrl == 5'b00011 ?  slt_res[0]:
				ALUCtrl == 5'b00100 ?sltu_res[0]: 1'bx;	//bgeu, bltu
`ifdef CONFIG_ISA64
assign ALURes = dw ? {{32{ALURes_temp[31]}},{ALURes_temp[31:0]}}: ALURes_temp;
`else
assign ALURes = ALURes_temp;
`endif

wire [5:0] shamt = srcb[5:0];

`ifdef CONFIG_ISA64
wire [DATA_WIDTH - 1:0] shin_sra = dw ? {{32{srca[31]}},{srca[31:0]}}: srca;
wire [DATA_WIDTH - 1:0] shin_srl = dw ? {32'b0,{srca[31:0]}}: srca;
`else
wire [DATA_WIDTH - 1:0] shin_sra = srca;
wire [DATA_WIDTH - 1:0] shin_srl = srca;
`endif

wire [DATA_WIDTH - 1:0] sra_res = $signed(shin_sra)>>>shamt;
wire [DATA_WIDTH - 1:0] srl_res = shin_srl >> shamt;
wire [DATA_WIDTH - 1:0] sll_res = srca << shamt;
wire [DATA_WIDTH - 1:0] xor_res = srca ^ srcb;
wire [DATA_WIDTH - 1: 0]and_res	= srca & srcb;
wire [DATA_WIDTH - 1: 0]slt_res	= ($signed(srca) < $signed(srcb))? 'd1 : 'd0;
wire [DATA_WIDTH - 1: 0]sltu_res= (srca < srcb)? 'd1 : 'd0;
wire [DATA_WIDTH - 1: 0]mul_res = srca * srcb;
wire [DATA_WIDTH - 1: 0] or_res = srca | srcb;
//>>> divw >>>
wire [DATA_WIDTH/2 - 1: 0] divw_res = $signed(srca[31:0])/$signed(srcb[31:0]);
wire [DATA_WIDTH - 1: 0] div_res = {{32{divw_res[31]}},{divw_res[31:0]}};
//<<< divw <<<
//>>> remw >>>
wire [DATA_WIDTH/2 - 1: 0] remw_res = $signed(srca[31:0])% $signed(srcb[31:0]);
wire [DATA_WIDTH - 1: 0] rem_res = {{32{remw_res[31]}},{remw_res[31:0]}};
//<<< remw <<<
wire [DATA_WIDTH - 1: 0] divu_res = $unsigned(srca)/$unsigned(srcb);

always@(*)begin
	case(ALUCtrl)
		5'b00000:	ALURes_temp = adder_Res;
		5'b00001: ALURes_temp = adder_Res;
		5'b00010: ALURes_temp = sll_res;				//sll
		5'b00101: ALURes_temp = xor_res;				//xor
		5'b00111: ALURes_temp = sra_res;				//sra
		5'b00110: ALURes_temp = srl_res;				//srl
		5'b01001: ALURes_temp = and_res;				//and
		5'b00100: ALURes_temp = sltu_res;				//sltu
		5'b00011: ALURes_temp = slt_res;				//slt
		5'b01000: ALURes_temp = or_res;					//or
		5'b01010: ALURes_temp = mul_res;				//mul
		5'b01011: ALURes_temp = div_res;				//divw, //TODO: IT is divw
		5'b01100: ALURes_temp = rem_res;				//rem
		5'b01101: ALURes_temp = divu_res;				//divu
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
