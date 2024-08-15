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
    VlWide<5>/*159:0*/ __Vtemp_h84e36b2d__0;
    VlWide<5>/*159:0*/ __Vtemp_h49dee185__0;
    VlWide<11>/*351:0*/ __Vtemp_h4e4ad826__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+2,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+3,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__key_list[1]));
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list[4]),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+9,((7U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                      >> 4U))),3);
        bufp->chgBit(oldp+10,((1U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                     >> 8U))));
        bufp->chgCData(oldp+11,((7U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                       >> 9U))),3);
        bufp->chgBit(oldp+12,((1U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                     >> 0xcU))));
        bufp->chgQData(oldp+13,(vlSelf->top__DOT__ysyx_core__DOT__ImmExt),64);
        bufp->chgBit(oldp+15,((1U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                     >> 7U))));
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__ysyx_core__DOT__Wmask),8);
        bufp->chgSData(oldp+17,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls),13);
        bufp->chgBit(oldp+18,((1U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                     >> 3U))));
        bufp->chgCData(oldp+19,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__ALUop),2);
        bufp->chgBit(oldp+20,((1U & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgQData(oldp+21,(vlSelf->top__DOT__ysyx_core__DOT__src1),64);
        bufp->chgQData(oldp+23,(vlSelf->top__DOT__ysyx_core__DOT__src2),64);
        bufp->chgQData(oldp+25,(vlSelf->top__DOT__ysyx_core__DOT__PCTarget_srca),64);
        __Vtemp_h84e36b2d__0[0U] = (IData)(vlSelf->top__DOT__ysyx_core__DOT__ImmExt);
        __Vtemp_h84e36b2d__0[1U] = (IData)((vlSelf->top__DOT__ysyx_core__DOT__ImmExt 
                                            >> 0x20U));
        __Vtemp_h84e36b2d__0[2U] = (1U | ((IData)(vlSelf->top__DOT__ysyx_core__DOT__src2) 
                                          << 1U));
        __Vtemp_h84e36b2d__0[3U] = (((IData)(vlSelf->top__DOT__ysyx_core__DOT__src2) 
                                     >> 0x1fU) | ((IData)(
                                                          (vlSelf->top__DOT__ysyx_core__DOT__src2 
                                                           >> 0x20U)) 
                                                  << 1U));
        __Vtemp_h84e36b2d__0[4U] = ((IData)((vlSelf->top__DOT__ysyx_core__DOT__src2 
                                             >> 0x20U)) 
                                    >> 0x1fU);
        bufp->chgWData(oldp+27,(__Vtemp_h84e36b2d__0),130);
        bufp->chgWData(oldp+32,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__pair_list[0]),65);
        bufp->chgWData(oldp+35,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__pair_list[1]),65);
        bufp->chgQData(oldp+38,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list[0]),64);
        bufp->chgQData(oldp+40,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list[1]),64);
        bufp->chgWData(oldp+42,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__pair_list[0]),65);
        bufp->chgWData(oldp+45,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__pair_list[1]),65);
        bufp->chgQData(oldp+48,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__data_list[0]),64);
        bufp->chgQData(oldp+50,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__data_list[1]),64);
        bufp->chgQData(oldp+52,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__lut_out),64);
        bufp->chgBit(oldp+54,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY((((vlSelf->__Vm_traceActivity[1U] 
                       | vlSelf->__Vm_traceActivity
                       [2U]) | vlSelf->__Vm_traceActivity
                      [3U]) | vlSelf->__Vm_traceActivity
                     [4U]))) {
        bufp->chgWData(oldp+55,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[0]),67);
        bufp->chgWData(oldp+58,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[1]),67);
        bufp->chgWData(oldp+61,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[2]),67);
        bufp->chgWData(oldp+64,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[3]),67);
        bufp->chgWData(oldp+67,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[4]),67);
        bufp->chgQData(oldp+70,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[0]),64);
        bufp->chgQData(oldp+72,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[1]),64);
        bufp->chgQData(oldp+74,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[2]),64);
        bufp->chgQData(oldp+76,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[3]),64);
        bufp->chgQData(oldp+78,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[4]),64);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+80,((1U & ((((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                       >> 3U) & (0ULL 
                                                 == vlSelf->top__DOT__ysyx_core__DOT__ALURes)) 
                                     | (IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls)))));
        bufp->chgBit(oldp+81,((0ULL == vlSelf->top__DOT__ysyx_core__DOT__ALURes)));
        bufp->chgQData(oldp+82,(vlSelf->top__DOT__ysyx_core__DOT__ALURes),64);
        bufp->chgQData(oldp+84,(vlSelf->top__DOT__ysyx_core__DOT__Result),64);
        bufp->chgQData(oldp+86,(vlSelf->top__DOT__ysyx_core__DOT__DataFromMem),64);
        bufp->chgQData(oldp+88,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out),64);
        bufp->chgBit(oldp+90,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgQData(oldp+91,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[0]),64);
        bufp->chgQData(oldp+93,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[1]),64);
        bufp->chgQData(oldp+95,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[2]),64);
        bufp->chgQData(oldp+97,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[3]),64);
        bufp->chgQData(oldp+99,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[4]),64);
        bufp->chgQData(oldp+101,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[5]),64);
        bufp->chgQData(oldp+103,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[6]),64);
        bufp->chgQData(oldp+105,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[7]),64);
        bufp->chgQData(oldp+107,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[8]),64);
        bufp->chgQData(oldp+109,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[9]),64);
        bufp->chgQData(oldp+111,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[10]),64);
        bufp->chgQData(oldp+113,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[11]),64);
        bufp->chgQData(oldp+115,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[12]),64);
        bufp->chgQData(oldp+117,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[13]),64);
        bufp->chgQData(oldp+119,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[14]),64);
        bufp->chgQData(oldp+121,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[15]),64);
        bufp->chgQData(oldp+123,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[16]),64);
        bufp->chgQData(oldp+125,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[17]),64);
        bufp->chgQData(oldp+127,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[18]),64);
        bufp->chgQData(oldp+129,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[19]),64);
        bufp->chgQData(oldp+131,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[20]),64);
        bufp->chgQData(oldp+133,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[21]),64);
        bufp->chgQData(oldp+135,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[22]),64);
        bufp->chgQData(oldp+137,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[23]),64);
        bufp->chgQData(oldp+139,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[24]),64);
        bufp->chgQData(oldp+141,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[25]),64);
        bufp->chgQData(oldp+143,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[26]),64);
        bufp->chgQData(oldp+145,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[27]),64);
        bufp->chgQData(oldp+147,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[28]),64);
        bufp->chgQData(oldp+149,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[29]),64);
        bufp->chgQData(oldp+151,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[30]),64);
        bufp->chgQData(oldp+153,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[31]),64);
    }
    bufp->chgBit(oldp+155,(vlSelf->clk));
    bufp->chgBit(oldp+156,(vlSelf->rst));
    bufp->chgIData(oldp+157,(vlSelf->inst),32);
    bufp->chgQData(oldp+158,(vlSelf->pc),64);
    bufp->chgQData(oldp+160,(vlSelf->top__DOT__ysyx_core__DOT__tnpc),64);
    bufp->chgCData(oldp+162,(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl),3);
    bufp->chgQData(oldp+163,(vlSelf->top__DOT__ysyx_core__DOT__srcb),64);
    bufp->chgQData(oldp+165,((4ULL + vlSelf->pc)),64);
    bufp->chgBit(oldp+167,((IData)((0x67U == (0x707fU 
                                              & vlSelf->inst)))));
    bufp->chgQData(oldp+168,((vlSelf->top__DOT__ysyx_core__DOT__src1 
                              + vlSelf->top__DOT__ysyx_core__DOT__srcb)),64);
    bufp->chgQData(oldp+170,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__lut_out),64);
    bufp->chgBit(oldp+172,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__hit));
    bufp->chgIData(oldp+173,((vlSelf->inst >> 7U)),25);
    bufp->chgCData(oldp+174,((0x7fU & vlSelf->inst)),7);
    bufp->chgCData(oldp+175,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->chgCData(oldp+176,((vlSelf->inst >> 0x19U)),7);
    __Vtemp_h49dee185__0[0U] = (IData)(vlSelf->top__DOT__ysyx_core__DOT__src1);
    __Vtemp_h49dee185__0[1U] = (IData)((vlSelf->top__DOT__ysyx_core__DOT__src1 
                                        >> 0x20U));
    __Vtemp_h49dee185__0[2U] = (1U | ((IData)(vlSelf->pc) 
                                      << 1U));
    __Vtemp_h49dee185__0[3U] = (((IData)(vlSelf->pc) 
                                 >> 0x1fU) | ((IData)(
                                                      (vlSelf->pc 
                                                       >> 0x20U)) 
                                              << 1U));
    __Vtemp_h49dee185__0[4U] = ((IData)((vlSelf->pc 
                                         >> 0x20U)) 
                                >> 0x1fU);
    bufp->chgWData(oldp+177,(__Vtemp_h49dee185__0),130);
    bufp->chgCData(oldp+182,((0x1fU & (vlSelf->inst 
                                       >> 0xfU))),5);
    bufp->chgCData(oldp+183,((0x1fU & (vlSelf->inst 
                                       >> 0x14U))),5);
    bufp->chgCData(oldp+184,((0x1fU & (vlSelf->inst 
                                       >> 7U))),5);
    __Vtemp_h4e4ad826__0[0U] = (IData)(vlSelf->top__DOT__ysyx_core__DOT__ImmExt);
    __Vtemp_h4e4ad826__0[1U] = (IData)((vlSelf->top__DOT__ysyx_core__DOT__ImmExt 
                                        >> 0x20U));
    __Vtemp_h4e4ad826__0[2U] = (4U | ((IData)(vlSelf->top__DOT__ysyx_core__DOT__tnpc) 
                                      << 3U));
    __Vtemp_h4e4ad826__0[3U] = (((IData)(vlSelf->top__DOT__ysyx_core__DOT__tnpc) 
                                 >> 0x1dU) | ((IData)(
                                                      (vlSelf->top__DOT__ysyx_core__DOT__tnpc 
                                                       >> 0x20U)) 
                                              << 3U));
    __Vtemp_h4e4ad826__0[4U] = (0x18U | (((IData)((4ULL 
                                                   + vlSelf->pc)) 
                                          << 6U) | 
                                         ((IData)((vlSelf->top__DOT__ysyx_core__DOT__tnpc 
                                                   >> 0x20U)) 
                                          >> 0x1dU)));
    __Vtemp_h4e4ad826__0[5U] = (((IData)((4ULL + vlSelf->pc)) 
                                 >> 0x1aU) | ((IData)(
                                                      ((4ULL 
                                                        + vlSelf->pc) 
                                                       >> 0x20U)) 
                                              << 6U));
    __Vtemp_h4e4ad826__0[6U] = (0x80U | (((IData)(vlSelf->top__DOT__ysyx_core__DOT__DataFromMem) 
                                          << 9U) | 
                                         ((IData)((
                                                   (4ULL 
                                                    + vlSelf->pc) 
                                                   >> 0x20U)) 
                                          >> 0x1aU)));
    __Vtemp_h4e4ad826__0[7U] = (((IData)(vlSelf->top__DOT__ysyx_core__DOT__DataFromMem) 
                                 >> 0x17U) | ((IData)(
                                                      (vlSelf->top__DOT__ysyx_core__DOT__DataFromMem 
                                                       >> 0x20U)) 
                                              << 9U));
    __Vtemp_h4e4ad826__0[8U] = (0x200U | (((IData)(vlSelf->top__DOT__ysyx_core__DOT__ALURes) 
                                           << 0xcU) 
                                          | ((IData)(
                                                     (vlSelf->top__DOT__ysyx_core__DOT__DataFromMem 
                                                      >> 0x20U)) 
                                             >> 0x17U)));
    __Vtemp_h4e4ad826__0[9U] = (((IData)(vlSelf->top__DOT__ysyx_core__DOT__ALURes) 
                                 >> 0x14U) | ((IData)(
                                                      (vlSelf->top__DOT__ysyx_core__DOT__ALURes 
                                                       >> 0x20U)) 
                                              << 0xcU));
    __Vtemp_h4e4ad826__0[0xaU] = ((IData)((vlSelf->top__DOT__ysyx_core__DOT__ALURes 
                                           >> 0x20U)) 
                                  >> 0x14U);
    bufp->chgWData(oldp+185,(__Vtemp_h4e4ad826__0),335);
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
