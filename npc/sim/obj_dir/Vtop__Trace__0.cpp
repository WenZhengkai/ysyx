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
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__ToMem_Data),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem),32);
        bufp->chgIData(oldp+3,(((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_reg_RegWrite)
                                 ? ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_reg_RegWrite)
                                     ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__ImmExt
                                     : ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_reg_RegWrite)
                                         ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__ImmExt
                                         : vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile_src2))
                                 : vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile_src2)),32);
        bufp->chgCData(oldp+4,((1U & (~ (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_reg_RegWrite)))),3);
        bufp->chgBit(oldp+5,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_reg_RegWrite));
        bufp->chgCData(oldp+6,((0x1fU & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                         >> 7U))),5);
        bufp->chgIData(oldp+7,(((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_reg_RegWrite)
                                 ? vlSelf->top__DOT__ToMem_Addr
                                 : ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_reg_RegWrite)
                                     ? 0U : vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem))),32);
        bufp->chgCData(oldp+8,((0x1fU & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                         >> 0xfU))),5);
        bufp->chgCData(oldp+9,((0x1fU & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                         >> 0x14U))),5);
        bufp->chgIData(oldp+10,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile_src2),32);
        bufp->chgBit(oldp+11,((1U & (~ (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_reg_RegWrite)))));
        bufp->chgIData(oldp+12,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__ImmExt),32);
        bufp->chgIData(oldp+13,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[0]),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[1]),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[2]),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[3]),32);
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[4]),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[5]),32);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[6]),32);
        bufp->chgIData(oldp+20,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[7]),32);
        bufp->chgIData(oldp+21,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[8]),32);
        bufp->chgIData(oldp+22,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[9]),32);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[10]),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[11]),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[12]),32);
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[13]),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[14]),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[15]),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__pc),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem),32);
    }
    bufp->chgBit(oldp+31,(vlSelf->clk));
    bufp->chgBit(oldp+32,(vlSelf->rst));
    bufp->chgIData(oldp+33,(vlSelf->inst),32);
    bufp->chgIData(oldp+34,(vlSelf->pc),32);
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
