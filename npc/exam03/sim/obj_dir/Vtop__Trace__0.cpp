// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->top__DOT__add),4);
        bufp->chgCData(oldp+1,(vlSelf->top__DOT__adder_sub4_inst__DOT__t_no_cin),4);
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__comp_inst__DOT__sum),4);
        bufp->chgBit(oldp+3,((1U & (~ (IData)((0U != (IData)(vlSelf->top__DOT__comp_inst__DOT__sum)))))));
    }
    bufp->chgCData(oldp+4,(vlSelf->x),4);
    bufp->chgCData(oldp+5,(vlSelf->y),4);
    bufp->chgCData(oldp+6,(vlSelf->res),4);
    bufp->chgCData(oldp+7,(vlSelf->sel),3);
    bufp->chgBit(oldp+8,(vlSelf->cf));
    bufp->chgBit(oldp+9,(vlSelf->zf));
    bufp->chgBit(oldp+10,(vlSelf->of));
    bufp->chgBit(oldp+11,(vlSelf->clk));
    bufp->chgBit(oldp+12,(vlSelf->rst));
    bufp->chgCData(oldp+13,(vlSelf->HEX0),8);
    bufp->chgCData(oldp+14,((0xfU & (~ (IData)(vlSelf->x)))),4);
    bufp->chgCData(oldp+15,(((IData)(vlSelf->x) & (IData)(vlSelf->y))),4);
    bufp->chgCData(oldp+16,(((IData)(vlSelf->x) | (IData)(vlSelf->y))),4);
    bufp->chgCData(oldp+17,(((IData)(vlSelf->x) ^ (IData)(vlSelf->y))),4);
    bufp->chgBit(oldp+18,((1U & (((1U & ((IData)(vlSelf->x) 
                                         >> 3U)) == 
                                  (1U & ((IData)(vlSelf->y) 
                                         >> 3U))) ? 
                                 ((8U & (IData)(vlSelf->x))
                                   ? ((IData)(vlSelf->top__DOT__comp_inst__DOT__sum) 
                                      >> 3U) : ((7U 
                                                 & (IData)(vlSelf->x)) 
                                                < (7U 
                                                   & (IData)(vlSelf->y))))
                                  : ((IData)(vlSelf->x) 
                                     >> 3U)))));
    bufp->chgBit(oldp+19,(((IData)(vlSelf->x) == (IData)(vlSelf->y))));
    bufp->chgBit(oldp+20,((1U == (IData)(vlSelf->sel))));
    bufp->chgBit(oldp+21,((1U & (((IData)(1U) + ((IData)(vlSelf->x) 
                                                 + 
                                                 (0xfU 
                                                  & (~ (IData)(vlSelf->y))))) 
                                 >> 4U))));
    bufp->chgBit(oldp+22,((((1U & ((IData)(vlSelf->x) 
                                   >> 3U)) == (1U & 
                                               (~ ((IData)(vlSelf->y) 
                                                   >> 3U)))) 
                           & ((1U & ((IData)(vlSelf->top__DOT__comp_inst__DOT__sum) 
                                     >> 3U)) != (1U 
                                                 & ((IData)(vlSelf->x) 
                                                    >> 3U))))));
    bufp->chgCData(oldp+23,((0xfU & (~ (IData)(vlSelf->y)))),4);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
