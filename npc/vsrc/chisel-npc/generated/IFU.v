module IFU(
  input         clock,
  input         reset,
  input  [31:0] io_inst,
  input         io_to_idu_ready,
  output        io_to_idu_valid,
  output [31:0] io_to_idu_bits_inst,
  output [31:0] io_to_idu_bits_pc,
  output [31:0] io_to_idu_bits_next_pc,
  output        io_to_idu_bits_isBranch,
  output [31:0] io_pc,
  input         io_from_exu_bruRes_valid,
  input  [31:0] io_from_exu_bruRes_targetPc
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] pc; // @[IFU.scala 34:21]
  reg  valid; // @[IFU.scala 35:24]
  wire [6:0] inInstOp = io_inst[6:0]; // @[IFU.scala 48:27]
  wire  isBranch = 7'h63 == inInstOp | (7'h67 == inInstOp | 7'h6f == inInstOp); // @[Mux.scala 81:58]
  wire  isEcall = io_inst == 32'h73; // @[IFU.scala 57:26]
  wire  isMret = io_inst == 32'h30200073; // @[IFU.scala 58:26]
  wire  needBruRes = isBranch | isEcall | isMret; // @[IFU.scala 59:42]
  wire  jalBruRes_valid = inInstOp == 7'h6f; // @[IFU.scala 64:33]
  wire [10:0] _jalImmExt_T_2 = io_inst[31] ? 11'h7ff : 11'h0; // @[Bitwise.scala 77:12]
  wire [31:0] jalImmExt = {_jalImmExt_T_2,io_inst[31],io_inst[19:12],io_inst[20],io_inst[30:21],1'h0}; // @[Cat.scala 33:92]
  wire [31:0] jalBruRes_targetPc = pc + jalImmExt; // @[IFU.scala 66:30]
  wire  bruRes_valid = jalBruRes_valid | io_from_exu_bruRes_valid; // @[IFU.scala 71:40]
  wire [31:0] _bruRes_targetPc_T = io_from_exu_bruRes_valid ? io_from_exu_bruRes_targetPc : 32'h0; // @[Mux.scala 101:16]
  wire [31:0] bruRes_targetPc = jalBruRes_valid ? jalBruRes_targetPc : _bruRes_targetPc_T; // @[Mux.scala 101:16]
  wire [31:0] _next_pc_T_1 = pc + 32'h4; // @[IFU.scala 80:57]
  wire [31:0] next_pc = bruRes_valid ? bruRes_targetPc : _next_pc_T_1; // @[IFU.scala 80:22]
  wire [31:0] _GEN_0 = bruRes_valid ? next_pc : pc; // @[IFU.scala 92:41 93:12 34:21]
  wire  _GEN_1 = bruRes_valid | valid; // @[IFU.scala 92:41 94:15 35:24]
  wire  _GEN_3 = ~bruRes_valid ? 1'h0 : _GEN_1; // @[IFU.scala 89:42 91:15]
  wire  _GEN_5 = ~needBruRes ? valid : _GEN_3; // @[IFU.scala 86:40 88:15]
  wire  _GEN_7 = ~io_to_idu_ready ? valid : _GEN_5; // @[IFU.scala 83:33 85:15]
  assign io_to_idu_valid = valid; // @[IFU.scala 105:30]
  assign io_to_idu_bits_inst = io_inst; // @[IFU.scala 100:25]
  assign io_to_idu_bits_pc = pc; // @[IFU.scala 98:23]
  assign io_to_idu_bits_next_pc = bruRes_valid ? bruRes_targetPc : _next_pc_T_1; // @[IFU.scala 80:22]
  assign io_to_idu_bits_isBranch = 7'h63 == inInstOp | (7'h67 == inInstOp | 7'h6f == inInstOp); // @[Mux.scala 81:58]
  assign io_pc = pc; // @[IFU.scala 99:11]
  always @(posedge clock) begin
    if (reset) begin // @[IFU.scala 34:21]
      pc <= 32'h80000000; // @[IFU.scala 34:21]
    end else if (!(~io_to_idu_ready)) begin // @[IFU.scala 83:33]
      if (~needBruRes) begin // @[IFU.scala 86:40]
        if (bruRes_valid) begin // @[IFU.scala 80:22]
          pc <= bruRes_targetPc;
        end else begin
          pc <= _next_pc_T_1;
        end
      end else if (!(~bruRes_valid)) begin // @[IFU.scala 89:42]
        pc <= _GEN_0;
      end
    end
    valid <= reset | _GEN_7; // @[IFU.scala 35:{24,24}]
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  pc = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  valid = _RAND_1[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
