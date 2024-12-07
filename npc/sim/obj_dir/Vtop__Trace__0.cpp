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
        bufp->chgBit(oldp+9,(vlSelf->top__DOT__ysyx_core__DOT__PCSrc));
        bufp->chgQData(oldp+10,(vlSelf->top__DOT__ysyx_core__DOT__tnpc),64);
        bufp->chgBit(oldp+12,(((1U == (IData)(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl))
                                ? (0ULL == vlSelf->top__DOT__ysyx_core__DOT__ALURes)
                                : ((3U == (IData)(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl))
                                    ? (IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT____VdfgTmp_h30e473f3__0)
                                    : ((4U == (IData)(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl)) 
                                       & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT____VdfgTmp_h30e9c121__0))))));
        bufp->chgCData(oldp+13,((7U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                       >> 4U))),3);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl),5);
        bufp->chgBit(oldp+15,((1U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                     >> 8U))));
        bufp->chgCData(oldp+16,((7U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                       >> 9U))),3);
        bufp->chgBit(oldp+17,((1U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                     >> 0xcU))));
        bufp->chgQData(oldp+18,(vlSelf->top__DOT__ysyx_core__DOT__src1),64);
        bufp->chgQData(oldp+20,(vlSelf->top__DOT__ysyx_core__DOT__src2),64);
        bufp->chgQData(oldp+22,(vlSelf->top__DOT__ysyx_core__DOT__ImmExt),64);
        bufp->chgQData(oldp+24,(vlSelf->top__DOT__ysyx_core__DOT__srcb),64);
        bufp->chgQData(oldp+26,(vlSelf->top__DOT__ysyx_core__DOT__ALURes),64);
        bufp->chgQData(oldp+28,(vlSelf->top__DOT__ysyx_core__DOT__Result),64);
        bufp->chgQData(oldp+30,(vlSelf->top__DOT__ysyx_core__DOT__PCTarget_srca),64);
        bufp->chgBit(oldp+32,((IData)((0x67U == (0x707fU 
                                                 & vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem)))));
        bufp->chgBit(oldp+33,((1U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                     >> 7U))));
        bufp->chgQData(oldp+34,(vlSelf->top__DOT__ysyx_core__DOT__DataFromMem),64);
        bufp->chgCData(oldp+36,(vlSelf->top__DOT__ysyx_core__DOT__Wmask),8);
        bufp->chgBit(oldp+37,(vlSelf->top__DOT__ysyx_core__DOT__dw));
        bufp->chgQData(oldp+38,((vlSelf->top__DOT__ysyx_core__DOT__src1 
                                 + ((1U & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl))
                                     ? (1ULL + (~ vlSelf->top__DOT__ysyx_core__DOT__srcb))
                                     : vlSelf->top__DOT__ysyx_core__DOT__srcb))),64);
        bufp->chgQData(oldp+40,(((1U & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl))
                                  ? (1ULL + (~ vlSelf->top__DOT__ysyx_core__DOT__srcb))
                                  : vlSelf->top__DOT__ysyx_core__DOT__srcb)),64);
        bufp->chgQData(oldp+42,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT__ALURes_temp),64);
        bufp->chgCData(oldp+44,((0x3fU & (IData)(vlSelf->top__DOT__ysyx_core__DOT__srcb))),6);
        bufp->chgQData(oldp+45,(((IData)(vlSelf->top__DOT__ysyx_core__DOT__dw)
                                  ? (((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__ysyx_core__DOT__src1 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_core__DOT__src1)))
                                  : vlSelf->top__DOT__ysyx_core__DOT__src1)),64);
        bufp->chgQData(oldp+47,(((IData)(vlSelf->top__DOT__ysyx_core__DOT__dw)
                                  ? (QData)((IData)(vlSelf->top__DOT__ysyx_core__DOT__src1))
                                  : vlSelf->top__DOT__ysyx_core__DOT__src1)),64);
        bufp->chgQData(oldp+49,(VL_SHIFTRS_QQI(64,64,6, 
                                               ((IData)(vlSelf->top__DOT__ysyx_core__DOT__dw)
                                                 ? 
                                                (((QData)((IData)(
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->top__DOT__ysyx_core__DOT__src1 
                                                                                >> 0x1fU))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->top__DOT__ysyx_core__DOT__src1)))
                                                 : vlSelf->top__DOT__ysyx_core__DOT__src1), 
                                               (0x3fU 
                                                & (IData)(vlSelf->top__DOT__ysyx_core__DOT__srcb)))),64);
        bufp->chgQData(oldp+51,((((IData)(vlSelf->top__DOT__ysyx_core__DOT__dw)
                                   ? (QData)((IData)(vlSelf->top__DOT__ysyx_core__DOT__src1))
                                   : vlSelf->top__DOT__ysyx_core__DOT__src1) 
                                 >> (0x3fU & (IData)(vlSelf->top__DOT__ysyx_core__DOT__srcb)))),64);
        bufp->chgQData(oldp+53,((vlSelf->top__DOT__ysyx_core__DOT__src1 
                                 << (0x3fU & (IData)(vlSelf->top__DOT__ysyx_core__DOT__srcb)))),64);
        bufp->chgQData(oldp+55,((vlSelf->top__DOT__ysyx_core__DOT__src1 
                                 ^ vlSelf->top__DOT__ysyx_core__DOT__srcb)),64);
        bufp->chgQData(oldp+57,((vlSelf->top__DOT__ysyx_core__DOT__src1 
                                 & vlSelf->top__DOT__ysyx_core__DOT__srcb)),64);
        bufp->chgQData(oldp+59,(((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT____VdfgTmp_h30e473f3__0)
                                  ? 1ULL : 0ULL)),64);
        bufp->chgQData(oldp+61,(((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT____VdfgTmp_h30e9c121__0)
                                  ? 1ULL : 0ULL)),64);
        bufp->chgQData(oldp+63,((vlSelf->top__DOT__ysyx_core__DOT__src1 
                                 * vlSelf->top__DOT__ysyx_core__DOT__srcb)),64);
        bufp->chgIData(oldp+65,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT__divw_res),32);
        bufp->chgQData(oldp+66,((((QData)((IData)((- (IData)(
                                                             (vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT__divw_res 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT__divw_res)))),64);
        bufp->chgIData(oldp+68,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT__remw_res),32);
        bufp->chgQData(oldp+69,((((QData)((IData)((- (IData)(
                                                             (vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT__remw_res 
                                                              >> 0x1fU))))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT__remw_res)))),64);
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
        bufp->chgWData(oldp+71,(__Vtemp_h84e36b2d__0),130);
        bufp->chgWData(oldp+76,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__pair_list[0]),65);
        bufp->chgWData(oldp+79,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__pair_list[1]),65);
        bufp->chgQData(oldp+82,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list[0]),64);
        bufp->chgQData(oldp+84,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list[1]),64);
        bufp->chgQData(oldp+86,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__lut_out),64);
        bufp->chgBit(oldp+88,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+89,((vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                                 >> 7U)),25);
        bufp->chgCData(oldp+90,((0x7fU & vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem)),7);
        bufp->chgCData(oldp+91,((7U & (vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+92,((vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                                 >> 0x19U)),7);
        bufp->chgSData(oldp+93,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls),13);
        bufp->chgBit(oldp+94,((1U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                     >> 3U))));
        bufp->chgCData(oldp+95,((3U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                       >> 1U))),2);
        bufp->chgBit(oldp+96,((1U & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls))));
        bufp->chgBit(oldp+97,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__BranchHit));
        bufp->chgBit(oldp+98,((IData)((0x40000020U 
                                       == (0x40000020U 
                                           & vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem)))));
        bufp->chgBit(oldp+99,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__RtypeMul));
        bufp->chgBit(oldp+100,((1U & (vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                                      >> 0x1eU))));
        bufp->chgIData(oldp+101,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem),32);
        bufp->chgBit(oldp+102,((1U & (vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                                      >> 0xeU))));
        bufp->chgQData(oldp+103,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_LSU__DOT__Wmask64),64);
        bufp->chgQData(oldp+105,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_LSU__DOT__DPI_DataFromMem),64);
        bufp->chgBit(oldp+107,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_LSU__DOT__sig));
        bufp->chgWData(oldp+108,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__pair_list[0]),65);
        bufp->chgWData(oldp+111,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__pair_list[1]),65);
        bufp->chgQData(oldp+114,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__data_list[0]),64);
        bufp->chgQData(oldp+116,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__data_list[1]),64);
        bufp->chgQData(oldp+118,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__lut_out),64);
        bufp->chgBit(oldp+120,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+121,((0x1fU & (vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+122,((0x1fU & (vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+123,((0x1fU & (vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                                           >> 7U))),5);
        bufp->chgQData(oldp+124,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[0]),64);
        bufp->chgQData(oldp+126,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[1]),64);
        bufp->chgQData(oldp+128,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[2]),64);
        bufp->chgQData(oldp+130,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[3]),64);
        bufp->chgQData(oldp+132,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[4]),64);
        bufp->chgQData(oldp+134,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[5]),64);
        bufp->chgQData(oldp+136,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[6]),64);
        bufp->chgQData(oldp+138,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[7]),64);
        bufp->chgQData(oldp+140,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[8]),64);
        bufp->chgQData(oldp+142,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[9]),64);
        bufp->chgQData(oldp+144,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[10]),64);
        bufp->chgQData(oldp+146,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[11]),64);
        bufp->chgQData(oldp+148,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[12]),64);
        bufp->chgQData(oldp+150,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[13]),64);
        bufp->chgQData(oldp+152,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[14]),64);
        bufp->chgQData(oldp+154,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[15]),64);
        bufp->chgQData(oldp+156,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[16]),64);
        bufp->chgQData(oldp+158,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[17]),64);
        bufp->chgQData(oldp+160,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[18]),64);
        bufp->chgQData(oldp+162,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[19]),64);
        bufp->chgQData(oldp+164,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[20]),64);
        bufp->chgQData(oldp+166,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[21]),64);
        bufp->chgQData(oldp+168,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[22]),64);
        bufp->chgQData(oldp+170,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[23]),64);
        bufp->chgQData(oldp+172,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[24]),64);
        bufp->chgQData(oldp+174,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[25]),64);
        bufp->chgQData(oldp+176,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[26]),64);
        bufp->chgQData(oldp+178,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[27]),64);
        bufp->chgQData(oldp+180,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[28]),64);
        bufp->chgQData(oldp+182,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[29]),64);
        bufp->chgQData(oldp+184,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[30]),64);
        bufp->chgQData(oldp+186,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[31]),64);
        bufp->chgWData(oldp+188,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[0]),67);
        bufp->chgWData(oldp+191,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[1]),67);
        bufp->chgWData(oldp+194,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[2]),67);
        bufp->chgWData(oldp+197,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[3]),67);
        bufp->chgWData(oldp+200,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[4]),67);
        bufp->chgQData(oldp+203,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[0]),64);
        bufp->chgQData(oldp+205,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[1]),64);
        bufp->chgQData(oldp+207,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[2]),64);
        bufp->chgQData(oldp+209,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[3]),64);
        bufp->chgQData(oldp+211,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[4]),64);
        bufp->chgQData(oldp+213,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out),64);
        bufp->chgBit(oldp+215,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__hit));
    }
    bufp->chgBit(oldp+216,(vlSelf->clk));
    bufp->chgBit(oldp+217,(vlSelf->rst));
    bufp->chgIData(oldp+218,(vlSelf->inst),32);
    bufp->chgQData(oldp+219,(vlSelf->pc),64);
    bufp->chgQData(oldp+221,((4ULL + vlSelf->pc)),64);
    bufp->chgQData(oldp+223,(((IData)(vlSelf->top__DOT__ysyx_core__DOT__PCSrc)
                               ? vlSelf->top__DOT__ysyx_core__DOT__tnpc
                               : (4ULL + vlSelf->pc))),64);
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
    bufp->chgWData(oldp+225,(__Vtemp_h49dee185__0),130);
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
    bufp->chgWData(oldp+230,(__Vtemp_h4e4ad826__0),335);
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
