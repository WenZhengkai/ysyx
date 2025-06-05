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
    tracep->declBit(c+185,"clk", false,-1);
    tracep->declBit(c+186,"rst", false,-1);
    tracep->declBus(c+187,"inst", false,-1, 31,0);
    tracep->declBus(c+188,"pc", false,-1, 31,0);
    tracep->declBit(c+189,"commit_valid", false,-1);
    tracep->declBus(c+190,"commit_pc", false,-1, 31,0);
    tracep->declBus(c+191,"commit_next_pc", false,-1, 31,0);
    tracep->declBus(c+192,"commit_inst", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+193,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+185,"clk", false,-1);
    tracep->declBit(c+186,"rst", false,-1);
    tracep->declBus(c+187,"inst", false,-1, 31,0);
    tracep->declBus(c+188,"pc", false,-1, 31,0);
    tracep->declBit(c+189,"commit_valid", false,-1);
    tracep->declBus(c+190,"commit_pc", false,-1, 31,0);
    tracep->declBus(c+191,"commit_next_pc", false,-1, 31,0);
    tracep->declBus(c+192,"commit_inst", false,-1, 31,0);
    tracep->declBus(c+1,"ToMem_Addr", false,-1, 31,0);
    tracep->declBus(c+2,"ToMem_Data", false,-1, 31,0);
    tracep->declBus(c+3,"FromMem_Data", false,-1, 31,0);
    tracep->declBus(c+4,"Wmask", false,-1, 7,0);
    tracep->declBus(c+5,"Wmask2Bits", false,-1, 1,0);
    tracep->declBit(c+6,"MemWrite", false,-1);
    tracep->pushNamePrefix("MaskTrans_inst ");
    tracep->declBus(c+5,"in", false,-1, 1,0);
    tracep->declBus(c+4,"out", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_core_rv32e ");
    tracep->declBit(c+185,"clock", false,-1);
    tracep->declBit(c+186,"reset", false,-1);
    tracep->declBus(c+3,"io_from_mem_data", false,-1, 31,0);
    tracep->declBus(c+2,"io_to_mem_data", false,-1, 31,0);
    tracep->declBus(c+1,"io_to_mem_addr", false,-1, 31,0);
    tracep->declBus(c+5,"io_to_mem_Wmask", false,-1, 1,0);
    tracep->declBit(c+6,"io_to_mem_MemWrite", false,-1);
    tracep->declBus(c+187,"io_inst", false,-1, 31,0);
    tracep->declBus(c+188,"io_pc", false,-1, 31,0);
    tracep->declBit(c+189,"io_commit_valid", false,-1);
    tracep->declBus(c+190,"io_commit_pc", false,-1, 31,0);
    tracep->declBus(c+191,"io_commit_next_pc", false,-1, 31,0);
    tracep->declBus(c+192,"io_commit_inst", false,-1, 31,0);
    tracep->declBit(c+185,"ifu_clock", false,-1);
    tracep->declBit(c+186,"ifu_reset", false,-1);
    tracep->declBus(c+187,"ifu_io_inst", false,-1, 31,0);
    tracep->declBit(c+7,"ifu_io_to_idu_ready", false,-1);
    tracep->declBus(c+187,"ifu_io_to_idu_bits_inst", false,-1, 31,0);
    tracep->declBus(c+188,"ifu_io_to_idu_bits_pc", false,-1, 31,0);
    tracep->declBus(c+8,"ifu_io_to_idu_bits_next_pc", false,-1, 31,0);
    tracep->declBit(c+9,"ifu_io_to_idu_bits_isBranch", false,-1);
    tracep->declBus(c+188,"ifu_io_pc", false,-1, 31,0);
    tracep->declBus(c+10,"ifu_io_redirect_target", false,-1, 31,0);
    tracep->declBit(c+11,"ifu_io_redirect_valid", false,-1);
    tracep->declBit(c+7,"idu_io_from_ifu_ready", false,-1);
    tracep->declBit(c+12,"idu_io_from_ifu_valid", false,-1);
    tracep->declBus(c+13,"idu_io_from_ifu_bits_inst", false,-1, 31,0);
    tracep->declBus(c+14,"idu_io_from_ifu_bits_pc", false,-1, 31,0);
    tracep->declBus(c+15,"idu_io_from_ifu_bits_next_pc", false,-1, 31,0);
    tracep->declBit(c+16,"idu_io_from_ifu_bits_isBranch", false,-1);
    tracep->declBit(c+17,"idu_io_to_isu_ready", false,-1);
    tracep->declBit(c+12,"idu_io_to_isu_valid", false,-1);
    tracep->declBus(c+13,"idu_io_to_isu_bits_cf_inst", false,-1, 31,0);
    tracep->declBus(c+14,"idu_io_to_isu_bits_cf_pc", false,-1, 31,0);
    tracep->declBus(c+15,"idu_io_to_isu_bits_cf_next_pc", false,-1, 31,0);
    tracep->declBit(c+16,"idu_io_to_isu_bits_cf_isBranch", false,-1);
    tracep->declBit(c+18,"idu_io_to_isu_bits_ctrl_MemWrite", false,-1);
    tracep->declBus(c+19,"idu_io_to_isu_bits_ctrl_ResSrc", false,-1, 1,0);
    tracep->declBus(c+20,"idu_io_to_isu_bits_ctrl_fuSrc1Type", false,-1, 2,0);
    tracep->declBus(c+21,"idu_io_to_isu_bits_ctrl_fuSrc2Type", false,-1, 2,0);
    tracep->declBus(c+22,"idu_io_to_isu_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+23,"idu_io_to_isu_bits_ctrl_fuOpType", false,-1, 6,0);
    tracep->declBus(c+24,"idu_io_to_isu_bits_ctrl_rs1", false,-1, 4,0);
    tracep->declBus(c+25,"idu_io_to_isu_bits_ctrl_rs2", false,-1, 4,0);
    tracep->declBit(c+26,"idu_io_to_isu_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+27,"idu_io_to_isu_bits_ctrl_rd", false,-1, 4,0);
    tracep->declBus(c+28,"idu_io_to_isu_bits_data_imm", false,-1, 31,0);
    tracep->declBit(c+185,"isu_clock", false,-1);
    tracep->declBit(c+186,"isu_reset", false,-1);
    tracep->declBit(c+17,"isu_io_from_idu_ready", false,-1);
    tracep->declBit(c+29,"isu_io_from_idu_valid", false,-1);
    tracep->declBus(c+30,"isu_io_from_idu_bits_cf_inst", false,-1, 31,0);
    tracep->declBus(c+31,"isu_io_from_idu_bits_cf_pc", false,-1, 31,0);
    tracep->declBus(c+32,"isu_io_from_idu_bits_cf_next_pc", false,-1, 31,0);
    tracep->declBit(c+33,"isu_io_from_idu_bits_cf_isBranch", false,-1);
    tracep->declBit(c+34,"isu_io_from_idu_bits_ctrl_MemWrite", false,-1);
    tracep->declBus(c+35,"isu_io_from_idu_bits_ctrl_ResSrc", false,-1, 1,0);
    tracep->declBus(c+36,"isu_io_from_idu_bits_ctrl_fuSrc1Type", false,-1, 2,0);
    tracep->declBus(c+37,"isu_io_from_idu_bits_ctrl_fuSrc2Type", false,-1, 2,0);
    tracep->declBus(c+38,"isu_io_from_idu_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+39,"isu_io_from_idu_bits_ctrl_fuOpType", false,-1, 6,0);
    tracep->declBus(c+40,"isu_io_from_idu_bits_ctrl_rs1", false,-1, 4,0);
    tracep->declBus(c+41,"isu_io_from_idu_bits_ctrl_rs2", false,-1, 4,0);
    tracep->declBit(c+42,"isu_io_from_idu_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+43,"isu_io_from_idu_bits_ctrl_rd", false,-1, 4,0);
    tracep->declBus(c+44,"isu_io_from_idu_bits_data_imm", false,-1, 31,0);
    tracep->declBit(c+45,"isu_io_to_exu_ready", false,-1);
    tracep->declBit(c+46,"isu_io_to_exu_valid", false,-1);
    tracep->declBus(c+30,"isu_io_to_exu_bits_cf_inst", false,-1, 31,0);
    tracep->declBus(c+31,"isu_io_to_exu_bits_cf_pc", false,-1, 31,0);
    tracep->declBus(c+32,"isu_io_to_exu_bits_cf_next_pc", false,-1, 31,0);
    tracep->declBit(c+33,"isu_io_to_exu_bits_cf_isBranch", false,-1);
    tracep->declBit(c+34,"isu_io_to_exu_bits_ctrl_MemWrite", false,-1);
    tracep->declBus(c+35,"isu_io_to_exu_bits_ctrl_ResSrc", false,-1, 1,0);
    tracep->declBus(c+38,"isu_io_to_exu_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+39,"isu_io_to_exu_bits_ctrl_fuOpType", false,-1, 6,0);
    tracep->declBus(c+40,"isu_io_to_exu_bits_ctrl_rs1", false,-1, 4,0);
    tracep->declBus(c+41,"isu_io_to_exu_bits_ctrl_rs2", false,-1, 4,0);
    tracep->declBit(c+42,"isu_io_to_exu_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+43,"isu_io_to_exu_bits_ctrl_rd", false,-1, 4,0);
    tracep->declBus(c+47,"isu_io_to_exu_bits_data_fuSrc1", false,-1, 31,0);
    tracep->declBus(c+48,"isu_io_to_exu_bits_data_fuSrc2", false,-1, 31,0);
    tracep->declBus(c+44,"isu_io_to_exu_bits_data_imm", false,-1, 31,0);
    tracep->declBus(c+49,"isu_io_to_exu_bits_data_rfSrc1", false,-1, 31,0);
    tracep->declBus(c+50,"isu_io_to_exu_bits_data_rfSrc2", false,-1, 31,0);
    tracep->declBus(c+51,"isu_io_wb_rd", false,-1, 4,0);
    tracep->declBit(c+52,"isu_io_wb_RegWrite", false,-1);
    tracep->declBus(c+49,"isu_io_from_reg_rfSrc1", false,-1, 31,0);
    tracep->declBus(c+50,"isu_io_from_reg_rfSrc2", false,-1, 31,0);
    tracep->declBit(c+185,"exu_clock", false,-1);
    tracep->declBit(c+186,"exu_reset", false,-1);
    tracep->declBit(c+45,"exu_io_from_isu_ready", false,-1);
    tracep->declBit(c+53,"exu_io_from_isu_valid", false,-1);
    tracep->declBus(c+54,"exu_io_from_isu_bits_cf_inst", false,-1, 31,0);
    tracep->declBus(c+55,"exu_io_from_isu_bits_cf_pc", false,-1, 31,0);
    tracep->declBus(c+56,"exu_io_from_isu_bits_cf_next_pc", false,-1, 31,0);
    tracep->declBit(c+57,"exu_io_from_isu_bits_cf_isBranch", false,-1);
    tracep->declBit(c+6,"exu_io_from_isu_bits_ctrl_MemWrite", false,-1);
    tracep->declBus(c+58,"exu_io_from_isu_bits_ctrl_ResSrc", false,-1, 1,0);
    tracep->declBus(c+59,"exu_io_from_isu_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+60,"exu_io_from_isu_bits_ctrl_fuOpType", false,-1, 6,0);
    tracep->declBit(c+61,"exu_io_from_isu_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+62,"exu_io_from_isu_bits_ctrl_rd", false,-1, 4,0);
    tracep->declBus(c+63,"exu_io_from_isu_bits_data_fuSrc1", false,-1, 31,0);
    tracep->declBus(c+64,"exu_io_from_isu_bits_data_fuSrc2", false,-1, 31,0);
    tracep->declBus(c+65,"exu_io_from_isu_bits_data_imm", false,-1, 31,0);
    tracep->declBus(c+66,"exu_io_from_isu_bits_data_rfSrc1", false,-1, 31,0);
    tracep->declBus(c+2,"exu_io_from_isu_bits_data_rfSrc2", false,-1, 31,0);
    tracep->declBit(c+194,"exu_io_to_wbu_ready", false,-1);
    tracep->declBit(c+53,"exu_io_to_wbu_valid", false,-1);
    tracep->declBus(c+54,"exu_io_to_wbu_bits_cf_inst", false,-1, 31,0);
    tracep->declBus(c+55,"exu_io_to_wbu_bits_cf_pc", false,-1, 31,0);
    tracep->declBus(c+67,"exu_io_to_wbu_bits_cf_next_pc", false,-1, 31,0);
    tracep->declBus(c+58,"exu_io_to_wbu_bits_ctrl_ResSrc", false,-1, 1,0);
    tracep->declBit(c+61,"exu_io_to_wbu_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+62,"exu_io_to_wbu_bits_ctrl_rd", false,-1, 4,0);
    tracep->declBus(c+68,"exu_io_to_wbu_bits_data_Alu0Res_bits", false,-1, 31,0);
    tracep->declBus(c+69,"exu_io_to_wbu_bits_data_data_from_mem", false,-1, 31,0);
    tracep->declBus(c+70,"exu_io_to_wbu_bits_data_csrRdata", false,-1, 31,0);
    tracep->declBus(c+2,"exu_io_to_mem_data", false,-1, 31,0);
    tracep->declBus(c+1,"exu_io_to_mem_addr", false,-1, 31,0);
    tracep->declBus(c+5,"exu_io_to_mem_Wmask", false,-1, 1,0);
    tracep->declBit(c+6,"exu_io_to_mem_MemWrite", false,-1);
    tracep->declBus(c+3,"exu_io_from_mem_data", false,-1, 31,0);
    tracep->declBus(c+10,"exu_io_redirect_target", false,-1, 31,0);
    tracep->declBit(c+11,"exu_io_redirect_valid", false,-1);
    tracep->declBit(c+194,"wbu_io_from_exu_ready", false,-1);
    tracep->declBit(c+71,"wbu_io_from_exu_valid", false,-1);
    tracep->declBus(c+72,"wbu_io_from_exu_bits_cf_inst", false,-1, 31,0);
    tracep->declBus(c+73,"wbu_io_from_exu_bits_cf_pc", false,-1, 31,0);
    tracep->declBus(c+74,"wbu_io_from_exu_bits_cf_next_pc", false,-1, 31,0);
    tracep->declBus(c+75,"wbu_io_from_exu_bits_ctrl_ResSrc", false,-1, 1,0);
    tracep->declBit(c+76,"wbu_io_from_exu_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+51,"wbu_io_from_exu_bits_ctrl_rd", false,-1, 4,0);
    tracep->declBus(c+77,"wbu_io_from_exu_bits_data_Alu0Res_bits", false,-1, 31,0);
    tracep->declBus(c+78,"wbu_io_from_exu_bits_data_data_from_mem", false,-1, 31,0);
    tracep->declBus(c+79,"wbu_io_from_exu_bits_data_csrRdata", false,-1, 31,0);
    tracep->declBit(c+71,"wbu_io_to_reg_valid", false,-1);
    tracep->declBus(c+51,"wbu_io_to_reg_bits_rd", false,-1, 4,0);
    tracep->declBus(c+80,"wbu_io_to_reg_bits_Res", false,-1, 31,0);
    tracep->declBit(c+52,"wbu_io_to_reg_bits_RegWrite", false,-1);
    tracep->declBus(c+72,"wbu_io_to_commit_inst", false,-1, 31,0);
    tracep->declBus(c+73,"wbu_io_to_commit_pc", false,-1, 31,0);
    tracep->declBus(c+74,"wbu_io_to_commit_next_pc", false,-1, 31,0);
    tracep->declBit(c+185,"regfile_clk", false,-1);
    tracep->declBus(c+40,"regfile_rs1", false,-1, 4,0);
    tracep->declBus(c+41,"regfile_rs2", false,-1, 4,0);
    tracep->declBus(c+51,"regfile_rd", false,-1, 4,0);
    tracep->declBus(c+80,"regfile_dest", false,-1, 31,0);
    tracep->declBit(c+52,"regfile_RegWrite", false,-1);
    tracep->declBus(c+49,"regfile_src1", false,-1, 31,0);
    tracep->declBus(c+50,"regfile_src2", false,-1, 31,0);
    tracep->declBit(c+12,"valid", false,-1);
    tracep->declBus(c+13,"idu_io_from_ifu_bits_r_inst", false,-1, 31,0);
    tracep->declBus(c+14,"idu_io_from_ifu_bits_r_pc", false,-1, 31,0);
    tracep->declBus(c+15,"idu_io_from_ifu_bits_r_next_pc", false,-1, 31,0);
    tracep->declBit(c+16,"idu_io_from_ifu_bits_r_isBranch", false,-1);
    tracep->declBit(c+29,"valid_1", false,-1);
    tracep->declBus(c+30,"isu_io_from_idu_bits_r_cf_inst", false,-1, 31,0);
    tracep->declBus(c+31,"isu_io_from_idu_bits_r_cf_pc", false,-1, 31,0);
    tracep->declBus(c+32,"isu_io_from_idu_bits_r_cf_next_pc", false,-1, 31,0);
    tracep->declBit(c+33,"isu_io_from_idu_bits_r_cf_isBranch", false,-1);
    tracep->declBit(c+34,"isu_io_from_idu_bits_r_ctrl_MemWrite", false,-1);
    tracep->declBus(c+35,"isu_io_from_idu_bits_r_ctrl_ResSrc", false,-1, 1,0);
    tracep->declBus(c+36,"isu_io_from_idu_bits_r_ctrl_fuSrc1Type", false,-1, 2,0);
    tracep->declBus(c+37,"isu_io_from_idu_bits_r_ctrl_fuSrc2Type", false,-1, 2,0);
    tracep->declBus(c+38,"isu_io_from_idu_bits_r_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+39,"isu_io_from_idu_bits_r_ctrl_fuOpType", false,-1, 6,0);
    tracep->declBus(c+40,"isu_io_from_idu_bits_r_ctrl_rs1", false,-1, 4,0);
    tracep->declBus(c+41,"isu_io_from_idu_bits_r_ctrl_rs2", false,-1, 4,0);
    tracep->declBit(c+42,"isu_io_from_idu_bits_r_ctrl_rfWen", false,-1);
    tracep->declBus(c+43,"isu_io_from_idu_bits_r_ctrl_rd", false,-1, 4,0);
    tracep->declBus(c+44,"isu_io_from_idu_bits_r_data_imm", false,-1, 31,0);
    tracep->declBit(c+53,"valid_2", false,-1);
    tracep->declBus(c+54,"exu_io_from_isu_bits_r_cf_inst", false,-1, 31,0);
    tracep->declBus(c+55,"exu_io_from_isu_bits_r_cf_pc", false,-1, 31,0);
    tracep->declBus(c+56,"exu_io_from_isu_bits_r_cf_next_pc", false,-1, 31,0);
    tracep->declBit(c+57,"exu_io_from_isu_bits_r_cf_isBranch", false,-1);
    tracep->declBit(c+6,"exu_io_from_isu_bits_r_ctrl_MemWrite", false,-1);
    tracep->declBus(c+58,"exu_io_from_isu_bits_r_ctrl_ResSrc", false,-1, 1,0);
    tracep->declBus(c+59,"exu_io_from_isu_bits_r_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+60,"exu_io_from_isu_bits_r_ctrl_fuOpType", false,-1, 6,0);
    tracep->declBit(c+61,"exu_io_from_isu_bits_r_ctrl_rfWen", false,-1);
    tracep->declBus(c+62,"exu_io_from_isu_bits_r_ctrl_rd", false,-1, 4,0);
    tracep->declBus(c+63,"exu_io_from_isu_bits_r_data_fuSrc1", false,-1, 31,0);
    tracep->declBus(c+64,"exu_io_from_isu_bits_r_data_fuSrc2", false,-1, 31,0);
    tracep->declBus(c+65,"exu_io_from_isu_bits_r_data_imm", false,-1, 31,0);
    tracep->declBus(c+66,"exu_io_from_isu_bits_r_data_rfSrc1", false,-1, 31,0);
    tracep->declBus(c+2,"exu_io_from_isu_bits_r_data_rfSrc2", false,-1, 31,0);
    tracep->declBit(c+71,"valid_3", false,-1);
    tracep->declBus(c+72,"wbu_io_from_exu_bits_r_cf_inst", false,-1, 31,0);
    tracep->declBus(c+73,"wbu_io_from_exu_bits_r_cf_pc", false,-1, 31,0);
    tracep->declBus(c+74,"wbu_io_from_exu_bits_r_cf_next_pc", false,-1, 31,0);
    tracep->declBus(c+75,"wbu_io_from_exu_bits_r_ctrl_ResSrc", false,-1, 1,0);
    tracep->declBit(c+76,"wbu_io_from_exu_bits_r_ctrl_rfWen", false,-1);
    tracep->declBus(c+51,"wbu_io_from_exu_bits_r_ctrl_rd", false,-1, 4,0);
    tracep->declBus(c+77,"wbu_io_from_exu_bits_r_data_Alu0Res_bits", false,-1, 31,0);
    tracep->declBus(c+78,"wbu_io_from_exu_bits_r_data_data_from_mem", false,-1, 31,0);
    tracep->declBus(c+79,"wbu_io_from_exu_bits_r_data_csrRdata", false,-1, 31,0);
    tracep->declBit(c+81,"io_commit_valid_REG", false,-1);
    tracep->declBus(c+82,"io_commit_pc_REG", false,-1, 31,0);
    tracep->declBus(c+83,"io_commit_next_pc_REG", false,-1, 31,0);
    tracep->declBus(c+84,"io_commit_inst_REG", false,-1, 31,0);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+185,"clock", false,-1);
    tracep->declBit(c+186,"reset", false,-1);
    tracep->declBit(c+45,"io_from_isu_ready", false,-1);
    tracep->declBit(c+53,"io_from_isu_valid", false,-1);
    tracep->declBus(c+54,"io_from_isu_bits_cf_inst", false,-1, 31,0);
    tracep->declBus(c+55,"io_from_isu_bits_cf_pc", false,-1, 31,0);
    tracep->declBus(c+56,"io_from_isu_bits_cf_next_pc", false,-1, 31,0);
    tracep->declBit(c+57,"io_from_isu_bits_cf_isBranch", false,-1);
    tracep->declBit(c+6,"io_from_isu_bits_ctrl_MemWrite", false,-1);
    tracep->declBus(c+58,"io_from_isu_bits_ctrl_ResSrc", false,-1, 1,0);
    tracep->declBus(c+59,"io_from_isu_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+60,"io_from_isu_bits_ctrl_fuOpType", false,-1, 6,0);
    tracep->declBit(c+61,"io_from_isu_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+62,"io_from_isu_bits_ctrl_rd", false,-1, 4,0);
    tracep->declBus(c+63,"io_from_isu_bits_data_fuSrc1", false,-1, 31,0);
    tracep->declBus(c+64,"io_from_isu_bits_data_fuSrc2", false,-1, 31,0);
    tracep->declBus(c+65,"io_from_isu_bits_data_imm", false,-1, 31,0);
    tracep->declBus(c+66,"io_from_isu_bits_data_rfSrc1", false,-1, 31,0);
    tracep->declBus(c+2,"io_from_isu_bits_data_rfSrc2", false,-1, 31,0);
    tracep->declBit(c+194,"io_to_wbu_ready", false,-1);
    tracep->declBit(c+53,"io_to_wbu_valid", false,-1);
    tracep->declBus(c+54,"io_to_wbu_bits_cf_inst", false,-1, 31,0);
    tracep->declBus(c+55,"io_to_wbu_bits_cf_pc", false,-1, 31,0);
    tracep->declBus(c+67,"io_to_wbu_bits_cf_next_pc", false,-1, 31,0);
    tracep->declBus(c+58,"io_to_wbu_bits_ctrl_ResSrc", false,-1, 1,0);
    tracep->declBit(c+61,"io_to_wbu_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+62,"io_to_wbu_bits_ctrl_rd", false,-1, 4,0);
    tracep->declBus(c+68,"io_to_wbu_bits_data_Alu0Res_bits", false,-1, 31,0);
    tracep->declBus(c+69,"io_to_wbu_bits_data_data_from_mem", false,-1, 31,0);
    tracep->declBus(c+70,"io_to_wbu_bits_data_csrRdata", false,-1, 31,0);
    tracep->declBus(c+2,"io_to_mem_data", false,-1, 31,0);
    tracep->declBus(c+1,"io_to_mem_addr", false,-1, 31,0);
    tracep->declBus(c+5,"io_to_mem_Wmask", false,-1, 1,0);
    tracep->declBit(c+6,"io_to_mem_MemWrite", false,-1);
    tracep->declBus(c+3,"io_from_mem_data", false,-1, 31,0);
    tracep->declBus(c+10,"io_redirect_target", false,-1, 31,0);
    tracep->declBit(c+11,"io_redirect_valid", false,-1);
    tracep->declBus(c+68,"alu0_io_out_bits", false,-1, 31,0);
    tracep->declBus(c+63,"alu0_io_in_bits_srca", false,-1, 31,0);
    tracep->declBus(c+64,"alu0_io_in_bits_srcb", false,-1, 31,0);
    tracep->declBus(c+60,"alu0_io_in_bits_fuOpType", false,-1, 6,0);
    tracep->declBit(c+85,"alu0_io_taken", false,-1);
    tracep->declBus(c+69,"lsu0_io_out_bits", false,-1, 31,0);
    tracep->declBus(c+63,"lsu0_io_in_bits_srca", false,-1, 31,0);
    tracep->declBus(c+64,"lsu0_io_in_bits_srcb", false,-1, 31,0);
    tracep->declBus(c+2,"lsu0_io_to_mem_data", false,-1, 31,0);
    tracep->declBus(c+1,"lsu0_io_to_mem_addr", false,-1, 31,0);
    tracep->declBus(c+5,"lsu0_io_to_mem_Wmask", false,-1, 1,0);
    tracep->declBit(c+6,"lsu0_io_to_mem_MemWrite", false,-1);
    tracep->declBus(c+3,"lsu0_io_from_mem_data", false,-1, 31,0);
    tracep->declBit(c+6,"lsu0_io_ctrl_MemWrite", false,-1);
    tracep->declBus(c+60,"lsu0_io_ctrl_fuOpType", false,-1, 6,0);
    tracep->declBus(c+2,"lsu0_io_data_rfSrc2", false,-1, 31,0);
    tracep->declBit(c+185,"csr0_clock", false,-1);
    tracep->declBit(c+186,"csr0_reset", false,-1);
    tracep->declBus(c+70,"csr0_io_out_bits", false,-1, 31,0);
    tracep->declBit(c+86,"csr0_io_in_valid", false,-1);
    tracep->declBus(c+63,"csr0_io_in_bits_srca", false,-1, 31,0);
    tracep->declBus(c+64,"csr0_io_in_bits_srcb", false,-1, 31,0);
    tracep->declBus(c+60,"csr0_io_in_bits_fuOpType", false,-1, 6,0);
    tracep->declBus(c+54,"csr0_io_cfIn_inst", false,-1, 31,0);
    tracep->declBus(c+55,"csr0_io_cfIn_pc", false,-1, 31,0);
    tracep->declBit(c+87,"csr0_io_jmp", false,-1);
    tracep->declBit(c+88,"jalrBruRes_valid", false,-1);
    tracep->declBus(c+89,"jalrBruRes_targetPc", false,-1, 31,0);
    tracep->declBit(c+90,"typebBruRes_valid", false,-1);
    tracep->declBus(c+91,"pcIfBranch", false,-1, 31,0);
    tracep->declBus(c+92,"typebBruRes_targetPc", false,-1, 31,0);
    tracep->declBit(c+93,"csrBruRes_valid", false,-1);
    tracep->declBus(c+70,"csrBruRes_targetPc", false,-1, 31,0);
    tracep->declBit(c+94,"bruRes_valid", false,-1);
    tracep->declBus(c+10,"bruRes_targetPc", false,-1, 31,0);
    tracep->declBit(c+95,"PredictError", false,-1);
    tracep->pushNamePrefix("alu0 ");
    tracep->declBus(c+68,"io_out_bits", false,-1, 31,0);
    tracep->declBus(c+63,"io_in_bits_srca", false,-1, 31,0);
    tracep->declBus(c+64,"io_in_bits_srcb", false,-1, 31,0);
    tracep->declBus(c+60,"io_in_bits_fuOpType", false,-1, 6,0);
    tracep->declBit(c+85,"io_taken", false,-1);
    tracep->declBit(c+96,"isAdderSub", false,-1);
    tracep->declQuad(c+97,"adderRes", false,-1, 32,0);
    tracep->declBus(c+99,"xorRes", false,-1, 31,0);
    tracep->declBit(c+100,"sltu", false,-1);
    tracep->declBit(c+101,"slt", false,-1);
    tracep->declBus(c+102,"shamt", false,-1, 4,0);
    tracep->declQuad(c+103,"res", false,-1, 32,0);
    tracep->declBit(c+105,"aluRes_signBit", false,-1);
    tracep->declQuad(c+106,"aluRes", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("csr0 ");
    tracep->declBit(c+185,"clock", false,-1);
    tracep->declBit(c+186,"reset", false,-1);
    tracep->declBus(c+70,"io_out_bits", false,-1, 31,0);
    tracep->declBit(c+86,"io_in_valid", false,-1);
    tracep->declBus(c+63,"io_in_bits_srca", false,-1, 31,0);
    tracep->declBus(c+64,"io_in_bits_srcb", false,-1, 31,0);
    tracep->declBus(c+60,"io_in_bits_fuOpType", false,-1, 6,0);
    tracep->declBus(c+54,"io_cfIn_inst", false,-1, 31,0);
    tracep->declBus(c+55,"io_cfIn_pc", false,-1, 31,0);
    tracep->declBit(c+87,"io_jmp", false,-1);
    tracep->declBus(c+108,"mtvec", false,-1, 31,0);
    tracep->declBus(c+109,"mcause", false,-1, 31,0);
    tracep->declBus(c+110,"mepc", false,-1, 31,0);
    tracep->declBus(c+111,"mstatus", false,-1, 31,0);
    tracep->declBit(c+112,"isEcall", false,-1);
    tracep->declBit(c+113,"isMret", false,-1);
    tracep->declBit(c+114,"isEbreak", false,-1);
    tracep->declBus(c+115,"csr", false,-1, 31,0);
    tracep->declBus(c+116,"csrUpdate", false,-1, 31,0);
    tracep->declBit(c+117,"csrWen", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu0 ");
    tracep->declBus(c+69,"io_out_bits", false,-1, 31,0);
    tracep->declBus(c+63,"io_in_bits_srca", false,-1, 31,0);
    tracep->declBus(c+64,"io_in_bits_srcb", false,-1, 31,0);
    tracep->declBus(c+2,"io_to_mem_data", false,-1, 31,0);
    tracep->declBus(c+1,"io_to_mem_addr", false,-1, 31,0);
    tracep->declBus(c+5,"io_to_mem_Wmask", false,-1, 1,0);
    tracep->declBit(c+6,"io_to_mem_MemWrite", false,-1);
    tracep->declBus(c+3,"io_from_mem_data", false,-1, 31,0);
    tracep->declBit(c+6,"io_ctrl_MemWrite", false,-1);
    tracep->declBus(c+60,"io_ctrl_fuOpType", false,-1, 6,0);
    tracep->declBus(c+2,"io_data_rfSrc2", false,-1, 31,0);
    tracep->declBit(c+118,"io_out_bits_signBit", false,-1);
    tracep->declBit(c+119,"io_out_bits_signBit_1", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+7,"io_from_ifu_ready", false,-1);
    tracep->declBit(c+12,"io_from_ifu_valid", false,-1);
    tracep->declBus(c+13,"io_from_ifu_bits_inst", false,-1, 31,0);
    tracep->declBus(c+14,"io_from_ifu_bits_pc", false,-1, 31,0);
    tracep->declBus(c+15,"io_from_ifu_bits_next_pc", false,-1, 31,0);
    tracep->declBit(c+16,"io_from_ifu_bits_isBranch", false,-1);
    tracep->declBit(c+17,"io_to_isu_ready", false,-1);
    tracep->declBit(c+12,"io_to_isu_valid", false,-1);
    tracep->declBus(c+13,"io_to_isu_bits_cf_inst", false,-1, 31,0);
    tracep->declBus(c+14,"io_to_isu_bits_cf_pc", false,-1, 31,0);
    tracep->declBus(c+15,"io_to_isu_bits_cf_next_pc", false,-1, 31,0);
    tracep->declBit(c+16,"io_to_isu_bits_cf_isBranch", false,-1);
    tracep->declBit(c+18,"io_to_isu_bits_ctrl_MemWrite", false,-1);
    tracep->declBus(c+19,"io_to_isu_bits_ctrl_ResSrc", false,-1, 1,0);
    tracep->declBus(c+20,"io_to_isu_bits_ctrl_fuSrc1Type", false,-1, 2,0);
    tracep->declBus(c+21,"io_to_isu_bits_ctrl_fuSrc2Type", false,-1, 2,0);
    tracep->declBus(c+22,"io_to_isu_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+23,"io_to_isu_bits_ctrl_fuOpType", false,-1, 6,0);
    tracep->declBus(c+24,"io_to_isu_bits_ctrl_rs1", false,-1, 4,0);
    tracep->declBus(c+25,"io_to_isu_bits_ctrl_rs2", false,-1, 4,0);
    tracep->declBit(c+26,"io_to_isu_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+27,"io_to_isu_bits_ctrl_rd", false,-1, 4,0);
    tracep->declBus(c+28,"io_to_isu_bits_data_imm", false,-1, 31,0);
    tracep->declBus(c+120,"decodelist_0", false,-1, 2,0);
    tracep->declBus(c+121,"decodelist_1", false,-1, 1,0);
    tracep->declBit(c+122,"ImmExt_signBit", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+185,"clock", false,-1);
    tracep->declBit(c+186,"reset", false,-1);
    tracep->declBus(c+187,"io_inst", false,-1, 31,0);
    tracep->declBit(c+7,"io_to_idu_ready", false,-1);
    tracep->declBus(c+187,"io_to_idu_bits_inst", false,-1, 31,0);
    tracep->declBus(c+188,"io_to_idu_bits_pc", false,-1, 31,0);
    tracep->declBus(c+8,"io_to_idu_bits_next_pc", false,-1, 31,0);
    tracep->declBit(c+9,"io_to_idu_bits_isBranch", false,-1);
    tracep->declBus(c+188,"io_pc", false,-1, 31,0);
    tracep->declBus(c+10,"io_redirect_target", false,-1, 31,0);
    tracep->declBit(c+11,"io_redirect_valid", false,-1);
    tracep->declBus(c+123,"pc", false,-1, 31,0);
    tracep->declBus(c+124,"inInstOp", false,-1, 6,0);
    tracep->declBit(c+9,"isBranch", false,-1);
    tracep->declBit(c+125,"isEcall", false,-1);
    tracep->declBit(c+126,"isMret", false,-1);
    tracep->declBit(c+127,"needBruRes", false,-1);
    tracep->declBit(c+128,"jalBruRes_valid", false,-1);
    tracep->declBus(c+129,"jalImmExt", false,-1, 31,0);
    tracep->declBus(c+130,"jalBruRes_targetPc", false,-1, 31,0);
    tracep->declBus(c+131,"predictPc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("isu ");
    tracep->declBit(c+185,"clock", false,-1);
    tracep->declBit(c+186,"reset", false,-1);
    tracep->declBit(c+17,"io_from_idu_ready", false,-1);
    tracep->declBit(c+29,"io_from_idu_valid", false,-1);
    tracep->declBus(c+30,"io_from_idu_bits_cf_inst", false,-1, 31,0);
    tracep->declBus(c+31,"io_from_idu_bits_cf_pc", false,-1, 31,0);
    tracep->declBus(c+32,"io_from_idu_bits_cf_next_pc", false,-1, 31,0);
    tracep->declBit(c+33,"io_from_idu_bits_cf_isBranch", false,-1);
    tracep->declBit(c+34,"io_from_idu_bits_ctrl_MemWrite", false,-1);
    tracep->declBus(c+35,"io_from_idu_bits_ctrl_ResSrc", false,-1, 1,0);
    tracep->declBus(c+36,"io_from_idu_bits_ctrl_fuSrc1Type", false,-1, 2,0);
    tracep->declBus(c+37,"io_from_idu_bits_ctrl_fuSrc2Type", false,-1, 2,0);
    tracep->declBus(c+38,"io_from_idu_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+39,"io_from_idu_bits_ctrl_fuOpType", false,-1, 6,0);
    tracep->declBus(c+40,"io_from_idu_bits_ctrl_rs1", false,-1, 4,0);
    tracep->declBus(c+41,"io_from_idu_bits_ctrl_rs2", false,-1, 4,0);
    tracep->declBit(c+42,"io_from_idu_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+43,"io_from_idu_bits_ctrl_rd", false,-1, 4,0);
    tracep->declBus(c+44,"io_from_idu_bits_data_imm", false,-1, 31,0);
    tracep->declBit(c+45,"io_to_exu_ready", false,-1);
    tracep->declBit(c+46,"io_to_exu_valid", false,-1);
    tracep->declBus(c+30,"io_to_exu_bits_cf_inst", false,-1, 31,0);
    tracep->declBus(c+31,"io_to_exu_bits_cf_pc", false,-1, 31,0);
    tracep->declBus(c+32,"io_to_exu_bits_cf_next_pc", false,-1, 31,0);
    tracep->declBit(c+33,"io_to_exu_bits_cf_isBranch", false,-1);
    tracep->declBit(c+34,"io_to_exu_bits_ctrl_MemWrite", false,-1);
    tracep->declBus(c+35,"io_to_exu_bits_ctrl_ResSrc", false,-1, 1,0);
    tracep->declBus(c+38,"io_to_exu_bits_ctrl_fuType", false,-1, 2,0);
    tracep->declBus(c+39,"io_to_exu_bits_ctrl_fuOpType", false,-1, 6,0);
    tracep->declBus(c+40,"io_to_exu_bits_ctrl_rs1", false,-1, 4,0);
    tracep->declBus(c+41,"io_to_exu_bits_ctrl_rs2", false,-1, 4,0);
    tracep->declBit(c+42,"io_to_exu_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+43,"io_to_exu_bits_ctrl_rd", false,-1, 4,0);
    tracep->declBus(c+47,"io_to_exu_bits_data_fuSrc1", false,-1, 31,0);
    tracep->declBus(c+48,"io_to_exu_bits_data_fuSrc2", false,-1, 31,0);
    tracep->declBus(c+44,"io_to_exu_bits_data_imm", false,-1, 31,0);
    tracep->declBus(c+49,"io_to_exu_bits_data_rfSrc1", false,-1, 31,0);
    tracep->declBus(c+50,"io_to_exu_bits_data_rfSrc2", false,-1, 31,0);
    tracep->declBus(c+51,"io_wb_rd", false,-1, 4,0);
    tracep->declBit(c+52,"io_wb_RegWrite", false,-1);
    tracep->declBus(c+49,"io_from_reg_rfSrc1", false,-1, 31,0);
    tracep->declBus(c+50,"io_from_reg_rfSrc2", false,-1, 31,0);
    tracep->declBus(c+132,"busy_1", false,-1, 1,0);
    tracep->declBus(c+133,"busy_2", false,-1, 1,0);
    tracep->declBus(c+134,"busy_3", false,-1, 1,0);
    tracep->declBus(c+135,"busy_4", false,-1, 1,0);
    tracep->declBus(c+136,"busy_5", false,-1, 1,0);
    tracep->declBus(c+137,"busy_6", false,-1, 1,0);
    tracep->declBus(c+138,"busy_7", false,-1, 1,0);
    tracep->declBus(c+139,"busy_8", false,-1, 1,0);
    tracep->declBus(c+140,"busy_9", false,-1, 1,0);
    tracep->declBus(c+141,"busy_10", false,-1, 1,0);
    tracep->declBus(c+142,"busy_11", false,-1, 1,0);
    tracep->declBus(c+143,"busy_12", false,-1, 1,0);
    tracep->declBus(c+144,"busy_13", false,-1, 1,0);
    tracep->declBus(c+145,"busy_14", false,-1, 1,0);
    tracep->declBus(c+146,"busy_15", false,-1, 1,0);
    tracep->declBit(c+147,"src1Busy", false,-1);
    tracep->declBit(c+148,"src2Busy", false,-1);
    tracep->declBit(c+149,"AnyInvalidCondition", false,-1);
    tracep->declBus(c+150,"wbuClearMask", false,-1, 15,0);
    tracep->declBus(c+151,"isFireSetMask", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile ");
    tracep->declBus(c+193,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+195,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+185,"clk", false,-1);
    tracep->declBus(c+40,"rs1", false,-1, 4,0);
    tracep->declBus(c+41,"rs2", false,-1, 4,0);
    tracep->declBus(c+51,"rd", false,-1, 4,0);
    tracep->declBus(c+80,"dest", false,-1, 31,0);
    tracep->declBit(c+52,"RegWrite", false,-1);
    tracep->declBus(c+49,"src1", false,-1, 31,0);
    tracep->declBus(c+50,"src2", false,-1, 31,0);
    tracep->declBus(c+193,"NR_GPR", false,-1, 31,0);
    tracep->declBus(c+195,"REG_WIDTH", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+152+i*1,"x", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+194,"io_from_exu_ready", false,-1);
    tracep->declBit(c+71,"io_from_exu_valid", false,-1);
    tracep->declBus(c+72,"io_from_exu_bits_cf_inst", false,-1, 31,0);
    tracep->declBus(c+73,"io_from_exu_bits_cf_pc", false,-1, 31,0);
    tracep->declBus(c+74,"io_from_exu_bits_cf_next_pc", false,-1, 31,0);
    tracep->declBus(c+75,"io_from_exu_bits_ctrl_ResSrc", false,-1, 1,0);
    tracep->declBit(c+76,"io_from_exu_bits_ctrl_rfWen", false,-1);
    tracep->declBus(c+51,"io_from_exu_bits_ctrl_rd", false,-1, 4,0);
    tracep->declBus(c+77,"io_from_exu_bits_data_Alu0Res_bits", false,-1, 31,0);
    tracep->declBus(c+78,"io_from_exu_bits_data_data_from_mem", false,-1, 31,0);
    tracep->declBus(c+79,"io_from_exu_bits_data_csrRdata", false,-1, 31,0);
    tracep->declBit(c+71,"io_to_reg_valid", false,-1);
    tracep->declBus(c+51,"io_to_reg_bits_rd", false,-1, 4,0);
    tracep->declBus(c+80,"io_to_reg_bits_Res", false,-1, 31,0);
    tracep->declBit(c+52,"io_to_reg_bits_RegWrite", false,-1);
    tracep->declBus(c+72,"io_to_commit_inst", false,-1, 31,0);
    tracep->declBus(c+73,"io_to_commit_pc", false,-1, 31,0);
    tracep->declBus(c+74,"io_to_commit_next_pc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_datamem ");
    tracep->declBus(c+193,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"FromCore_Addr", false,-1, 31,0);
    tracep->declBus(c+4,"Wmask", false,-1, 7,0);
    tracep->declBus(c+2,"FromCore_Data", false,-1, 31,0);
    tracep->declBit(c+6,"MemWrite", false,-1);
    tracep->declBus(c+3,"ToCore_Data", false,-1, 31,0);
    tracep->declBus(c+1,"AddrMem", false,-1, 31,0);
    tracep->declBus(c+2,"DataToMem", false,-1, 31,0);
    tracep->declBus(c+3,"DPI_DataFromMem", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_instmem ");
    tracep->declBus(c+193,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+188,"pc", false,-1, 31,0);
    tracep->declBus(c+187,"inst", false,-1, 31,0);
    tracep->declBus(c+184,"DPI_DataFromMem", false,-1, 31,0);
    tracep->declBus(c+188,"DPI_nextPC", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP____024unit__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP____024unit__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+193,"XLEN", false,-1, 31,0);
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
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__ToMem_Addr),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_rfSrc2),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem),32);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__Wmask),8);
    bufp->fullCData(oldp+5,(((3U == (3U & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType)))
                              ? 3U : ((2U == (3U & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType)))
                                       ? 2U : (1U == 
                                               (3U 
                                                & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType)))))),2);
    bufp->fullBit(oldp+6,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_MemWrite));
    bufp->fullBit(oldp+7,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_to_idu_ready));
    bufp->fullIData(oldp+8,(((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_redirect_valid)
                              ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_redirect_target
                              : ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_to_idu_ready)
                                  ? ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__needBruRes)
                                      ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT___next_pc_T_4
                                      : ((IData)(4U) 
                                         + vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__pc))
                                  : vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__pc))),32);
    bufp->fullBit(oldp+9,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_to_idu_bits_isBranch));
    bufp->fullIData(oldp+10,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_redirect_target),32);
    bufp->fullBit(oldp+11,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_redirect_valid));
    bufp->fullBit(oldp+12,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid));
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_pc),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_next_pc),32);
    bufp->fullBit(oldp+16,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_isBranch));
    bufp->fullBit(oldp+17,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_isu_ready));
    bufp->fullBit(oldp+18,((2U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__decodelist_0))));
    bufp->fullCData(oldp+19,(((3U == (0x7fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                               ? 1U : ((0x73U == (0x7fU 
                                                  & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                        ? 2U : 0U))),2);
    bufp->fullCData(oldp+20,(((0x13U == (0x707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                               ? 0U : ((0x1013U == 
                                        (0xfe00707fU 
                                         & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                        ? 0U : ((0x2013U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                 ? 0U
                                                 : 
                                                ((0x3013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                  ? 0U
                                                  : 
                                                 ((0x4013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x5013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x6013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x7013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x40005013U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x33U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                        ? 0U
                                                        : 
                                                       ((0x1033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                         ? 0U
                                                         : (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_237))))))))))))),3);
    bufp->fullCData(oldp+21,(((0x13U == (0x707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                               ? 3U : ((0x1013U == 
                                        (0xfe00707fU 
                                         & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                        ? 3U : ((0x2013U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                 ? 3U
                                                 : 
                                                ((0x3013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                  ? 3U
                                                  : 
                                                 ((0x4013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                   ? 3U
                                                   : 
                                                  ((0x5013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                    ? 3U
                                                    : 
                                                   ((0x6013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                     ? 3U
                                                     : 
                                                    ((0x7013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                      ? 3U
                                                      : 
                                                     ((0x40005013U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                       ? 3U
                                                       : 
                                                      ((0x33U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                        ? 1U
                                                        : 
                                                       ((0x1033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                         ? 1U
                                                         : (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_278))))))))))))),3);
    bufp->fullCData(oldp+22,(((0x13U == (0x707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                               ? 0U : ((0x1013U == 
                                        (0xfe00707fU 
                                         & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                        ? 0U : ((0x2013U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                 ? 0U
                                                 : 
                                                ((0x3013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                  ? 0U
                                                  : 
                                                 ((0x4013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x5013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x6013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x7013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x40005013U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x33U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                        ? 0U
                                                        : 
                                                       ((0x1033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                         ? 0U
                                                         : (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_155))))))))))))),3);
    bufp->fullCData(oldp+23,(((0x13U == (0x707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                               ? 0x40U : ((0x1013U 
                                           == (0xfe00707fU 
                                               & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                           ? 1U : (
                                                   (0x2013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                    ? 2U
                                                    : 
                                                   ((0x3013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                     ? 3U
                                                     : 
                                                    ((0x4013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                      ? 4U
                                                      : 
                                                     ((0x5013U 
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
                                                            : (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_196))))))))))))),7);
    bufp->fullCData(oldp+24,((0x1fU & (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+25,((0x1fU & (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                       >> 0x14U))),5);
    bufp->fullBit(oldp+26,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_isu_bits_ctrl_rfWen));
    bufp->fullCData(oldp+27,((0x1fU & (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                       >> 7U))),5);
    bufp->fullIData(oldp+28,(((1U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__decodelist_0))
                               ? ((((vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                     >> 0x1fU) ? 0x7ffffU
                                     : 0U) << 0xdU) 
                                  | ((0x1000U & (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                                 >> 0x13U)) 
                                     | ((0x800U & (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                                   << 4U)) 
                                        | ((0x7e0U 
                                            & (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                                 >> 7U))))))
                               : ((2U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__decodelist_0))
                                   ? ((((vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                         >> 0x1fU) ? 0xfffffU
                                         : 0U) << 0xcU) 
                                      | ((0xfe0U & 
                                          (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                           >> 0x14U)) 
                                         | (0x1fU & 
                                            (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                             >> 7U))))
                                   : ((7U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__decodelist_0))
                                       ? ((((vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                             >> 0x1fU)
                                             ? 0x7ffU
                                             : 0U) 
                                           << 0x15U) 
                                          | ((0x100000U 
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
                                           ? (0xfffff000U 
                                              & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst)
                                           : ((4U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__decodelist_0))
                                               ? ((
                                                   ((vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                                     >> 0x1fU)
                                                     ? 0xfffffU
                                                     : 0U) 
                                                   << 0xcU) 
                                                  | (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                                     >> 0x14U))
                                               : 0U)))))),32);
    bufp->fullBit(oldp+29,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_1));
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_cf_inst),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_cf_pc),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_cf_next_pc),32);
    bufp->fullBit(oldp+33,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_cf_isBranch));
    bufp->fullBit(oldp+34,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_MemWrite));
    bufp->fullCData(oldp+35,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_ResSrc),2);
    bufp->fullCData(oldp+36,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc1Type),3);
    bufp->fullCData(oldp+37,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc2Type),3);
    bufp->fullCData(oldp+38,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuType),3);
    bufp->fullCData(oldp+39,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuOpType),7);
    bufp->fullCData(oldp+40,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1),5);
    bufp->fullCData(oldp+41,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2),5);
    bufp->fullBit(oldp+42,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rfWen));
    bufp->fullCData(oldp+43,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rd),5);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_data_imm),32);
    bufp->fullBit(oldp+45,((1U & (~ (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT___T)))));
    bufp->fullBit(oldp+46,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_to_exu_valid));
    bufp->fullIData(oldp+47,(((4U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc1Type))
                               ? 0U : ((2U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc1Type))
                                        ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_cf_pc
                                        : ((0U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc1Type))
                                            ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_to_exu_bits_data_rfSrc1
                                            : 0U)))),32);
    bufp->fullIData(oldp+48,(((5U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc2Type))
                               ? 4U : ((3U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc2Type))
                                        ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_data_imm
                                        : ((1U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_fuSrc2Type))
                                            ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_to_exu_bits_data_rfSrc2
                                            : 0U)))),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_to_exu_bits_data_rfSrc1),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_to_exu_bits_data_rfSrc2),32);
    bufp->fullCData(oldp+51,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_ctrl_rd),5);
    bufp->fullBit(oldp+52,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_wb_RegWrite));
    bufp->fullBit(oldp+53,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_2));
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_inst),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_pc),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_next_pc),32);
    bufp->fullBit(oldp+57,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_isBranch));
    bufp->fullCData(oldp+58,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_ResSrc),2);
    bufp->fullCData(oldp+59,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuType),3);
    bufp->fullCData(oldp+60,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType),7);
    bufp->fullBit(oldp+61,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_rfWen));
    bufp->fullCData(oldp+62,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_rd),5);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc1),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc2),32);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_imm),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_rfSrc1),32);
    bufp->fullIData(oldp+67,(((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__bruRes_valid)
                               ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_redirect_target
                               : vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_next_pc)),32);
    bufp->fullIData(oldp+68,((IData)(((0x20U & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                                       ? (((QData)((IData)(
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__res 
                                                                        >> 0x1fU)))
                                                             ? 0xffffffffU
                                                             : 0U))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__res)))
                                       : vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__res))),32);
    bufp->fullIData(oldp+69,(((6U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                               ? vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem
                               : ((5U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                                   ? (0xffffU & vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem)
                                   : ((4U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                                       ? (0xffU & vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem)
                                       : ((2U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                                           ? vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem
                                           : ((1U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                                               ? ((
                                                   ((0x8000U 
                                                     & vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem)
                                                     ? 0xffffU
                                                     : 0U) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem))
                                               : ((0U 
                                                   == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                                                   ? 
                                                  ((((0x80U 
                                                      & vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem)
                                                      ? 0xffffffU
                                                      : 0U) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem))
                                                   : 0U))))))),32);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_to_wbu_bits_data_csrRdata),32);
    bufp->fullBit(oldp+71,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__valid_3));
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_cf_inst),32);
    bufp->fullIData(oldp+73,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_cf_pc),32);
    bufp->fullIData(oldp+74,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_cf_next_pc),32);
    bufp->fullCData(oldp+75,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_ctrl_ResSrc),2);
    bufp->fullBit(oldp+76,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_ctrl_rfWen));
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_data_Alu0Res_bits),32);
    bufp->fullIData(oldp+78,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_data_data_from_mem),32);
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_data_csrRdata),32);
    bufp->fullIData(oldp+80,(((0U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_ctrl_ResSrc))
                               ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_data_Alu0Res_bits
                               : ((1U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_ctrl_ResSrc))
                                   ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_data_data_from_mem
                                   : ((2U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_ctrl_ResSrc))
                                       ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_exu_bits_r_data_csrRdata
                                       : 0U)))),32);
    bufp->fullBit(oldp+81,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_valid_REG));
    bufp->fullIData(oldp+82,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_pc_REG),32);
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_next_pc_REG),32);
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_inst_REG),32);
    bufp->fullBit(oldp+85,((1U & (((3U == (3U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType) 
                                                 >> 1U)))
                                    ? (~ (IData)((vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__adderRes 
                                                  >> 0x20U)))
                                    : ((2U == (3U & 
                                               ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType) 
                                                >> 1U)))
                                        ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__slt)
                                        : (IData)((
                                                   (0U 
                                                    == 
                                                    (6U 
                                                     & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__xorRes))))))) 
                                  ^ (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType)))));
    bufp->fullBit(oldp+86,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0_io_in_valid));
    bufp->fullBit(oldp+87,(((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0_io_in_valid) 
                            & ((0x100073U != vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_inst) 
                               & (0U == (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))))));
    bufp->fullBit(oldp+88,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__jalrBruRes_valid));
    bufp->fullIData(oldp+89,((0xfffffffeU & (vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_imm 
                                             + vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_rfSrc1))),32);
    bufp->fullBit(oldp+90,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__typebBruRes_valid));
    bufp->fullIData(oldp+91,((vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_pc 
                              + vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_imm)),32);
    bufp->fullIData(oldp+92,(((1U & (((3U == (3U & 
                                              ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType) 
                                               >> 1U)))
                                       ? (~ (IData)(
                                                    (vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__adderRes 
                                                     >> 0x20U)))
                                       : ((2U == (3U 
                                                  & ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType) 
                                                     >> 1U)))
                                           ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__slt)
                                           : (IData)(
                                                     ((0U 
                                                       == 
                                                       (6U 
                                                        & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))) 
                                                      & (~ (IData)(
                                                                   (0U 
                                                                    != vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__xorRes))))))) 
                                     ^ (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType)))
                               ? (vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_pc 
                                  + vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_imm)
                               : ((IData)(4U) + vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_pc))),32);
    bufp->fullBit(oldp+93,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csrBruRes_valid));
    bufp->fullBit(oldp+94,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__bruRes_valid));
    bufp->fullBit(oldp+95,((vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu_io_redirect_target 
                            != vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_next_pc)));
    bufp->fullBit(oldp+96,((1U & (~ ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType) 
                                     >> 6U)))));
    bufp->fullQData(oldp+97,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__adderRes),33);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__xorRes),32);
    bufp->fullBit(oldp+100,((1U & (~ (IData)((vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__adderRes 
                                              >> 0x20U))))));
    bufp->fullBit(oldp+101,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__slt));
    bufp->fullCData(oldp+102,((0x1fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_data_fuSrc2)),5);
    bufp->fullQData(oldp+103,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__res),33);
    bufp->fullBit(oldp+105,((1U & (IData)((vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__res 
                                           >> 0x1fU)))));
    bufp->fullQData(oldp+106,(((0x20U & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_ctrl_fuOpType))
                                ? (((QData)((IData)(
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__res 
                                                                 >> 0x1fU)))
                                                      ? 0xffffffffU
                                                      : 0U))) 
                                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__res)))
                                : vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__alu0__DOT__res)),64);
    bufp->fullIData(oldp+108,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__mtvec),32);
    bufp->fullIData(oldp+109,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__mcause),32);
    bufp->fullIData(oldp+110,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__mepc),32);
    bufp->fullIData(oldp+111,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__mstatus),32);
    bufp->fullBit(oldp+112,((0x73U == vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_inst)));
    bufp->fullBit(oldp+113,((0x30200073U == vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_inst)));
    bufp->fullBit(oldp+114,((0x100073U == vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_isu_bits_r_cf_inst)));
    bufp->fullIData(oldp+115,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__csr),32);
    bufp->fullIData(oldp+116,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__csrUpdate),32);
    bufp->fullBit(oldp+117,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu__DOT__csr0__DOT__csrWen));
    bufp->fullBit(oldp+118,((1U & (vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem 
                                   >> 7U))));
    bufp->fullBit(oldp+119,((1U & (vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem 
                                   >> 0xfU))));
    bufp->fullCData(oldp+120,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__decodelist_0),3);
    bufp->fullCData(oldp+121,(((0x13U == (0x707fU & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                ? 0U : ((0x1013U == 
                                         (0xfe00707fU 
                                          & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                         ? 0U : ((0x2013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                  ? 0U
                                                  : 
                                                 ((0x3013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                   ? 0U
                                                   : 
                                                  ((0x4013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                    ? 0U
                                                    : 
                                                   ((0x5013U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                     ? 0U
                                                     : 
                                                    ((0x6013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                      ? 0U
                                                      : 
                                                     ((0x7013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                       ? 0U
                                                       : 
                                                      ((0x40005013U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                        ? 0U
                                                        : 
                                                       ((0x33U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                         ? 0U
                                                         : 
                                                        ((0x1033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst))
                                                          ? 0U
                                                          : (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT___decodelist_T_155))))))))))))),2);
    bufp->fullBit(oldp+122,((vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                             >> 0x1fU)));
    bufp->fullIData(oldp+123,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__pc),32);
    bufp->fullCData(oldp+124,((0x7fU & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem)),7);
    bufp->fullBit(oldp+125,((0x73U == vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem)));
    bufp->fullBit(oldp+126,((0x30200073U == vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem)));
    bufp->fullBit(oldp+127,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__needBruRes));
    bufp->fullBit(oldp+128,((0x6fU == (0x7fU & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem))));
    bufp->fullIData(oldp+129,(((((vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                  >> 0x1fU) ? 0x7ffU
                                  : 0U) << 0x15U) | 
                               ((0x100000U & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                              >> 0xbU)) 
                                | ((0xff000U & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem) 
                                   | ((0x800U & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                                 >> 9U)) 
                                      | (0x7feU & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                                   >> 0x14U))))))),32);
    bufp->fullIData(oldp+130,((vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__pc 
                               + ((((vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                     >> 0x1fU) ? 0x7ffU
                                     : 0U) << 0x15U) 
                                  | ((0x100000U & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                                   >> 0xbU)) 
                                     | ((0xff000U & vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem) 
                                        | ((0x800U 
                                            & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                               >> 9U)) 
                                           | (0x7feU 
                                              & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                                 >> 0x14U)))))))),32);
    bufp->fullIData(oldp+131,(((IData)(4U) + vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__pc)),32);
    bufp->fullCData(oldp+132,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_1),2);
    bufp->fullCData(oldp+133,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_2),2);
    bufp->fullCData(oldp+134,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_3),2);
    bufp->fullCData(oldp+135,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_4),2);
    bufp->fullCData(oldp+136,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_5),2);
    bufp->fullCData(oldp+137,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_6),2);
    bufp->fullCData(oldp+138,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_7),2);
    bufp->fullCData(oldp+139,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_8),2);
    bufp->fullCData(oldp+140,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_9),2);
    bufp->fullCData(oldp+141,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_10),2);
    bufp->fullCData(oldp+142,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_11),2);
    bufp->fullCData(oldp+143,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_12),2);
    bufp->fullCData(oldp+144,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_13),2);
    bufp->fullCData(oldp+145,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_14),2);
    bufp->fullCData(oldp+146,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_15),2);
    bufp->fullBit(oldp+147,((0U != ((0xfU == (0xfU 
                                              & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1)))
                                     ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_15)
                                     : ((0xeU == (0xfU 
                                                  & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1)))
                                         ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_14)
                                         : (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___GEN_13))))));
    bufp->fullBit(oldp+148,((0U != ((0xfU == (0xfU 
                                              & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2)))
                                     ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_15)
                                     : ((0xeU == (0xfU 
                                                  & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2)))
                                         ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_14)
                                         : (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___GEN_29))))));
    bufp->fullBit(oldp+149,(((0U != ((0xfU == (0xfU 
                                               & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1)))
                                      ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_15)
                                      : ((0xeU == (0xfU 
                                                   & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs1)))
                                          ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_14)
                                          : (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___GEN_13)))) 
                             | (0U != ((0xfU == (0xfU 
                                                 & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2)))
                                        ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_15)
                                        : ((0xeU == 
                                            (0xfU & (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu_io_from_idu_bits_r_ctrl_rs2)))
                                            ? (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__busy_14)
                                            : (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT___GEN_29)))))));
    bufp->fullSData(oldp+150,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__wbuClearMask),16);
    bufp->fullSData(oldp+151,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__isu__DOT__isFireSetMask),16);
    bufp->fullIData(oldp+152,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[0]),32);
    bufp->fullIData(oldp+153,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[1]),32);
    bufp->fullIData(oldp+154,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[2]),32);
    bufp->fullIData(oldp+155,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[3]),32);
    bufp->fullIData(oldp+156,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[4]),32);
    bufp->fullIData(oldp+157,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[5]),32);
    bufp->fullIData(oldp+158,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[6]),32);
    bufp->fullIData(oldp+159,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[7]),32);
    bufp->fullIData(oldp+160,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[8]),32);
    bufp->fullIData(oldp+161,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[9]),32);
    bufp->fullIData(oldp+162,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[10]),32);
    bufp->fullIData(oldp+163,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[11]),32);
    bufp->fullIData(oldp+164,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[12]),32);
    bufp->fullIData(oldp+165,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[13]),32);
    bufp->fullIData(oldp+166,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[14]),32);
    bufp->fullIData(oldp+167,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[15]),32);
    bufp->fullIData(oldp+168,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[16]),32);
    bufp->fullIData(oldp+169,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[17]),32);
    bufp->fullIData(oldp+170,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[18]),32);
    bufp->fullIData(oldp+171,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[19]),32);
    bufp->fullIData(oldp+172,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[20]),32);
    bufp->fullIData(oldp+173,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[21]),32);
    bufp->fullIData(oldp+174,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[22]),32);
    bufp->fullIData(oldp+175,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[23]),32);
    bufp->fullIData(oldp+176,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[24]),32);
    bufp->fullIData(oldp+177,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[25]),32);
    bufp->fullIData(oldp+178,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[26]),32);
    bufp->fullIData(oldp+179,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[27]),32);
    bufp->fullIData(oldp+180,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[28]),32);
    bufp->fullIData(oldp+181,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[29]),32);
    bufp->fullIData(oldp+182,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[30]),32);
    bufp->fullIData(oldp+183,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__regfile__DOT__x[31]),32);
    bufp->fullIData(oldp+184,(vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem),32);
    bufp->fullBit(oldp+185,(vlSelf->clk));
    bufp->fullBit(oldp+186,(vlSelf->rst));
    bufp->fullIData(oldp+187,(vlSelf->inst),32);
    bufp->fullIData(oldp+188,(vlSelf->pc),32);
    bufp->fullBit(oldp+189,(vlSelf->commit_valid));
    bufp->fullIData(oldp+190,(vlSelf->commit_pc),32);
    bufp->fullIData(oldp+191,(vlSelf->commit_next_pc),32);
    bufp->fullIData(oldp+192,(vlSelf->commit_inst),32);
    bufp->fullIData(oldp+193,(0x20U),32);
    bufp->fullBit(oldp+194,(1U));
    bufp->fullIData(oldp+195,(5U),32);
}
