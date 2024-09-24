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
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl),3);
        bufp->chgBit(oldp+11,((1U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                     >> 8U))));
        bufp->chgCData(oldp+12,((7U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                       >> 9U))),3);
        bufp->chgBit(oldp+13,((1U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                     >> 0xcU))));
        bufp->chgQData(oldp+14,(vlSelf->top__DOT__ysyx_core__DOT__ImmExt),64);
        bufp->chgBit(oldp+16,((1U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                     >> 7U))));
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__ysyx_core__DOT__Wmask),8);
        bufp->chgBit(oldp+18,(vlSelf->top__DOT__ysyx_core__DOT__dw));
        bufp->chgSData(oldp+19,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls),13);
        bufp->chgBit(oldp+20,((1U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                     >> 3U))));
        bufp->chgCData(oldp+21,((3U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                       >> 1U))),2);
        bufp->chgBit(oldp+22,((1U & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls))));
        bufp->chgQData(oldp+23,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_LSU__DOT__Wmask64),64);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgQData(oldp+25,(vlSelf->top__DOT__ysyx_core__DOT__tnpc),64);
        bufp->chgBit(oldp+27,((0ULL == vlSelf->top__DOT__ysyx_core__DOT__ALURes)));
        bufp->chgQData(oldp+28,(vlSelf->top__DOT__ysyx_core__DOT__src1),64);
        bufp->chgQData(oldp+30,(vlSelf->top__DOT__ysyx_core__DOT__src2),64);
        bufp->chgQData(oldp+32,(vlSelf->top__DOT__ysyx_core__DOT__srcb),64);
        bufp->chgQData(oldp+34,(vlSelf->top__DOT__ysyx_core__DOT__ALURes),64);
        bufp->chgQData(oldp+36,(vlSelf->top__DOT__ysyx_core__DOT__Result),64);
        bufp->chgQData(oldp+38,(vlSelf->top__DOT__ysyx_core__DOT__PCTarget_srca),64);
        bufp->chgQData(oldp+40,(vlSelf->top__DOT__ysyx_core__DOT__DataFromMem),64);
        bufp->chgQData(oldp+42,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT__adder_Res),64);
        bufp->chgQData(oldp+44,(((1U & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl))
                                  ? (1ULL + (~ vlSelf->top__DOT__ysyx_core__DOT__srcb))
                                  : vlSelf->top__DOT__ysyx_core__DOT__srcb)),64);
        bufp->chgQData(oldp+46,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT__ALURes_temp),64);
        bufp->chgQData(oldp+48,(VL_SHIFTRS_QQQ(64,64,64, vlSelf->top__DOT__ysyx_core__DOT__src1, vlSelf->top__DOT__ysyx_core__DOT__srcb)),64);
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
        bufp->chgWData(oldp+50,(__Vtemp_h84e36b2d__0),130);
        bufp->chgWData(oldp+55,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__pair_list[0]),65);
        bufp->chgWData(oldp+58,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__pair_list[1]),65);
        bufp->chgQData(oldp+61,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list[0]),64);
        bufp->chgQData(oldp+63,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list[1]),64);
        bufp->chgQData(oldp+65,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__lut_out),64);
        bufp->chgBit(oldp+67,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+68,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_LSU__DOT__DPI_DataFromMem),64);
        bufp->chgBit(oldp+70,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_LSU__DOT__sig));
        bufp->chgWData(oldp+71,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__pair_list[0]),65);
        bufp->chgWData(oldp+74,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__pair_list[1]),65);
        bufp->chgQData(oldp+77,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__data_list[0]),64);
        bufp->chgQData(oldp+79,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__data_list[1]),64);
        bufp->chgQData(oldp+81,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__lut_out),64);
        bufp->chgBit(oldp+83,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__hit));
        bufp->chgWData(oldp+84,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[0]),67);
        bufp->chgWData(oldp+87,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[1]),67);
        bufp->chgWData(oldp+90,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[2]),67);
        bufp->chgWData(oldp+93,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[3]),67);
        bufp->chgWData(oldp+96,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[4]),67);
        bufp->chgQData(oldp+99,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[0]),64);
        bufp->chgQData(oldp+101,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[1]),64);
        bufp->chgQData(oldp+103,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[2]),64);
        bufp->chgQData(oldp+105,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[3]),64);
        bufp->chgQData(oldp+107,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[4]),64);
        bufp->chgQData(oldp+109,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out),64);
        bufp->chgBit(oldp+111,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgQData(oldp+112,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[0]),64);
        bufp->chgQData(oldp+114,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[1]),64);
        bufp->chgQData(oldp+116,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[2]),64);
        bufp->chgQData(oldp+118,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[3]),64);
        bufp->chgQData(oldp+120,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[4]),64);
        bufp->chgQData(oldp+122,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[5]),64);
        bufp->chgQData(oldp+124,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[6]),64);
        bufp->chgQData(oldp+126,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[7]),64);
        bufp->chgQData(oldp+128,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[8]),64);
        bufp->chgQData(oldp+130,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[9]),64);
        bufp->chgQData(oldp+132,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[10]),64);
        bufp->chgQData(oldp+134,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[11]),64);
        bufp->chgQData(oldp+136,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[12]),64);
        bufp->chgQData(oldp+138,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[13]),64);
        bufp->chgQData(oldp+140,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[14]),64);
        bufp->chgQData(oldp+142,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[15]),64);
        bufp->chgQData(oldp+144,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[16]),64);
        bufp->chgQData(oldp+146,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[17]),64);
        bufp->chgQData(oldp+148,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[18]),64);
        bufp->chgQData(oldp+150,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[19]),64);
        bufp->chgQData(oldp+152,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[20]),64);
        bufp->chgQData(oldp+154,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[21]),64);
        bufp->chgQData(oldp+156,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[22]),64);
        bufp->chgQData(oldp+158,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[23]),64);
        bufp->chgQData(oldp+160,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[24]),64);
        bufp->chgQData(oldp+162,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[25]),64);
        bufp->chgQData(oldp+164,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[26]),64);
        bufp->chgQData(oldp+166,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[27]),64);
        bufp->chgQData(oldp+168,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[28]),64);
        bufp->chgQData(oldp+170,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[29]),64);
        bufp->chgQData(oldp+172,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[30]),64);
        bufp->chgQData(oldp+174,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[31]),64);
    }
    bufp->chgBit(oldp+176,(vlSelf->clk));
    bufp->chgBit(oldp+177,(vlSelf->rst));
    bufp->chgIData(oldp+178,(vlSelf->inst),32);
    bufp->chgQData(oldp+179,(vlSelf->pc),64);
    bufp->chgBit(oldp+181,((1U & ((((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                    >> 3U) & ((0x63U 
                                               == (0x7fU 
                                                   & vlSelf->inst)) 
                                              & ((0U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->inst 
                                                      >> 0xcU)))
                                                  ? 
                                                 (0ULL 
                                                  == vlSelf->top__DOT__ysyx_core__DOT__ALURes)
                                                  : (IData)(
                                                            ((0x1000U 
                                                              == 
                                                              (0x7000U 
                                                               & vlSelf->inst)) 
                                                             & (0ULL 
                                                                != vlSelf->top__DOT__ysyx_core__DOT__ALURes)))))) 
                                  | (IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls)))));
    bufp->chgQData(oldp+182,((4ULL + vlSelf->pc)),64);
    bufp->chgBit(oldp+184,((IData)((0x67U == (0x707fU 
                                              & vlSelf->inst)))));
    bufp->chgIData(oldp+185,((vlSelf->inst >> 7U)),25);
    bufp->chgCData(oldp+186,((0x7fU & vlSelf->inst)),7);
    bufp->chgCData(oldp+187,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->chgCData(oldp+188,((vlSelf->inst >> 0x19U)),7);
    bufp->chgBit(oldp+189,(((0x63U == (0x7fU & vlSelf->inst)) 
                            & ((0U == (7U & (vlSelf->inst 
                                             >> 0xcU)))
                                ? (0ULL == vlSelf->top__DOT__ysyx_core__DOT__ALURes)
                                : (IData)(((0x1000U 
                                            == (0x7000U 
                                                & vlSelf->inst)) 
                                           & (0ULL 
                                              != vlSelf->top__DOT__ysyx_core__DOT__ALURes)))))));
    bufp->chgBit(oldp+190,((IData)((0x40000020U == 
                                    (0x40000020U & vlSelf->inst)))));
    bufp->chgBit(oldp+191,((1U & (vlSelf->inst >> 0xeU))));
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
    bufp->chgWData(oldp+192,(__Vtemp_h49dee185__0),130);
    bufp->chgCData(oldp+197,((0x1fU & (vlSelf->inst 
                                       >> 0xfU))),5);
    bufp->chgCData(oldp+198,((0x1fU & (vlSelf->inst 
                                       >> 0x14U))),5);
    bufp->chgCData(oldp+199,((0x1fU & (vlSelf->inst 
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
    bufp->chgWData(oldp+200,(__Vtemp_h4e4ad826__0),335);
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
}
