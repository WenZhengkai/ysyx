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
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

void Vtop___024root____Vdpiimwrap_top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<IData/*31:0*/, 16> &a);

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list[0U] = 4U;
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list[1U] = 3U;
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list[2U] = 2U;
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list[3U] = 1U;
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list[4U] = 0U;
    Vtop___024root____Vdpiimwrap_top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__x);
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
                VL_FATAL_MT("../vsrc/../vsrc/top.v", 11, "", "Settle region did not converge.");
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

void Vtop___024root____Vdpiimwrap_top__DOT__ysyx_instmem__DOT__npc_nextPC_write_TOP(IData/*31:0*/ nextPC);
void Vtop___024root____Vdpiimwrap_top__DOT__ysyx_instmem__DOT__npc_inst_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);
extern const VlUnpacked<CData/*7:0*/, 1024> Vtop__ConstPool__TABLE_ha92c6898_0;
extern const VlUnpacked<SData/*12:0*/, 128> Vtop__ConstPool__TABLE_h0b40b66e_0;
extern const VlUnpacked<CData/*0:0*/, 2048> Vtop__ConstPool__TABLE_h802ed314_0;
void Vtop___024root____Vdpiimwrap_top__DOT__ysyx_datamem__DOT__npc_pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);
void Vtop___024root____Vdpiimwrap_top__DOT__ysyx_datamem__DOT__npc_pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    Vtop___024root____Vdpiimwrap_top__DOT__ysyx_instmem__DOT__npc_nextPC_write_TOP(vlSelf->pc);
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__PCplus4 
        = ((IData)(4U) + vlSelf->pc);
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->pc));
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[2U] 
        = (0x200000000ULL | (QData)((IData)(((IData)(4U) 
                                             + vlSelf->pc))));
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[2U] 
        = ((IData)(4U) + vlSelf->pc);
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__data_list[1U] 
        = vlSelf->pc;
    Vtop___024root____Vdpiimwrap_top__DOT__ysyx_instmem__DOT__npc_inst_read_TOP(vlSelf->pc, vlSelf->__Vtask_top__DOT__ysyx_instmem__DOT__npc_inst_read__0__rdata);
    vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
        = vlSelf->__Vtask_top__DOT__ysyx_instmem__DOT__npc_inst_read__0__rdata;
    vlSelf->inst = vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem;
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__x
        [(0xfU & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                  >> 0xfU))];
    vlSelf->top__DOT__ToMem_Data = vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__x
        [(0xfU & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                  >> 0x14U))];
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__RtypeMul 
        = (IData)((0x2000020U == (0x2000020U & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem)));
    vlSelf->__Vtableidx2 = ((0x380U & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                       >> 5U)) | (0x7fU 
                                                  & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem));
    vlSelf->top__DOT__Wmask = Vtop__ConstPool__TABLE_ha92c6898_0
        [vlSelf->__Vtableidx2];
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1 = 
        vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__x
        [(0xfU & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                  >> 0xfU))];
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list[1U] 
        = vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__x
        [(0xfU & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                  >> 0x14U))];
    vlSelf->__Vtableidx1 = (0x7fU & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem);
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls 
        = Vtop__ConstPool__TABLE_h0b40b66e_0[vlSelf->__Vtableidx1];
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)((0x67U == (0x707fU & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem))) 
                       == vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__hit 
        = ((IData)((0x67U == (0x707fU & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem))) 
           == vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)((0x67U == (0x707fU 
                                             & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem))) 
                          == vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__hit) 
           | ((IData)((0x67U == (0x707fU & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem))) 
              == vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__PCTarget_srca 
        = ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__hit)
            ? vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__lut_out
            : 0U);
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__pair_list[1U] 
        = (QData)((IData)(vlSelf->top__DOT__ToMem_Data));
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_LSU__DOT____VdfgTmp_hd1f2e586__0 
        = (((- (IData)((1U & ((IData)(vlSelf->top__DOT__Wmask) 
                              >> 3U)))) << 0x18U) | 
           ((0xff0000U & ((- (IData)((1U & ((IData)(vlSelf->top__DOT__Wmask) 
                                            >> 2U)))) 
                          << 0x10U)) | ((0xff00U & 
                                         ((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->top__DOT__Wmask) 
                                                         >> 1U)))) 
                                          << 8U)) | 
                                        (0xffU & (- (IData)(
                                                            (1U 
                                                             & (IData)(vlSelf->top__DOT__Wmask))))))));
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1)));
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ALUCtrl 
        = ((4U & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls))
            ? ((2U & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls))
                ? ((0x4000U & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem)
                    ? ((0x2000U & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem)
                        ? 4U : 3U) : ((0x2000U & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem)
                                       ? 0U : 1U)) : 
               ((0x4000U & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem)
                 ? ((0x2000U & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem)
                     ? ((0x1000U & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem)
                         ? ((IData)((0x2000033U == 
                                     (0x200007fU & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem)))
                             ? 0x11U : 9U) : ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__RtypeMul)
                                               ? ((8U 
                                                   & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem)
                                                   ? 0xcU
                                                   : 0xfU)
                                               : 8U))
                     : ((0x1000U & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem)
                         ? ((IData)((0x2000033U == 
                                     (0x200007fU & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem)))
                             ? 0xdU : ((0x40000000U 
                                        & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem)
                                        ? 7U : 6U))
                         : ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__RtypeMul)
                             ? ((8U & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem)
                                 ? 0xbU : 0xeU) : 5U)))
                 : ((0x2000U & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem)
                     ? ((0x1000U & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem)
                         ? 4U : 3U) : ((0x1000U & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem)
                                        ? ((0x2000000U 
                                            & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem)
                                            ? 0x10U
                                            : 2U) : 
                                       ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__RtypeMul)
                                         ? 0xaU : ((IData)(
                                                           (0x40000020U 
                                                            == 
                                                            (0x40000020U 
                                                             & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem)))
                                                    ? 1U
                                                    : 0U))))))
            : ((2U & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls))
                ? 1U : 0U));
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ImmExt 
        = ((0x800U & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls))
            ? ((0x400U & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls))
                ? 0U : ((0x200U & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls))
                         ? 0U : (0xfffff000U & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem)))
            : ((0x400U & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls))
                ? ((0x200U & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls))
                    ? (((- (IData)((vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                    >> 0x1fU))) << 0x15U) 
                       | ((0x100000U & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                        >> 0xbU)) | 
                          ((0xff000U & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem) 
                           | ((0x800U & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                         >> 9U)) | 
                              (0x7feU & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                         >> 0x14U))))))
                    : (((- (IData)((vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                    >> 0x1fU))) << 0xdU) 
                       | ((0x1000U & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                      >> 0x13U)) | 
                          ((0x800U & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                      << 4U)) | ((0x7e0U 
                                                  & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                                       >> 7U)))))))
                : ((0x200U & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls))
                    ? (((- (IData)((vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                                      >> 7U))))
                    : (((- (IData)((vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                          >> 0x14U)))));
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ImmExt)));
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[0U] 
        = (0x400000000ULL | (QData)((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ImmExt)));
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__tnpc = 
        (vlSelf->top__DOT__ysyx_core_rv32im__DOT__ImmExt 
         + vlSelf->top__DOT__ysyx_core_rv32im__DOT__PCTarget_srca);
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__ysyx_core_rv32im__DOT__ImmExt;
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[1U] 
        = (vlSelf->top__DOT__ysyx_core_rv32im__DOT__ImmExt 
           + vlSelf->top__DOT__ysyx_core_rv32im__DOT__PCTarget_srca);
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list[0U] 
        = vlSelf->top__DOT__ysyx_core_rv32im__DOT__ImmExt;
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[1U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__tnpc)));
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__lut_out 
        = ((- (IData)(((1U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls) 
                              >> 8U)) == vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__hit 
        = ((1U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls) 
                  >> 8U)) == vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__lut_out 
           | ((- (IData)(((1U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls) 
                                 >> 8U)) == vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__hit) 
           | ((1U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls) 
                     >> 8U)) == vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb = 
        ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__hit)
          ? vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__lut_out
          : 0U);
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALU__DOT____VdfgTmp_h30e473f3__0 
        = VL_LTS_III(32, vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1, vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb);
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALU__DOT____VdfgTmp_h30e9c121__0 
        = (vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1 
           < vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb);
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALU__DOT__ALURes_temp 
        = ((0x10U & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ALUCtrl))
            ? ((8U & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ALUCtrl))
                ? 0U : ((4U & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ALUCtrl))
                         ? 0U : ((2U & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ALUCtrl))
                                  ? 0U : ((1U & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ALUCtrl))
                                           ? VL_MODDIV_III(32, vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1, vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb)
                                           : (IData)(
                                                     (VL_MULS_QQQ(64, 
                                                                  VL_EXTENDS_QI(64,32, vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1), 
                                                                  VL_EXTENDS_QI(64,32, vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb)) 
                                                      >> 0x20U))))))
            : ((8U & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ALUCtrl))
                ? ((4U & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ALUCtrl))
                    ? ((2U & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ALUCtrl))
                        ? ((1U & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ALUCtrl))
                            ? VL_MODDIVS_III(32, vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1, vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb)
                            : VL_DIVS_III(32, vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1, vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb))
                        : ((1U & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ALUCtrl))
                            ? VL_DIV_III(32, vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1, vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb)
                            : 0U)) : ((2U & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ALUCtrl))
                                       ? ((1U & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ALUCtrl))
                                           ? 0U : (vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1 
                                                   * vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb))
                                       : ((1U & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ALUCtrl))
                                           ? (vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1 
                                              & vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb)
                                           : (vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1 
                                              | vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb))))
                : ((4U & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ALUCtrl))
                    ? ((2U & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ALUCtrl))
                        ? ((1U & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ALUCtrl))
                            ? ((0x1fU >= (0x3fU & vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb))
                                ? VL_SHIFTRS_III(32,32,6, vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1, 
                                                 (0x3fU 
                                                  & vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb))
                                : (- (vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1 
                                      >> 0x1fU))) : 
                           ((0x1fU >= (0x3fU & vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb))
                             ? (vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1 
                                >> (0x3fU & vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb))
                             : 0U)) : ((1U & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ALUCtrl))
                                        ? (vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1 
                                           ^ vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb)
                                        : ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALU__DOT____VdfgTmp_h30e9c121__0)
                                            ? 1U : 0U)))
                    : ((2U & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ALUCtrl))
                        ? ((1U & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ALUCtrl))
                            ? ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALU__DOT____VdfgTmp_h30e473f3__0)
                                ? 1U : 0U) : ((0x1fU 
                                               >= (0x3fU 
                                                   & vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb))
                                               ? (vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1 
                                                  << 
                                                  (0x3fU 
                                                   & vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb))
                                               : 0U))
                        : (vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1 
                           + ((1U & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ALUCtrl))
                               ? ((IData)(1U) + (~ vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb))
                               : vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb))))));
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[4U] 
        = (QData)((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALU__DOT__ALURes_temp));
    vlSelf->__Vtableidx3 = ((((1U == (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ALUCtrl))
                               ? (0U == vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALU__DOT__ALURes_temp)
                               : ((3U == (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ALUCtrl))
                                   ? (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALU__DOT____VdfgTmp_h30e473f3__0)
                                   : ((4U == (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ALUCtrl)) 
                                      & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALU__DOT____VdfgTmp_h30e9c121__0)))) 
                             << 0xaU) | ((0x380U & 
                                          (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                           >> 5U)) 
                                         | (0x7fU & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem)));
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__BranchHit 
        = Vtop__ConstPool__TABLE_h802ed314_0[vlSelf->__Vtableidx3];
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[4U] 
        = vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALU__DOT__ALURes_temp;
    Vtop___024root____Vdpiimwrap_top__DOT__ysyx_datamem__DOT__npc_pmem_read_TOP(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALU__DOT__ALURes_temp, vlSelf->__Vtask_top__DOT__ysyx_datamem__DOT__npc_pmem_read__2__rdata);
    vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem 
        = vlSelf->__Vtask_top__DOT__ysyx_datamem__DOT__npc_pmem_read__2__rdata;
    if ((0x80U & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls))) {
        Vtop___024root____Vdpiimwrap_top__DOT__ysyx_datamem__DOT__npc_pmem_write_TOP(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALU__DOT__ALURes_temp, vlSelf->top__DOT__ToMem_Data, (IData)(vlSelf->top__DOT__Wmask));
    }
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_LSU__DOT__sig 
        = (1U & ((8U & (IData)(vlSelf->top__DOT__Wmask))
                  ? (vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem 
                     >> 0x1fU) : ((2U & (IData)(vlSelf->top__DOT__Wmask))
                                   ? (vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem 
                                      >> 0xfU) : (vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem 
                                                  >> 7U))));
    if ((1U & ((~ (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_LSU__DOT__sig)) 
               | (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                  >> 0xeU)))) {
        vlSelf->top__DOT__ysyx_core_rv32im__DOT__DataFromMem 
            = (vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_LSU__DOT____VdfgTmp_hd1f2e586__0 
               & vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem);
        vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[3U] 
            = (vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_LSU__DOT____VdfgTmp_hd1f2e586__0 
               & vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem);
    } else {
        vlSelf->top__DOT__ysyx_core_rv32im__DOT__DataFromMem 
            = ((~ vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_LSU__DOT____VdfgTmp_hd1f2e586__0) 
               | vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem);
        vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[3U] 
            = ((~ vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_LSU__DOT____VdfgTmp_hd1f2e586__0) 
               | vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem);
    }
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[3U] 
        = (0x100000000ULL | (QData)((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__DataFromMem)));
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls) 
                              >> 4U)) == vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__hit 
        = ((7U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls) 
                  >> 4U)) == vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls) 
                                 >> 4U)) == vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__hit) 
           | ((7U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls) 
                     >> 4U)) == vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls) 
                                 >> 4U)) == vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__hit) 
           | ((7U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls) 
                     >> 4U)) == vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls) 
                                 >> 4U)) == vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__hit) 
           | ((7U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls) 
                     >> 4U)) == vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out 
           | ((- (IData)(((7U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls) 
                                 >> 4U)) == vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__hit) 
           | ((7U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls) 
                     >> 4U)) == vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__Result 
        = ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__hit)
            ? vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out
            : 0U);
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
    vlSelf->top__DOT__ToMem_Data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Wmask = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__tnpc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ALUCtrl = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ImmExt = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__Result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__PCplus4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__PCTarget_srca = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__DataFromMem = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_LSU__DOT__sig = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_LSU__DOT____VdfgTmp_hd1f2e586__0 = 0;
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls = VL_RAND_RESET_I(13);
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__BranchHit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__RtypeMul = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__x[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(33);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALU__DOT__ALURes_temp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALU__DOT____VdfgTmp_h30e473f3__0 = 0;
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALU__DOT____VdfgTmp_h30e9c121__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(33);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_top__DOT__ysyx_instmem__DOT__npc_inst_read__0__rdata = 0;
    vlSelf->__Vtask_top__DOT__ysyx_datamem__DOT__npc_pmem_read__2__rdata = 0;
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vtableidx2 = 0;
    vlSelf->__Vtableidx3 = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
