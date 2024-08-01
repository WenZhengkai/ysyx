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
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__ALUop 
        = vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__ALUop;
}

void Vtop___024root____Vdpiimwrap_top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list[0U] = 4U;
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list[1U] = 3U;
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list[2U] = 2U;
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list[3U] = 1U;
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list[4U] = 0U;
    Vtop___024root____Vdpiimwrap_top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x);
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
                VL_FATAL_MT("../vsrc/../vsrc/top.v", 1, "", "Settle region did not converge.");
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

extern const VlUnpacked<SData/*12:0*/, 128> Vtop__ConstPool__TABLE_h07160f81_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->top__DOT__ysyx_core__DOT__PCplus4 = (4ULL 
                                                 + vlSelf->pc);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__pair_list[1U][0U] 
        = (IData)(vlSelf->pc);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__pair_list[1U][1U] 
        = (IData)((vlSelf->pc >> 0x20U));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__pair_list[1U][2U] = 0U;
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[2U][0U] 
        = (IData)((4ULL + vlSelf->pc));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[2U][1U] 
        = (IData)(((4ULL + vlSelf->pc) >> 0x20U));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[2U][2U] = 2U;
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[3U][0U] 
        = (IData)(vlSelf->DataFromMem);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[3U][1U] 
        = (IData)((vlSelf->DataFromMem >> 0x20U));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[3U][2U] = 1U;
    vlSelf->DataToMem = vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x
        [(0x1fU & (vlSelf->inst >> 0x14U))];
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[2U] 
        = (4ULL + vlSelf->pc);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[3U] 
        = vlSelf->DataFromMem;
    vlSelf->top__DOT__ysyx_core__DOT__src1 = vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x
        [(0x1fU & (vlSelf->inst >> 0xfU))];
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__data_list[1U] 
        = vlSelf->pc;
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x
        [(0x1fU & (vlSelf->inst >> 0xfU))];
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list[1U] 
        = vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x
        [(0x1fU & (vlSelf->inst >> 0x14U))];
    __Vtableidx1 = (0x7fU & vlSelf->inst);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls 
        = Vtop__ConstPool__TABLE_h07160f81_0[__Vtableidx1];
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__pair_list[1U][0U] 
        = (IData)(vlSelf->DataToMem);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__pair_list[1U][1U] 
        = (IData)((vlSelf->DataToMem >> 0x20U));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__pair_list[1U][2U] = 0U;
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__pair_list[0U][0U] 
        = (IData)(vlSelf->top__DOT__ysyx_core__DOT__src1);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__pair_list[0U][1U] 
        = (IData)((vlSelf->top__DOT__ysyx_core__DOT__src1 
                   >> 0x20U));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__pair_list[0U][2U] = 1U;
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)((0x67U == (0x707fU 
                                                  & vlSelf->inst))) 
                               == vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__hit 
        = ((IData)((0x67U == (0x707fU & vlSelf->inst))) 
           == vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)((0x67U == 
                                           (0x707fU 
                                            & vlSelf->inst))) 
                                  == vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__hit) 
           | ((IData)((0x67U == (0x707fU & vlSelf->inst))) 
              == vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_core__DOT__PCTarget_srca 
        = ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__hit)
            ? vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__lut_out
            : 0ULL);
    vlSelf->MemWrite = (1U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                              >> 7U));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__ALUop 
        = (3U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                 >> 1U));
    vlSelf->top__DOT__ysyx_core__DOT__ImmExt = ((0x800U 
                                                 & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls))
                                                 ? 
                                                ((0x400U 
                                                  & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls))
                                                  ? 0ULL
                                                  : 
                                                 ((0x200U 
                                                   & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls))
                                                   ? 0ULL
                                                   : 
                                                  (((- (QData)((IData)(
                                                                       (vlSelf->inst 
                                                                        >> 0x1fU)))) 
                                                    << 0x20U) 
                                                   | ((QData)((IData)(
                                                                      (vlSelf->inst 
                                                                       >> 0xcU))) 
                                                      << 0xcU))))
                                                 : 
                                                ((0x400U 
                                                  & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls))
                                                  ? 
                                                 ((0x200U 
                                                   & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (vlSelf->inst 
                                                                        >> 0x1fU)))) 
                                                    << 0x15U) 
                                                   | (QData)((IData)(
                                                                     ((0x100000U 
                                                                       & (vlSelf->inst 
                                                                          >> 0xbU)) 
                                                                      | ((0xff000U 
                                                                          & vlSelf->inst) 
                                                                         | ((0x800U 
                                                                             & (vlSelf->inst 
                                                                                >> 9U)) 
                                                                            | (0x7feU 
                                                                               & (vlSelf->inst 
                                                                                >> 0x14U))))))))
                                                   : 0ULL)
                                                  : 
                                                 ((0x200U 
                                                   & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (vlSelf->inst 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     ((0xfe0U 
                                                                       & (vlSelf->inst 
                                                                          >> 0x14U)) 
                                                                      | (0x1fU 
                                                                         & (vlSelf->inst 
                                                                            >> 7U))))))
                                                   : 
                                                  (((- (QData)((IData)(
                                                                       (vlSelf->inst 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->inst 
                                                                      >> 0x14U)))))));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__pair_list[0U][0U] 
        = (IData)(vlSelf->top__DOT__ysyx_core__DOT__ImmExt);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__pair_list[0U][1U] 
        = (IData)((vlSelf->top__DOT__ysyx_core__DOT__ImmExt 
                   >> 0x20U));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__pair_list[0U][2U] = 1U;
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[0U][0U] 
        = (IData)(vlSelf->top__DOT__ysyx_core__DOT__ImmExt);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[0U][1U] 
        = (IData)((vlSelf->top__DOT__ysyx_core__DOT__ImmExt 
                   >> 0x20U));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[0U][2U] = 4U;
    vlSelf->top__DOT__ysyx_core__DOT__tnpc = (vlSelf->top__DOT__ysyx_core__DOT__ImmExt 
                                              + vlSelf->top__DOT__ysyx_core__DOT__PCTarget_srca);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__ysyx_core__DOT__ImmExt;
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[1U] 
        = (vlSelf->top__DOT__ysyx_core__DOT__ImmExt 
           + vlSelf->top__DOT__ysyx_core__DOT__PCTarget_srca);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__ysyx_core__DOT__ImmExt;
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[1U][0U] 
        = (IData)(vlSelf->top__DOT__ysyx_core__DOT__tnpc);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[1U][1U] 
        = (IData)((vlSelf->top__DOT__ysyx_core__DOT__tnpc 
                   >> 0x20U));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[1U][2U] = 3U;
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((1U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                      >> 8U)) == vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__hit 
        = ((1U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                  >> 8U)) == vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((1U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                         >> 8U)) == 
                                  vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__hit) 
           | ((1U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                     >> 8U)) == vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_core__DOT__srcb = ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__hit)
                                               ? vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__lut_out
                                               : 0ULL);
    vlSelf->top__DOT__ysyx_core__DOT__ALURes = ((0U 
                                                 == (IData)(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl))
                                                 ? 
                                                (vlSelf->top__DOT__ysyx_core__DOT__src1 
                                                 + vlSelf->top__DOT__ysyx_core__DOT__srcb)
                                                 : 0ULL);
    vlSelf->AddrMem = vlSelf->top__DOT__ysyx_core__DOT__ALURes;
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[4U][0U] 
        = (IData)(vlSelf->top__DOT__ysyx_core__DOT__ALURes);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[4U][1U] 
        = (IData)((vlSelf->top__DOT__ysyx_core__DOT__ALURes 
                   >> 0x20U));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[4U][2U] = 0U;
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[4U] 
        = vlSelf->top__DOT__ysyx_core__DOT__ALURes;
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((7U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                      >> 4U)) == vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__hit 
        = ((7U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                  >> 4U)) == vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((7U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                         >> 4U)) == 
                                  vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__hit) 
           | ((7U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                     >> 4U)) == vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((7U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                         >> 4U)) == 
                                  vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list
                                  [2U])))) & vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__hit) 
           | ((7U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                     >> 4U)) == vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((7U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                         >> 4U)) == 
                                  vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list
                                  [3U])))) & vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__hit) 
           | ((7U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                     >> 4U)) == vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((7U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                         >> 4U)) == 
                                  vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list
                                  [4U])))) & vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__hit) 
           | ((7U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                     >> 4U)) == vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__ysyx_core__DOT__Result = ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__hit)
                                                 ? vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out
                                                 : 0ULL);
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

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
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([changed] top.ysyx_core.ysyx_IDU.ALUop)\n");
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
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([changed] top.ysyx_core.ysyx_IDU.ALUop)\n");
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
    vlSelf->DataFromMem = VL_RAND_RESET_Q(64);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_Q(64);
    vlSelf->AddrMem = VL_RAND_RESET_Q(64);
    vlSelf->DataToMem = VL_RAND_RESET_Q(64);
    vlSelf->MemWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core__DOT__tnpc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__ysyx_core__DOT__src1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ysyx_core__DOT__ImmExt = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ysyx_core__DOT__srcb = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ysyx_core__DOT__ALURes = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ysyx_core__DOT__Result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ysyx_core__DOT__PCplus4 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ysyx_core__DOT__PCTarget_srca = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls = VL_RAND_RESET_I(13);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__ALUop = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        VL_RAND_RESET_W(67, vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__ALUop = VL_RAND_RESET_I(2);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
