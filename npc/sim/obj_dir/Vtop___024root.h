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
    CData/*4:0*/ top__DOT__ysyx_core__DOT__ALUCtrl;
    CData/*7:0*/ top__DOT__ysyx_core__DOT__Wmask;
    CData/*0:0*/ top__DOT__ysyx_core__DOT__dw;
    CData/*0:0*/ top__DOT__ysyx_core__DOT__ysyx_LSU__DOT__sig;
    CData/*0:0*/ top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__BranchHit;
    CData/*0:0*/ top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__RtypeMul;
    CData/*0:0*/ top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__hit;
    CData/*0:0*/ top__DOT__ysyx_core__DOT__ysyx_ALU__DOT____VdfgTmp_h30e473f3__0;
    CData/*0:0*/ top__DOT__ysyx_core__DOT__ysyx_ALU__DOT____VdfgTmp_h30e9c121__0;
    CData/*0:0*/ top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__hit;
    CData/*0:0*/ top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__hit;
    CData/*6:0*/ __Vtableidx1;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    SData/*12:0*/ top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls;
    SData/*9:0*/ __Vtableidx2;
    SData/*10:0*/ __Vtableidx3;
    VL_IN(inst,31,0);
    IData/*31:0*/ top__DOT__ysyx_core__DOT__ysyx_ALU__DOT__divw_res;
    IData/*31:0*/ top__DOT__ysyx_core__DOT__ysyx_ALU__DOT__remw_res;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VL_OUT64(pc,63,0);
    QData/*63:0*/ top__DOT__ysyx_core__DOT__tnpc;
    QData/*63:0*/ top__DOT__ysyx_core__DOT__src1;
    QData/*63:0*/ top__DOT__ysyx_core__DOT__src2;
    QData/*63:0*/ top__DOT__ysyx_core__DOT__ImmExt;
    QData/*63:0*/ top__DOT__ysyx_core__DOT__srcb;
    QData/*63:0*/ top__DOT__ysyx_core__DOT__ALURes;
    QData/*63:0*/ top__DOT__ysyx_core__DOT__Result;
    QData/*63:0*/ top__DOT__ysyx_core__DOT__PCplus4;
    QData/*63:0*/ top__DOT__ysyx_core__DOT__PCTarget_srca;
    QData/*63:0*/ top__DOT__ysyx_core__DOT__DataFromMem;
    QData/*63:0*/ top__DOT__ysyx_core__DOT__ysyx_LSU__DOT__Wmask64;
    QData/*63:0*/ top__DOT__ysyx_core__DOT__ysyx_LSU__DOT__DPI_DataFromMem;
    QData/*63:0*/ top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__lut_out;
    QData/*63:0*/ top__DOT__ysyx_core__DOT__ysyx_ALU__DOT__ALURes_temp;
    QData/*63:0*/ top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__lut_out;
    QData/*63:0*/ top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out;
    QData/*63:0*/ __Vtask_top__DOT__ysyx_core__DOT__ysyx_LSU__DOT__npc_pmem_read__0__rdata;
    VlUnpacked<QData/*63:0*/, 32> top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x;
    VlUnpacked<VlWide<3>/*64:0*/, 2> top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*0:0*/, 2> top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 2> top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list;
    VlUnpacked<VlWide<3>/*64:0*/, 2> top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*0:0*/, 2> top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 2> top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__data_list;
    VlUnpacked<VlWide<3>/*66:0*/, 5> top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*2:0*/, 5> top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 5> top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
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
