module bcd7seg(
	input [3:0] b,
	output reg [7:0] s

);
	always@(b)
	begin
		case(b)
		4'b0000: s = 8'b00000011;
		4'b0001: s = 8'b10011111;
		4'b0010: s = 8'b00100101;
		4'b0011: s = 8'b00001101;
		4'b0100: s = 8'b10011001;
		4'b0101: s = 8'b01001001;
		4'b0110: s = 8'b11000001;
		4'b0111: s = 8'b00011111;
		default: s =8'b00000000;
		endcase
	end
endmodule
