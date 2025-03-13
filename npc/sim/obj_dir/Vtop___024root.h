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
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(commit_valid,0,0);
    CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_reg_RegWrite;
    CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_valid_r;
    CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_valid_r;
    CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_idu_to_wbu_ResSrc;
    CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_idu_to_reg_RegWrite;
    CData/*4:0*/ top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_idu_to_reg_rd;
    CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__lsu_io_from_exu_valid_r;
    CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__lsu_io_from_exu_bits_r_idu_to_wbu_ResSrc;
    CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__lsu_io_from_exu_bits_r_idu_to_reg_RegWrite;
    CData/*4:0*/ top__DOT__ysyx_core_rv32e__DOT__lsu_io_from_exu_bits_r_idu_to_reg_rd;
    CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_valid_r;
    CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_idu_to_wbu_ResSrc;
    CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_idu_to_reg_RegWrite;
    CData/*4:0*/ top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_idu_to_reg_rd;
    CData/*0:0*/ top__DOT__ysyx_core_rv32e__DOT__io_commit_valid_REG;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    VL_OUT(inst,31,0);
    VL_OUT(pc,31,0);
    VL_OUT(commit_pc,31,0);
    VL_OUT(commit_next_pc,31,0);
    VL_OUT(commit_inst,31,0);
    IData/*31:0*/ top__DOT__ysyx_instmem__DOT__DPI_DataFromMem;
    IData/*31:0*/ top__DOT__ysyx_datamem__DOT__DPI_DataFromMem;
    IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__ifu_io_to_idu_bits_next_pc;
    IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_lsu_data;
    IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst;
    IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_pc;
    IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_next_pc;
    IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_srca;
    IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_srcb;
    IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_idu_to_lsu_data;
    IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_idu_to_reg_pc;
    IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_idu_to_reg_next_pc;
    IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_idu_to_reg_inst;
    IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__lsu_io_from_exu_bits_r_idu_to_lsu_data;
    IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__lsu_io_from_exu_bits_r_idu_to_reg_pc;
    IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__lsu_io_from_exu_bits_r_idu_to_reg_next_pc;
    IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__lsu_io_from_exu_bits_r_idu_to_reg_inst;
    IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__lsu_io_from_exu_bits_r_exu_to_wbu_ALURes;
    IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_data_from_mem;
    IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_idu_to_reg_pc;
    IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_idu_to_reg_next_pc;
    IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_idu_to_reg_inst;
    IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_exu_to_wbu_ALURes;
    IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__io_commit_pc_REG;
    IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__io_commit_next_pc_REG;
    IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__io_commit_inst_REG;
    IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__pc;
    IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile_src2;
    IData/*31:0*/ top__DOT__ysyx_core_rv32e__DOT__idu__DOT__ImmExt;
    IData/*31:0*/ __Vtask_top__DOT__ysyx_instmem__DOT__npc_inst_read__0__rdata;
    IData/*31:0*/ __Vtask_top__DOT__ysyx_datamem__DOT__npc_pmem_read__2__rdata;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 16> top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
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
