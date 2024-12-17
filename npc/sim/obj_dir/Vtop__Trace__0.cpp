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
    VlWide<3>/*95:0*/ __Vtemp_hd64ae7b4__0;
    VlWide<3>/*95:0*/ __Vtemp_hc2151deb__0;
    VlWide<6>/*191:0*/ __Vtemp_h27237c9a__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__key_list[1]));
        bufp->chgBit(oldp+2,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+3,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__key_list[1]));
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list[1]),3);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list[2]),3);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list[3]),3);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list[4]),3);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+9,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALU__DOT__ALURes_temp),32);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__ToMem_Data),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem),32);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__Wmask),8);
        bufp->chgBit(oldp+13,((1U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls) 
                                     >> 7U))));
        bufp->chgBit(oldp+14,((1U & ((((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls) 
                                       >> 3U) & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__BranchHit)) 
                                     | (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls)))));
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__tnpc),32);
        bufp->chgBit(oldp+16,(((1U == (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ALUCtrl))
                                ? (0U == vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALU__DOT__ALURes_temp)
                                : ((3U == (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ALUCtrl))
                                    ? (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALU__DOT____VdfgTmp_h30e473f3__0)
                                    : ((4U == (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ALUCtrl)) 
                                       & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALU__DOT____VdfgTmp_h30e9c121__0))))));
        bufp->chgCData(oldp+17,((7U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls) 
                                       >> 4U))),3);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ALUCtrl),5);
        bufp->chgBit(oldp+19,((1U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls) 
                                     >> 8U))));
        bufp->chgCData(oldp+20,((7U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls) 
                                       >> 9U))),3);
        bufp->chgBit(oldp+21,((1U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls) 
                                     >> 0xcU))));
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ImmExt),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__Result),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__PCTarget_srca),32);
        bufp->chgBit(oldp+27,((IData)((0x67U == (0x707fU 
                                                 & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem)))));
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__DataFromMem),32);
        bufp->chgBit(oldp+29,(((0x3bU == (0x7fU & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem)) 
                               | (0x1bU == (0x7fU & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem)))));
        bufp->chgIData(oldp+30,((vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1 
                                 + ((1U & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ALUCtrl))
                                     ? ((IData)(1U) 
                                        + (~ vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb))
                                     : vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb))),32);
        bufp->chgIData(oldp+31,(((1U & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ALUCtrl))
                                  ? ((IData)(1U) + 
                                     (~ vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb))
                                  : vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb)),32);
        bufp->chgCData(oldp+32,((0x3fU & vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb)),6);
        bufp->chgIData(oldp+33,(((0x1fU >= (0x3fU & vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb))
                                  ? VL_SHIFTRS_III(32,32,6, vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1, 
                                                   (0x3fU 
                                                    & vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb))
                                  : (- (vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1 
                                        >> 0x1fU)))),32);
        bufp->chgIData(oldp+34,(((0x1fU >= (0x3fU & vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb))
                                  ? (vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1 
                                     >> (0x3fU & vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb))
                                  : 0U)),32);
        bufp->chgIData(oldp+35,(((0x1fU >= (0x3fU & vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb))
                                  ? (vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1 
                                     << (0x3fU & vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb))
                                  : 0U)),32);
        bufp->chgIData(oldp+36,((vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1 
                                 ^ vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb)),32);
        bufp->chgIData(oldp+37,((vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1 
                                 & vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb)),32);
        bufp->chgIData(oldp+38,(((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALU__DOT____VdfgTmp_h30e473f3__0)
                                  ? 1U : 0U)),32);
        bufp->chgIData(oldp+39,(((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALU__DOT____VdfgTmp_h30e9c121__0)
                                  ? 1U : 0U)),32);
        bufp->chgIData(oldp+40,((vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1 
                                 * vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb)),32);
        bufp->chgIData(oldp+41,((vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1 
                                 | vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb)),32);
        bufp->chgIData(oldp+42,(VL_DIV_III(32, vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1, vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb)),32);
        bufp->chgIData(oldp+43,(VL_DIVS_III(32, vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1, vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb)),32);
        bufp->chgIData(oldp+44,(VL_MODDIVS_III(32, vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1, vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb)),32);
        bufp->chgQData(oldp+45,(VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1), 
                                            VL_EXTENDS_QI(64,32, vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb))),64);
        bufp->chgIData(oldp+47,((IData)((VL_MULS_QQQ(64, 
                                                     VL_EXTENDS_QI(64,32, vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1), 
                                                     VL_EXTENDS_QI(64,32, vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb)) 
                                         >> 0x20U))),32);
        bufp->chgIData(oldp+48,(VL_MODDIV_III(32, vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1, vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb)),32);
        __Vtemp_hd64ae7b4__0[0U] = (IData)((0x100000000ULL 
                                            | (QData)((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ImmExt))));
        __Vtemp_hd64ae7b4__0[1U] = ((vlSelf->top__DOT__ToMem_Data 
                                     << 1U) | (IData)(
                                                      ((0x100000000ULL 
                                                        | (QData)((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ImmExt))) 
                                                       >> 0x20U)));
        __Vtemp_hd64ae7b4__0[2U] = (vlSelf->top__DOT__ToMem_Data 
                                    >> 0x1fU);
        bufp->chgWData(oldp+49,(__Vtemp_hd64ae7b4__0),66);
        bufp->chgQData(oldp+52,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+54,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+59,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+60,((vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                 >> 7U)),25);
        bufp->chgCData(oldp+61,((0x7fU & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem)),7);
        bufp->chgCData(oldp+62,((7U & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+63,((vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                 >> 0x19U)),7);
        bufp->chgSData(oldp+64,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls),13);
        bufp->chgBit(oldp+65,((1U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls) 
                                     >> 3U))));
        bufp->chgCData(oldp+66,((3U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls) 
                                       >> 1U))),2);
        bufp->chgBit(oldp+67,((1U & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls))));
        bufp->chgBit(oldp+68,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__BranchHit));
        bufp->chgBit(oldp+69,((IData)((0x40000020U 
                                       == (0x40000020U 
                                           & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem)))));
        bufp->chgBit(oldp+70,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__RtypeMul));
        bufp->chgBit(oldp+71,((1U & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                     >> 0x1eU))));
        bufp->chgBit(oldp+72,((1U & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                     >> 0x19U))));
        bufp->chgBit(oldp+73,((1U & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                     >> 0xeU))));
        bufp->chgQData(oldp+74,((((QData)((IData)((0xffU 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->top__DOT__Wmask) 
                                                                    >> 7U))))))) 
                                  << 0x38U) | (((QData)((IData)(
                                                                (0xffU 
                                                                 & (- (IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelf->top__DOT__Wmask) 
                                                                                >> 6U))))))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT__Wmask) 
                                                                                >> 5U))))))) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(
                                                                      (0xffU 
                                                                       & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT__Wmask) 
                                                                                >> 4U))))))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_LSU__DOT____VdfgTmp_hd1f2e586__0))))))),64);
        bufp->chgBit(oldp+76,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_LSU__DOT__sig));
        bufp->chgQData(oldp+77,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+79,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+81,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+82,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+83,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+84,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+85,((0x1fU & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+86,((0x1fU & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+87,((0x1fU & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                          >> 7U))),5);
        bufp->chgIData(oldp+88,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__x[0]),32);
        bufp->chgIData(oldp+89,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__x[1]),32);
        bufp->chgIData(oldp+90,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__x[2]),32);
        bufp->chgIData(oldp+91,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__x[3]),32);
        bufp->chgIData(oldp+92,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__x[4]),32);
        bufp->chgIData(oldp+93,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__x[5]),32);
        bufp->chgIData(oldp+94,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__x[6]),32);
        bufp->chgIData(oldp+95,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__x[7]),32);
        bufp->chgIData(oldp+96,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__x[8]),32);
        bufp->chgIData(oldp+97,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__x[9]),32);
        bufp->chgIData(oldp+98,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__x[10]),32);
        bufp->chgIData(oldp+99,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__x[11]),32);
        bufp->chgIData(oldp+100,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__x[12]),32);
        bufp->chgIData(oldp+101,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__x[13]),32);
        bufp->chgIData(oldp+102,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__x[14]),32);
        bufp->chgIData(oldp+103,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__x[15]),32);
        bufp->chgQData(oldp+104,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+106,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+108,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+110,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[3]),35);
        bufp->chgQData(oldp+112,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[4]),35);
        bufp->chgIData(oldp+114,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+115,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+116,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+117,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+118,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+119,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+120,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+121,(vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem),32);
    }
    bufp->chgBit(oldp+122,(vlSelf->clk));
    bufp->chgBit(oldp+123,(vlSelf->rst));
    bufp->chgIData(oldp+124,(vlSelf->inst),32);
    bufp->chgIData(oldp+125,(vlSelf->pc),32);
    bufp->chgIData(oldp+126,(((IData)(4U) + vlSelf->pc)),32);
    __Vtemp_hc2151deb__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1))));
    __Vtemp_hc2151deb__0[1U] = ((vlSelf->pc << 1U) 
                                | (IData)(((0x100000000ULL 
                                            | (QData)((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1))) 
                                           >> 0x20U)));
    __Vtemp_hc2151deb__0[2U] = (vlSelf->pc >> 0x1fU);
    bufp->chgWData(oldp+127,(__Vtemp_hc2151deb__0),66);
    __Vtemp_h27237c9a__0[0U] = (IData)((0x400000000ULL 
                                        | (QData)((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ImmExt))));
    __Vtemp_h27237c9a__0[1U] = ((vlSelf->top__DOT__ysyx_core_rv32im__DOT__tnpc 
                                 << 3U) | (IData)((
                                                   (0x400000000ULL 
                                                    | (QData)((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ImmExt))) 
                                                   >> 0x20U)));
    __Vtemp_h27237c9a__0[2U] = (0x18U | ((((IData)(4U) 
                                           + vlSelf->pc) 
                                          << 6U) | 
                                         (vlSelf->top__DOT__ysyx_core_rv32im__DOT__tnpc 
                                          >> 0x1dU)));
    __Vtemp_h27237c9a__0[3U] = (0x80U | ((vlSelf->top__DOT__ysyx_core_rv32im__DOT__DataFromMem 
                                          << 9U) | 
                                         (((IData)(4U) 
                                           + vlSelf->pc) 
                                          >> 0x1aU)));
    __Vtemp_h27237c9a__0[4U] = (0x200U | ((vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALU__DOT__ALURes_temp 
                                           << 0xcU) 
                                          | (vlSelf->top__DOT__ysyx_core_rv32im__DOT__DataFromMem 
                                             >> 0x17U)));
    __Vtemp_h27237c9a__0[5U] = (vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALU__DOT__ALURes_temp 
                                >> 0x14U);
    bufp->chgWData(oldp+130,(__Vtemp_h27237c9a__0),175);
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
