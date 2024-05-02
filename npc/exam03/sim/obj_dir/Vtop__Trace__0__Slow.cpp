// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+5,"x", false,-1, 3,0);
    tracep->declBus(c+6,"y", false,-1, 3,0);
    tracep->declBus(c+7,"res", false,-1, 3,0);
    tracep->declBus(c+8,"sel", false,-1, 2,0);
    tracep->declBit(c+9,"cf", false,-1);
    tracep->declBit(c+10,"zf", false,-1);
    tracep->declBit(c+11,"of", false,-1);
    tracep->declBit(c+12,"clk", false,-1);
    tracep->declBit(c+13,"rst", false,-1);
    tracep->declBus(c+14,"HEX0", false,-1, 7,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+5,"x", false,-1, 3,0);
    tracep->declBus(c+6,"y", false,-1, 3,0);
    tracep->declBus(c+7,"res", false,-1, 3,0);
    tracep->declBus(c+8,"sel", false,-1, 2,0);
    tracep->declBit(c+9,"cf", false,-1);
    tracep->declBit(c+10,"zf", false,-1);
    tracep->declBit(c+11,"of", false,-1);
    tracep->declBit(c+12,"clk", false,-1);
    tracep->declBit(c+13,"rst", false,-1);
    tracep->declBus(c+14,"HEX0", false,-1, 7,0);
    tracep->declBus(c+1,"add", false,-1, 3,0);
    tracep->declBus(c+25,"sub", false,-1, 3,0);
    tracep->declBus(c+15,"rev", false,-1, 3,0);
    tracep->declBus(c+16,"and_res", false,-1, 3,0);
    tracep->declBus(c+17,"or_res", false,-1, 3,0);
    tracep->declBus(c+18,"xor_res", false,-1, 3,0);
    tracep->declBit(c+19,"comp_res", false,-1);
    tracep->declBit(c+20,"equ_res", false,-1);
    tracep->declBit(c+21,"sub_mode", false,-1);
    tracep->pushNamePrefix("adder_sub4_inst ");
    tracep->declBus(c+5,"x", false,-1, 3,0);
    tracep->declBus(c+6,"y", false,-1, 3,0);
    tracep->declBit(c+21,"sub", false,-1);
    tracep->declBus(c+1,"sum", false,-1, 3,0);
    tracep->declBit(c+9,"cf", false,-1);
    tracep->declBit(c+10,"zf", false,-1);
    tracep->declBit(c+11,"of", false,-1);
    tracep->declBus(c+2,"t_no_cin", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("andm_inst ");
    tracep->declBus(c+5,"x", false,-1, 3,0);
    tracep->declBus(c+6,"y", false,-1, 3,0);
    tracep->declBus(c+16,"and_res", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("comp_inst ");
    tracep->declBus(c+5,"x", false,-1, 3,0);
    tracep->declBus(c+6,"y", false,-1, 3,0);
    tracep->declBit(c+19,"out", false,-1);
    tracep->declBus(c+3,"sum", false,-1, 3,0);
    tracep->pushNamePrefix("adder_sub4_u ");
    tracep->declBus(c+5,"x", false,-1, 3,0);
    tracep->declBus(c+6,"y", false,-1, 3,0);
    tracep->declBit(c+26,"sub", false,-1);
    tracep->declBus(c+3,"sum", false,-1, 3,0);
    tracep->declBit(c+22,"cf", false,-1);
    tracep->declBit(c+4,"zf", false,-1);
    tracep->declBit(c+23,"of", false,-1);
    tracep->declBus(c+24,"t_no_cin", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("equal_inst ");
    tracep->declBus(c+5,"x", false,-1, 3,0);
    tracep->declBus(c+6,"y", false,-1, 3,0);
    tracep->declBit(c+20,"out", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("orm_inst ");
    tracep->declBus(c+5,"x", false,-1, 3,0);
    tracep->declBus(c+6,"y", false,-1, 3,0);
    tracep->declBus(c+17,"or_res", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reverse_inst ");
    tracep->declBus(c+5,"x", false,-1, 3,0);
    tracep->declBus(c+15,"rev", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sel_res_inst ");
    tracep->declBus(c+8,"i", false,-1, 2,0);
    tracep->declBus(c+1,"add", false,-1, 3,0);
    tracep->declBus(c+1,"sub", false,-1, 3,0);
    tracep->declBus(c+15,"rev", false,-1, 3,0);
    tracep->declBus(c+16,"and_res", false,-1, 3,0);
    tracep->declBus(c+17,"or_res", false,-1, 3,0);
    tracep->declBus(c+18,"xor_res", false,-1, 3,0);
    tracep->declBit(c+19,"comp_res", false,-1);
    tracep->declBit(c+20,"equ_res", false,-1);
    tracep->declBus(c+7,"res", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("xorm_inst ");
    tracep->declBus(c+5,"x", false,-1, 3,0);
    tracep->declBus(c+6,"y", false,-1, 3,0);
    tracep->declBus(c+18,"xor_res", false,-1, 3,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__add),4);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__adder_sub4_inst__DOT__t_no_cin),4);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__comp_inst__DOT__sum),4);
    bufp->fullBit(oldp+4,((1U & (~ (IData)((0U != (IData)(vlSelf->top__DOT__comp_inst__DOT__sum)))))));
    bufp->fullCData(oldp+5,(vlSelf->x),4);
    bufp->fullCData(oldp+6,(vlSelf->y),4);
    bufp->fullCData(oldp+7,(vlSelf->res),4);
    bufp->fullCData(oldp+8,(vlSelf->sel),3);
    bufp->fullBit(oldp+9,(vlSelf->cf));
    bufp->fullBit(oldp+10,(vlSelf->zf));
    bufp->fullBit(oldp+11,(vlSelf->of));
    bufp->fullBit(oldp+12,(vlSelf->clk));
    bufp->fullBit(oldp+13,(vlSelf->rst));
    bufp->fullCData(oldp+14,(vlSelf->HEX0),8);
    bufp->fullCData(oldp+15,((0xfU & (~ (IData)(vlSelf->x)))),4);
    bufp->fullCData(oldp+16,(((IData)(vlSelf->x) & (IData)(vlSelf->y))),4);
    bufp->fullCData(oldp+17,(((IData)(vlSelf->x) | (IData)(vlSelf->y))),4);
    bufp->fullCData(oldp+18,(((IData)(vlSelf->x) ^ (IData)(vlSelf->y))),4);
    bufp->fullBit(oldp+19,((1U & (((1U & ((IData)(vlSelf->x) 
                                          >> 3U)) == 
                                   (1U & ((IData)(vlSelf->y) 
                                          >> 3U))) ? 
                                  ((8U & (IData)(vlSelf->x))
                                    ? ((IData)(vlSelf->top__DOT__comp_inst__DOT__sum) 
                                       >> 3U) : ((7U 
                                                  & (IData)(vlSelf->x)) 
                                                 < 
                                                 (7U 
                                                  & (IData)(vlSelf->y))))
                                   : ((IData)(vlSelf->x) 
                                      >> 3U)))));
    bufp->fullBit(oldp+20,(((IData)(vlSelf->x) == (IData)(vlSelf->y))));
    bufp->fullBit(oldp+21,((1U == (IData)(vlSelf->sel))));
    bufp->fullBit(oldp+22,((1U & (((IData)(1U) + ((IData)(vlSelf->x) 
                                                  + 
                                                  (0xfU 
                                                   & (~ (IData)(vlSelf->y))))) 
                                  >> 4U))));
    bufp->fullBit(oldp+23,((((1U & ((IData)(vlSelf->x) 
                                    >> 3U)) == (1U 
                                                & (~ 
                                                   ((IData)(vlSelf->y) 
                                                    >> 3U)))) 
                            & ((1U & ((IData)(vlSelf->top__DOT__comp_inst__DOT__sum) 
                                      >> 3U)) != (1U 
                                                  & ((IData)(vlSelf->x) 
                                                     >> 3U))))));
    bufp->fullCData(oldp+24,((0xfU & (~ (IData)(vlSelf->y)))),4);
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__sub),4);
    bufp->fullBit(oldp+26,(1U));
}
