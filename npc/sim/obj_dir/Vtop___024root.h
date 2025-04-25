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
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__ifu_io_redirect_valid;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__idu_io_to_isu_ready;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__idu_io_to_isu_bits_ctrl_rfWen;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__isu_io_to_exu_valid;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__isu_io_wb_RegWrite;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_valid;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_valid;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT___T;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__valid;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT___GEN_1;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_isBranch;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT___T_2;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__valid_1;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_cf_isBranch;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_MemWrite;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_ResSrc;
        CData/*2:0*/ top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc1Type;
        CData/*2:0*/ top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc2Type;
        CData/*2:0*/ top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuType;
        CData/*6:0*/ top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuOpType;
        CData/*4:0*/ top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1;
        CData/*4:0*/ top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rfWen;
        CData/*4:0*/ top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rd;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__valid_2;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_isBranch;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_MemWrite;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_ResSrc;
        CData/*2:0*/ top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuType;
        CData/*6:0*/ top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_rfWen;
        CData/*4:0*/ top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_rd;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__valid_3;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_ctrl_ResSrc;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_ctrl_rfWen;
        CData/*4:0*/ top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_ctrl_rd;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__io_commit_valid_REG;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__needBruRes;
        CData/*2:0*/ top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_99;
        CData/*2:0*/ top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_114;
        CData/*2:0*/ top__DOT__ysyx_core_rv32e__DOT__idu__DOT__decodelist_0;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_140;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_155;
        CData/*4:0*/ top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_181;
        CData/*6:0*/ top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_196;
        CData/*2:0*/ top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_222;
        CData/*2:0*/ top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_237;
        CData/*2:0*/ top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_263;
        CData/*2:0*/ top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_278;
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
    };
    struct {
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_11;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_12;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_13;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_14;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_15;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___GEN_13;
        CData/*1:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT___GEN_29;
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
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0_io_in_valid;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__exu__DOT___jalrBruRes_valid_T;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__exu__DOT__jalrBruRes_valid;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__exu__DOT__typebBruRes_valid;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csrBruRes_valid;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__exu__DOT__bruRes_valid;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__exu__DOT___T;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__slt;
        CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__csrWen;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__wbuClearMask;
        SData/*15:0*/ top__DOT__ysyx_core_rv32e__DOT__isu__DOT__isFireSetMask;
        VL_OUT(inst,31,0);
        VL_OUT(pc,31,0);
        VL_OUT(commit_pc,31,0);
        VL_OUT(commit_next_pc,31,0);
        VL_OUT(commit_inst,31,0);
        IData/*31:0*/ top__DOT__ToMem_Addr;
        IData/*31:0*/ top__DOT__ysyx_instmem__DOT__DPI_DataFromMem;
        IData/*31:0*/ top__DOT__ysyx_datamem__DOT__DPI_DataFromMem;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__ifu_io_redirect_target;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__isu_io_to_exu_bits_data_rfSrc1;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__isu_io_to_exu_bits_data_rfSrc2;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__exu_io_to_wbu_bits_data_csrRdata;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_pc;
    };
    struct {
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
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_data_csrRdata;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__io_commit_pc_REG;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__io_commit_next_pc_REG;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__io_commit_inst_REG;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__pc;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__predictPc;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__ifu__DOT___next_pc_T_4;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__xorRes;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__mtvec;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__mcause;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__mepc;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__mstatus;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__csr;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT___csrUpdate_T_2;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT___csrUpdate_T_6;
        IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__csrUpdate;
        IData/*31:0*/ __Vtask_top__DOT__ysyx_instmem__DOT__npc_inst_read__0__rdata;
        IData/*31:0*/ __Vtask_top__DOT__ysyx_datamem__DOT__npc_pmem_read__2__rdata;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*32:0*/ top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__adderRes;
        QData/*32:0*/ top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__res;
        VlUnpacked<IData/*31:0*/, 16> top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x;
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
