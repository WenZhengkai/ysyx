// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__ALUop 
        = (3U & (((0x13U == (0x7fU & vlSelf->inst))
                   ? 0x880U : 0U) >> 1U));
    vlSelf->MemWrite = (1U & (((0x13U == (0x7fU & vlSelf->inst))
                                ? 0x880U : 0U) >> 6U));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[1U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->DataFromMem)));
    vlSelf->DataToMem = vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x
        [(0x1fU & (vlSelf->inst >> 0x14U))];
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[1U] 
        = vlSelf->DataFromMem;
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list[1U] 
        = vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x
        [(0x1fU & (vlSelf->inst >> 0x14U))];
    vlSelf->top__DOT__ysyx_core__DOT__ImmExt = ((0U 
                                                 == 
                                                 (7U 
                                                  & (((0x13U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->inst))
                                                       ? 0x880U
                                                       : 0U) 
                                                     >> 8U)))
                                                 ? 
                                                ((0x80000000U 
                                                  & vlSelf->inst) 
                                                 | ((0x40000000U 
                                                     & (vlSelf->inst 
                                                        >> 1U)) 
                                                    | ((0x20000000U 
                                                        & (vlSelf->inst 
                                                           >> 2U)) 
                                                       | ((0x10000000U 
                                                           & (vlSelf->inst 
                                                              >> 3U)) 
                                                          | ((0x8000000U 
                                                              & (vlSelf->inst 
                                                                 >> 4U)) 
                                                             | ((0x4000000U 
                                                                 & (vlSelf->inst 
                                                                    >> 5U)) 
                                                                | ((0x2000000U 
                                                                    & (vlSelf->inst 
                                                                       >> 6U)) 
                                                                   | ((0x1000000U 
                                                                       & (vlSelf->inst 
                                                                          >> 7U)) 
                                                                      | ((0x800000U 
                                                                          & (vlSelf->inst 
                                                                             >> 8U)) 
                                                                         | ((0x400000U 
                                                                             & (vlSelf->inst 
                                                                                >> 9U)) 
                                                                            | ((0x200000U 
                                                                                & (vlSelf->inst 
                                                                                >> 0xaU)) 
                                                                               | ((0x100000U 
                                                                                & (vlSelf->inst 
                                                                                >> 0xbU)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->inst 
                                                                                >> 0xcU)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->inst 
                                                                                >> 0xdU)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->inst 
                                                                                >> 0xeU)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->inst 
                                                                                >> 0xfU)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->inst 
                                                                                >> 0x10U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->inst 
                                                                                >> 0x11U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->inst 
                                                                                >> 0x12U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->inst 
                                                                                >> 0x13U)) 
                                                                                | (vlSelf->inst 
                                                                                >> 0x14U)))))))))))))))))))))
                                                 : 0U);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->DataToMem));
    vlSelf->top__DOT__ysyx_core__DOT__tnpc = (vlSelf->pc 
                                              + vlSelf->top__DOT__ysyx_core__DOT__ImmExt);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->top__DOT__ysyx_core__DOT__ImmExt)));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__ysyx_core__DOT__ImmExt;
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__lut_out 
        = ((- (IData)(((1U & (((0x13U == (0x7fU & vlSelf->inst))
                                ? 0x880U : 0U) >> 7U)) 
                       == vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__hit 
        = ((1U & (((0x13U == (0x7fU & vlSelf->inst))
                    ? 0x880U : 0U) >> 7U)) == vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__lut_out 
           | ((- (IData)(((1U & (((0x13U == (0x7fU 
                                             & vlSelf->inst))
                                   ? 0x880U : 0U) >> 7U)) 
                          == vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__hit) 
           | ((1U & (((0x13U == (0x7fU & vlSelf->inst))
                       ? 0x880U : 0U) >> 7U)) == vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_core__DOT__srcb = ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__hit)
                                               ? vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__lut_out
                                               : 0U);
    vlSelf->top__DOT__ysyx_core__DOT__ALURes = ((0U 
                                                 == (IData)(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl))
                                                 ? 
                                                (vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x
                                                 [(0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 0xfU))] 
                                                 + vlSelf->top__DOT__ysyx_core__DOT__srcb)
                                                 : 0U);
    vlSelf->AddrMem = vlSelf->top__DOT__ysyx_core__DOT__ALURes;
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[2U] 
        = (QData)((IData)(vlSelf->top__DOT__ysyx_core__DOT__ALURes));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[2U] 
        = vlSelf->top__DOT__ysyx_core__DOT__ALURes;
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out 
        = ((- (IData)(((3U & (((0x13U == (0x7fU & vlSelf->inst))
                                ? 0x880U : 0U) >> 4U)) 
                       == vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__hit 
        = ((3U & (((0x13U == (0x7fU & vlSelf->inst))
                    ? 0x880U : 0U) >> 4U)) == vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out 
           | ((- (IData)(((3U & (((0x13U == (0x7fU 
                                             & vlSelf->inst))
                                   ? 0x880U : 0U) >> 4U)) 
                          == vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__hit) 
           | ((3U & (((0x13U == (0x7fU & vlSelf->inst))
                       ? 0x880U : 0U) >> 4U)) == vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out 
           | ((- (IData)(((3U & (((0x13U == (0x7fU 
                                             & vlSelf->inst))
                                   ? 0x880U : 0U) >> 4U)) 
                          == vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__hit) 
           | ((3U & (((0x13U == (0x7fU & vlSelf->inst))
                       ? 0x880U : 0U) >> 4U)) == vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ysyx_core__DOT__Result = ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__hit)
                                                 ? vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out
                                                 : 0U);
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x__v0;
    __Vdlyvdim0__top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x__v0;
    __Vdlyvval__top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x__v0;
    __Vdlyvset__top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x__v0 = 0;
    // Body
    __Vdlyvset__top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x__v0 = 0U;
    vlSelf->pc = ((IData)(vlSelf->rst) ? 0x80000000U
                   : ((1U & (((((0x13U == (0x7fU & vlSelf->inst))
                                 ? 0x880U : 0U) >> 3U) 
                              & (0U == vlSelf->top__DOT__ysyx_core__DOT__ALURes)) 
                             | ((0x13U == (0x7fU & vlSelf->inst))
                                 ? 0x880U : 0U))) ? vlSelf->top__DOT__ysyx_core__DOT__tnpc
                       : ((IData)(4U) + vlSelf->pc)));
    if (((0x13U == (0x7fU & vlSelf->inst)) ? 0x800U
          : 0U)) {
        __Vdlyvval__top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x__v0 
            = vlSelf->top__DOT__ysyx_core__DOT__Result;
        __Vdlyvset__top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x__v0 = 1U;
        __Vdlyvdim0__top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x__v0 
            = (0x1fU & (vlSelf->inst >> 7U));
    }
    if (__Vdlyvset__top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x__v0) {
        vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[__Vdlyvdim0__top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x__v0] 
            = __Vdlyvval__top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x__v0;
    }
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[0U] 
        = (0x200000000ULL | (QData)((IData)(((IData)(4U) 
                                             + vlSelf->pc))));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[0U] 
        = ((IData)(4U) + vlSelf->pc);
    vlSelf->DataToMem = vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x
        [(0x1fU & (vlSelf->inst >> 0x14U))];
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list[1U] 
        = vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x
        [(0x1fU & (vlSelf->inst >> 0x14U))];
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->DataToMem));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl = ((0U 
                                                  == (IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__ALUop))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__ALUop))
                                                   ? 1U
                                                   : 0U));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->top__DOT__ysyx_core__DOT__tnpc = (vlSelf->pc 
                                              + vlSelf->top__DOT__ysyx_core__DOT__ImmExt);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__lut_out 
        = ((- (IData)(((1U & (((0x13U == (0x7fU & vlSelf->inst))
                                ? 0x880U : 0U) >> 7U)) 
                       == vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__hit 
        = ((1U & (((0x13U == (0x7fU & vlSelf->inst))
                    ? 0x880U : 0U) >> 7U)) == vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__lut_out 
           | ((- (IData)(((1U & (((0x13U == (0x7fU 
                                             & vlSelf->inst))
                                   ? 0x880U : 0U) >> 7U)) 
                          == vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__hit) 
           | ((1U & (((0x13U == (0x7fU & vlSelf->inst))
                       ? 0x880U : 0U) >> 7U)) == vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_core__DOT__srcb = ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__hit)
                                               ? vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__lut_out
                                               : 0U);
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__ysyx_core__DOT__ALURes = ((0U 
                                                 == (IData)(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl))
                                                 ? 
                                                (vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x
                                                 [(0x1fU 
                                                   & (vlSelf->inst 
                                                      >> 0xfU))] 
                                                 + vlSelf->top__DOT__ysyx_core__DOT__srcb)
                                                 : 0U);
    vlSelf->AddrMem = vlSelf->top__DOT__ysyx_core__DOT__ALURes;
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[2U] 
        = (QData)((IData)(vlSelf->top__DOT__ysyx_core__DOT__ALURes));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[2U] 
        = vlSelf->top__DOT__ysyx_core__DOT__ALURes;
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out 
        = ((- (IData)(((3U & (((0x13U == (0x7fU & vlSelf->inst))
                                ? 0x880U : 0U) >> 4U)) 
                       == vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__hit 
        = ((3U & (((0x13U == (0x7fU & vlSelf->inst))
                    ? 0x880U : 0U) >> 4U)) == vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out 
           | ((- (IData)(((3U & (((0x13U == (0x7fU 
                                             & vlSelf->inst))
                                   ? 0x880U : 0U) >> 4U)) 
                          == vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__hit) 
           | ((3U & (((0x13U == (0x7fU & vlSelf->inst))
                       ? 0x880U : 0U) >> 4U)) == vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out 
           | ((- (IData)(((3U & (((0x13U == (0x7fU 
                                             & vlSelf->inst))
                                   ? 0x880U : 0U) >> 4U)) 
                          == vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__hit) 
           | ((3U & (((0x13U == (0x7fU & vlSelf->inst))
                       ? 0x880U : 0U) >> 4U)) == vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ysyx_core__DOT__Result = ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__hit)
                                                 ? vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out
                                                 : 0U);
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("../vsrc/../vsrc/top.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtop___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("../vsrc/../vsrc/top.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("../vsrc/../vsrc/top.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
