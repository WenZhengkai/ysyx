// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

void Vtop___024root____Vdpiimwrap_top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__npc_inst_read_TOP(QData/*63:0*/ raddr, IData/*31:0*/ &rdata);
extern const VlUnpacked<CData/*7:0*/, 1024> Vtop__ConstPool__TABLE_ha92c6898_0;
extern const VlUnpacked<SData/*12:0*/, 128> Vtop__ConstPool__TABLE_h0b40b66e_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vtop__ConstPool__TABLE_h802ed314_0;
void Vtop___024root____Vdpiimwrap_top__DOT__ysyx_core__DOT__ysyx_LSU__DOT__npc_pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void Vtop___024root____Vdpiimwrap_top__DOT__ysyx_core__DOT__ysyx_LSU__DOT__npc_pmem_write_TOP(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x__v0;
    __Vdlyvdim0__top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x__v0 = 0;
    QData/*63:0*/ __Vdlyvval__top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x__v0;
    __Vdlyvval__top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x__v0;
    __Vdlyvset__top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x__v0 = 0;
    // Body
    __Vdlyvset__top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x__v0 = 0U;
    if ((0x1000U & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls))) {
        __Vdlyvval__top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x__v0 
            = ((0U == (0x1fU & (vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                                >> 7U))) ? 0ULL : vlSelf->top__DOT__ysyx_core__DOT__Result);
        __Vdlyvset__top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x__v0 = 1U;
        __Vdlyvdim0__top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x__v0 
            = (0x1fU & (vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                        >> 7U));
    }
    vlSelf->pc = ((IData)(vlSelf->rst) ? 0x80000000ULL
                   : ((1U & ((((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                               >> 3U) & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__BranchHit)) 
                             | (IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls)))
                       ? vlSelf->top__DOT__ysyx_core__DOT__tnpc
                       : vlSelf->top__DOT__ysyx_core__DOT__PCplus4));
    if (__Vdlyvset__top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x__v0) {
        vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[__Vdlyvdim0__top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x__v0] 
            = __Vdlyvval__top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x__v0;
    }
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
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[2U] 
        = (4ULL + vlSelf->pc);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__data_list[1U] 
        = vlSelf->pc;
    Vtop___024root____Vdpiimwrap_top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__npc_inst_read_TOP(vlSelf->pc, vlSelf->__Vtask_top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__npc_inst_read__2__rdata);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
        = vlSelf->__Vtask_top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__npc_inst_read__2__rdata;
    vlSelf->inst = vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem;
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x
        [(0x1fU & (vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                   >> 0xfU))];
    vlSelf->top__DOT__ysyx_core__DOT__src2 = vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x
        [(0x1fU & (vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                   >> 0x14U))];
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__RtypeMul 
        = (IData)((0x2000020U == (0x2000020U & vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem)));
    vlSelf->__Vtableidx2 = ((0x380U & (vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                                       >> 5U)) | (0x7fU 
                                                  & vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem));
    vlSelf->top__DOT__ysyx_core__DOT__Wmask = Vtop__ConstPool__TABLE_ha92c6898_0
        [vlSelf->__Vtableidx2];
    vlSelf->top__DOT__ysyx_core__DOT__dw = ((0x3bU 
                                             == (0x7fU 
                                                 & vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem)) 
                                            | (0x1bU 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem)));
    vlSelf->top__DOT__ysyx_core__DOT__src1 = vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x
        [(0x1fU & (vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                   >> 0xfU))];
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list[1U] 
        = vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x
        [(0x1fU & (vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                   >> 0x14U))];
    vlSelf->__Vtableidx1 = (0x7fU & vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls 
        = Vtop__ConstPool__TABLE_h0b40b66e_0[vlSelf->__Vtableidx1];
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)((0x67U == (0x707fU 
                                                  & vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem))) 
                               == vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__hit 
        = ((IData)((0x67U == (0x707fU & vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem))) 
           == vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)((0x67U == 
                                           (0x707fU 
                                            & vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem))) 
                                  == vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__hit) 
           | ((IData)((0x67U == (0x707fU & vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem))) 
              == vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_core__DOT__PCTarget_srca 
        = ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__hit)
            ? vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__lut_out
            : 0ULL);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__pair_list[1U][0U] 
        = (IData)(vlSelf->top__DOT__ysyx_core__DOT__src2);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__pair_list[1U][1U] 
        = (IData)((vlSelf->top__DOT__ysyx_core__DOT__src2 
                   >> 0x20U));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__pair_list[1U][2U] = 0U;
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_LSU__DOT__Wmask64 
        = (((QData)((IData)((0xffU & (- (IData)((1U 
                                                 & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__Wmask) 
                                                    >> 7U))))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__Wmask) 
                                                          >> 6U))))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__Wmask) 
                                                                          >> 5U))))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__Wmask) 
                                                                           >> 4U))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (((- (IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__Wmask) 
                                                                           >> 3U)))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & ((- (IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__Wmask) 
                                                                                >> 2U)))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__Wmask) 
                                                                                >> 1U)))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->top__DOT__ysyx_core__DOT__Wmask))))))))))))));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__pair_list[0U][0U] 
        = (IData)(vlSelf->top__DOT__ysyx_core__DOT__src1);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__pair_list[0U][1U] 
        = (IData)((vlSelf->top__DOT__ysyx_core__DOT__src1 
                   >> 0x20U));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__pair_list[0U][2U] = 1U;
    vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl = ((4U 
                                                  & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls))
                                                   ? 
                                                  ((0x4000U 
                                                    & vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem)
                                                    ? 
                                                   ((0x2000U 
                                                     & vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem)
                                                     ? 4U
                                                     : 3U)
                                                    : 
                                                   ((0x2000U 
                                                     & vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem)
                                                     ? 0U
                                                     : 1U))
                                                   : 
                                                  ((0x4000U 
                                                    & vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem)
                                                    ? 
                                                   ((0x2000U 
                                                     & vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem)
                                                      ? 9U
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__RtypeMul)
                                                       ? 0xcU
                                                       : 8U))
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem)
                                                      ? 
                                                     ((0x40000000U 
                                                       & vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem)
                                                       ? 7U
                                                       : 6U)
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__RtypeMul)
                                                       ? 0xbU
                                                       : 5U)))
                                                    : 
                                                   ((0x2000U 
                                                     & vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem)
                                                     ? 
                                                    ((0x1000U 
                                                      & vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem)
                                                      ? 4U
                                                      : 3U)
                                                     : 
                                                    ((0x1000U 
                                                      & vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem)
                                                      ? 2U
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__RtypeMul)
                                                       ? 0xaU
                                                       : 
                                                      ((IData)(
                                                               (0x40000020U 
                                                                == 
                                                                (0x40000020U 
                                                                 & vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem)))
                                                        ? 1U
                                                        : 0U))))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls))
                                                   ? 1U
                                                   : 0U));
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
                                                                       (vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                                                                        >> 0x1fU)))) 
                                                    << 0x20U) 
                                                   | ((QData)((IData)(
                                                                      (vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
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
                                                                       (vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                                                                        >> 0x1fU)))) 
                                                    << 0x15U) 
                                                   | (QData)((IData)(
                                                                     ((0x100000U 
                                                                       & (vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                                                                          >> 0xbU)) 
                                                                      | ((0xff000U 
                                                                          & vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem) 
                                                                         | ((0x800U 
                                                                             & (vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                                                                                >> 9U)) 
                                                                            | (0x7feU 
                                                                               & (vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                                                                                >> 0x14U))))))))
                                                   : 
                                                  (((- (QData)((IData)(
                                                                       (vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                                                                        >> 0x1fU)))) 
                                                    << 0xdU) 
                                                   | (QData)((IData)(
                                                                     ((0x1000U 
                                                                       & (vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                                                                          >> 0x13U)) 
                                                                      | ((0x800U 
                                                                          & (vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                                                                             << 4U)) 
                                                                         | ((0x7e0U 
                                                                             & (vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                                                                                >> 0x14U)) 
                                                                            | (0x1eU 
                                                                               & (vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                                                                                >> 7U)))))))))
                                                  : 
                                                 ((0x200U 
                                                   & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     ((0xfe0U 
                                                                       & (vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                                                                          >> 0x14U)) 
                                                                      | (0x1fU 
                                                                         & (vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                                                                            >> 7U))))))
                                                   : 
                                                  (((- (QData)((IData)(
                                                                       (vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
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
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT__divw_res 
        = VL_DIVS_III(32, (IData)(vlSelf->top__DOT__ysyx_core__DOT__src1), (IData)(vlSelf->top__DOT__ysyx_core__DOT__srcb));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT__remw_res 
        = VL_MODDIVS_III(32, (IData)(vlSelf->top__DOT__ysyx_core__DOT__src1), (IData)(vlSelf->top__DOT__ysyx_core__DOT__srcb));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT____VdfgTmp_h30e473f3__0 
        = VL_LTS_IQQ(64, vlSelf->top__DOT__ysyx_core__DOT__src1, vlSelf->top__DOT__ysyx_core__DOT__srcb);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT____VdfgTmp_h30e9c121__0 
        = (vlSelf->top__DOT__ysyx_core__DOT__src1 < vlSelf->top__DOT__ysyx_core__DOT__srcb);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT__ALURes_temp 
        = ((0x10U & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl))
            ? 0ULL : ((8U & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl))
                       ? ((4U & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl))
                           ? ((2U & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl))
                               ? 0ULL : ((1U & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl))
                                          ? 0ULL : 
                                         (((QData)((IData)(
                                                           (- (IData)(
                                                                      (vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT__remw_res 
                                                                       >> 0x1fU))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT__remw_res)))))
                           : ((2U & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl))
                               ? ((1U & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl))
                                   ? (((QData)((IData)(
                                                       (- (IData)(
                                                                  (vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT__divw_res 
                                                                   >> 0x1fU))))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT__divw_res)))
                                   : (vlSelf->top__DOT__ysyx_core__DOT__src1 
                                      * vlSelf->top__DOT__ysyx_core__DOT__srcb))
                               : ((1U & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl))
                                   ? (vlSelf->top__DOT__ysyx_core__DOT__src1 
                                      & vlSelf->top__DOT__ysyx_core__DOT__srcb)
                                   : 0ULL))) : ((4U 
                                                 & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl))
                                                   ? 
                                                  VL_SHIFTRS_QQI(64,64,6, 
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
                                                                  & (IData)(vlSelf->top__DOT__ysyx_core__DOT__srcb)))
                                                   : 
                                                  (((IData)(vlSelf->top__DOT__ysyx_core__DOT__dw)
                                                     ? (QData)((IData)(vlSelf->top__DOT__ysyx_core__DOT__src1))
                                                     : vlSelf->top__DOT__ysyx_core__DOT__src1) 
                                                   >> 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->top__DOT__ysyx_core__DOT__srcb))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl))
                                                   ? 
                                                  (vlSelf->top__DOT__ysyx_core__DOT__src1 
                                                   ^ vlSelf->top__DOT__ysyx_core__DOT__srcb)
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT____VdfgTmp_h30e9c121__0)
                                                    ? 1ULL
                                                    : 0ULL)))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl))
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT____VdfgTmp_h30e473f3__0)
                                                    ? 1ULL
                                                    : 0ULL)
                                                   : 
                                                  (vlSelf->top__DOT__ysyx_core__DOT__src1 
                                                   << 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->top__DOT__ysyx_core__DOT__srcb))))
                                                  : 
                                                 (vlSelf->top__DOT__ysyx_core__DOT__src1 
                                                  + 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl))
                                                    ? 
                                                   (1ULL 
                                                    + 
                                                    (~ vlSelf->top__DOT__ysyx_core__DOT__srcb))
                                                    : vlSelf->top__DOT__ysyx_core__DOT__srcb))))));
    if (vlSelf->top__DOT__ysyx_core__DOT__dw) {
        vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[4U] 
            = (((QData)((IData)((- (IData)((1U & (IData)(
                                                         (vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT__ALURes_temp 
                                                          >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT__ALURes_temp)));
        vlSelf->top__DOT__ysyx_core__DOT__ALURes = 
            (((QData)((IData)((- (IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT__ALURes_temp 
                                                        >> 0x1fU))))))) 
              << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT__ALURes_temp)));
    } else {
        vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[4U] 
            = vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT__ALURes_temp;
        vlSelf->top__DOT__ysyx_core__DOT__ALURes = vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT__ALURes_temp;
    }
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[4U][0U] 
        = (IData)(vlSelf->top__DOT__ysyx_core__DOT__ALURes);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[4U][1U] 
        = (IData)((vlSelf->top__DOT__ysyx_core__DOT__ALURes 
                   >> 0x20U));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[4U][2U] = 0U;
    vlSelf->__Vtableidx3 = ((((1U == (IData)(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl))
                               ? (0ULL == vlSelf->top__DOT__ysyx_core__DOT__ALURes)
                               : ((3U == (IData)(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl))
                                   ? (IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT____VdfgTmp_h30e473f3__0)
                                   : ((4U == (IData)(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl)) 
                                      & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT____VdfgTmp_h30e9c121__0)))) 
                             << 0xaU) | ((0x380U & 
                                          (vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                                           >> 5U)) 
                                         | (0x7fU & vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem)));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__BranchHit 
        = Vtop__ConstPool__TABLE_h802ed314_0[vlSelf->__Vtableidx3];
    Vtop___024root____Vdpiimwrap_top__DOT__ysyx_core__DOT__ysyx_LSU__DOT__npc_pmem_read_TOP(vlSelf->top__DOT__ysyx_core__DOT__ALURes, vlSelf->__Vtask_top__DOT__ysyx_core__DOT__ysyx_LSU__DOT__npc_pmem_read__0__rdata);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_LSU__DOT__DPI_DataFromMem 
        = vlSelf->__Vtask_top__DOT__ysyx_core__DOT__ysyx_LSU__DOT__npc_pmem_read__0__rdata;
    if ((0x80U & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls))) {
        Vtop___024root____Vdpiimwrap_top__DOT__ysyx_core__DOT__ysyx_LSU__DOT__npc_pmem_write_TOP(vlSelf->top__DOT__ysyx_core__DOT__ALURes, vlSelf->top__DOT__ysyx_core__DOT__src2, (IData)(vlSelf->top__DOT__ysyx_core__DOT__Wmask));
    }
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_LSU__DOT__sig 
        = (1U & ((0x80U & (IData)(vlSelf->top__DOT__ysyx_core__DOT__Wmask))
                  ? (IData)((vlSelf->top__DOT__ysyx_core__DOT__ysyx_LSU__DOT__DPI_DataFromMem 
                             >> 0x3fU)) : ((8U & (IData)(vlSelf->top__DOT__ysyx_core__DOT__Wmask))
                                            ? (IData)(
                                                      (vlSelf->top__DOT__ysyx_core__DOT__ysyx_LSU__DOT__DPI_DataFromMem 
                                                       >> 0x1fU))
                                            : ((2U 
                                                & (IData)(vlSelf->top__DOT__ysyx_core__DOT__Wmask))
                                                ? (IData)(
                                                          (vlSelf->top__DOT__ysyx_core__DOT__ysyx_LSU__DOT__DPI_DataFromMem 
                                                           >> 0xfU))
                                                : (IData)(
                                                          (vlSelf->top__DOT__ysyx_core__DOT__ysyx_LSU__DOT__DPI_DataFromMem 
                                                           >> 7U))))));
    if ((1U & ((~ (IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_LSU__DOT__sig)) 
               | (vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                  >> 0xeU)))) {
        vlSelf->top__DOT__ysyx_core__DOT__DataFromMem 
            = (vlSelf->top__DOT__ysyx_core__DOT__ysyx_LSU__DOT__Wmask64 
               & vlSelf->top__DOT__ysyx_core__DOT__ysyx_LSU__DOT__DPI_DataFromMem);
        vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[3U] 
            = (vlSelf->top__DOT__ysyx_core__DOT__ysyx_LSU__DOT__Wmask64 
               & vlSelf->top__DOT__ysyx_core__DOT__ysyx_LSU__DOT__DPI_DataFromMem);
    } else {
        vlSelf->top__DOT__ysyx_core__DOT__DataFromMem 
            = ((~ vlSelf->top__DOT__ysyx_core__DOT__ysyx_LSU__DOT__Wmask64) 
               | vlSelf->top__DOT__ysyx_core__DOT__ysyx_LSU__DOT__DPI_DataFromMem);
        vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[3U] 
            = ((~ vlSelf->top__DOT__ysyx_core__DOT__ysyx_LSU__DOT__Wmask64) 
               | vlSelf->top__DOT__ysyx_core__DOT__ysyx_LSU__DOT__DPI_DataFromMem);
    }
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[3U][0U] 
        = (IData)(vlSelf->top__DOT__ysyx_core__DOT__DataFromMem);
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[3U][1U] 
        = (IData)((vlSelf->top__DOT__ysyx_core__DOT__DataFromMem 
                   >> 0x20U));
    vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[3U][2U] = 1U;
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

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

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
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
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
