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
    VL_OUT8(MemWrite,0,0);
    CData/*2:0*/ top__DOT__ysyx_core__DOT__ALUCtrl;
    CData/*1:0*/ top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__ALUop;
    CData/*0:0*/ top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__hit;
    CData/*0:0*/ top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__hit;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*1:0*/ __Vtrigrprev__TOP__top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__ALUop;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    VL_IN(DataFromMem,31,0);
    VL_IN(inst,31,0);
    VL_OUT(pc,31,0);
    VL_OUT(AddrMem,31,0);
    VL_OUT(DataToMem,31,0);
    IData/*31:0*/ top__DOT__ysyx_core__DOT__tnpc;
    IData/*31:0*/ top__DOT__ysyx_core__DOT__Result;
    IData/*31:0*/ top__DOT__ysyx_core__DOT__ImmExt;
    IData/*31:0*/ top__DOT__ysyx_core__DOT__srcb;
    IData/*31:0*/ top__DOT__ysyx_core__DOT__ALURes;
    IData/*31:0*/ top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__lut_out;
    IData/*31:0*/ top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x;
    VlUnpacked<QData/*32:0*/, 2> top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*0:0*/, 2> top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 2> top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list;
    VlUnpacked<QData/*33:0*/, 3> top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*1:0*/, 3> top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 3> top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

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
