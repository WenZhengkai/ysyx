// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+4,"clk", false,-1);
    tracep->declBit(c+5,"rst", false,-1);
    tracep->declBus(c+6,"inst", false,-1, 31,0);
    tracep->declBus(c+7,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+8,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+4,"clk", false,-1);
    tracep->declBit(c+5,"rst", false,-1);
    tracep->declBus(c+6,"inst", false,-1, 31,0);
    tracep->declBus(c+7,"pc", false,-1, 31,0);
    tracep->declBus(c+6,"ToMem_Addr", false,-1, 31,0);
    tracep->declBus(c+1,"ToMem_Data", false,-1, 31,0);
    tracep->declBus(c+1,"FromMem_Data", false,-1, 31,0);
    tracep->declBus(c+9,"Wmask", false,-1, 7,0);
    tracep->declBit(c+10,"MemWrite", false,-1);
    tracep->pushNamePrefix("ysyx_core_rv32e ");
    tracep->declBit(c+4,"clock", false,-1);
    tracep->declBit(c+5,"reset", false,-1);
    tracep->declBus(c+1,"io_from_mem_data", false,-1, 31,0);
    tracep->declBus(c+1,"io_to_mem_data", false,-1, 31,0);
    tracep->declBus(c+6,"io_to_mem_addr", false,-1, 31,0);
    tracep->declBus(c+9,"io_to_mem_Wmask", false,-1, 7,0);
    tracep->declBit(c+10,"io_to_mem_MemWrite", false,-1);
    tracep->declBus(c+6,"io_inst", false,-1, 31,0);
    tracep->declBus(c+7,"io_pc", false,-1, 31,0);
    tracep->declBit(c+4,"ifu_clock", false,-1);
    tracep->declBit(c+5,"ifu_reset", false,-1);
    tracep->declBus(c+7,"ifu_io_pc", false,-1, 31,0);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+4,"clock", false,-1);
    tracep->declBit(c+5,"reset", false,-1);
    tracep->declBus(c+7,"io_pc", false,-1, 31,0);
    tracep->declBus(c+2,"pc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_datamem ");
    tracep->declBus(c+8,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+6,"FromCore_Addr", false,-1, 31,0);
    tracep->declBus(c+9,"Wmask", false,-1, 7,0);
    tracep->declBus(c+1,"FromCore_Data", false,-1, 31,0);
    tracep->declBit(c+10,"MemWrite", false,-1);
    tracep->declBus(c+1,"ToCore_Data", false,-1, 31,0);
    tracep->declBus(c+6,"AddrMem", false,-1, 31,0);
    tracep->declBus(c+1,"DataToMem", false,-1, 31,0);
    tracep->declBus(c+1,"DPI_DataFromMem", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_instmem ");
    tracep->declBus(c+8,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+7,"pc", false,-1, 31,0);
    tracep->declBus(c+6,"inst", false,-1, 31,0);
    tracep->declBus(c+3,"DPI_DataFromMem", false,-1, 31,0);
    tracep->declBus(c+7,"DPI_nextPC", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP____024unit__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP____024unit__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+8,"XLEN", false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("$unit ");
    Vtop___024root__trace_init_sub__TOP____024unit__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__pc),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem),32);
    bufp->fullBit(oldp+4,(vlSelf->clk));
    bufp->fullBit(oldp+5,(vlSelf->rst));
    bufp->fullIData(oldp+6,(vlSelf->inst),32);
    bufp->fullIData(oldp+7,(vlSelf->pc),32);
    bufp->fullIData(oldp+8,(0x20U),32);
    bufp->fullCData(oldp+9,(0xffU),8);
    bufp->fullBit(oldp+10,(0U));
}
