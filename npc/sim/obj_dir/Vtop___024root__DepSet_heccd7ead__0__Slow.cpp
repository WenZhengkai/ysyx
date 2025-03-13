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

void Vtop___024root____Vdpiimwrap_top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<IData/*31:0*/, 16> &a);

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    Vtop___024root____Vdpiimwrap_top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x);
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
void Vtop___024root____Vdpiimwrap_top__DOT__ysyx_instmem__DOT__npc_nextPC_write_TOP(IData/*31:0*/ nextPC);
void Vtop___024root____Vdpiimwrap_top__DOT__ysyx_instmem__DOT__npc_inst_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_to_idu_bits_next_pc 
        = ((IData)(4U) + vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__pc);
    vlSelf->commit_valid = vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_valid_REG;
    vlSelf->commit_pc = vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_pc_REG;
    vlSelf->commit_next_pc = vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_next_pc_REG;
    vlSelf->commit_inst = vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_inst_REG;
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_reg_RegWrite 
        = (IData)((0x13U == (0x707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__ImmExt 
        = ((((vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
              >> 0x1fU) ? 0xfffffU : 0U) << 0xcU) | 
           (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
            >> 0x14U));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_lsu_data 
        = vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x
        [(0xfU & (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                  >> 0xfU))];
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile_src2 
        = vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x
        [(0xfU & (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                  >> 0x14U))];
    Vtop___024root____Vdpiimwrap_top__DOT__ysyx_datamem__DOT__npc_pmem_read_TOP(vlSelf->top__DOT__ysyx_core_rv32e__DOT__lsu_io_from_exu_bits_r_exu_to_wbu_ALURes, vlSelf->__Vtask_top__DOT__ysyx_datamem__DOT__npc_pmem_read__2__rdata);
    vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem 
        = vlSelf->__Vtask_top__DOT__ysyx_datamem__DOT__npc_pmem_read__2__rdata;
    vlSelf->pc = vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__pc;
    Vtop___024root____Vdpiimwrap_top__DOT__ysyx_instmem__DOT__npc_nextPC_write_TOP(vlSelf->pc);
    Vtop___024root____Vdpiimwrap_top__DOT__ysyx_instmem__DOT__npc_inst_read_TOP(vlSelf->pc, vlSelf->__Vtask_top__DOT__ysyx_instmem__DOT__npc_inst_read__0__rdata);
    vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
        = vlSelf->__Vtask_top__DOT__ysyx_instmem__DOT__npc_inst_read__0__rdata;
    vlSelf->inst = vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem;
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
    vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_to_idu_bits_next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_lsu_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_reg_RegWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_valid_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_valid_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_srca = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_srcb = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_idu_to_lsu_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_idu_to_wbu_ResSrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_idu_to_reg_RegWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_idu_to_reg_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_idu_to_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_idu_to_reg_next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_idu_to_reg_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__lsu_io_from_exu_valid_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__lsu_io_from_exu_bits_r_idu_to_lsu_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__lsu_io_from_exu_bits_r_idu_to_wbu_ResSrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__lsu_io_from_exu_bits_r_idu_to_reg_RegWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__lsu_io_from_exu_bits_r_idu_to_reg_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__lsu_io_from_exu_bits_r_idu_to_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__lsu_io_from_exu_bits_r_idu_to_reg_next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__lsu_io_from_exu_bits_r_idu_to_reg_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__lsu_io_from_exu_bits_r_exu_to_wbu_ALURes = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_valid_r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_data_from_mem = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_idu_to_wbu_ResSrc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_idu_to_reg_RegWrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_idu_to_reg_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_idu_to_reg_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_idu_to_reg_next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_idu_to_reg_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_exu_to_wbu_ALURes = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_valid_REG = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_pc_REG = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_next_pc_REG = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_inst_REG = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile_src2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__ImmExt = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtask_top__DOT__ysyx_instmem__DOT__npc_inst_read__0__rdata = 0;
    vlSelf->__Vtask_top__DOT__ysyx_datamem__DOT__npc_pmem_read__2__rdata = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
