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
        bufp->chgIData(oldp+0,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__lsu_io_from_exu_bits_r_exu_to_wbu_ALURes),32);
        bufp->chgIData(oldp+1,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__lsu_io_from_exu_bits_r_idu_to_lsu_data),32);
        bufp->chgIData(oldp+2,(vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem),32);
        bufp->chgIData(oldp+3,(((IData)(4U) + vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__pc)),32);
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_valid_r));
        bufp->chgIData(oldp+5,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst),32);
        bufp->chgIData(oldp+6,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_pc),32);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_next_pc),32);
        bufp->chgIData(oldp+8,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_lsu_data),32);
        bufp->chgIData(oldp+9,(((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_reg_RegWrite)
                                 ? ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_reg_RegWrite)
                                     ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__ImmExt
                                     : ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_reg_RegWrite)
                                         ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__ImmExt
                                         : vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile_src2))
                                 : vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile_src2)),32);
        bufp->chgBit(oldp+10,((1U & (~ (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_reg_RegWrite)))));
        bufp->chgBit(oldp+11,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_reg_RegWrite));
        bufp->chgCData(oldp+12,((0x1fU & (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                          >> 7U))),5);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_idu_to_reg_rd),5);
        bufp->chgIData(oldp+14,(((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_idu_to_wbu_ResSrc)
                                  ? ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_idu_to_wbu_ResSrc)
                                      ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_data_from_mem
                                      : 0U) : vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_exu_to_wbu_ALURes)),32);
        bufp->chgBit(oldp+15,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_idu_to_reg_RegWrite));
        bufp->chgBit(oldp+16,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_valid_r));
        bufp->chgIData(oldp+17,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_srca),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_srcb),32);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_idu_to_lsu_data),32);
        bufp->chgBit(oldp+20,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_idu_to_wbu_ResSrc));
        bufp->chgBit(oldp+21,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_idu_to_reg_RegWrite));
        bufp->chgCData(oldp+22,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_idu_to_reg_rd),5);
        bufp->chgIData(oldp+23,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_idu_to_reg_pc),32);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_idu_to_reg_next_pc),32);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_idu_to_reg_inst),32);
        bufp->chgIData(oldp+26,((vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_srca 
                                 + vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_srcb)),32);
        bufp->chgBit(oldp+27,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__lsu_io_from_exu_valid_r));
        bufp->chgBit(oldp+28,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__lsu_io_from_exu_bits_r_idu_to_wbu_ResSrc));
        bufp->chgBit(oldp+29,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__lsu_io_from_exu_bits_r_idu_to_reg_RegWrite));
        bufp->chgCData(oldp+30,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__lsu_io_from_exu_bits_r_idu_to_reg_rd),5);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__lsu_io_from_exu_bits_r_idu_to_reg_pc),32);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__lsu_io_from_exu_bits_r_idu_to_reg_next_pc),32);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__lsu_io_from_exu_bits_r_idu_to_reg_inst),32);
        bufp->chgBit(oldp+34,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_valid_r));
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_data_from_mem),32);
        bufp->chgBit(oldp+36,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_idu_to_wbu_ResSrc));
        bufp->chgIData(oldp+37,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_idu_to_reg_pc),32);
        bufp->chgIData(oldp+38,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_idu_to_reg_next_pc),32);
        bufp->chgIData(oldp+39,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_idu_to_reg_inst),32);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_exu_to_wbu_ALURes),32);
        bufp->chgBit(oldp+41,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_valid_REG));
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_pc_REG),32);
        bufp->chgIData(oldp+43,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_next_pc_REG),32);
        bufp->chgIData(oldp+44,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_inst_REG),32);
        bufp->chgCData(oldp+45,((0x1fU & (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+46,((0x1fU & (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                          >> 0x14U))),5);
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile_src2),32);
        bufp->chgIData(oldp+48,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__ImmExt),32);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[0]),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[1]),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[2]),32);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[3]),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[4]),32);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[5]),32);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[6]),32);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[7]),32);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[8]),32);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[9]),32);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[10]),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[11]),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[12]),32);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[13]),32);
        bufp->chgIData(oldp+63,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[14]),32);
        bufp->chgIData(oldp+64,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[15]),32);
        bufp->chgIData(oldp+65,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__pc),32);
        bufp->chgIData(oldp+66,(vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem),32);
    }
    bufp->chgBit(oldp+67,(vlSelf->clk));
    bufp->chgBit(oldp+68,(vlSelf->rst));
    bufp->chgIData(oldp+69,(vlSelf->inst),32);
    bufp->chgIData(oldp+70,(vlSelf->pc),32);
    bufp->chgBit(oldp+71,(vlSelf->commit_valid));
    bufp->chgIData(oldp+72,(vlSelf->commit_pc),32);
    bufp->chgIData(oldp+73,(vlSelf->commit_next_pc),32);
    bufp->chgIData(oldp+74,(vlSelf->commit_inst),32);
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
