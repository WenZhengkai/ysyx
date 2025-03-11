// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

void Vtop___024root____Vdpiimwrap_top__DOT__ysyx_instmem__DOT__npc_nextPC_write_TOP(IData/*31:0*/ nextPC);
void Vtop___024root____Vdpiimwrap_top__DOT__ysyx_instmem__DOT__npc_inst_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);
void Vtop___024root____Vdpiimwrap_top__DOT__ysyx_datamem__DOT__npc_pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vdlyvdim0__top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x__v0;
    __Vdlyvdim0__top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x__v0;
    __Vdlyvval__top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x__v0;
    __Vdlyvset__top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x__v0 = 0;
    // Body
    __Vdlyvset__top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x__v0 = 0U;
    if (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_reg_RegWrite) {
        __Vdlyvval__top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x__v0 
            = ((0U == (0x1fU & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                >> 7U))) ? 0U : ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_reg_RegWrite)
                                                  ? vlSelf->top__DOT__ToMem_Addr
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_reg_RegWrite)
                                                   ? 0U
                                                   : vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem)));
        __Vdlyvset__top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x__v0 = 1U;
        __Vdlyvdim0__top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x__v0 
            = (0xfU & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                       >> 7U));
    }
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__pc 
        = ((IData)(vlSelf->rst) ? 0x80000000U : vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT___pc_T_1);
    if (__Vdlyvset__top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x__v0) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[__Vdlyvdim0__top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x__v0] 
            = __Vdlyvval__top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x__v0;
    }
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT___pc_T_1 
        = ((IData)(4U) + vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__pc);
    vlSelf->pc = vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__pc;
    Vtop___024root____Vdpiimwrap_top__DOT__ysyx_instmem__DOT__npc_nextPC_write_TOP(vlSelf->pc);
    Vtop___024root____Vdpiimwrap_top__DOT__ysyx_instmem__DOT__npc_inst_read_TOP(vlSelf->pc, vlSelf->__Vtask_top__DOT__ysyx_instmem__DOT__npc_inst_read__0__rdata);
    vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
        = vlSelf->__Vtask_top__DOT__ysyx_instmem__DOT__npc_inst_read__0__rdata;
    vlSelf->inst = vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem;
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_reg_RegWrite 
        = (IData)((0x13U == (0x707fU & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__ImmExt 
        = ((((vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
              >> 0x1fU) ? 0xfffffU : 0U) << 0xcU) | 
           (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
            >> 0x14U));
    vlSelf->top__DOT__ToMem_Data = vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x
        [(0xfU & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                  >> 0xfU))];
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile_src2 
        = vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x
        [(0xfU & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                  >> 0x14U))];
    vlSelf->top__DOT__ToMem_Addr = (vlSelf->top__DOT__ToMem_Data 
                                    + ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_reg_RegWrite)
                                        ? ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_reg_RegWrite)
                                            ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__ImmExt
                                            : ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_reg_RegWrite)
                                                ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__ImmExt
                                                : vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile_src2))
                                        : vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile_src2));
    Vtop___024root____Vdpiimwrap_top__DOT__ysyx_datamem__DOT__npc_pmem_read_TOP(vlSelf->top__DOT__ToMem_Addr, vlSelf->__Vtask_top__DOT__ysyx_datamem__DOT__npc_pmem_read__2__rdata);
    vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem 
        = vlSelf->__Vtask_top__DOT__ysyx_datamem__DOT__npc_pmem_read__2__rdata;
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("../vsrc/../vsrc/top.v", 12, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("../vsrc/../vsrc/top.v", 12, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
