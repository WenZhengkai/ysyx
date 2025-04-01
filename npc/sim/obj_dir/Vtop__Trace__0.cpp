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
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__ToMem_Addr),32);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_rfSrc2),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem),32);
        bufp->chgCData(oldp+3,(((0xbU == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                                 ? 0xffU : ((0xaU == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                                             ? 0xfU
                                             : ((9U 
                                                 == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                                                 ? 3U
                                                 : 
                                                (8U 
                                                 == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType)))))),8);
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_MemWrite));
        bufp->chgBit(oldp+5,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_to_idu_ready));
        bufp->chgBit(oldp+6,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__valid));
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_to_idu_bits_next_pc),32);
        bufp->chgBit(oldp+8,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_to_idu_bits_isBranch));
        bufp->chgBit(oldp+9,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_from_exu_bruRes_valid));
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_from_exu_bruRes_targetPc),32);
        bufp->chgBit(oldp+11,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid));
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_pc),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_next_pc),32);
        bufp->chgBit(oldp+15,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_isBranch));
        bufp->chgBit(oldp+16,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_isu_ready));
        bufp->chgBit(oldp+17,((2U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__decodelist_0))));
        bufp->chgBit(oldp+18,((3U == (0x7fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))));
        bufp->chgCData(oldp+19,(((0x13U == (0x707fU 
                                            & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                  ? 0U : ((0x1013U 
                                           == (0xfe00707fU 
                                               & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                           ? 0U : (
                                                   (0x2013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x3013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x4013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x5013U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x6013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                        ? 0U
                                                        : (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_211))))))))),3);
        bufp->chgCData(oldp+20,(((0x13U == (0x707fU 
                                            & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                  ? 3U : ((0x1013U 
                                           == (0xfe00707fU 
                                               & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                           ? 3U : (
                                                   (0x2013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                    ? 3U
                                                    : 
                                                   ((0x3013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                     ? 3U
                                                     : 
                                                    ((0x4013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                      ? 3U
                                                      : 
                                                     ((0x5013U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                       ? 3U
                                                       : 
                                                      ((0x6013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                        ? 3U
                                                        : (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_247))))))))),3);
        bufp->chgCData(oldp+21,(((0x13U == (0x707fU 
                                            & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                  ? 0x40U : ((0x1013U 
                                              == (0xfe00707fU 
                                                  & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                              ? 1U : 
                                             ((0x2013U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                               ? 2U
                                               : ((0x3013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                   ? 3U
                                                   : 
                                                  ((0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                    ? 4U
                                                    : 
                                                   ((0x5013U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                     ? 5U
                                                     : 
                                                    ((0x6013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                      ? 6U
                                                      : 
                                                     ((0x7013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                       ? 7U
                                                       : (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_174)))))))))),7);
        bufp->chgCData(oldp+22,((0x1fU & (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+23,((0x1fU & (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                          >> 0x14U))),5);
        bufp->chgBit(oldp+24,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_isu_bits_ctrl_rfWen));
        bufp->chgCData(oldp+25,((0x1fU & (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                          >> 7U))),5);
        bufp->chgIData(oldp+26,(((1U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__decodelist_0))
                                  ? ((((vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                        >> 0x1fU) ? 0x7ffffU
                                        : 0U) << 0xdU) 
                                     | ((0x1000U & 
                                         (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                          >> 0x13U)) 
                                        | ((0x800U 
                                            & (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                                    >> 7U))))))
                                  : ((2U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__decodelist_0))
                                      ? ((((vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                            >> 0x1fU)
                                            ? 0xfffffU
                                            : 0U) << 0xcU) 
                                         | ((0xfe0U 
                                             & (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                                  >> 7U))))
                                      : ((7U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__decodelist_0))
                                          ? ((((vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                                >> 0x1fU)
                                                ? 0x7ffU
                                                : 0U) 
                                              << 0x15U) 
                                             | ((0x100000U 
                                                 & (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                                    >> 0xbU)) 
                                                | ((0xff000U 
                                                    & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst) 
                                                   | ((0x800U 
                                                       & (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                                          >> 9U)) 
                                                      | (0x7feU 
                                                         & (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                                            >> 0x14U))))))
                                          : ((6U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__decodelist_0))
                                              ? (0xfffff000U 
                                                 & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)
                                              : ((4U 
                                                  == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__decodelist_0))
                                                  ? 
                                                 ((((vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                                     >> 0x1fU)
                                                     ? 0xfffffU
                                                     : 0U) 
                                                   << 0xcU) 
                                                  | (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                                     >> 0x14U))
                                                  : 0U)))))),32);
        bufp->chgBit(oldp+27,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_1));
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_cf_inst),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_cf_pc),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_cf_next_pc),32);
        bufp->chgBit(oldp+31,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_cf_isBranch));
        bufp->chgBit(oldp+32,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_MemWrite));
        bufp->chgBit(oldp+33,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_ResSrc));
        bufp->chgCData(oldp+34,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc1Type),3);
        bufp->chgCData(oldp+35,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc2Type),3);
        bufp->chgCData(oldp+36,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuOpType),7);
        bufp->chgCData(oldp+37,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1),5);
        bufp->chgCData(oldp+38,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2),5);
        bufp->chgBit(oldp+39,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rfWen));
        bufp->chgCData(oldp+40,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rd),5);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_data_imm),32);
        bufp->chgBit(oldp+42,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_to_exu_valid));
        bufp->chgIData(oldp+43,(((4U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc1Type))
                                  ? 0U : ((2U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc1Type))
                                           ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_cf_pc
                                           : ((0U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc1Type))
                                               ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_to_exu_bits_data_rfSrc1
                                               : 0U)))),32);
        bufp->chgIData(oldp+44,(((5U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc2Type))
                                  ? 4U : ((3U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc2Type))
                                           ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_data_imm
                                           : ((1U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc2Type))
                                               ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_to_exu_bits_data_rfSrc2
                                               : 0U)))),32);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_to_exu_bits_data_rfSrc1),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_to_exu_bits_data_rfSrc2),32);
        bufp->chgCData(oldp+47,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_ctrl_rd),5);
        bufp->chgBit(oldp+48,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_wb_RegWrite));
        bufp->chgBit(oldp+49,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_2));
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_inst),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_pc),32);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_next_pc),32);
        bufp->chgBit(oldp+53,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_isBranch));
        bufp->chgBit(oldp+54,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_ResSrc));
        bufp->chgCData(oldp+55,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType),7);
        bufp->chgBit(oldp+56,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_rfWen));
        bufp->chgCData(oldp+57,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_rd),5);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc1),32);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc2),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_imm),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_rfSrc1),32);
        bufp->chgIData(oldp+62,(((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_from_exu_bruRes_valid)
                                  ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_from_exu_bruRes_targetPc
                                  : vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_next_pc)),32);
        bufp->chgIData(oldp+63,((IData)(((0x20U & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                                          ? (((QData)((IData)(
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__res 
                                                                           >> 0x1fU)))
                                                                ? 0xffffffffU
                                                                : 0U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__res)))
                                          : vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__res))),32);
        bufp->chgIData(oldp+64,(((6U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                                  ? vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem
                                  : ((5U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                                      ? (0xffffU & vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem)
                                      : ((4U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                                          ? (0xffU 
                                             & vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem)
                                          : ((2U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                                              ? vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem
                                              : ((1U 
                                                  == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                                                  ? 
                                                 ((((0x8000U 
                                                     & vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem)
                                                     ? 0xffffU
                                                     : 0U) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                                                   ? 
                                                  ((((0x80U 
                                                      & vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem)
                                                      ? 0xffffffU
                                                      : 0U) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem))
                                                   : 0U))))))),32);
        bufp->chgBit(oldp+65,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_3));
        bufp->chgIData(oldp+66,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_cf_inst),32);
        bufp->chgIData(oldp+67,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_cf_pc),32);
        bufp->chgIData(oldp+68,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_cf_next_pc),32);
        bufp->chgBit(oldp+69,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_ctrl_ResSrc));
        bufp->chgBit(oldp+70,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_ctrl_rfWen));
        bufp->chgIData(oldp+71,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_data_Alu0Res_bits),32);
        bufp->chgIData(oldp+72,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_data_data_from_mem),32);
        bufp->chgIData(oldp+73,(((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_ctrl_ResSrc)
                                  ? ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_ctrl_ResSrc)
                                      ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_data_data_from_mem
                                      : 0U) : vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_data_Alu0Res_bits)),32);
        bufp->chgBit(oldp+74,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_valid_REG));
        bufp->chgIData(oldp+75,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_pc_REG),32);
        bufp->chgIData(oldp+76,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_next_pc_REG),32);
        bufp->chgIData(oldp+77,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_inst_REG),32);
        bufp->chgBit(oldp+78,((1U & (((3U == (3U & 
                                              ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType) 
                                               >> 1U)))
                                       ? (~ (IData)(
                                                    (vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__adderRes 
                                                     >> 0x20U)))
                                       : ((2U == (3U 
                                                  & ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType) 
                                                     >> 1U)))
                                           ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__slt)
                                           : (IData)(
                                                     ((0U 
                                                       == 
                                                       (6U 
                                                        & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))) 
                                                      & (~ (IData)(
                                                                   (0U 
                                                                    != vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__xorRes))))))) 
                                     ^ (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType)))));
        bufp->chgBit(oldp+79,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__jalrBruRes_valid));
        bufp->chgIData(oldp+80,((0xfffffffeU & (vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_imm 
                                                + vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_rfSrc1))),32);
        bufp->chgBit(oldp+81,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__typebBruRes_valid));
        bufp->chgIData(oldp+82,((vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_pc 
                                 + vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_imm)),32);
        bufp->chgIData(oldp+83,(((1U & (((3U == (3U 
                                                 & ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType) 
                                                    >> 1U)))
                                          ? (~ (IData)(
                                                       (vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__adderRes 
                                                        >> 0x20U)))
                                          : ((2U == 
                                              (3U & 
                                               ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType) 
                                                >> 1U)))
                                              ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__slt)
                                              : (IData)(
                                                        ((0U 
                                                          == 
                                                          (6U 
                                                           & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))) 
                                                         & (~ (IData)(
                                                                      (0U 
                                                                       != vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__xorRes))))))) 
                                        ^ (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType)))
                                  ? (vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_pc 
                                     + vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_imm)
                                  : ((IData)(4U) + vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_pc))),32);
        bufp->chgBit(oldp+84,((1U & (~ ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType) 
                                        >> 6U)))));
        bufp->chgQData(oldp+85,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__adderRes),33);
        bufp->chgIData(oldp+87,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__xorRes),32);
        bufp->chgBit(oldp+88,((1U & (~ (IData)((vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__adderRes 
                                                >> 0x20U))))));
        bufp->chgBit(oldp+89,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__slt));
        bufp->chgCData(oldp+90,((0x1fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc2)),5);
        bufp->chgQData(oldp+91,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__res),33);
        bufp->chgBit(oldp+93,((1U & (IData)((vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__res 
                                             >> 0x1fU)))));
        bufp->chgQData(oldp+94,(((0x20U & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                                  ? (((QData)((IData)(
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__res 
                                                                   >> 0x1fU)))
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__res)))
                                  : vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__res)),64);
        bufp->chgBit(oldp+96,((1U & (vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem 
                                     >> 7U))));
        bufp->chgBit(oldp+97,((1U & (vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem 
                                     >> 0xfU))));
        bufp->chgCData(oldp+98,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__decodelist_0),3);
        bufp->chgBit(oldp+99,((vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                               >> 0x1fU)));
        bufp->chgIData(oldp+100,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__pc),32);
        bufp->chgCData(oldp+101,((0x7fU & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem)),7);
        bufp->chgBit(oldp+102,((0x6fU == (0x7fU & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem))));
        bufp->chgIData(oldp+103,(((((vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                     >> 0x1fU) ? 0x7ffU
                                     : 0U) << 0x15U) 
                                  | ((0x100000U & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                                   >> 0xbU)) 
                                     | ((0xff000U & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem) 
                                        | ((0x800U 
                                            & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                               >> 9U)) 
                                           | (0x7feU 
                                              & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                                 >> 0x14U))))))),32);
        bufp->chgIData(oldp+104,((vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__pc 
                                  + ((((vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                        >> 0x1fU) ? 0x7ffU
                                        : 0U) << 0x15U) 
                                     | ((0x100000U 
                                         & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                            >> 0xbU)) 
                                        | ((0xff000U 
                                            & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem) 
                                           | ((0x800U 
                                               & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                                  >> 9U)) 
                                              | (0x7feU 
                                                 & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                                    >> 0x14U)))))))),32);
        bufp->chgBit(oldp+105,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__bruRes_valid));
        bufp->chgIData(oldp+106,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__bruRes_targetPc),32);
        bufp->chgCData(oldp+107,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_1),2);
        bufp->chgCData(oldp+108,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_2),2);
        bufp->chgCData(oldp+109,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_3),2);
        bufp->chgCData(oldp+110,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_4),2);
        bufp->chgCData(oldp+111,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_5),2);
        bufp->chgCData(oldp+112,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_6),2);
        bufp->chgCData(oldp+113,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_7),2);
        bufp->chgCData(oldp+114,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_8),2);
        bufp->chgCData(oldp+115,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_9),2);
        bufp->chgCData(oldp+116,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_10),2);
        bufp->chgCData(oldp+117,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_11),2);
        bufp->chgCData(oldp+118,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_12),2);
        bufp->chgCData(oldp+119,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_13),2);
        bufp->chgCData(oldp+120,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_14),2);
        bufp->chgCData(oldp+121,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_15),2);
        bufp->chgCData(oldp+122,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_16),2);
        bufp->chgCData(oldp+123,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_17),2);
        bufp->chgCData(oldp+124,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_18),2);
        bufp->chgCData(oldp+125,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_19),2);
        bufp->chgCData(oldp+126,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_20),2);
        bufp->chgCData(oldp+127,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_21),2);
        bufp->chgCData(oldp+128,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_22),2);
        bufp->chgCData(oldp+129,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_23),2);
        bufp->chgCData(oldp+130,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_24),2);
        bufp->chgCData(oldp+131,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_25),2);
        bufp->chgCData(oldp+132,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_26),2);
        bufp->chgCData(oldp+133,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_27),2);
        bufp->chgCData(oldp+134,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_28),2);
        bufp->chgCData(oldp+135,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_29),2);
        bufp->chgCData(oldp+136,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_30),2);
        bufp->chgCData(oldp+137,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_31),2);
        bufp->chgBit(oldp+138,((0U != ((0x1fU == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1))
                                        ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_31)
                                        : ((0x1eU == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1))
                                            ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_30)
                                            : ((0x1dU 
                                                == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1))
                                                ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_29)
                                                : (
                                                   (0x1cU 
                                                    == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1))
                                                    ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_28)
                                                    : 
                                                   ((0x1bU 
                                                     == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1))
                                                     ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_27)
                                                     : 
                                                    ((0x1aU 
                                                      == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1))
                                                      ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_26)
                                                      : 
                                                     ((0x19U 
                                                       == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1))
                                                       ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_25)
                                                       : 
                                                      ((0x18U 
                                                        == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1))
                                                        ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_24)
                                                        : 
                                                       ((0x17U 
                                                         == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1))
                                                         ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_23)
                                                         : 
                                                        ((0x16U 
                                                          == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1))
                                                          ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_22)
                                                          : 
                                                         ((0x15U 
                                                           == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1))
                                                           ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_21)
                                                           : (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___GEN_20)))))))))))))));
        bufp->chgBit(oldp+139,((0U != ((0x1fU == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2))
                                        ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_31)
                                        : ((0x1eU == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2))
                                            ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_30)
                                            : ((0x1dU 
                                                == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2))
                                                ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_29)
                                                : (
                                                   (0x1cU 
                                                    == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2))
                                                    ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_28)
                                                    : 
                                                   ((0x1bU 
                                                     == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2))
                                                     ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_27)
                                                     : 
                                                    ((0x1aU 
                                                      == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2))
                                                      ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_26)
                                                      : 
                                                     ((0x19U 
                                                       == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2))
                                                       ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_25)
                                                       : 
                                                      ((0x18U 
                                                        == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2))
                                                        ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_24)
                                                        : 
                                                       ((0x17U 
                                                         == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2))
                                                         ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_23)
                                                         : 
                                                        ((0x16U 
                                                          == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2))
                                                          ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_22)
                                                          : 
                                                         ((0x15U 
                                                           == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2))
                                                           ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_21)
                                                           : (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___GEN_52)))))))))))))));
        bufp->chgBit(oldp+140,(((0U != ((0x1fU == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1))
                                         ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_31)
                                         : ((0x1eU 
                                             == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1))
                                             ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_30)
                                             : ((0x1dU 
                                                 == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1))
                                                 ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_29)
                                                 : 
                                                ((0x1cU 
                                                  == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1))
                                                  ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_28)
                                                  : 
                                                 ((0x1bU 
                                                   == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1))
                                                   ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_27)
                                                   : 
                                                  ((0x1aU 
                                                    == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1))
                                                    ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_26)
                                                    : 
                                                   ((0x19U 
                                                     == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1))
                                                     ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_25)
                                                     : 
                                                    ((0x18U 
                                                      == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1))
                                                      ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_24)
                                                      : 
                                                     ((0x17U 
                                                       == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1))
                                                       ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_23)
                                                       : 
                                                      ((0x16U 
                                                        == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1))
                                                        ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_22)
                                                        : 
                                                       ((0x15U 
                                                         == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1))
                                                         ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_21)
                                                         : (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___GEN_20))))))))))))) 
                                | (0U != ((0x1fU == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2))
                                           ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_31)
                                           : ((0x1eU 
                                               == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2))
                                               ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_30)
                                               : ((0x1dU 
                                                   == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2))
                                                   ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_29)
                                                   : 
                                                  ((0x1cU 
                                                    == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2))
                                                    ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_28)
                                                    : 
                                                   ((0x1bU 
                                                     == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2))
                                                     ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_27)
                                                     : 
                                                    ((0x1aU 
                                                      == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2))
                                                      ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_26)
                                                      : 
                                                     ((0x19U 
                                                       == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2))
                                                       ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_25)
                                                       : 
                                                      ((0x18U 
                                                        == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2))
                                                        ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_24)
                                                        : 
                                                       ((0x17U 
                                                         == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2))
                                                         ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_23)
                                                         : 
                                                        ((0x16U 
                                                          == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2))
                                                          ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_22)
                                                          : 
                                                         ((0x15U 
                                                           == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2))
                                                           ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_21)
                                                           : (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___GEN_52))))))))))))))));
        bufp->chgIData(oldp+141,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__wbuClearMask),32);
        bufp->chgIData(oldp+142,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__isFireSetMask),32);
        bufp->chgIData(oldp+143,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[0]),32);
        bufp->chgIData(oldp+144,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[1]),32);
        bufp->chgIData(oldp+145,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[2]),32);
        bufp->chgIData(oldp+146,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[3]),32);
        bufp->chgIData(oldp+147,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[4]),32);
        bufp->chgIData(oldp+148,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[5]),32);
        bufp->chgIData(oldp+149,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[6]),32);
        bufp->chgIData(oldp+150,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[7]),32);
        bufp->chgIData(oldp+151,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[8]),32);
        bufp->chgIData(oldp+152,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[9]),32);
        bufp->chgIData(oldp+153,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[10]),32);
        bufp->chgIData(oldp+154,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[11]),32);
        bufp->chgIData(oldp+155,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[12]),32);
        bufp->chgIData(oldp+156,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[13]),32);
        bufp->chgIData(oldp+157,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[14]),32);
        bufp->chgIData(oldp+158,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[15]),32);
        bufp->chgIData(oldp+159,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[16]),32);
        bufp->chgIData(oldp+160,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[17]),32);
        bufp->chgIData(oldp+161,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[18]),32);
        bufp->chgIData(oldp+162,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[19]),32);
        bufp->chgIData(oldp+163,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[20]),32);
        bufp->chgIData(oldp+164,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[21]),32);
        bufp->chgIData(oldp+165,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[22]),32);
        bufp->chgIData(oldp+166,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[23]),32);
        bufp->chgIData(oldp+167,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[24]),32);
        bufp->chgIData(oldp+168,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[25]),32);
        bufp->chgIData(oldp+169,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[26]),32);
        bufp->chgIData(oldp+170,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[27]),32);
        bufp->chgIData(oldp+171,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[28]),32);
        bufp->chgIData(oldp+172,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[29]),32);
        bufp->chgIData(oldp+173,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[30]),32);
        bufp->chgIData(oldp+174,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[31]),32);
        bufp->chgIData(oldp+175,(vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem),32);
    }
    bufp->chgBit(oldp+176,(vlSelf->clk));
    bufp->chgBit(oldp+177,(vlSelf->rst));
    bufp->chgIData(oldp+178,(vlSelf->inst),32);
    bufp->chgIData(oldp+179,(vlSelf->pc),32);
    bufp->chgBit(oldp+180,(vlSelf->commit_valid));
    bufp->chgIData(oldp+181,(vlSelf->commit_pc),32);
    bufp->chgIData(oldp+182,(vlSelf->commit_next_pc),32);
    bufp->chgIData(oldp+183,(vlSelf->commit_inst),32);
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
