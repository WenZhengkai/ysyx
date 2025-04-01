// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_OUT8(commit_valid,0,0);
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__ifu_io_to_idu_ready;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__ifu_io_to_idu_bits_isBranch;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__ifu_io_from_exu_bruRes_valid;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__idu_io_to_isu_ready;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__idu_io_to_isu_bits_ctrl_rfWen;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__isu_io_to_exu_valid;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__isu_io_wb_RegWrite;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_valid;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_valid;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT___T;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__valid;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT___idu_io_from_ifu_bits_T;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_isBranch;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__valid_1;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_cf_isBranch;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_MemWrite;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_ResSrc;
        CData/*2:0*/ top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc1Type;
        CData/*2:0*/ top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc2Type;
        CData/*6:0*/ top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuOpType;
        CData/*4:0*/ top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1;
        CData/*4:0*/ top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rfWen;
        CData/*4:0*/ top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rd;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__valid_2;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_isBranch;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_MemWrite;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_ResSrc;
        CData/*6:0*/ top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_rfWen;
        CData/*4:0*/ top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_rd;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__valid_3;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_ctrl_ResSrc;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_ctrl_rfWen;
        CData/*4:0*/ top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_ctrl_rd;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__io_commit_valid_REG;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__valid;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__bruRes_valid;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__ifu__DOT___GEN_7;
        CData/*2:0*/ top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_88;
        CData/*2:0*/ top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_103;
        CData/*2:0*/ top__DOT__ysyx_core_rv32e__DOT__idu__DOT__decodelist_0;
        CData/*4:0*/ top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_159;
        CData/*6:0*/ top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_174;
        CData/*2:0*/ top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_196;
        CData/*2:0*/ top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_211;
        CData/*2:0*/ top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_232;
        CData/*2:0*/ top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_247;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_1;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_2;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_3;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_4;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_5;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_6;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_7;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_8;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_9;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_10;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_11;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_12;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_13;
    };
    struct {
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_14;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_15;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_16;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_17;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_18;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_19;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_20;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_21;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_22;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_23;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_24;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_25;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_26;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_27;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_28;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_29;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_30;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_31;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___GEN_20;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___GEN_52;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_1_T_2;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_1_T_7;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_2_T_2;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_2_T_7;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_3_T_2;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_3_T_7;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_4_T_2;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_4_T_7;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_5_T_2;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_5_T_7;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_6_T_2;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_6_T_7;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_7_T_2;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_7_T_7;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_8_T_2;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_8_T_7;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_9_T_2;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_9_T_7;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_10_T_2;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_10_T_7;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_11_T_2;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_11_T_7;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_12_T_2;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_12_T_7;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_13_T_2;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_13_T_7;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_14_T_2;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_14_T_7;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_15_T_2;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_15_T_7;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_16_T_2;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_16_T_7;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_17_T_2;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_17_T_7;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_18_T_2;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_18_T_7;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_19_T_2;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_19_T_7;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_20_T_2;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_20_T_7;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_21_T_2;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_21_T_7;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_22_T_2;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_22_T_7;
    };
    struct {
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_23_T_2;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_23_T_7;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_24_T_2;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_24_T_7;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_25_T_2;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_25_T_7;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_26_T_2;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_26_T_7;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_27_T_2;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_27_T_7;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_28_T_2;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_28_T_7;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_29_T_2;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_29_T_7;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_30_T_2;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_30_T_7;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_31_T_2;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_31_T_7;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__exu__DOT___jalrBruRes_valid_T;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__exu__DOT__jalrBruRes_valid;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__exu__DOT__typebBruRes_valid;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__slt;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __VactContinue;
        VL_OUT(inst,31,0);
        VL_OUT(pc,31,0);
        VL_OUT(commit_pc,31,0);
        VL_OUT(commit_next_pc,31,0);
        VL_OUT(commit_inst,31,0);
        IData/*31:0*/ top__DOT__ToMem_Addr;
        IData/*31:0*/ top__DOT__ysyx_instmem__DOT__DPI_DataFromMem;
        IData/*31:0*/ top__DOT__ysyx_datamem__DOT__DPI_DataFromMem;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__ifu_io_to_idu_bits_next_pc;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__ifu_io_from_exu_bruRes_targetPc;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__isu_io_to_exu_bits_data_rfSrc1;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__isu_io_to_exu_bits_data_rfSrc2;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_pc;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_next_pc;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_cf_inst;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_cf_pc;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_cf_next_pc;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_data_imm;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_inst;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_pc;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_next_pc;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc1;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc2;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_imm;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_rfSrc1;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_rfSrc2;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_cf_inst;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_cf_pc;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_cf_next_pc;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_data_Alu0Res_bits;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_data_data_from_mem;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__io_commit_pc_REG;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__io_commit_next_pc_REG;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__io_commit_inst_REG;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__pc;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__bruRes_targetPc;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__ifu__DOT___next_pc_T_1;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__ifu__DOT___GEN_0;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__wbuClearMask;
    };
    struct {
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__isFireSetMask;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__xorRes;
        IData/*31:0*/ __Vtask_top__DOT__ysyx_instmem__DOT__npc_inst_read__0__rdata;
        IData/*31:0*/ __Vtask_top__DOT__ysyx_datamem__DOT__npc_pmem_read__2__rdata;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*32:0*/ top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__adderRes;
        QData/*32:0*/ top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__res;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
