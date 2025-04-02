// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

void Vtop___024root____Vdpiimwrap_top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<IData/*31:0*/, 16> &a);

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    Vtop___024root____Vdpiimwrap_top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x);
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("../vsrc/../vsrc/top.v", 12, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop___024root____Vdpiimwrap_top__DOT__ysyx_datamem__DOT__npc_pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);
void Vtop___024root____Vdpiimwrap_top__DOT__ysyx_datamem__DOT__npc_pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);
void Vtop___024root____Vdpiimwrap_top__DOT__ysyx_instmem__DOT__npc_nextPC_write_TOP(IData/*31:0*/ nextPC);
void Vtop___024root____Vdpiimwrap_top__DOT__ysyx_instmem__DOT__npc_inst_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_valid 
        = vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_2;
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT___next_pc_T_1 
        = ((IData)(4U) + vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__pc);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_1_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_1)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_1_T_7 
        = ((0U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_1))
            ? 0U : (3U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_1) 
                          - (IData)(1U))));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_2_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_2)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_2_T_7 
        = ((0U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_2))
            ? 0U : (3U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_2) 
                          - (IData)(1U))));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_3_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_3)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_3_T_7 
        = ((0U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_3))
            ? 0U : (3U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_3) 
                          - (IData)(1U))));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_4_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_4)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_4_T_7 
        = ((0U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_4))
            ? 0U : (3U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_4) 
                          - (IData)(1U))));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_5_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_5)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_5_T_7 
        = ((0U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_5))
            ? 0U : (3U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_5) 
                          - (IData)(1U))));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_6_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_6)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_6_T_7 
        = ((0U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_6))
            ? 0U : (3U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_6) 
                          - (IData)(1U))));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_7_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_7)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_7_T_7 
        = ((0U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_7))
            ? 0U : (3U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_7) 
                          - (IData)(1U))));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_8_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_8)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_8_T_7 
        = ((0U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_8))
            ? 0U : (3U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_8) 
                          - (IData)(1U))));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_9_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_9)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_9_T_7 
        = ((0U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_9))
            ? 0U : (3U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_9) 
                          - (IData)(1U))));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_10_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_10)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_10_T_7 
        = ((0U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_10))
            ? 0U : (3U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_10) 
                          - (IData)(1U))));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_11_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_11)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_11_T_7 
        = ((0U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_11))
            ? 0U : (3U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_11) 
                          - (IData)(1U))));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_12_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_12)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_12_T_7 
        = ((0U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_12))
            ? 0U : (3U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_12) 
                          - (IData)(1U))));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_13_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_13)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_13_T_7 
        = ((0U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_13))
            ? 0U : (3U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_13) 
                          - (IData)(1U))));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_14_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_14)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_14_T_7 
        = ((0U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_14))
            ? 0U : (3U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_14) 
                          - (IData)(1U))));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_15_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_15)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_15_T_7 
        = ((0U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_15))
            ? 0U : (3U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_15) 
                          - (IData)(1U))));
    vlSelf->commit_valid = vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_valid_REG;
    vlSelf->commit_pc = vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_pc_REG;
    vlSelf->commit_next_pc = vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_next_pc_REG;
    vlSelf->commit_inst = vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_inst_REG;
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_isu_bits_ctrl_rfWen 
        = ((0x13U == (0x707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) 
           | ((0x1013U == (0xfe00707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) 
              | ((0x2013U == (0x707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) 
                 | ((0x3013U == (0x707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) 
                    | ((0x4013U == (0x707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) 
                       | ((0x5013U == (0xfe00707fU 
                                       & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) 
                          | ((0x6013U == (0x707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) 
                             | ((0x7013U == (0x707fU 
                                             & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) 
                                | ((0x40005013U == 
                                    (0xfe00707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) 
                                   | ((0x33U == (0xfe00707fU 
                                                 & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) 
                                      | ((0x1033U == 
                                          (0xfe00707fU 
                                           & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) 
                                         | ((0x2033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) 
                                            | ((0x3033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) 
                                               | ((0x4033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) 
                                                  | ((0x5033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) 
                                                     | ((0x6033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) 
                                                        | ((0x7033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) 
                                                           | ((0x40000033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) 
                                                              | ((0x40005033U 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) 
                                                                 | ((0x17U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) 
                                                                    | ((0x37U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) 
                                                                       | ((0x6fU 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) 
                                                                          | ((0x67U 
                                                                              == 
                                                                              (0x707fU 
                                                                               & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) 
                                                                             | ((0x63U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) 
                                                                                & ((0x1063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) 
                                                                                & ((0x4063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) 
                                                                                & ((0x5063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) 
                                                                                & ((0x6063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) 
                                                                                & ((0x7063U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) 
                                                                                & ((0x23U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) 
                                                                                & ((0x1023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) 
                                                                                & ((0x2023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) 
                                                                                & ((3U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) 
                                                                                | ((0x1003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) 
                                                                                | ((0x2003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) 
                                                                                | ((0x4003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) 
                                                                                | ((0x5003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) 
                                                                                | ((0x1073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) 
                                                                                | ((0x2073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) 
                                                                                | ((0x73U 
                                                                                == vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst) 
                                                                                | ((0x100073U 
                                                                                == vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst) 
                                                                                | (0x30200073U 
                                                                                == vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))))))))))))))))))))))))))))))))))))))))));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_valid 
        = vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_3;
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_to_exu_bits_data_rfSrc1 
        = vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x
        [(0xfU & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1))];
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_to_exu_bits_data_rfSrc2 
        = vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x
        [(0xfU & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2))];
    if ((0x5063U == (0x707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_140 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_181 = 0x15U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_222 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_263 = 1U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_99 = 1U;
    } else if ((0x6063U == (0x707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_140 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_181 = 0x16U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_222 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_263 = 1U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_99 = 1U;
    } else if ((0x7063U == (0x707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_140 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_181 = 0x17U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_222 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_263 = 1U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_99 = 1U;
    } else if ((0x23U == (0x707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_140 = 1U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_181 = 8U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_222 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_263 = 3U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_99 = 2U;
    } else if ((0x1023U == (0x707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_140 = 1U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_181 = 9U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_222 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_263 = 3U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_99 = 2U;
    } else if ((0x2023U == (0x707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_140 = 1U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_181 = 0xaU;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_222 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_263 = 3U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_99 = 2U;
    } else if ((3U == (0x707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_140 = 1U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_181 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_222 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_263 = 3U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_99 = 4U;
    } else if ((0x1003U == (0x707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_140 = 1U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_181 = 1U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_222 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_263 = 3U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_99 = 4U;
    } else if ((0x2003U == (0x707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_140 = 1U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_181 = 2U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_222 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_263 = 3U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_99 = 4U;
    } else if ((0x4003U == (0x707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_140 = 1U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_181 = 4U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_222 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_263 = 3U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_99 = 4U;
    } else if ((0x5003U == (0x707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_140 = 1U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_181 = 5U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_222 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_263 = 3U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_99 = 4U;
    } else if ((0x1073U == (0x707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_140 = 3U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_181 = 1U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_222 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_263 = 3U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_99 = 4U;
    } else if ((0x2073U == (0x707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_140 = 3U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_181 = 2U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_222 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_263 = 3U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_99 = 4U;
    } else {
        if ((0x73U == vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) {
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_140 = 3U;
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_222 = 0U;
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_263 = 3U;
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_99 = 4U;
        } else if ((0x100073U == vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) {
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_140 = 3U;
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_222 = 0U;
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_263 = 3U;
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_99 = 4U;
        } else if ((0x30200073U == vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)) {
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_140 = 3U;
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_222 = 0U;
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_263 = 1U;
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_99 = 5U;
        } else {
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_140 = 0U;
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_222 = 4U;
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_263 = 4U;
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_99 = 0U;
        }
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_181 
            = ((0x73U != vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst) 
               & ((0x100073U != vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst) 
                  & (0x30200073U != vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)));
    }
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_wb_RegWrite 
        = ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_3) 
           & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_ctrl_rfWen));
    vlSelf->top__DOT__ToMem_Addr = (vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc1 
                                    + vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___GEN_13 
        = ((0xdU == (0xfU & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1)))
            ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_13)
            : ((0xcU == (0xfU & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1)))
                ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_12)
                : ((0xbU == (0xfU & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1)))
                    ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_11)
                    : ((0xaU == (0xfU & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1)))
                        ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_10)
                        : ((9U == (0xfU & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1)))
                            ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_9)
                            : ((8U == (0xfU & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1)))
                                ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_8)
                                : ((7U == (0xfU & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1)))
                                    ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_7)
                                    : ((6U == (0xfU 
                                               & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1)))
                                        ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_6)
                                        : ((5U == (0xfU 
                                                   & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1)))
                                            ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_5)
                                            : ((4U 
                                                == 
                                                (0xfU 
                                                 & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1)))
                                                ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_4)
                                                : (
                                                   (3U 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1)))
                                                    ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_3)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1)))
                                                     ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_2)
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1)))
                                                      ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_1)
                                                      : 0U)))))))))))));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___GEN_29 
        = ((0xdU == (0xfU & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2)))
            ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_13)
            : ((0xcU == (0xfU & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2)))
                ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_12)
                : ((0xbU == (0xfU & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2)))
                    ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_11)
                    : ((0xaU == (0xfU & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2)))
                        ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_10)
                        : ((9U == (0xfU & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2)))
                            ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_9)
                            : ((8U == (0xfU & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2)))
                                ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_8)
                                : ((7U == (0xfU & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2)))
                                    ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_7)
                                    : ((6U == (0xfU 
                                               & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2)))
                                        ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_6)
                                        : ((5U == (0xfU 
                                                   & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2)))
                                            ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_5)
                                            : ((4U 
                                                == 
                                                (0xfU 
                                                 & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2)))
                                                ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_4)
                                                : (
                                                   (3U 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2)))
                                                    ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_3)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2)))
                                                     ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_2)
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2)))
                                                      ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_1)
                                                      : 0U)))))))))))));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__csr 
        = ((0x300U == vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc2)
            ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__mstatus
            : ((0x341U == vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc2)
                ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__mepc
                : ((0x342U == vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc2)
                    ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__mcause
                    : ((0x305U == vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc2)
                        ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__mtvec
                        : 0U))));
    vlSelf->pc = vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__pc;
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__xorRes 
        = (vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc1 
           ^ vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__adderRes 
        = (0x1ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc1)) 
                              + (QData)((IData)((vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc2 
                                                 ^ 
                                                 ((0x40U 
                                                   & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                                                   ? 0U
                                                   : 0xffffffffU))))) 
                             + (QData)((IData)((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType) 
                                                    >> 6U)))))));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0_io_in_valid 
        = ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_2) 
           & (3U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuType)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT___jalrBruRes_valid_T 
        = ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_isBranch) 
           & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_2));
    if ((0x2033U == (0xfe00707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_155 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_196 = 2U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_237 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_278 = 1U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_114 = 5U;
    } else if ((0x3033U == (0xfe00707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_155 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_196 = 3U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_237 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_278 = 1U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_114 = 5U;
    } else if ((0x4033U == (0xfe00707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_155 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_196 = 4U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_237 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_278 = 1U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_114 = 5U;
    } else if ((0x5033U == (0xfe00707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_155 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_196 = 5U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_237 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_278 = 1U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_114 = 5U;
    } else if ((0x6033U == (0xfe00707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_155 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_196 = 6U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_237 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_278 = 1U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_114 = 5U;
    } else if ((0x7033U == (0xfe00707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_155 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_196 = 7U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_237 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_278 = 1U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_114 = 5U;
    } else if ((0x40000033U == (0xfe00707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_155 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_196 = 8U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_237 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_278 = 1U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_114 = 5U;
    } else if ((0x40005033U == (0xfe00707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_155 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_196 = 0xdU;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_237 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_278 = 1U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_114 = 5U;
    } else if ((0x17U == (0x7fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_155 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_196 = 0x40U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_237 = 2U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_278 = 3U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_114 = 6U;
    } else if ((0x37U == (0x7fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_155 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_196 = 0x40U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_237 = 4U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_278 = 3U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_114 = 6U;
    } else if ((0x6fU == (0x7fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_155 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_196 = 0x40U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_237 = 2U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_278 = 5U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_114 = 7U;
    } else if ((0x67U == (0x707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_155 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_196 = 0x40U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_237 = 2U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_278 = 5U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_114 = 4U;
    } else if ((0x63U == (0x707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_155 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_196 = 0x10U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_237 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_278 = 1U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_114 = 1U;
    } else if ((0x1063U == (0x707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_155 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_196 = 0x11U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_237 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_278 = 1U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_114 = 1U;
    } else if ((0x4063U == (0x707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_155 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_196 = 0x14U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_237 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_278 = 1U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_114 = 1U;
    } else {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_155 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_140;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_196 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_181;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_237 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_222;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_278 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_263;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_114 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_99;
    }
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__wbuClearMask 
        = ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_wb_RegWrite)
            ? (0xffffU & ((IData)(1U) << (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_ctrl_rd)))
            : 0U);
    Vtop___024root____Vdpiimwrap_top__DOT__ysyx_datamem__DOT__npc_pmem_read_TOP(vlSelf->top__DOT__ToMem_Addr, vlSelf->__Vtask_top__DOT__ysyx_datamem__DOT__npc_pmem_read__2__rdata);
    vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem 
        = vlSelf->__Vtask_top__DOT__ysyx_datamem__DOT__npc_pmem_read__2__rdata;
    if (vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_MemWrite) {
        Vtop___024root____Vdpiimwrap_top__DOT__ysyx_datamem__DOT__npc_pmem_write_TOP(vlSelf->top__DOT__ToMem_Addr, vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_rfSrc2, 
                                                                                ((0xbU 
                                                                                == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                                                                                 ? 0xffU
                                                                                 : 
                                                                                ((0xaU 
                                                                                == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                                                                                 ? 0xfU
                                                                                 : 
                                                                                ((9U 
                                                                                == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                                                                                 ? 3U
                                                                                 : 
                                                                                (8U 
                                                                                == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))))));
    }
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_to_exu_valid 
        = ((~ ((0U != ((0xfU == (0xfU & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1)))
                        ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_15)
                        : ((0xeU == (0xfU & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1)))
                            ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_14)
                            : (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___GEN_13)))) 
               | (0U != ((0xfU == (0xfU & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2)))
                          ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_15)
                          : ((0xeU == (0xfU & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2)))
                              ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_14)
                              : (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___GEN_29)))))) 
           & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_1));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT___csrUpdate_T_2 
        = ((~ vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc1) 
           & vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__csr);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT___csrUpdate_T_6 
        = ((2U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
            ? (vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc1 
               | vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__csr)
            : ((1U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc1
                : 0U));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_to_wbu_bits_data_csrRdata 
        = ((0x73U == vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_inst)
            ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__mtvec
            : ((0x30200073U == vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_inst)
                ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__mepc
                : vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__csr));
    Vtop___024root____Vdpiimwrap_top__DOT__ysyx_instmem__DOT__npc_nextPC_write_TOP(vlSelf->pc);
    Vtop___024root____Vdpiimwrap_top__DOT__ysyx_instmem__DOT__npc_inst_read_TOP(vlSelf->pc, vlSelf->__Vtask_top__DOT__ysyx_instmem__DOT__npc_inst_read__0__rdata);
    vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
        = vlSelf->__Vtask_top__DOT__ysyx_instmem__DOT__npc_inst_read__0__rdata;
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__slt 
        = (1U ^ ((vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__adderRes 
                  >> 0x20U) ^ (vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__xorRes 
                               >> 0x1fU)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__csrWen 
        = ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0_io_in_valid) 
           & (0U != (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csrBruRes_valid 
        = (((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0_io_in_valid) 
            & ((0x100073U != vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_inst) 
               & (0U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType)))) 
           & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_2));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__jalrBruRes_valid 
        = ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT___jalrBruRes_valid_T) 
           & (0x67U == (0x7fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_inst)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__typebBruRes_valid 
        = ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT___jalrBruRes_valid_T) 
           & (0x63U == (0x7fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_inst)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__decodelist_0 
        = ((0x13U == (0x707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
            ? 4U : ((0x1013U == (0xfe00707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                     ? 4U : ((0x2013U == (0x707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                              ? 4U : ((0x3013U == (0x707fU 
                                                   & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                       ? 4U : ((0x4013U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                ? 4U
                                                : (
                                                   (0x5013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                    ? 4U
                                                    : 
                                                   ((0x6013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                     ? 4U
                                                     : 
                                                    ((0x7013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                      ? 4U
                                                      : 
                                                     ((0x40005013U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                       ? 4U
                                                       : 
                                                      ((0x33U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                        ? 5U
                                                        : 
                                                       ((0x1033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                         ? 5U
                                                         : (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_114))))))))))));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__isFireSetMask 
        = (((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rfWen) 
            & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_to_exu_valid))
            ? (0xffffU & ((IData)(1U) << (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rd)))
            : 0U);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_isu_ready 
        = (1U & ((~ (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_1)) 
                 | (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_to_exu_valid)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__csrUpdate 
        = ((3U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
            ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT___csrUpdate_T_2
            : vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT___csrUpdate_T_6);
    vlSelf->inst = vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem;
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_to_idu_bits_isBranch 
        = ((0x63U == (0x7fU & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem)) 
           | ((0x67U == (0x7fU & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem)) 
              | (0x6fU == (0x7fU & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem))));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__res 
        = ((0xdU == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
            ? (QData)((IData)(VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc1, 
                                             (0x1fU 
                                              & vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc2))))
            : ((7U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                ? (QData)((IData)((vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc1 
                                   & vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc2)))
                : ((6U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                    ? (QData)((IData)((vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc1 
                                       | vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc2)))
                    : ((5U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                        ? (QData)((IData)((vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc1 
                                           >> (0x1fU 
                                               & vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc2))))
                        : ((4U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                            ? (QData)((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__xorRes))
                            : ((3U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                                ? (QData)((IData)((1U 
                                                   & (~ (IData)(
                                                                (vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__adderRes 
                                                                 >> 0x20U))))))
                                : ((2U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                                    ? (QData)((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__slt))
                                    : ((1U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                                        ? (QData)((IData)(
                                                          (vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc1 
                                                           << 
                                                           (0x1fU 
                                                            & vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc2))))
                                        : vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__adderRes))))))));
    if (vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__jalrBruRes_valid) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_from_exu_bruRes_targetPc 
            = (0xfffffffeU & (vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_imm 
                              + vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_rfSrc1));
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_from_exu_bruRes_valid 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__jalrBruRes_valid;
    } else if (vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__typebBruRes_valid) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_from_exu_bruRes_targetPc 
            = ((1U & (((3U == (3U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType) 
                                     >> 1U))) ? (~ (IData)(
                                                           (vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__adderRes 
                                                            >> 0x20U)))
                        : ((2U == (3U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType) 
                                         >> 1U))) ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__slt)
                            : (IData)(((0U == (6U & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__xorRes))))))) 
                      ^ (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType)))
                ? (vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_pc 
                   + vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_imm)
                : ((IData)(4U) + vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_pc));
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_from_exu_bruRes_valid 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__typebBruRes_valid;
    } else if (vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csrBruRes_valid) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_from_exu_bruRes_targetPc 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_to_wbu_bits_data_csrRdata;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_from_exu_bruRes_valid = 1U;
    } else {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_from_exu_bruRes_targetPc = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_from_exu_bruRes_valid = 0U;
    }
    vlSelf->top__DOT__ysyx_core_rv32e__DOT___T = ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid) 
                                                  & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_isu_ready));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__needBruRes 
        = ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_to_idu_bits_isBranch) 
           | ((0x73U == vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem) 
              | (0x30200073U == vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__bruRes_targetPc 
        = ((0x6fU == (0x7fU & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem))
            ? (vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__pc 
               + ((((vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                     >> 0x1fU) ? 0x7ffU : 0U) << 0x15U) 
                  | ((0x100000U & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                   >> 0xbU)) | ((0xff000U 
                                                 & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem) 
                                                | ((0x800U 
                                                    & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                                         >> 0x14U)))))))
            : ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_from_exu_bruRes_valid)
                ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_from_exu_bruRes_targetPc
                : 0U));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__bruRes_valid 
        = ((0x6fU == (0x7fU & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem)) 
           | (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_from_exu_bruRes_valid));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_to_idu_ready 
        = (1U & ((~ (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid)) 
                 | (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT___T)));
    if (vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__bruRes_valid) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_to_idu_bits_next_pc 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__bruRes_targetPc;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT___GEN_0 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_to_idu_bits_next_pc;
    } else {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_to_idu_bits_next_pc 
            = ((IData)(4U) + vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__pc);
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT___GEN_0 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__pc;
    }
    if (vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_to_idu_ready) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT___idu_io_from_ifu_bits_T 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__valid;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT___GEN_7 
            = ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__needBruRes)
                ? ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__bruRes_valid) 
                   & ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__bruRes_valid) 
                      | (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__valid)))
                : (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__valid));
    } else {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT___idu_io_from_ifu_bits_T = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT___GEN_7 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__valid;
    }
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->commit_valid = VL_RAND_RESET_I(1);
    vlSelf->commit_pc = VL_RAND_RESET_I(32);
    vlSelf->commit_next_pc = VL_RAND_RESET_I(32);
    vlSelf->commit_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ToMem_Addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_to_idu_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_to_idu_bits_next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_to_idu_bits_isBranch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_from_exu_bruRes_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_from_exu_bruRes_targetPc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_isu_ready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_isu_bits_ctrl_rfWen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_to_exu_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_to_exu_bits_data_rfSrc1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_to_exu_bits_data_rfSrc2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_wb_RegWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_to_wbu_bits_data_csrRdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT___idu_io_from_ifu_bits_T = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_isBranch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_cf_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_cf_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_cf_next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_cf_isBranch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_MemWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_ResSrc = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc1Type = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc2Type = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuType = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuOpType = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rfWen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_data_imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_isBranch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_MemWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_ResSrc = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuType = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_rfWen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_rfSrc1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_rfSrc2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_3 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_cf_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_cf_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_cf_next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_ctrl_ResSrc = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_ctrl_rfWen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_ctrl_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_data_Alu0Res_bits = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_data_data_from_mem = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_data_csrRdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_valid_REG = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_pc_REG = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_next_pc_REG = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_inst_REG = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__needBruRes = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__bruRes_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__bruRes_targetPc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT___next_pc_T_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT___GEN_0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT___GEN_7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_99 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_114 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__decodelist_0 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_140 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_155 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_181 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_196 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_222 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_237 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_263 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_278 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_1 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_2 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_3 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_4 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_5 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_6 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_7 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_8 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_9 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_10 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_11 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_12 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_13 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_14 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_15 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___GEN_13 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___GEN_29 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__wbuClearMask = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__isFireSetMask = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_1_T_2 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_1_T_7 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_2_T_2 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_2_T_7 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_3_T_2 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_3_T_7 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_4_T_2 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_4_T_7 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_5_T_2 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_5_T_7 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_6_T_2 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_6_T_7 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_7_T_2 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_7_T_7 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_8_T_2 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_8_T_7 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_9_T_2 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_9_T_7 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_10_T_2 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_10_T_7 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_11_T_2 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_11_T_7 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_12_T_2 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_12_T_7 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_13_T_2 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_13_T_7 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_14_T_2 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_14_T_7 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_15_T_2 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_15_T_7 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0_io_in_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT___jalrBruRes_valid_T = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__jalrBruRes_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__typebBruRes_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csrBruRes_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__adderRes = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__xorRes = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__slt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__res = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__mcause = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__csr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT___csrUpdate_T_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT___csrUpdate_T_6 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__csrUpdate = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__csrWen = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtask_top__DOT__ysyx_instmem__DOT__npc_inst_read__0__rdata = 0;
    vlSelf->__Vtask_top__DOT__ysyx_datamem__DOT__npc_pmem_read__2__rdata = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
