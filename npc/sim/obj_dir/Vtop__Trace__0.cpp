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
    VlWide<3>/*95:0*/ __Vtemp_ha37214ae__0;
    VlWide<4>/*127:0*/ __Vtemp_h4be6de5b__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__key_list[1]));
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list[2]),2);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+5,((0U == vlSelf->top__DOT__ysyx_core__DOT__ALURes)));
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__ysyx_core__DOT__Result),32);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__ysyx_core__DOT__ALURes),32);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+9,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[0]),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[1]),32);
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[2]),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[3]),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[4]),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[5]),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[6]),32);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[7]),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[8]),32);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[9]),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[10]),32);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[11]),32);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[12]),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[13]),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[14]),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[15]),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[16]),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[17]),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[18]),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[19]),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[20]),32);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[21]),32);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[22]),32);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[23]),32);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[24]),32);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[25]),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[26]),32);
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[27]),32);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[28]),32);
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[29]),32);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[30]),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[31]),32);
    }
    bufp->chgBit(oldp+42,(vlSelf->clk));
    bufp->chgBit(oldp+43,(vlSelf->rst));
    bufp->chgIData(oldp+44,(vlSelf->DataFromMem),32);
    bufp->chgIData(oldp+45,(vlSelf->inst),32);
    bufp->chgIData(oldp+46,(vlSelf->pc),32);
    bufp->chgIData(oldp+47,(vlSelf->AddrMem),32);
    bufp->chgIData(oldp+48,(vlSelf->DataToMem),32);
    bufp->chgBit(oldp+49,(vlSelf->MemWrite));
    bufp->chgBit(oldp+50,((1U & (((((0x13U == (0x7fU 
                                               & vlSelf->inst))
                                     ? 0x880U : 0U) 
                                   >> 3U) & (0U == vlSelf->top__DOT__ysyx_core__DOT__ALURes)) 
                                 | ((0x13U == (0x7fU 
                                               & vlSelf->inst))
                                     ? 0x880U : 0U)))));
    bufp->chgIData(oldp+51,((vlSelf->pc + vlSelf->top__DOT__ysyx_core__DOT__ImmExt)),32);
    bufp->chgCData(oldp+52,((3U & (((0x13U == (0x7fU 
                                               & vlSelf->inst))
                                     ? 0x880U : 0U) 
                                   >> 4U))),2);
    bufp->chgCData(oldp+53,(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl),3);
    bufp->chgBit(oldp+54,((1U & (((0x13U == (0x7fU 
                                             & vlSelf->inst))
                                   ? 0x880U : 0U) >> 7U))));
    bufp->chgCData(oldp+55,((7U & (((0x13U == (0x7fU 
                                               & vlSelf->inst))
                                     ? 0x880U : 0U) 
                                   >> 8U))),3);
    bufp->chgBit(oldp+56,((1U & (((0x13U == (0x7fU 
                                             & vlSelf->inst))
                                   ? 0x880U : 0U) >> 0xbU))));
    bufp->chgIData(oldp+57,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x
                            [(0x1fU & (vlSelf->inst 
                                       >> 0xfU))]),32);
    bufp->chgIData(oldp+58,(vlSelf->top__DOT__ysyx_core__DOT__ImmExt),32);
    bufp->chgIData(oldp+59,(vlSelf->top__DOT__ysyx_core__DOT__srcb),32);
    bufp->chgIData(oldp+60,(((IData)(4U) + vlSelf->pc)),32);
    bufp->chgIData(oldp+61,((vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x
                             [(0x1fU & (vlSelf->inst 
                                        >> 0xfU))] 
                             + vlSelf->top__DOT__ysyx_core__DOT__srcb)),32);
    __Vtemp_ha37214ae__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->top__DOT__ysyx_core__DOT__ImmExt))));
    __Vtemp_ha37214ae__0[1U] = ((vlSelf->DataToMem 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSelf->top__DOT__ysyx_core__DOT__ImmExt))) 
                                                   >> 0x20U)));
    __Vtemp_ha37214ae__0[2U] = (vlSelf->DataToMem >> 0x1fU);
    bufp->chgWData(oldp+62,(__Vtemp_ha37214ae__0),66);
    bufp->chgQData(oldp+65,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__pair_list[0]),33);
    bufp->chgQData(oldp+67,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__pair_list[1]),33);
    bufp->chgIData(oldp+69,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list[0]),32);
    bufp->chgIData(oldp+70,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list[1]),32);
    bufp->chgIData(oldp+71,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__lut_out),32);
    bufp->chgBit(oldp+72,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__hit));
    bufp->chgIData(oldp+73,((vlSelf->inst >> 7U)),25);
    bufp->chgCData(oldp+74,((0x7fU & vlSelf->inst)),7);
    bufp->chgCData(oldp+75,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->chgCData(oldp+76,((vlSelf->inst >> 0x19U)),7);
    bufp->chgSData(oldp+77,(((0x13U == (0x7fU & vlSelf->inst))
                              ? 0x880U : 0U)),12);
    bufp->chgBit(oldp+78,((1U & (((0x13U == (0x7fU 
                                             & vlSelf->inst))
                                   ? 0x880U : 0U) >> 3U))));
    bufp->chgCData(oldp+79,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__ALUop),2);
    bufp->chgBit(oldp+80,(0U));
    bufp->chgCData(oldp+81,((0x1fU & (vlSelf->inst 
                                      >> 0xfU))),5);
    bufp->chgCData(oldp+82,((0x1fU & (vlSelf->inst 
                                      >> 0x14U))),5);
    bufp->chgCData(oldp+83,((0x1fU & (vlSelf->inst 
                                      >> 7U))),5);
    __Vtemp_h4be6de5b__0[0U] = (IData)((0x200000000ULL 
                                        | (QData)((IData)(
                                                          ((IData)(4U) 
                                                           + vlSelf->pc)))));
    __Vtemp_h4be6de5b__0[1U] = ((vlSelf->DataFromMem 
                                 << 2U) | (IData)((
                                                   (0x200000000ULL 
                                                    | (QData)((IData)(
                                                                      ((IData)(4U) 
                                                                       + vlSelf->pc)))) 
                                                   >> 0x20U)));
    __Vtemp_h4be6de5b__0[2U] = (4U | ((vlSelf->top__DOT__ysyx_core__DOT__ALURes 
                                       << 4U) | (vlSelf->DataFromMem 
                                                 >> 0x1eU)));
    __Vtemp_h4be6de5b__0[3U] = (vlSelf->top__DOT__ysyx_core__DOT__ALURes 
                                >> 0x1cU);
    bufp->chgWData(oldp+84,(__Vtemp_h4be6de5b__0),102);
    bufp->chgQData(oldp+88,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[0]),34);
    bufp->chgQData(oldp+90,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[1]),34);
    bufp->chgQData(oldp+92,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[2]),34);
    bufp->chgIData(oldp+94,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[0]),32);
    bufp->chgIData(oldp+95,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[1]),32);
    bufp->chgIData(oldp+96,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[2]),32);
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
}
