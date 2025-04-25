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

void Vtop___024root____Vdpiimwrap_top__DOT__ysyx_datamem__DOT__npc_pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);
void Vtop___024root____Vdpiimwrap_top__DOT__ysyx_datamem__DOT__npc_pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);
void Vtop___024root____Vdpiimwrap_top__DOT__ysyx_instmem__DOT__npc_nextPC_write_TOP(IData/*31:0*/ nextPC);
void Vtop___024root____Vdpiimwrap_top__DOT__ysyx_instmem__DOT__npc_inst_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &rdata);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_12;
    __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_12 = 0;
    CData/*1:0*/ __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_8;
    __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_8 = 0;
    CData/*1:0*/ __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_5;
    __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_5 = 0;
    CData/*1:0*/ __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_1;
    __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_1 = 0;
    CData/*1:0*/ __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_7;
    __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_7 = 0;
    CData/*1:0*/ __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_4;
    __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_4 = 0;
    CData/*1:0*/ __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_2;
    __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_2 = 0;
    CData/*1:0*/ __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_10;
    __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_10 = 0;
    CData/*1:0*/ __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_3;
    __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_3 = 0;
    CData/*1:0*/ __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_11;
    __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_11 = 0;
    CData/*1:0*/ __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_6;
    __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_6 = 0;
    CData/*1:0*/ __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_9;
    __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_9 = 0;
    CData/*1:0*/ __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_13;
    __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_13 = 0;
    CData/*1:0*/ __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_14;
    __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_14 = 0;
    CData/*1:0*/ __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_15;
    __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_15 = 0;
    CData/*3:0*/ __Vdlyvdim0__top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x__v0;
    __Vdlyvdim0__top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x__v0;
    __Vdlyvval__top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x__v0;
    __Vdlyvset__top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x__v0 = 0;
    // Body
    __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_15 
        = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_15;
    __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_14 
        = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_14;
    __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_13 
        = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_13;
    __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_9 
        = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_9;
    __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_6 
        = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_6;
    __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_11 
        = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_11;
    __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_3 
        = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_3;
    __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_10 
        = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_10;
    __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_2 
        = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_2;
    __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_4 
        = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_4;
    __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_7 
        = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_7;
    __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_1 
        = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_1;
    __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_5 
        = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_5;
    __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_8 
        = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_8;
    __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_12 
        = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_12;
    __Vdlyvset__top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x__v0 = 0U;
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_valid_REG 
        = ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_3));
    if (vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_2) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_ctrl_rfWen 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_rfWen;
    }
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_pc_REG 
        = vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_cf_pc;
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_next_pc_REG 
        = vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_cf_next_pc;
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_inst_REG 
        = vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_cf_inst;
    if (vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_wb_RegWrite) {
        __Vdlyvval__top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x__v0 
            = ((0U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_ctrl_rd))
                ? 0U : ((0U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_ctrl_ResSrc))
                         ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_data_Alu0Res_bits
                         : ((1U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_ctrl_ResSrc))
                             ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_data_data_from_mem
                             : ((2U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_ctrl_ResSrc))
                                 ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_data_csrRdata
                                 : 0U))));
        __Vdlyvset__top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x__v0 = 1U;
        __Vdlyvdim0__top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x__v0 
            = (0xfU & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_ctrl_rd));
    }
    if (vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_2) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_data_csrRdata 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_to_wbu_bits_data_csrRdata;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_ctrl_ResSrc 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_ResSrc;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_ctrl_rd 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_rd;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_data_Alu0Res_bits 
            = (IData)(((0x20U & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                        ? (((QData)((IData)(((1U & (IData)(
                                                           (vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__res 
                                                            >> 0x1fU)))
                                              ? 0xffffffffU
                                              : 0U))) 
                            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__res)))
                        : vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__res));
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_data_data_from_mem 
            = ((6U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                ? vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem
                : ((5U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                    ? (0xffffU & vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem)
                    : ((4U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                        ? (0xffU & vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem)
                        : ((2U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                            ? vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem
                            : ((1U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                                ? ((((0x8000U & vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem)
                                      ? 0xffffU : 0U) 
                                    << 0x10U) | (0xffffU 
                                                 & vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem))
                                : ((0U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                                    ? ((((0x80U & vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem)
                                          ? 0xffffffU
                                          : 0U) << 8U) 
                                       | (0xffU & vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem))
                                    : 0U))))));
    }
    if (vlSelf->top__DOT__ysyx_core_rv32e__DOT___T_2) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_rfSrc2 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_to_exu_bits_data_rfSrc2;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_MemWrite 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_MemWrite;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_rfSrc1 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_to_exu_bits_data_rfSrc1;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_imm 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_data_imm;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_isBranch 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_cf_isBranch;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuType 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuType;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc1 
            = ((4U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc1Type))
                ? 0U : ((2U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc1Type))
                         ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_cf_pc
                         : ((0U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc1Type))
                             ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_to_exu_bits_data_rfSrc1
                             : 0U)));
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_rfWen 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rfWen;
    }
    if (vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_2) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_cf_pc 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_pc;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_cf_next_pc 
            = ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__bruRes_valid)
                ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_redirect_target
                : vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_next_pc);
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_cf_inst 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_inst;
    }
    if (vlSelf->rst) {
        __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_15 = 0U;
        __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_14 = 0U;
        __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_13 = 0U;
        __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_9 = 0U;
        __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_6 = 0U;
        __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_11 = 0U;
        __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_3 = 0U;
        __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_10 = 0U;
        __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_2 = 0U;
        __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_4 = 0U;
        __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_7 = 0U;
        __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_1 = 0U;
        __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_5 = 0U;
        __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_8 = 0U;
        __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_12 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_1 = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__mstatus = 0x1800U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__mtvec = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__mcause = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__mepc = 0U;
    } else {
        if ((1U & (~ (((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__isFireSetMask) 
                       & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__wbuClearMask)) 
                      >> 0xfU)))) {
            if ((0x8000U & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__isFireSetMask))) {
                __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_15 
                    = ((3U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_15))
                        ? 3U : (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_15_T_2));
            } else if ((0x8000U & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__wbuClearMask))) {
                __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_15 
                    = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_15_T_7;
            }
        }
        if ((1U & (~ (((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__isFireSetMask) 
                       & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__wbuClearMask)) 
                      >> 0xeU)))) {
            if ((0x4000U & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__isFireSetMask))) {
                __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_14 
                    = ((3U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_14))
                        ? 3U : (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_14_T_2));
            } else if ((0x4000U & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__wbuClearMask))) {
                __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_14 
                    = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_14_T_7;
            }
        }
        if ((1U & (~ (((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__isFireSetMask) 
                       & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__wbuClearMask)) 
                      >> 0xdU)))) {
            if ((0x2000U & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__isFireSetMask))) {
                __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_13 
                    = ((3U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_13))
                        ? 3U : (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_13_T_2));
            } else if ((0x2000U & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__wbuClearMask))) {
                __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_13 
                    = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_13_T_7;
            }
        }
        if ((1U & (~ (((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__isFireSetMask) 
                       & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__wbuClearMask)) 
                      >> 9U)))) {
            if ((0x200U & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__isFireSetMask))) {
                __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_9 
                    = ((3U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_9))
                        ? 3U : (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_9_T_2));
            } else if ((0x200U & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__wbuClearMask))) {
                __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_9 
                    = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_9_T_7;
            }
        }
        if ((1U & (~ (((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__isFireSetMask) 
                       & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__wbuClearMask)) 
                      >> 6U)))) {
            if ((0x40U & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__isFireSetMask))) {
                __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_6 
                    = ((3U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_6))
                        ? 3U : (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_6_T_2));
            } else if ((0x40U & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__wbuClearMask))) {
                __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_6 
                    = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_6_T_7;
            }
        }
        if ((1U & (~ (((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__isFireSetMask) 
                       & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__wbuClearMask)) 
                      >> 0xbU)))) {
            if ((0x800U & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__isFireSetMask))) {
                __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_11 
                    = ((3U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_11))
                        ? 3U : (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_11_T_2));
            } else if ((0x800U & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__wbuClearMask))) {
                __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_11 
                    = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_11_T_7;
            }
        }
        if ((1U & (~ (((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__isFireSetMask) 
                       & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__wbuClearMask)) 
                      >> 3U)))) {
            if ((8U & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__isFireSetMask))) {
                __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_3 
                    = ((3U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_3))
                        ? 3U : (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_3_T_2));
            } else if ((8U & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__wbuClearMask))) {
                __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_3 
                    = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_3_T_7;
            }
        }
        if ((1U & (~ (((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__isFireSetMask) 
                       & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__wbuClearMask)) 
                      >> 0xaU)))) {
            if ((0x400U & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__isFireSetMask))) {
                __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_10 
                    = ((3U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_10))
                        ? 3U : (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_10_T_2));
            } else if ((0x400U & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__wbuClearMask))) {
                __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_10 
                    = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_10_T_7;
            }
        }
        if ((1U & (~ (((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__isFireSetMask) 
                       & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__wbuClearMask)) 
                      >> 2U)))) {
            if ((4U & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__isFireSetMask))) {
                __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_2 
                    = ((3U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_2))
                        ? 3U : (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_2_T_2));
            } else if ((4U & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__wbuClearMask))) {
                __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_2 
                    = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_2_T_7;
            }
        }
        if ((1U & (~ (((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__isFireSetMask) 
                       & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__wbuClearMask)) 
                      >> 4U)))) {
            if ((0x10U & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__isFireSetMask))) {
                __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_4 
                    = ((3U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_4))
                        ? 3U : (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_4_T_2));
            } else if ((0x10U & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__wbuClearMask))) {
                __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_4 
                    = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_4_T_7;
            }
        }
        if ((1U & (~ (((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__isFireSetMask) 
                       & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__wbuClearMask)) 
                      >> 7U)))) {
            if ((0x80U & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__isFireSetMask))) {
                __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_7 
                    = ((3U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_7))
                        ? 3U : (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_7_T_2));
            } else if ((0x80U & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__wbuClearMask))) {
                __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_7 
                    = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_7_T_7;
            }
        }
        if ((1U & (~ (((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__isFireSetMask) 
                       & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__wbuClearMask)) 
                      >> 1U)))) {
            if ((2U & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__isFireSetMask))) {
                __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_1 
                    = ((3U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_1))
                        ? 3U : (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_1_T_2));
            } else if ((2U & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__wbuClearMask))) {
                __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_1 
                    = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_1_T_7;
            }
        }
        if ((1U & (~ (((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__isFireSetMask) 
                       & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__wbuClearMask)) 
                      >> 5U)))) {
            if ((0x20U & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__isFireSetMask))) {
                __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_5 
                    = ((3U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_5))
                        ? 3U : (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_5_T_2));
            } else if ((0x20U & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__wbuClearMask))) {
                __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_5 
                    = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_5_T_7;
            }
        }
        if ((1U & (~ (((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__isFireSetMask) 
                       & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__wbuClearMask)) 
                      >> 8U)))) {
            if ((0x100U & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__isFireSetMask))) {
                __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_8 
                    = ((3U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_8))
                        ? 3U : (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_8_T_2));
            } else if ((0x100U & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__wbuClearMask))) {
                __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_8 
                    = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_8_T_7;
            }
        }
        if ((1U & (~ (((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__isFireSetMask) 
                       & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__wbuClearMask)) 
                      >> 0xcU)))) {
            if ((0x1000U & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__isFireSetMask))) {
                __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_12 
                    = ((3U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_12))
                        ? 3U : (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_12_T_2));
            } else if ((0x1000U & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__wbuClearMask))) {
                __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_12 
                    = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_12_T_7;
            }
        }
        if (vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_redirect_valid) {
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_1 = 0U;
        } else if (((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_isu_ready) 
                    & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid))) {
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_1 
                = vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid;
        } else if (vlSelf->top__DOT__ysyx_core_rv32e__DOT___T_2) {
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_1 = 0U;
        }
        if (vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__csrWen) {
            if ((0x300U == vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc2)) {
                vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__mstatus 
                    = ((3U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                        ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT___csrUpdate_T_2
                        : vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT___csrUpdate_T_6);
            }
            if ((0x305U == vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc2)) {
                vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__mtvec 
                    = ((3U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                        ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT___csrUpdate_T_2
                        : vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT___csrUpdate_T_6);
            }
        }
        if ((((~ (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__csrWen)) 
              & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0_io_in_valid)) 
             & (0x73U == vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_inst))) {
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__mcause = 0xbU;
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__mepc 
                = vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_pc;
        } else if (vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__csrWen) {
            if ((0x342U == vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc2)) {
                vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__mcause 
                    = vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__csrUpdate;
            }
            if ((0x341U == vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc2)) {
                vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__mepc 
                    = vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__csrUpdate;
            }
        }
    }
    if (vlSelf->top__DOT__ysyx_core_rv32e__DOT___T_2) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc2 
            = ((5U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc2Type))
                ? 4U : ((3U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc2Type))
                         ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_data_imm
                         : ((1U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc2Type))
                             ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_to_exu_bits_data_rfSrc2
                             : 0U)));
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_ResSrc 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_ResSrc;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_rd 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rd;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuOpType;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_pc 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_cf_pc;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_next_pc 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_cf_next_pc;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_inst 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_cf_inst;
    }
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_15 
        = __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_15;
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_14 
        = __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_14;
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_13 
        = __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_13;
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_9 
        = __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_9;
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_6 
        = __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_6;
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_11 
        = __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_11;
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_3 
        = __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_3;
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_10 
        = __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_10;
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_2 
        = __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_2;
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_4 
        = __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_4;
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_7 
        = __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_7;
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_1 
        = __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_1;
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_5 
        = __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_5;
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_8 
        = __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_8;
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_12 
        = __Vdly__top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_12;
    if (__Vdlyvset__top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x__v0) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[__Vdlyvdim0__top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x__v0] 
            = __Vdlyvval__top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x__v0;
    }
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_15_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_15)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_15_T_7 
        = ((0U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_15))
            ? 0U : (3U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_15) 
                          - (IData)(1U))));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_14_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_14)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_14_T_7 
        = ((0U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_14))
            ? 0U : (3U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_14) 
                          - (IData)(1U))));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_13_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_13)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_13_T_7 
        = ((0U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_13))
            ? 0U : (3U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_13) 
                          - (IData)(1U))));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_9_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_9)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_9_T_7 
        = ((0U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_9))
            ? 0U : (3U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_9) 
                          - (IData)(1U))));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_6_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_6)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_6_T_7 
        = ((0U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_6))
            ? 0U : (3U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_6) 
                          - (IData)(1U))));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_11_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_11)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_11_T_7 
        = ((0U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_11))
            ? 0U : (3U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_11) 
                          - (IData)(1U))));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_3_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_3)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_3_T_7 
        = ((0U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_3))
            ? 0U : (3U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_3) 
                          - (IData)(1U))));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_10_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_10)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_10_T_7 
        = ((0U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_10))
            ? 0U : (3U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_10) 
                          - (IData)(1U))));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_2_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_2)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_2_T_7 
        = ((0U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_2))
            ? 0U : (3U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_2) 
                          - (IData)(1U))));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_4_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_4)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_4_T_7 
        = ((0U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_4))
            ? 0U : (3U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_4) 
                          - (IData)(1U))));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_7_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_7)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_7_T_7 
        = ((0U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_7))
            ? 0U : (3U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_7) 
                          - (IData)(1U))));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_1_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_1)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_1_T_7 
        = ((0U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_1))
            ? 0U : (3U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_1) 
                          - (IData)(1U))));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_5_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_5)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_5_T_7 
        = ((0U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_5))
            ? 0U : (3U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_5) 
                          - (IData)(1U))));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_8_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_8)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_8_T_7 
        = ((0U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_8))
            ? 0U : (3U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_8) 
                          - (IData)(1U))));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_12_T_2 
        = (3U & ((IData)(1U) + (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_12)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___busy_12_T_7 
        = ((0U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_12))
            ? 0U : (3U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_12) 
                          - (IData)(1U))));
    if (vlSelf->top__DOT__ysyx_core_rv32e__DOT___T) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1 
            = (0x1fU & (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                        >> 0xfU));
    }
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_to_exu_bits_data_rfSrc1 
        = vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x
        [(0xfU & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1))];
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
    if (vlSelf->top__DOT__ysyx_core_rv32e__DOT___T) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2 
            = (0x1fU & (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                        >> 0x14U));
    }
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
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid = 
        ((~ (IData)(vlSelf->rst)) & ((~ (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_redirect_valid)) 
                                     & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT___GEN_1)));
    vlSelf->commit_valid = vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_valid_REG;
    vlSelf->commit_pc = vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_pc_REG;
    vlSelf->commit_next_pc = vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_next_pc_REG;
    vlSelf->commit_inst = vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_inst_REG;
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_to_exu_bits_data_rfSrc2 
        = vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x
        [(0xfU & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2))];
    if (vlSelf->top__DOT__ysyx_core_rv32e__DOT___T) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_MemWrite 
            = (2U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__decodelist_0));
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_cf_isBranch 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_isBranch;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_3 = 0U;
    } else if (vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_2) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_3 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_2;
    } else if (vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_valid) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_3 = 0U;
    }
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_valid 
        = vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_3;
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_wb_RegWrite 
        = ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_3) 
           & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_ctrl_rfWen));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__wbuClearMask 
        = ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_wb_RegWrite)
            ? (0xffffU & ((IData)(1U) << (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_ctrl_rd)))
            : 0U);
    vlSelf->top__DOT__ToMem_Addr = (vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc1 
                                    + vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc2);
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
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__xorRes 
        = (vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc1 
           ^ vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc2);
    if (vlSelf->rst) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_2 = 0U;
    } else if (((~ (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT___T)) 
                & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_to_exu_valid))) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_2 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_to_exu_valid;
    } else if (vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_valid) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_2 = 0U;
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
    if (vlSelf->top__DOT__ysyx_core_rv32e__DOT___T) {
        if ((0x13U == (0x707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))) {
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuType = 0U;
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc1Type = 0U;
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc2Type = 3U;
        } else if ((0x1013U == (0xfe00707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))) {
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuType = 0U;
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc1Type = 0U;
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc2Type = 3U;
        } else if ((0x2013U == (0x707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))) {
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuType = 0U;
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc1Type = 0U;
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc2Type = 3U;
        } else if ((0x3013U == (0x707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))) {
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuType = 0U;
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc1Type = 0U;
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc2Type = 3U;
        } else if ((0x4013U == (0x707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))) {
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuType = 0U;
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc1Type = 0U;
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc2Type = 3U;
        } else if ((0x5013U == (0xfe00707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))) {
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuType = 0U;
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc1Type = 0U;
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc2Type = 3U;
        } else if ((0x6013U == (0x707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))) {
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuType = 0U;
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc1Type = 0U;
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc2Type = 3U;
        } else if ((0x7013U == (0x707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))) {
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuType = 0U;
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc1Type = 0U;
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc2Type = 3U;
        } else if ((0x40005013U == (0xfe00707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))) {
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuType = 0U;
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc1Type = 0U;
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc2Type = 3U;
        } else if ((0x33U == (0xfe00707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))) {
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuType = 0U;
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc1Type = 0U;
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc2Type = 1U;
        } else if ((0x1033U == (0xfe00707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))) {
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuType = 0U;
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc1Type = 0U;
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc2Type = 1U;
        } else {
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuType 
                = vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_155;
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc1Type 
                = vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_237;
            vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc2Type 
                = vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_278;
        }
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rfWen 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_isu_bits_ctrl_rfWen;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_data_imm 
            = ((1U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__decodelist_0))
                ? ((((vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                      >> 0x1fU) ? 0x7ffffU : 0U) << 0xdU) 
                   | ((0x1000U & (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                  >> 0x13U)) | ((0x800U 
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
                          >> 0x1fU) ? 0xfffffU : 0U) 
                        << 0xcU) | ((0xfe0U & (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                               >> 0x14U)) 
                                    | (0x1fU & (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                                >> 7U))))
                    : ((7U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__decodelist_0))
                        ? ((((vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                              >> 0x1fU) ? 0x7ffU : 0U) 
                            << 0x15U) | ((0x100000U 
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
                            ? (0xfffff000U & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)
                            : ((4U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__decodelist_0))
                                ? ((((vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                      >> 0x1fU) ? 0xfffffU
                                      : 0U) << 0xcU) 
                                   | (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                      >> 0x14U)) : 0U)))));
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_ResSrc 
            = ((3U == (0x7fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                ? 1U : ((0x73U == (0x7fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                         ? 2U : 0U));
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rd 
            = (0x1fU & (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                        >> 7U));
    }
    if (vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_to_idu_ready) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_isBranch 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_to_idu_bits_isBranch;
    }
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
    if (vlSelf->top__DOT__ysyx_core_rv32e__DOT___T) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuOpType 
            = ((0x13U == (0x707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                ? 0x40U : ((0x1013U == (0xfe00707fU 
                                        & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                            ? 1U : ((0x2013U == (0x707fU 
                                                 & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                     ? 2U : ((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                              ? 3U : 
                                             ((0x4013U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                               ? 4U
                                               : ((0x5013U 
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
                                                     : 
                                                    ((0x40005013U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                      ? 0xdU
                                                      : 
                                                     ((0x33U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                       ? 0x40U
                                                       : 
                                                      ((0x1033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                        ? 1U
                                                        : (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_196))))))))))));
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_cf_pc 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_pc;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_cf_next_pc 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_next_pc;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_cf_inst 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst;
    }
    if (vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_to_idu_ready) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_pc 
            = vlSelf->pc;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_next_pc 
            = ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_redirect_valid)
                ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_redirect_target
                : ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_to_idu_ready)
                    ? ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__needBruRes)
                        ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT___next_pc_T_4
                        : ((IData)(4U) + vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__pc))
                    : vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__pc));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__pc = 0x80000000U;
    } else if (vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_redirect_valid) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__pc 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_redirect_target;
    } else if (vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_to_idu_ready) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__pc 
            = ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__needBruRes)
                ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT___next_pc_T_4
                : vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__predictPc);
    }
    if (vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_to_idu_ready) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
            = vlSelf->inst;
    }
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT___csrUpdate_T_6 
        = ((2U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
            ? (vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc1 
               | vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__csr)
            : ((1U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc1
                : 0U));
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
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_to_wbu_bits_data_csrRdata 
        = ((0x73U == vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_inst)
            ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__mtvec
            : ((0x30200073U == vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_inst)
                ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__mepc
                : vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__csr));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_valid 
        = vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_2;
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0_io_in_valid 
        = ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_2) 
           & (3U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuType)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT___jalrBruRes_valid_T 
        = ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_isBranch) 
           & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_2));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__csrUpdate 
        = ((3U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
            ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT___csrUpdate_T_2
            : vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT___csrUpdate_T_6);
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
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__bruRes_valid 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__jalrBruRes_valid;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_redirect_target 
            = (0xfffffffeU & (vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_imm 
                              + vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_rfSrc1));
    } else if (vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__typebBruRes_valid) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__bruRes_valid 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__typebBruRes_valid;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_redirect_target 
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
    } else if (vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csrBruRes_valid) {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__bruRes_valid = 1U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_redirect_target 
            = vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_to_wbu_bits_data_csrRdata;
    } else {
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__bruRes_valid = 0U;
        vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_redirect_target = 0U;
    }
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
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__predictPc 
        = ((IData)(4U) + vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__pc);
    vlSelf->pc = vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__pc;
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_redirect_valid 
        = ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_2) 
           & ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__bruRes_valid) 
              & (vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_redirect_target 
                 != vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_next_pc)));
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
    Vtop___024root____Vdpiimwrap_top__DOT__ysyx_instmem__DOT__npc_nextPC_write_TOP(vlSelf->pc);
    Vtop___024root____Vdpiimwrap_top__DOT__ysyx_instmem__DOT__npc_inst_read_TOP(vlSelf->pc, vlSelf->__Vtask_top__DOT__ysyx_instmem__DOT__npc_inst_read__0__rdata);
    vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
        = vlSelf->__Vtask_top__DOT__ysyx_instmem__DOT__npc_inst_read__0__rdata;
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT___T 
        = ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_redirect_valid) 
           & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_2));
    vlSelf->inst = vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem;
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT___next_pc_T_4 
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
            : ((0x6fU == (0x7fU & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem))
                ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__pc
                : ((IData)(4U) + vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__pc)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_to_idu_bits_isBranch 
        = ((0x63U == (0x7fU & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem)) 
           | ((0x67U == (0x7fU & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem)) 
              | (0x6fU == (0x7fU & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem))));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT___T_2 = 
        ((~ (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT___T)) 
         & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_to_exu_valid));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__needBruRes 
        = ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_to_idu_bits_isBranch) 
           | ((0x73U == vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem) 
              | (0x30200073U == vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__isFireSetMask 
        = (((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rfWen) 
            & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT___T_2))
            ? (0xffffU & ((IData)(1U) << (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rd)))
            : 0U);
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_isu_ready 
        = (1U & ((~ (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_1)) 
                 | (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT___T_2)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT___T = ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid) 
                                                  & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_isu_ready));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_to_idu_ready 
        = (1U & ((~ (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid)) 
                 | (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT___T)));
    vlSelf->top__DOT__ysyx_core_rv32e__DOT___GEN_1 
        = ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_to_idu_ready) 
           | ((~ (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT___T)) 
              & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid)));
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
                    VL_FATAL_MT("../vsrc/../vsrc/top.v", 12, "", "Active region did not converge.");
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
                VL_FATAL_MT("../vsrc/../vsrc/top.v", 12, "", "NBA region did not converge.");
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
