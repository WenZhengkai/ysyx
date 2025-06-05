module ISU(
  input         clock,
  input         reset,
  output        io_from_idu_ready,
  input         io_from_idu_valid,
  input  [31:0] io_from_idu_bits_cf_inst,
  input  [31:0] io_from_idu_bits_cf_pc,
  input  [31:0] io_from_idu_bits_cf_next_pc,
  input         io_from_idu_bits_cf_isBranch,
  input         io_from_idu_bits_ctrl_MemWrite,
  input  [1:0]  io_from_idu_bits_ctrl_ResSrc,
  input  [2:0]  io_from_idu_bits_ctrl_fuSrc1Type,
  input  [2:0]  io_from_idu_bits_ctrl_fuSrc2Type,
  input  [2:0]  io_from_idu_bits_ctrl_fuType,
  input  [6:0]  io_from_idu_bits_ctrl_fuOpType,
  input  [4:0]  io_from_idu_bits_ctrl_rs1,
  input  [4:0]  io_from_idu_bits_ctrl_rs2,
  input         io_from_idu_bits_ctrl_rfWen,
  input  [4:0]  io_from_idu_bits_ctrl_rd,
  input  [31:0] io_from_idu_bits_data_imm,
  input         io_to_exu_ready,
  output        io_to_exu_valid,
  output [31:0] io_to_exu_bits_cf_inst,
  output [31:0] io_to_exu_bits_cf_pc,
  output [31:0] io_to_exu_bits_cf_next_pc,
  output        io_to_exu_bits_cf_isBranch,
  output        io_to_exu_bits_ctrl_MemWrite,
  output [1:0]  io_to_exu_bits_ctrl_ResSrc,
  output [2:0]  io_to_exu_bits_ctrl_fuType,
  output [6:0]  io_to_exu_bits_ctrl_fuOpType,
  output [4:0]  io_to_exu_bits_ctrl_rs1,
  output [4:0]  io_to_exu_bits_ctrl_rs2,
  output        io_to_exu_bits_ctrl_rfWen,
  output [4:0]  io_to_exu_bits_ctrl_rd,
  output [31:0] io_to_exu_bits_data_fuSrc1,
  output [31:0] io_to_exu_bits_data_fuSrc2,
  output [31:0] io_to_exu_bits_data_imm,
  output [31:0] io_to_exu_bits_data_rfSrc1,
  output [31:0] io_to_exu_bits_data_rfSrc2,
  input  [4:0]  io_wb_rd,
  input         io_wb_RegWrite,
  input  [31:0] io_from_reg_rfSrc1,
  input  [31:0] io_from_reg_rfSrc2
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_21;
  reg [31:0] _RAND_22;
  reg [31:0] _RAND_23;
  reg [31:0] _RAND_24;
  reg [31:0] _RAND_25;
  reg [31:0] _RAND_26;
  reg [31:0] _RAND_27;
  reg [31:0] _RAND_28;
  reg [31:0] _RAND_29;
  reg [31:0] _RAND_30;
`endif // RANDOMIZE_REG_INIT
  reg [1:0] busy_1; // @[ISU.scala 33:23]
  reg [1:0] busy_2; // @[ISU.scala 33:23]
  reg [1:0] busy_3; // @[ISU.scala 33:23]
  reg [1:0] busy_4; // @[ISU.scala 33:23]
  reg [1:0] busy_5; // @[ISU.scala 33:23]
  reg [1:0] busy_6; // @[ISU.scala 33:23]
  reg [1:0] busy_7; // @[ISU.scala 33:23]
  reg [1:0] busy_8; // @[ISU.scala 33:23]
  reg [1:0] busy_9; // @[ISU.scala 33:23]
  reg [1:0] busy_10; // @[ISU.scala 33:23]
  reg [1:0] busy_11; // @[ISU.scala 33:23]
  reg [1:0] busy_12; // @[ISU.scala 33:23]
  reg [1:0] busy_13; // @[ISU.scala 33:23]
  reg [1:0] busy_14; // @[ISU.scala 33:23]
  reg [1:0] busy_15; // @[ISU.scala 33:23]
  reg [1:0] busy_16; // @[ISU.scala 33:23]
  reg [1:0] busy_17; // @[ISU.scala 33:23]
  reg [1:0] busy_18; // @[ISU.scala 33:23]
  reg [1:0] busy_19; // @[ISU.scala 33:23]
  reg [1:0] busy_20; // @[ISU.scala 33:23]
  reg [1:0] busy_21; // @[ISU.scala 33:23]
  reg [1:0] busy_22; // @[ISU.scala 33:23]
  reg [1:0] busy_23; // @[ISU.scala 33:23]
  reg [1:0] busy_24; // @[ISU.scala 33:23]
  reg [1:0] busy_25; // @[ISU.scala 33:23]
  reg [1:0] busy_26; // @[ISU.scala 33:23]
  reg [1:0] busy_27; // @[ISU.scala 33:23]
  reg [1:0] busy_28; // @[ISU.scala 33:23]
  reg [1:0] busy_29; // @[ISU.scala 33:23]
  reg [1:0] busy_30; // @[ISU.scala 33:23]
  reg [1:0] busy_31; // @[ISU.scala 33:23]
  wire [1:0] _GEN_1 = 5'h1 == io_from_idu_bits_ctrl_rs1 ? busy_1 : 2'h0; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_2 = 5'h2 == io_from_idu_bits_ctrl_rs1 ? busy_2 : _GEN_1; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_3 = 5'h3 == io_from_idu_bits_ctrl_rs1 ? busy_3 : _GEN_2; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_4 = 5'h4 == io_from_idu_bits_ctrl_rs1 ? busy_4 : _GEN_3; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_5 = 5'h5 == io_from_idu_bits_ctrl_rs1 ? busy_5 : _GEN_4; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_6 = 5'h6 == io_from_idu_bits_ctrl_rs1 ? busy_6 : _GEN_5; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_7 = 5'h7 == io_from_idu_bits_ctrl_rs1 ? busy_7 : _GEN_6; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_8 = 5'h8 == io_from_idu_bits_ctrl_rs1 ? busy_8 : _GEN_7; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_9 = 5'h9 == io_from_idu_bits_ctrl_rs1 ? busy_9 : _GEN_8; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_10 = 5'ha == io_from_idu_bits_ctrl_rs1 ? busy_10 : _GEN_9; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_11 = 5'hb == io_from_idu_bits_ctrl_rs1 ? busy_11 : _GEN_10; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_12 = 5'hc == io_from_idu_bits_ctrl_rs1 ? busy_12 : _GEN_11; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_13 = 5'hd == io_from_idu_bits_ctrl_rs1 ? busy_13 : _GEN_12; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_14 = 5'he == io_from_idu_bits_ctrl_rs1 ? busy_14 : _GEN_13; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_15 = 5'hf == io_from_idu_bits_ctrl_rs1 ? busy_15 : _GEN_14; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_16 = 5'h10 == io_from_idu_bits_ctrl_rs1 ? busy_16 : _GEN_15; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_17 = 5'h11 == io_from_idu_bits_ctrl_rs1 ? busy_17 : _GEN_16; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_18 = 5'h12 == io_from_idu_bits_ctrl_rs1 ? busy_18 : _GEN_17; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_19 = 5'h13 == io_from_idu_bits_ctrl_rs1 ? busy_19 : _GEN_18; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_20 = 5'h14 == io_from_idu_bits_ctrl_rs1 ? busy_20 : _GEN_19; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_21 = 5'h15 == io_from_idu_bits_ctrl_rs1 ? busy_21 : _GEN_20; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_22 = 5'h16 == io_from_idu_bits_ctrl_rs1 ? busy_22 : _GEN_21; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_23 = 5'h17 == io_from_idu_bits_ctrl_rs1 ? busy_23 : _GEN_22; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_24 = 5'h18 == io_from_idu_bits_ctrl_rs1 ? busy_24 : _GEN_23; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_25 = 5'h19 == io_from_idu_bits_ctrl_rs1 ? busy_25 : _GEN_24; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_26 = 5'h1a == io_from_idu_bits_ctrl_rs1 ? busy_26 : _GEN_25; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_27 = 5'h1b == io_from_idu_bits_ctrl_rs1 ? busy_27 : _GEN_26; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_28 = 5'h1c == io_from_idu_bits_ctrl_rs1 ? busy_28 : _GEN_27; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_29 = 5'h1d == io_from_idu_bits_ctrl_rs1 ? busy_29 : _GEN_28; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_30 = 5'h1e == io_from_idu_bits_ctrl_rs1 ? busy_30 : _GEN_29; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_31 = 5'h1f == io_from_idu_bits_ctrl_rs1 ? busy_31 : _GEN_30; // @[ISU.scala 34:{47,47}]
  wire  src1Busy = _GEN_31 != 2'h0; // @[ISU.scala 34:47]
  wire [1:0] _GEN_33 = 5'h1 == io_from_idu_bits_ctrl_rs2 ? busy_1 : 2'h0; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_34 = 5'h2 == io_from_idu_bits_ctrl_rs2 ? busy_2 : _GEN_33; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_35 = 5'h3 == io_from_idu_bits_ctrl_rs2 ? busy_3 : _GEN_34; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_36 = 5'h4 == io_from_idu_bits_ctrl_rs2 ? busy_4 : _GEN_35; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_37 = 5'h5 == io_from_idu_bits_ctrl_rs2 ? busy_5 : _GEN_36; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_38 = 5'h6 == io_from_idu_bits_ctrl_rs2 ? busy_6 : _GEN_37; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_39 = 5'h7 == io_from_idu_bits_ctrl_rs2 ? busy_7 : _GEN_38; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_40 = 5'h8 == io_from_idu_bits_ctrl_rs2 ? busy_8 : _GEN_39; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_41 = 5'h9 == io_from_idu_bits_ctrl_rs2 ? busy_9 : _GEN_40; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_42 = 5'ha == io_from_idu_bits_ctrl_rs2 ? busy_10 : _GEN_41; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_43 = 5'hb == io_from_idu_bits_ctrl_rs2 ? busy_11 : _GEN_42; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_44 = 5'hc == io_from_idu_bits_ctrl_rs2 ? busy_12 : _GEN_43; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_45 = 5'hd == io_from_idu_bits_ctrl_rs2 ? busy_13 : _GEN_44; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_46 = 5'he == io_from_idu_bits_ctrl_rs2 ? busy_14 : _GEN_45; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_47 = 5'hf == io_from_idu_bits_ctrl_rs2 ? busy_15 : _GEN_46; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_48 = 5'h10 == io_from_idu_bits_ctrl_rs2 ? busy_16 : _GEN_47; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_49 = 5'h11 == io_from_idu_bits_ctrl_rs2 ? busy_17 : _GEN_48; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_50 = 5'h12 == io_from_idu_bits_ctrl_rs2 ? busy_18 : _GEN_49; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_51 = 5'h13 == io_from_idu_bits_ctrl_rs2 ? busy_19 : _GEN_50; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_52 = 5'h14 == io_from_idu_bits_ctrl_rs2 ? busy_20 : _GEN_51; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_53 = 5'h15 == io_from_idu_bits_ctrl_rs2 ? busy_21 : _GEN_52; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_54 = 5'h16 == io_from_idu_bits_ctrl_rs2 ? busy_22 : _GEN_53; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_55 = 5'h17 == io_from_idu_bits_ctrl_rs2 ? busy_23 : _GEN_54; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_56 = 5'h18 == io_from_idu_bits_ctrl_rs2 ? busy_24 : _GEN_55; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_57 = 5'h19 == io_from_idu_bits_ctrl_rs2 ? busy_25 : _GEN_56; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_58 = 5'h1a == io_from_idu_bits_ctrl_rs2 ? busy_26 : _GEN_57; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_59 = 5'h1b == io_from_idu_bits_ctrl_rs2 ? busy_27 : _GEN_58; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_60 = 5'h1c == io_from_idu_bits_ctrl_rs2 ? busy_28 : _GEN_59; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_61 = 5'h1d == io_from_idu_bits_ctrl_rs2 ? busy_29 : _GEN_60; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_62 = 5'h1e == io_from_idu_bits_ctrl_rs2 ? busy_30 : _GEN_61; // @[ISU.scala 34:{47,47}]
  wire [1:0] _GEN_63 = 5'h1f == io_from_idu_bits_ctrl_rs2 ? busy_31 : _GEN_62; // @[ISU.scala 34:{47,47}]
  wire  src2Busy = _GEN_63 != 2'h0; // @[ISU.scala 34:47]
  wire  AnyInvalidCondition = src1Busy | src2Busy; // @[ISU.scala 72:32]
  wire  _io_from_idu_ready_T_1 = io_to_exu_ready & io_to_exu_valid; // @[Decoupled.scala 51:35]
  wire [31:0] _io_to_exu_bits_data_fuSrc1_T_1 = 3'h0 == io_from_idu_bits_ctrl_fuSrc1Type ? io_from_reg_rfSrc1 : 32'h0; // @[Mux.scala 81:58]
  wire [31:0] _io_to_exu_bits_data_fuSrc1_T_3 = 3'h2 == io_from_idu_bits_ctrl_fuSrc1Type ? io_from_idu_bits_cf_pc :
    _io_to_exu_bits_data_fuSrc1_T_1; // @[Mux.scala 81:58]
  wire [31:0] _io_to_exu_bits_data_fuSrc2_T_1 = 3'h1 == io_from_idu_bits_ctrl_fuSrc2Type ? io_from_reg_rfSrc2 : 32'h0; // @[Mux.scala 81:58]
  wire [31:0] _io_to_exu_bits_data_fuSrc2_T_3 = 3'h3 == io_from_idu_bits_ctrl_fuSrc2Type ? io_from_idu_bits_data_imm :
    _io_to_exu_bits_data_fuSrc2_T_1; // @[Mux.scala 81:58]
  wire [62:0] _wbuClearMask_T = 63'h1 << io_wb_rd; // @[ISU.scala 35:50]
  wire [31:0] wbuClearMask = io_wb_RegWrite ? _wbuClearMask_T[31:0] : 32'h0; // @[ISU.scala 112:28]
  wire [62:0] _isFireSetMask_T_2 = 63'h1 << io_from_idu_bits_ctrl_rd; // @[ISU.scala 35:50]
  wire [31:0] isFireSetMask = io_from_idu_bits_ctrl_rfWen & _io_from_idu_ready_T_1 ? _isFireSetMask_T_2[31:0] : 32'h0; // @[ISU.scala 113:28]
  wire [1:0] _busy_1_T_2 = busy_1 + 2'h1; // @[ISU.scala 42:82]
  wire [1:0] _busy_1_T_6 = busy_1 - 2'h1; // @[ISU.scala 44:68]
  wire [1:0] _busy_1_T_7 = busy_1 == 2'h0 ? 2'h0 : _busy_1_T_6; // @[ISU.scala 44:33]
  wire [1:0] _busy_2_T_2 = busy_2 + 2'h1; // @[ISU.scala 42:82]
  wire [1:0] _busy_2_T_6 = busy_2 - 2'h1; // @[ISU.scala 44:68]
  wire [1:0] _busy_2_T_7 = busy_2 == 2'h0 ? 2'h0 : _busy_2_T_6; // @[ISU.scala 44:33]
  wire [1:0] _busy_3_T_2 = busy_3 + 2'h1; // @[ISU.scala 42:82]
  wire [1:0] _busy_3_T_6 = busy_3 - 2'h1; // @[ISU.scala 44:68]
  wire [1:0] _busy_3_T_7 = busy_3 == 2'h0 ? 2'h0 : _busy_3_T_6; // @[ISU.scala 44:33]
  wire [1:0] _busy_4_T_2 = busy_4 + 2'h1; // @[ISU.scala 42:82]
  wire [1:0] _busy_4_T_6 = busy_4 - 2'h1; // @[ISU.scala 44:68]
  wire [1:0] _busy_4_T_7 = busy_4 == 2'h0 ? 2'h0 : _busy_4_T_6; // @[ISU.scala 44:33]
  wire [1:0] _busy_5_T_2 = busy_5 + 2'h1; // @[ISU.scala 42:82]
  wire [1:0] _busy_5_T_6 = busy_5 - 2'h1; // @[ISU.scala 44:68]
  wire [1:0] _busy_5_T_7 = busy_5 == 2'h0 ? 2'h0 : _busy_5_T_6; // @[ISU.scala 44:33]
  wire [1:0] _busy_6_T_2 = busy_6 + 2'h1; // @[ISU.scala 42:82]
  wire [1:0] _busy_6_T_6 = busy_6 - 2'h1; // @[ISU.scala 44:68]
  wire [1:0] _busy_6_T_7 = busy_6 == 2'h0 ? 2'h0 : _busy_6_T_6; // @[ISU.scala 44:33]
  wire [1:0] _busy_7_T_2 = busy_7 + 2'h1; // @[ISU.scala 42:82]
  wire [1:0] _busy_7_T_6 = busy_7 - 2'h1; // @[ISU.scala 44:68]
  wire [1:0] _busy_7_T_7 = busy_7 == 2'h0 ? 2'h0 : _busy_7_T_6; // @[ISU.scala 44:33]
  wire [1:0] _busy_8_T_2 = busy_8 + 2'h1; // @[ISU.scala 42:82]
  wire [1:0] _busy_8_T_6 = busy_8 - 2'h1; // @[ISU.scala 44:68]
  wire [1:0] _busy_8_T_7 = busy_8 == 2'h0 ? 2'h0 : _busy_8_T_6; // @[ISU.scala 44:33]
  wire [1:0] _busy_9_T_2 = busy_9 + 2'h1; // @[ISU.scala 42:82]
  wire [1:0] _busy_9_T_6 = busy_9 - 2'h1; // @[ISU.scala 44:68]
  wire [1:0] _busy_9_T_7 = busy_9 == 2'h0 ? 2'h0 : _busy_9_T_6; // @[ISU.scala 44:33]
  wire [1:0] _busy_10_T_2 = busy_10 + 2'h1; // @[ISU.scala 42:82]
  wire [1:0] _busy_10_T_6 = busy_10 - 2'h1; // @[ISU.scala 44:68]
  wire [1:0] _busy_10_T_7 = busy_10 == 2'h0 ? 2'h0 : _busy_10_T_6; // @[ISU.scala 44:33]
  wire [1:0] _busy_11_T_2 = busy_11 + 2'h1; // @[ISU.scala 42:82]
  wire [1:0] _busy_11_T_6 = busy_11 - 2'h1; // @[ISU.scala 44:68]
  wire [1:0] _busy_11_T_7 = busy_11 == 2'h0 ? 2'h0 : _busy_11_T_6; // @[ISU.scala 44:33]
  wire [1:0] _busy_12_T_2 = busy_12 + 2'h1; // @[ISU.scala 42:82]
  wire [1:0] _busy_12_T_6 = busy_12 - 2'h1; // @[ISU.scala 44:68]
  wire [1:0] _busy_12_T_7 = busy_12 == 2'h0 ? 2'h0 : _busy_12_T_6; // @[ISU.scala 44:33]
  wire [1:0] _busy_13_T_2 = busy_13 + 2'h1; // @[ISU.scala 42:82]
  wire [1:0] _busy_13_T_6 = busy_13 - 2'h1; // @[ISU.scala 44:68]
  wire [1:0] _busy_13_T_7 = busy_13 == 2'h0 ? 2'h0 : _busy_13_T_6; // @[ISU.scala 44:33]
  wire [1:0] _busy_14_T_2 = busy_14 + 2'h1; // @[ISU.scala 42:82]
  wire [1:0] _busy_14_T_6 = busy_14 - 2'h1; // @[ISU.scala 44:68]
  wire [1:0] _busy_14_T_7 = busy_14 == 2'h0 ? 2'h0 : _busy_14_T_6; // @[ISU.scala 44:33]
  wire [1:0] _busy_15_T_2 = busy_15 + 2'h1; // @[ISU.scala 42:82]
  wire [1:0] _busy_15_T_6 = busy_15 - 2'h1; // @[ISU.scala 44:68]
  wire [1:0] _busy_15_T_7 = busy_15 == 2'h0 ? 2'h0 : _busy_15_T_6; // @[ISU.scala 44:33]
  wire [1:0] _busy_16_T_2 = busy_16 + 2'h1; // @[ISU.scala 42:82]
  wire [1:0] _busy_16_T_6 = busy_16 - 2'h1; // @[ISU.scala 44:68]
  wire [1:0] _busy_16_T_7 = busy_16 == 2'h0 ? 2'h0 : _busy_16_T_6; // @[ISU.scala 44:33]
  wire [1:0] _busy_17_T_2 = busy_17 + 2'h1; // @[ISU.scala 42:82]
  wire [1:0] _busy_17_T_6 = busy_17 - 2'h1; // @[ISU.scala 44:68]
  wire [1:0] _busy_17_T_7 = busy_17 == 2'h0 ? 2'h0 : _busy_17_T_6; // @[ISU.scala 44:33]
  wire [1:0] _busy_18_T_2 = busy_18 + 2'h1; // @[ISU.scala 42:82]
  wire [1:0] _busy_18_T_6 = busy_18 - 2'h1; // @[ISU.scala 44:68]
  wire [1:0] _busy_18_T_7 = busy_18 == 2'h0 ? 2'h0 : _busy_18_T_6; // @[ISU.scala 44:33]
  wire [1:0] _busy_19_T_2 = busy_19 + 2'h1; // @[ISU.scala 42:82]
  wire [1:0] _busy_19_T_6 = busy_19 - 2'h1; // @[ISU.scala 44:68]
  wire [1:0] _busy_19_T_7 = busy_19 == 2'h0 ? 2'h0 : _busy_19_T_6; // @[ISU.scala 44:33]
  wire [1:0] _busy_20_T_2 = busy_20 + 2'h1; // @[ISU.scala 42:82]
  wire [1:0] _busy_20_T_6 = busy_20 - 2'h1; // @[ISU.scala 44:68]
  wire [1:0] _busy_20_T_7 = busy_20 == 2'h0 ? 2'h0 : _busy_20_T_6; // @[ISU.scala 44:33]
  wire [1:0] _busy_21_T_2 = busy_21 + 2'h1; // @[ISU.scala 42:82]
  wire [1:0] _busy_21_T_6 = busy_21 - 2'h1; // @[ISU.scala 44:68]
  wire [1:0] _busy_21_T_7 = busy_21 == 2'h0 ? 2'h0 : _busy_21_T_6; // @[ISU.scala 44:33]
  wire [1:0] _busy_22_T_2 = busy_22 + 2'h1; // @[ISU.scala 42:82]
  wire [1:0] _busy_22_T_6 = busy_22 - 2'h1; // @[ISU.scala 44:68]
  wire [1:0] _busy_22_T_7 = busy_22 == 2'h0 ? 2'h0 : _busy_22_T_6; // @[ISU.scala 44:33]
  wire [1:0] _busy_23_T_2 = busy_23 + 2'h1; // @[ISU.scala 42:82]
  wire [1:0] _busy_23_T_6 = busy_23 - 2'h1; // @[ISU.scala 44:68]
  wire [1:0] _busy_23_T_7 = busy_23 == 2'h0 ? 2'h0 : _busy_23_T_6; // @[ISU.scala 44:33]
  wire [1:0] _busy_24_T_2 = busy_24 + 2'h1; // @[ISU.scala 42:82]
  wire [1:0] _busy_24_T_6 = busy_24 - 2'h1; // @[ISU.scala 44:68]
  wire [1:0] _busy_24_T_7 = busy_24 == 2'h0 ? 2'h0 : _busy_24_T_6; // @[ISU.scala 44:33]
  wire [1:0] _busy_25_T_2 = busy_25 + 2'h1; // @[ISU.scala 42:82]
  wire [1:0] _busy_25_T_6 = busy_25 - 2'h1; // @[ISU.scala 44:68]
  wire [1:0] _busy_25_T_7 = busy_25 == 2'h0 ? 2'h0 : _busy_25_T_6; // @[ISU.scala 44:33]
  wire [1:0] _busy_26_T_2 = busy_26 + 2'h1; // @[ISU.scala 42:82]
  wire [1:0] _busy_26_T_6 = busy_26 - 2'h1; // @[ISU.scala 44:68]
  wire [1:0] _busy_26_T_7 = busy_26 == 2'h0 ? 2'h0 : _busy_26_T_6; // @[ISU.scala 44:33]
  wire [1:0] _busy_27_T_2 = busy_27 + 2'h1; // @[ISU.scala 42:82]
  wire [1:0] _busy_27_T_6 = busy_27 - 2'h1; // @[ISU.scala 44:68]
  wire [1:0] _busy_27_T_7 = busy_27 == 2'h0 ? 2'h0 : _busy_27_T_6; // @[ISU.scala 44:33]
  wire [1:0] _busy_28_T_2 = busy_28 + 2'h1; // @[ISU.scala 42:82]
  wire [1:0] _busy_28_T_6 = busy_28 - 2'h1; // @[ISU.scala 44:68]
  wire [1:0] _busy_28_T_7 = busy_28 == 2'h0 ? 2'h0 : _busy_28_T_6; // @[ISU.scala 44:33]
  wire [1:0] _busy_29_T_2 = busy_29 + 2'h1; // @[ISU.scala 42:82]
  wire [1:0] _busy_29_T_6 = busy_29 - 2'h1; // @[ISU.scala 44:68]
  wire [1:0] _busy_29_T_7 = busy_29 == 2'h0 ? 2'h0 : _busy_29_T_6; // @[ISU.scala 44:33]
  wire [1:0] _busy_30_T_2 = busy_30 + 2'h1; // @[ISU.scala 42:82]
  wire [1:0] _busy_30_T_6 = busy_30 - 2'h1; // @[ISU.scala 44:68]
  wire [1:0] _busy_30_T_7 = busy_30 == 2'h0 ? 2'h0 : _busy_30_T_6; // @[ISU.scala 44:33]
  wire [1:0] _busy_31_T_2 = busy_31 + 2'h1; // @[ISU.scala 42:82]
  wire [1:0] _busy_31_T_6 = busy_31 - 2'h1; // @[ISU.scala 44:68]
  wire [1:0] _busy_31_T_7 = busy_31 == 2'h0 ? 2'h0 : _busy_31_T_6; // @[ISU.scala 44:33]
  assign io_from_idu_ready = ~io_from_idu_valid | _io_from_idu_ready_T_1; // @[RVCore.scala 66:56]
  assign io_to_exu_valid = io_from_idu_valid & ~AnyInvalidCondition; // @[RVCore.scala 67:40]
  assign io_to_exu_bits_cf_inst = io_from_idu_bits_cf_inst; // @[ISU.scala 86:16]
  assign io_to_exu_bits_cf_pc = io_from_idu_bits_cf_pc; // @[ISU.scala 86:16]
  assign io_to_exu_bits_cf_next_pc = io_from_idu_bits_cf_next_pc; // @[ISU.scala 86:16]
  assign io_to_exu_bits_cf_isBranch = io_from_idu_bits_cf_isBranch; // @[ISU.scala 86:16]
  assign io_to_exu_bits_ctrl_MemWrite = io_from_idu_bits_ctrl_MemWrite; // @[ISU.scala 87:18]
  assign io_to_exu_bits_ctrl_ResSrc = io_from_idu_bits_ctrl_ResSrc; // @[ISU.scala 87:18]
  assign io_to_exu_bits_ctrl_fuType = io_from_idu_bits_ctrl_fuType; // @[ISU.scala 87:18]
  assign io_to_exu_bits_ctrl_fuOpType = io_from_idu_bits_ctrl_fuOpType; // @[ISU.scala 87:18]
  assign io_to_exu_bits_ctrl_rs1 = io_from_idu_bits_ctrl_rs1; // @[ISU.scala 87:18]
  assign io_to_exu_bits_ctrl_rs2 = io_from_idu_bits_ctrl_rs2; // @[ISU.scala 87:18]
  assign io_to_exu_bits_ctrl_rfWen = io_from_idu_bits_ctrl_rfWen; // @[ISU.scala 87:18]
  assign io_to_exu_bits_ctrl_rd = io_from_idu_bits_ctrl_rd; // @[ISU.scala 87:18]
  assign io_to_exu_bits_data_fuSrc1 = 3'h4 == io_from_idu_bits_ctrl_fuSrc1Type ? 32'h0 : _io_to_exu_bits_data_fuSrc1_T_3
    ; // @[Mux.scala 81:58]
  assign io_to_exu_bits_data_fuSrc2 = 3'h5 == io_from_idu_bits_ctrl_fuSrc2Type ? 32'h4 : _io_to_exu_bits_data_fuSrc2_T_3
    ; // @[Mux.scala 81:58]
  assign io_to_exu_bits_data_imm = io_from_idu_bits_data_imm; // @[ISU.scala 89:18]
  assign io_to_exu_bits_data_rfSrc1 = io_from_reg_rfSrc1; // @[ISU.scala 92:25]
  assign io_to_exu_bits_data_rfSrc2 = io_from_reg_rfSrc2; // @[ISU.scala 93:25]
  always @(posedge clock) begin
    if (reset) begin // @[ISU.scala 33:23]
      busy_1 <= 2'h0; // @[ISU.scala 33:23]
    end else if (!(isFireSetMask[1] & wbuClearMask[1])) begin // @[ISU.scala 39:50]
      if (isFireSetMask[1]) begin // @[ISU.scala 41:38]
        if (busy_1 == 2'h3) begin // @[ISU.scala 42:33]
          busy_1 <= 2'h3;
        end else begin
          busy_1 <= _busy_1_T_2;
        end
      end else if (wbuClearMask[1]) begin // @[ISU.scala 43:40]
        busy_1 <= _busy_1_T_7; // @[ISU.scala 44:27]
      end
    end
    if (reset) begin // @[ISU.scala 33:23]
      busy_2 <= 2'h0; // @[ISU.scala 33:23]
    end else if (!(isFireSetMask[2] & wbuClearMask[2])) begin // @[ISU.scala 39:50]
      if (isFireSetMask[2]) begin // @[ISU.scala 41:38]
        if (busy_2 == 2'h3) begin // @[ISU.scala 42:33]
          busy_2 <= 2'h3;
        end else begin
          busy_2 <= _busy_2_T_2;
        end
      end else if (wbuClearMask[2]) begin // @[ISU.scala 43:40]
        busy_2 <= _busy_2_T_7; // @[ISU.scala 44:27]
      end
    end
    if (reset) begin // @[ISU.scala 33:23]
      busy_3 <= 2'h0; // @[ISU.scala 33:23]
    end else if (!(isFireSetMask[3] & wbuClearMask[3])) begin // @[ISU.scala 39:50]
      if (isFireSetMask[3]) begin // @[ISU.scala 41:38]
        if (busy_3 == 2'h3) begin // @[ISU.scala 42:33]
          busy_3 <= 2'h3;
        end else begin
          busy_3 <= _busy_3_T_2;
        end
      end else if (wbuClearMask[3]) begin // @[ISU.scala 43:40]
        busy_3 <= _busy_3_T_7; // @[ISU.scala 44:27]
      end
    end
    if (reset) begin // @[ISU.scala 33:23]
      busy_4 <= 2'h0; // @[ISU.scala 33:23]
    end else if (!(isFireSetMask[4] & wbuClearMask[4])) begin // @[ISU.scala 39:50]
      if (isFireSetMask[4]) begin // @[ISU.scala 41:38]
        if (busy_4 == 2'h3) begin // @[ISU.scala 42:33]
          busy_4 <= 2'h3;
        end else begin
          busy_4 <= _busy_4_T_2;
        end
      end else if (wbuClearMask[4]) begin // @[ISU.scala 43:40]
        busy_4 <= _busy_4_T_7; // @[ISU.scala 44:27]
      end
    end
    if (reset) begin // @[ISU.scala 33:23]
      busy_5 <= 2'h0; // @[ISU.scala 33:23]
    end else if (!(isFireSetMask[5] & wbuClearMask[5])) begin // @[ISU.scala 39:50]
      if (isFireSetMask[5]) begin // @[ISU.scala 41:38]
        if (busy_5 == 2'h3) begin // @[ISU.scala 42:33]
          busy_5 <= 2'h3;
        end else begin
          busy_5 <= _busy_5_T_2;
        end
      end else if (wbuClearMask[5]) begin // @[ISU.scala 43:40]
        busy_5 <= _busy_5_T_7; // @[ISU.scala 44:27]
      end
    end
    if (reset) begin // @[ISU.scala 33:23]
      busy_6 <= 2'h0; // @[ISU.scala 33:23]
    end else if (!(isFireSetMask[6] & wbuClearMask[6])) begin // @[ISU.scala 39:50]
      if (isFireSetMask[6]) begin // @[ISU.scala 41:38]
        if (busy_6 == 2'h3) begin // @[ISU.scala 42:33]
          busy_6 <= 2'h3;
        end else begin
          busy_6 <= _busy_6_T_2;
        end
      end else if (wbuClearMask[6]) begin // @[ISU.scala 43:40]
        busy_6 <= _busy_6_T_7; // @[ISU.scala 44:27]
      end
    end
    if (reset) begin // @[ISU.scala 33:23]
      busy_7 <= 2'h0; // @[ISU.scala 33:23]
    end else if (!(isFireSetMask[7] & wbuClearMask[7])) begin // @[ISU.scala 39:50]
      if (isFireSetMask[7]) begin // @[ISU.scala 41:38]
        if (busy_7 == 2'h3) begin // @[ISU.scala 42:33]
          busy_7 <= 2'h3;
        end else begin
          busy_7 <= _busy_7_T_2;
        end
      end else if (wbuClearMask[7]) begin // @[ISU.scala 43:40]
        busy_7 <= _busy_7_T_7; // @[ISU.scala 44:27]
      end
    end
    if (reset) begin // @[ISU.scala 33:23]
      busy_8 <= 2'h0; // @[ISU.scala 33:23]
    end else if (!(isFireSetMask[8] & wbuClearMask[8])) begin // @[ISU.scala 39:50]
      if (isFireSetMask[8]) begin // @[ISU.scala 41:38]
        if (busy_8 == 2'h3) begin // @[ISU.scala 42:33]
          busy_8 <= 2'h3;
        end else begin
          busy_8 <= _busy_8_T_2;
        end
      end else if (wbuClearMask[8]) begin // @[ISU.scala 43:40]
        busy_8 <= _busy_8_T_7; // @[ISU.scala 44:27]
      end
    end
    if (reset) begin // @[ISU.scala 33:23]
      busy_9 <= 2'h0; // @[ISU.scala 33:23]
    end else if (!(isFireSetMask[9] & wbuClearMask[9])) begin // @[ISU.scala 39:50]
      if (isFireSetMask[9]) begin // @[ISU.scala 41:38]
        if (busy_9 == 2'h3) begin // @[ISU.scala 42:33]
          busy_9 <= 2'h3;
        end else begin
          busy_9 <= _busy_9_T_2;
        end
      end else if (wbuClearMask[9]) begin // @[ISU.scala 43:40]
        busy_9 <= _busy_9_T_7; // @[ISU.scala 44:27]
      end
    end
    if (reset) begin // @[ISU.scala 33:23]
      busy_10 <= 2'h0; // @[ISU.scala 33:23]
    end else if (!(isFireSetMask[10] & wbuClearMask[10])) begin // @[ISU.scala 39:50]
      if (isFireSetMask[10]) begin // @[ISU.scala 41:38]
        if (busy_10 == 2'h3) begin // @[ISU.scala 42:33]
          busy_10 <= 2'h3;
        end else begin
          busy_10 <= _busy_10_T_2;
        end
      end else if (wbuClearMask[10]) begin // @[ISU.scala 43:40]
        busy_10 <= _busy_10_T_7; // @[ISU.scala 44:27]
      end
    end
    if (reset) begin // @[ISU.scala 33:23]
      busy_11 <= 2'h0; // @[ISU.scala 33:23]
    end else if (!(isFireSetMask[11] & wbuClearMask[11])) begin // @[ISU.scala 39:50]
      if (isFireSetMask[11]) begin // @[ISU.scala 41:38]
        if (busy_11 == 2'h3) begin // @[ISU.scala 42:33]
          busy_11 <= 2'h3;
        end else begin
          busy_11 <= _busy_11_T_2;
        end
      end else if (wbuClearMask[11]) begin // @[ISU.scala 43:40]
        busy_11 <= _busy_11_T_7; // @[ISU.scala 44:27]
      end
    end
    if (reset) begin // @[ISU.scala 33:23]
      busy_12 <= 2'h0; // @[ISU.scala 33:23]
    end else if (!(isFireSetMask[12] & wbuClearMask[12])) begin // @[ISU.scala 39:50]
      if (isFireSetMask[12]) begin // @[ISU.scala 41:38]
        if (busy_12 == 2'h3) begin // @[ISU.scala 42:33]
          busy_12 <= 2'h3;
        end else begin
          busy_12 <= _busy_12_T_2;
        end
      end else if (wbuClearMask[12]) begin // @[ISU.scala 43:40]
        busy_12 <= _busy_12_T_7; // @[ISU.scala 44:27]
      end
    end
    if (reset) begin // @[ISU.scala 33:23]
      busy_13 <= 2'h0; // @[ISU.scala 33:23]
    end else if (!(isFireSetMask[13] & wbuClearMask[13])) begin // @[ISU.scala 39:50]
      if (isFireSetMask[13]) begin // @[ISU.scala 41:38]
        if (busy_13 == 2'h3) begin // @[ISU.scala 42:33]
          busy_13 <= 2'h3;
        end else begin
          busy_13 <= _busy_13_T_2;
        end
      end else if (wbuClearMask[13]) begin // @[ISU.scala 43:40]
        busy_13 <= _busy_13_T_7; // @[ISU.scala 44:27]
      end
    end
    if (reset) begin // @[ISU.scala 33:23]
      busy_14 <= 2'h0; // @[ISU.scala 33:23]
    end else if (!(isFireSetMask[14] & wbuClearMask[14])) begin // @[ISU.scala 39:50]
      if (isFireSetMask[14]) begin // @[ISU.scala 41:38]
        if (busy_14 == 2'h3) begin // @[ISU.scala 42:33]
          busy_14 <= 2'h3;
        end else begin
          busy_14 <= _busy_14_T_2;
        end
      end else if (wbuClearMask[14]) begin // @[ISU.scala 43:40]
        busy_14 <= _busy_14_T_7; // @[ISU.scala 44:27]
      end
    end
    if (reset) begin // @[ISU.scala 33:23]
      busy_15 <= 2'h0; // @[ISU.scala 33:23]
    end else if (!(isFireSetMask[15] & wbuClearMask[15])) begin // @[ISU.scala 39:50]
      if (isFireSetMask[15]) begin // @[ISU.scala 41:38]
        if (busy_15 == 2'h3) begin // @[ISU.scala 42:33]
          busy_15 <= 2'h3;
        end else begin
          busy_15 <= _busy_15_T_2;
        end
      end else if (wbuClearMask[15]) begin // @[ISU.scala 43:40]
        busy_15 <= _busy_15_T_7; // @[ISU.scala 44:27]
      end
    end
    if (reset) begin // @[ISU.scala 33:23]
      busy_16 <= 2'h0; // @[ISU.scala 33:23]
    end else if (!(isFireSetMask[16] & wbuClearMask[16])) begin // @[ISU.scala 39:50]
      if (isFireSetMask[16]) begin // @[ISU.scala 41:38]
        if (busy_16 == 2'h3) begin // @[ISU.scala 42:33]
          busy_16 <= 2'h3;
        end else begin
          busy_16 <= _busy_16_T_2;
        end
      end else if (wbuClearMask[16]) begin // @[ISU.scala 43:40]
        busy_16 <= _busy_16_T_7; // @[ISU.scala 44:27]
      end
    end
    if (reset) begin // @[ISU.scala 33:23]
      busy_17 <= 2'h0; // @[ISU.scala 33:23]
    end else if (!(isFireSetMask[17] & wbuClearMask[17])) begin // @[ISU.scala 39:50]
      if (isFireSetMask[17]) begin // @[ISU.scala 41:38]
        if (busy_17 == 2'h3) begin // @[ISU.scala 42:33]
          busy_17 <= 2'h3;
        end else begin
          busy_17 <= _busy_17_T_2;
        end
      end else if (wbuClearMask[17]) begin // @[ISU.scala 43:40]
        busy_17 <= _busy_17_T_7; // @[ISU.scala 44:27]
      end
    end
    if (reset) begin // @[ISU.scala 33:23]
      busy_18 <= 2'h0; // @[ISU.scala 33:23]
    end else if (!(isFireSetMask[18] & wbuClearMask[18])) begin // @[ISU.scala 39:50]
      if (isFireSetMask[18]) begin // @[ISU.scala 41:38]
        if (busy_18 == 2'h3) begin // @[ISU.scala 42:33]
          busy_18 <= 2'h3;
        end else begin
          busy_18 <= _busy_18_T_2;
        end
      end else if (wbuClearMask[18]) begin // @[ISU.scala 43:40]
        busy_18 <= _busy_18_T_7; // @[ISU.scala 44:27]
      end
    end
    if (reset) begin // @[ISU.scala 33:23]
      busy_19 <= 2'h0; // @[ISU.scala 33:23]
    end else if (!(isFireSetMask[19] & wbuClearMask[19])) begin // @[ISU.scala 39:50]
      if (isFireSetMask[19]) begin // @[ISU.scala 41:38]
        if (busy_19 == 2'h3) begin // @[ISU.scala 42:33]
          busy_19 <= 2'h3;
        end else begin
          busy_19 <= _busy_19_T_2;
        end
      end else if (wbuClearMask[19]) begin // @[ISU.scala 43:40]
        busy_19 <= _busy_19_T_7; // @[ISU.scala 44:27]
      end
    end
    if (reset) begin // @[ISU.scala 33:23]
      busy_20 <= 2'h0; // @[ISU.scala 33:23]
    end else if (!(isFireSetMask[20] & wbuClearMask[20])) begin // @[ISU.scala 39:50]
      if (isFireSetMask[20]) begin // @[ISU.scala 41:38]
        if (busy_20 == 2'h3) begin // @[ISU.scala 42:33]
          busy_20 <= 2'h3;
        end else begin
          busy_20 <= _busy_20_T_2;
        end
      end else if (wbuClearMask[20]) begin // @[ISU.scala 43:40]
        busy_20 <= _busy_20_T_7; // @[ISU.scala 44:27]
      end
    end
    if (reset) begin // @[ISU.scala 33:23]
      busy_21 <= 2'h0; // @[ISU.scala 33:23]
    end else if (!(isFireSetMask[21] & wbuClearMask[21])) begin // @[ISU.scala 39:50]
      if (isFireSetMask[21]) begin // @[ISU.scala 41:38]
        if (busy_21 == 2'h3) begin // @[ISU.scala 42:33]
          busy_21 <= 2'h3;
        end else begin
          busy_21 <= _busy_21_T_2;
        end
      end else if (wbuClearMask[21]) begin // @[ISU.scala 43:40]
        busy_21 <= _busy_21_T_7; // @[ISU.scala 44:27]
      end
    end
    if (reset) begin // @[ISU.scala 33:23]
      busy_22 <= 2'h0; // @[ISU.scala 33:23]
    end else if (!(isFireSetMask[22] & wbuClearMask[22])) begin // @[ISU.scala 39:50]
      if (isFireSetMask[22]) begin // @[ISU.scala 41:38]
        if (busy_22 == 2'h3) begin // @[ISU.scala 42:33]
          busy_22 <= 2'h3;
        end else begin
          busy_22 <= _busy_22_T_2;
        end
      end else if (wbuClearMask[22]) begin // @[ISU.scala 43:40]
        busy_22 <= _busy_22_T_7; // @[ISU.scala 44:27]
      end
    end
    if (reset) begin // @[ISU.scala 33:23]
      busy_23 <= 2'h0; // @[ISU.scala 33:23]
    end else if (!(isFireSetMask[23] & wbuClearMask[23])) begin // @[ISU.scala 39:50]
      if (isFireSetMask[23]) begin // @[ISU.scala 41:38]
        if (busy_23 == 2'h3) begin // @[ISU.scala 42:33]
          busy_23 <= 2'h3;
        end else begin
          busy_23 <= _busy_23_T_2;
        end
      end else if (wbuClearMask[23]) begin // @[ISU.scala 43:40]
        busy_23 <= _busy_23_T_7; // @[ISU.scala 44:27]
      end
    end
    if (reset) begin // @[ISU.scala 33:23]
      busy_24 <= 2'h0; // @[ISU.scala 33:23]
    end else if (!(isFireSetMask[24] & wbuClearMask[24])) begin // @[ISU.scala 39:50]
      if (isFireSetMask[24]) begin // @[ISU.scala 41:38]
        if (busy_24 == 2'h3) begin // @[ISU.scala 42:33]
          busy_24 <= 2'h3;
        end else begin
          busy_24 <= _busy_24_T_2;
        end
      end else if (wbuClearMask[24]) begin // @[ISU.scala 43:40]
        busy_24 <= _busy_24_T_7; // @[ISU.scala 44:27]
      end
    end
    if (reset) begin // @[ISU.scala 33:23]
      busy_25 <= 2'h0; // @[ISU.scala 33:23]
    end else if (!(isFireSetMask[25] & wbuClearMask[25])) begin // @[ISU.scala 39:50]
      if (isFireSetMask[25]) begin // @[ISU.scala 41:38]
        if (busy_25 == 2'h3) begin // @[ISU.scala 42:33]
          busy_25 <= 2'h3;
        end else begin
          busy_25 <= _busy_25_T_2;
        end
      end else if (wbuClearMask[25]) begin // @[ISU.scala 43:40]
        busy_25 <= _busy_25_T_7; // @[ISU.scala 44:27]
      end
    end
    if (reset) begin // @[ISU.scala 33:23]
      busy_26 <= 2'h0; // @[ISU.scala 33:23]
    end else if (!(isFireSetMask[26] & wbuClearMask[26])) begin // @[ISU.scala 39:50]
      if (isFireSetMask[26]) begin // @[ISU.scala 41:38]
        if (busy_26 == 2'h3) begin // @[ISU.scala 42:33]
          busy_26 <= 2'h3;
        end else begin
          busy_26 <= _busy_26_T_2;
        end
      end else if (wbuClearMask[26]) begin // @[ISU.scala 43:40]
        busy_26 <= _busy_26_T_7; // @[ISU.scala 44:27]
      end
    end
    if (reset) begin // @[ISU.scala 33:23]
      busy_27 <= 2'h0; // @[ISU.scala 33:23]
    end else if (!(isFireSetMask[27] & wbuClearMask[27])) begin // @[ISU.scala 39:50]
      if (isFireSetMask[27]) begin // @[ISU.scala 41:38]
        if (busy_27 == 2'h3) begin // @[ISU.scala 42:33]
          busy_27 <= 2'h3;
        end else begin
          busy_27 <= _busy_27_T_2;
        end
      end else if (wbuClearMask[27]) begin // @[ISU.scala 43:40]
        busy_27 <= _busy_27_T_7; // @[ISU.scala 44:27]
      end
    end
    if (reset) begin // @[ISU.scala 33:23]
      busy_28 <= 2'h0; // @[ISU.scala 33:23]
    end else if (!(isFireSetMask[28] & wbuClearMask[28])) begin // @[ISU.scala 39:50]
      if (isFireSetMask[28]) begin // @[ISU.scala 41:38]
        if (busy_28 == 2'h3) begin // @[ISU.scala 42:33]
          busy_28 <= 2'h3;
        end else begin
          busy_28 <= _busy_28_T_2;
        end
      end else if (wbuClearMask[28]) begin // @[ISU.scala 43:40]
        busy_28 <= _busy_28_T_7; // @[ISU.scala 44:27]
      end
    end
    if (reset) begin // @[ISU.scala 33:23]
      busy_29 <= 2'h0; // @[ISU.scala 33:23]
    end else if (!(isFireSetMask[29] & wbuClearMask[29])) begin // @[ISU.scala 39:50]
      if (isFireSetMask[29]) begin // @[ISU.scala 41:38]
        if (busy_29 == 2'h3) begin // @[ISU.scala 42:33]
          busy_29 <= 2'h3;
        end else begin
          busy_29 <= _busy_29_T_2;
        end
      end else if (wbuClearMask[29]) begin // @[ISU.scala 43:40]
        busy_29 <= _busy_29_T_7; // @[ISU.scala 44:27]
      end
    end
    if (reset) begin // @[ISU.scala 33:23]
      busy_30 <= 2'h0; // @[ISU.scala 33:23]
    end else if (!(isFireSetMask[30] & wbuClearMask[30])) begin // @[ISU.scala 39:50]
      if (isFireSetMask[30]) begin // @[ISU.scala 41:38]
        if (busy_30 == 2'h3) begin // @[ISU.scala 42:33]
          busy_30 <= 2'h3;
        end else begin
          busy_30 <= _busy_30_T_2;
        end
      end else if (wbuClearMask[30]) begin // @[ISU.scala 43:40]
        busy_30 <= _busy_30_T_7; // @[ISU.scala 44:27]
      end
    end
    if (reset) begin // @[ISU.scala 33:23]
      busy_31 <= 2'h0; // @[ISU.scala 33:23]
    end else if (!(isFireSetMask[31] & wbuClearMask[31])) begin // @[ISU.scala 39:50]
      if (isFireSetMask[31]) begin // @[ISU.scala 41:38]
        if (busy_31 == 2'h3) begin // @[ISU.scala 42:33]
          busy_31 <= 2'h3;
        end else begin
          busy_31 <= _busy_31_T_2;
        end
      end else if (wbuClearMask[31]) begin // @[ISU.scala 43:40]
        busy_31 <= _busy_31_T_7; // @[ISU.scala 44:27]
      end
    end
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
  busy_1 = _RAND_0[1:0];
  _RAND_1 = {1{`RANDOM}};
  busy_2 = _RAND_1[1:0];
  _RAND_2 = {1{`RANDOM}};
  busy_3 = _RAND_2[1:0];
  _RAND_3 = {1{`RANDOM}};
  busy_4 = _RAND_3[1:0];
  _RAND_4 = {1{`RANDOM}};
  busy_5 = _RAND_4[1:0];
  _RAND_5 = {1{`RANDOM}};
  busy_6 = _RAND_5[1:0];
  _RAND_6 = {1{`RANDOM}};
  busy_7 = _RAND_6[1:0];
  _RAND_7 = {1{`RANDOM}};
  busy_8 = _RAND_7[1:0];
  _RAND_8 = {1{`RANDOM}};
  busy_9 = _RAND_8[1:0];
  _RAND_9 = {1{`RANDOM}};
  busy_10 = _RAND_9[1:0];
  _RAND_10 = {1{`RANDOM}};
  busy_11 = _RAND_10[1:0];
  _RAND_11 = {1{`RANDOM}};
  busy_12 = _RAND_11[1:0];
  _RAND_12 = {1{`RANDOM}};
  busy_13 = _RAND_12[1:0];
  _RAND_13 = {1{`RANDOM}};
  busy_14 = _RAND_13[1:0];
  _RAND_14 = {1{`RANDOM}};
  busy_15 = _RAND_14[1:0];
  _RAND_15 = {1{`RANDOM}};
  busy_16 = _RAND_15[1:0];
  _RAND_16 = {1{`RANDOM}};
  busy_17 = _RAND_16[1:0];
  _RAND_17 = {1{`RANDOM}};
  busy_18 = _RAND_17[1:0];
  _RAND_18 = {1{`RANDOM}};
  busy_19 = _RAND_18[1:0];
  _RAND_19 = {1{`RANDOM}};
  busy_20 = _RAND_19[1:0];
  _RAND_20 = {1{`RANDOM}};
  busy_21 = _RAND_20[1:0];
  _RAND_21 = {1{`RANDOM}};
  busy_22 = _RAND_21[1:0];
  _RAND_22 = {1{`RANDOM}};
  busy_23 = _RAND_22[1:0];
  _RAND_23 = {1{`RANDOM}};
  busy_24 = _RAND_23[1:0];
  _RAND_24 = {1{`RANDOM}};
  busy_25 = _RAND_24[1:0];
  _RAND_25 = {1{`RANDOM}};
  busy_26 = _RAND_25[1:0];
  _RAND_26 = {1{`RANDOM}};
  busy_27 = _RAND_26[1:0];
  _RAND_27 = {1{`RANDOM}};
  busy_28 = _RAND_27[1:0];
  _RAND_28 = {1{`RANDOM}};
  busy_29 = _RAND_28[1:0];
  _RAND_29 = {1{`RANDOM}};
  busy_30 = _RAND_29[1:0];
  _RAND_30 = {1{`RANDOM}};
  busy_31 = _RAND_30[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
