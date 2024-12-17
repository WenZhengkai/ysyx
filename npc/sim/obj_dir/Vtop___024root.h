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
    CData/*7:0*/ top__DOT__Wmask;
    CData/*4:0*/ top__DOT__ysyx_core_rv32im__DOT__ALUCtrl;
    CData/*0:0*/ top__DOT__ysyx_core_rv32im__DOT__ysyx_LSU__DOT__sig;
    CData/*0:0*/ top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__BranchHit;
    CData/*0:0*/ top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__RtypeMul;
    CData/*0:0*/ top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__hit;
    CData/*0:0*/ top__DOT__ysyx_core_rv32im__DOT__ysyx_ALU__DOT____VdfgTmp_h30e473f3__0;
    CData/*0:0*/ top__DOT__ysyx_core_rv32im__DOT__ysyx_ALU__DOT____VdfgTmp_h30e9c121__0;
    CData/*0:0*/ top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__hit;
    CData/*0:0*/ top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__hit;
    CData/*6:0*/ __Vtableidx1;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    SData/*12:0*/ top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls;
    SData/*9:0*/ __Vtableidx2;
    SData/*10:0*/ __Vtableidx3;
    VL_OUT(inst,31,0);
    VL_OUT(pc,31,0);
    IData/*31:0*/ top__DOT__ToMem_Data;
    IData/*31:0*/ top__DOT__ysyx_instmem__DOT__DPI_DataFromMem;
    IData/*31:0*/ top__DOT__ysyx_datamem__DOT__DPI_DataFromMem;
    IData/*31:0*/ top__DOT__ysyx_core_rv32im__DOT__tnpc;
    IData/*31:0*/ top__DOT__ysyx_core_rv32im__DOT__src1;
    IData/*31:0*/ top__DOT__ysyx_core_rv32im__DOT__ImmExt;
    IData/*31:0*/ top__DOT__ysyx_core_rv32im__DOT__srcb;
    IData/*31:0*/ top__DOT__ysyx_core_rv32im__DOT__Result;
    IData/*31:0*/ top__DOT__ysyx_core_rv32im__DOT__PCplus4;
    IData/*31:0*/ top__DOT__ysyx_core_rv32im__DOT__PCTarget_srca;
    IData/*31:0*/ top__DOT__ysyx_core_rv32im__DOT__DataFromMem;
    IData/*31:0*/ top__DOT__ysyx_core_rv32im__DOT__ysyx_LSU__DOT____VdfgTmp_hd1f2e586__0;
    IData/*31:0*/ top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__lut_out;
    IData/*31:0*/ top__DOT__ysyx_core_rv32im__DOT__ysyx_ALU__DOT__ALURes_temp;
    IData/*31:0*/ top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__lut_out;
    IData/*31:0*/ top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out;
    IData/*31:0*/ __Vtask_top__DOT__ysyx_instmem__DOT__npc_inst_read__0__rdata;
    IData/*31:0*/ __Vtask_top__DOT__ysyx_datamem__DOT__npc_pmem_read__2__rdata;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 16> top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__x;
    VlUnpacked<QData/*32:0*/, 2> top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*0:0*/, 2> top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 2> top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list;
    VlUnpacked<QData/*32:0*/, 2> top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*0:0*/, 2> top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 2> top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__data_list;
    VlUnpacked<QData/*34:0*/, 5> top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*2:0*/, 5> top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 5> top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list;
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
