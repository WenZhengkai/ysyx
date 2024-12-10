module ysyx_23060228_IDU(
	input [6:0]	opcode,
	input [2:0]	funt3,
	input [6:0]	funt7,
	input 		Zero,

	output 		PCSrc,
	output [2:0] 	ResSrc,
	output  	MemWrite,
	output reg [4:0]	ALUCtrl,
	output 		ALUSrc,
        output [2:0]	ImmSrc,
	output		PCTarget_srca_key,
	output 		RegWrite,
	output	reg[7:0]Wmask,
	output reg dw
);
reg [12:0] controls;
wire	Branch;
wire [1:0] ALUop;
wire	Jump;
wire is_jalr;
		//	1	  2	  3	  4	    5	    6	    7	   8
assign {RegWrite, ImmSrc, ALUSrc, MemWrite, ResSrc, Branch, ALUop, Jump} = controls;
		/* PCSrc */
reg BranchHit;	// Whether hit the condition of branch
assign PCSrc = (Branch & BranchHit) | Jump;

assign is_jalr = (opcode == 7'b1100111) & (funt3 == 3'b000);
		/* most signals */
always @(opcode, funt3, funt7, Zero) begin
	case(opcode)
							//	   1 2   3 4 5   6 7  8
		7'b0010011: controls = 13'b1_000_1_0_000_0_10_0;	//addi	I-type srai, andi, xori
		7'b0011011: controls = 13'b1_000_1_0_000_0_10_0;	//addiw, srliw
		
		7'b0010111: controls = 13'b1_100_x_0_011_0_xx_0;	//aupic
		7'b0110111: controls = 13'b1_100_x_0_100_0_xx_0;	//lui
		7'b1101111: controls = 13'b1_011_x_0_010_0_xx_1;	//jal
		7'b1100111: controls = 13'b1_000_x_0_010_0_xx_1;	//jalr
		7'b0100011: controls = 13'b0_001_1_1_xxx_0_00_0;	//sd
		7'b0000011: //load form memory
		    controls = 13'b1_000_1_0_001_0_00_0;	//ld,lw,lwu,lh,lhu,lb,lbu
		7'b1100011:
		    		controls = 13'b0_010_0_0_xxx_1_11_0;		//bne,beq, bge, blt, bgeu, bltu
	    
		7'b0110011: controls = 13'b1_xxx_0_0_000_0_10_0;			// R-type ALU operation, RV32I, RV64
		7'b0111011:begin
					controls = 13'b1_xxx_0_0_000_0_10_0;			// R-type ALU operation, RV64 only, subw, sllw
		end
		default:    controls = 13'bx_xxx_x_x_xxx_x_xx_x;

	endcase
end
wire RtypeSub = opcode[5] & funt7[5];
wire RtypeMul = opcode[5] & funt7[0];
wire RtypeDiv = opcode[5] & funt7[0];

wire shif_ari = funt7[5];
wire divu = funt7[0];
		/* ALUCtrl */
always @(*)begin
	case(ALUop)
		2'b00:		ALUCtrl = 5'b00000;	//addition
		2'b01:		ALUCtrl = 5'b00001;	//substraction
		2'b10:  case(funt3)
				3'b000: ALUCtrl =  RtypeMul ? 5'b01010 : (RtypeSub? 5'b00001 : 5'b00000);
				3'b001: ALUCtrl = 5'b00010;	//sll
				3'b100: ALUCtrl = RtypeDiv ? 5'b01011 : 5'b00101;	// div, xor
				3'b101: ALUCtrl = divu && (opcode == 7'b0110011) ? 5'b01101 :(shif_ari ? 5'b00111 : 5'b00110);	//divu, sra, srl
				3'b111: ALUCtrl = 5'b01001;	//and
				3'b010: ALUCtrl = 5'b00011;	//slt
				3'b011: ALUCtrl = 5'b00100;	//sltu
				3'b110: ALUCtrl = RtypeDiv ? 5'b01100 : 5'b01000;	//rem
			  default:	ALUCtrl = 5'bxxxxx;
			  endcase
		2'b11: case(funt3)
				3'b000: ALUCtrl = 5'b00001;	//substraction, beq
				3'b001: ALUCtrl = 5'b00001;	//substraction, bne
				3'b100: ALUCtrl = 5'b00011;	//slt, blt
				3'b101: ALUCtrl = 5'b00011;	//slt, bge, need reverse
				3'b110: ALUCtrl = 5'b00100;	//sltu, bltu
				3'b111: ALUCtrl = 5'b00100;	//sltu, bgeu, need reverse

				default:	ALUCtrl = 5'bxxxxx;
		endcase

	endcase
end
		/* other signals */
always @(*) begin
	case(1'b1)
		is_jalr: PCTarget_srca_key = 1'b1;
		default: PCTarget_srca_key = 1'b0;
	endcase

end
		/* load and store; LSU */
always @(*) begin
// Wmask
	if(opcode == 7'b0100011)begin
		case(funt3)
			3'b000: Wmask = 8'b0000_0001;	//sb
			3'b001: Wmask = 8'b0000_0011;	//sh
			3'b010: Wmask = 8'b0000_1111;	//sw
			3'b011: Wmask = 8'b1111_1111;	//sd
			default:Wmask = 8'b0000_0000;
		endcase
	end
	else if(opcode == 7'b0000011)begin
		case(funt3)
			3'b000: Wmask = 8'b0000_0001;	//lb
			3'b100: Wmask = 8'b0000_0001;	//lbu
			3'b001: Wmask = 8'b0000_0011;	//lh
			3'b101: Wmask = 8'b0000_0011;	//lhu
			3'b010: Wmask = 8'b0000_1111;	//lw
			3'b110: Wmask = 8'b0000_1111;	//lwu
			3'b011: Wmask = 8'b1111_1111;	//ld
			default:Wmask = 8'b0000_0000;
		endcase
	end
	else begin
			Wmask = 8'b0000_0000;
	end	
end
	/* BranchHit */
always @(*) begin
	if(opcode == 7'b1100011)begin
		case(funt3)
			3'b000: BranchHit = Zero;	//beq
			3'b001: BranchHit = !Zero;	//bne
			3'b100: BranchHit = Zero;	//blt
			3'b110: BranchHit = Zero;	//bltu
			3'b101: BranchHit = !Zero;	//bge
			3'b111: BranchHit = !Zero;	//bgeu
			default:BranchHit = 1'b0;
		endcase
	end
	else begin
			BranchHit = 1'b0;
	end
end
	/* dw:addw R-type ALU operation, RV64 */
always @(*) begin
	if(opcode == 7'b0111011)		// RV64 W
		dw = 1'b1;
	else if(opcode == 7'b0011011)	// RV64 IW
		dw = 1'b1;
	else
		dw = 1'b0;
end

endmodule
