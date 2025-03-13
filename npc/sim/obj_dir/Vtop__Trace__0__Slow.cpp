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
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBit(c+69,"rst", false,-1);
    tracep->declBus(c+70,"inst", false,-1, 31,0);
    tracep->declBus(c+71,"pc", false,-1, 31,0);
    tracep->declBit(c+72,"commit_valid", false,-1);
    tracep->declBus(c+73,"commit_pc", false,-1, 31,0);
    tracep->declBus(c+74,"commit_next_pc", false,-1, 31,0);
    tracep->declBus(c+75,"commit_inst", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+76,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBit(c+69,"rst", false,-1);
    tracep->declBus(c+70,"inst", false,-1, 31,0);
    tracep->declBus(c+71,"pc", false,-1, 31,0);
    tracep->declBit(c+72,"commit_valid", false,-1);
    tracep->declBus(c+73,"commit_pc", false,-1, 31,0);
    tracep->declBus(c+74,"commit_next_pc", false,-1, 31,0);
    tracep->declBus(c+75,"commit_inst", false,-1, 31,0);
    tracep->declBus(c+1,"ToMem_Addr", false,-1, 31,0);
    tracep->declBus(c+2,"ToMem_Data", false,-1, 31,0);
    tracep->declBus(c+3,"FromMem_Data", false,-1, 31,0);
    tracep->declBus(c+77,"Wmask", false,-1, 7,0);
    tracep->declBit(c+78,"MemWrite", false,-1);
    tracep->pushNamePrefix("ysyx_core_rv32e ");
    tracep->declBit(c+68,"clock", false,-1);
    tracep->declBit(c+69,"reset", false,-1);
    tracep->declBus(c+3,"io_from_mem_data", false,-1, 31,0);
    tracep->declBus(c+2,"io_to_mem_data", false,-1, 31,0);
    tracep->declBus(c+1,"io_to_mem_addr", false,-1, 31,0);
    tracep->declBus(c+77,"io_to_mem_Wmask", false,-1, 7,0);
    tracep->declBit(c+78,"io_to_mem_MemWrite", false,-1);
    tracep->declBus(c+70,"io_inst", false,-1, 31,0);
    tracep->declBus(c+71,"io_pc", false,-1, 31,0);
    tracep->declBit(c+72,"io_commit_valid", false,-1);
    tracep->declBus(c+73,"io_commit_pc", false,-1, 31,0);
    tracep->declBus(c+74,"io_commit_next_pc", false,-1, 31,0);
    tracep->declBus(c+75,"io_commit_inst", false,-1, 31,0);
    tracep->declBit(c+68,"ifu_clock", false,-1);
    tracep->declBit(c+69,"ifu_reset", false,-1);
    tracep->declBus(c+70,"ifu_io_inst", false,-1, 31,0);
    tracep->declBus(c+70,"ifu_io_to_idu_bits_inst", false,-1, 31,0);
    tracep->declBus(c+71,"ifu_io_to_idu_bits_pc", false,-1, 31,0);
    tracep->declBus(c+4,"ifu_io_to_idu_bits_next_pc", false,-1, 31,0);
    tracep->declBus(c+71,"ifu_io_pc", false,-1, 31,0);
    tracep->declBit(c+68,"idu_clock", false,-1);
    tracep->declBit(c+5,"idu_io_from_ifu_valid", false,-1);
    tracep->declBus(c+6,"idu_io_from_ifu_bits_inst", false,-1, 31,0);
    tracep->declBus(c+7,"idu_io_from_ifu_bits_pc", false,-1, 31,0);
    tracep->declBus(c+8,"idu_io_from_ifu_bits_next_pc", false,-1, 31,0);
    tracep->declBit(c+5,"idu_io_to_exu_valid", false,-1);
    tracep->declBus(c+9,"idu_io_to_exu_bits_srca", false,-1, 31,0);
    tracep->declBus(c+10,"idu_io_to_exu_bits_srcb", false,-1, 31,0);
    tracep->declBus(c+9,"idu_io_to_exu_bits_idu_to_lsu_data", false,-1, 31,0);
    tracep->declBit(c+11,"idu_io_to_exu_bits_idu_to_wbu_ResSrc", false,-1);
    tracep->declBit(c+12,"idu_io_to_exu_bits_idu_to_reg_RegWrite", false,-1);
    tracep->declBus(c+13,"idu_io_to_exu_bits_idu_to_reg_rd", false,-1, 4,0);
    tracep->declBus(c+7,"idu_io_to_exu_bits_idu_to_reg_pc", false,-1, 31,0);
    tracep->declBus(c+8,"idu_io_to_exu_bits_idu_to_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+6,"idu_io_to_exu_bits_idu_to_reg_inst", false,-1, 31,0);
    tracep->declBus(c+14,"idu_io_from_wbu_bits_rd", false,-1, 4,0);
    tracep->declBus(c+15,"idu_io_from_wbu_bits_Res", false,-1, 31,0);
    tracep->declBit(c+16,"idu_io_from_wbu_bits_RegWrite", false,-1);
    tracep->declBit(c+17,"exu_io_from_idu_valid", false,-1);
    tracep->declBus(c+18,"exu_io_from_idu_bits_srca", false,-1, 31,0);
    tracep->declBus(c+19,"exu_io_from_idu_bits_srcb", false,-1, 31,0);
    tracep->declBus(c+20,"exu_io_from_idu_bits_idu_to_lsu_data", false,-1, 31,0);
    tracep->declBit(c+21,"exu_io_from_idu_bits_idu_to_wbu_ResSrc", false,-1);
    tracep->declBit(c+22,"exu_io_from_idu_bits_idu_to_reg_RegWrite", false,-1);
    tracep->declBus(c+23,"exu_io_from_idu_bits_idu_to_reg_rd", false,-1, 4,0);
    tracep->declBus(c+24,"exu_io_from_idu_bits_idu_to_reg_pc", false,-1, 31,0);
    tracep->declBus(c+25,"exu_io_from_idu_bits_idu_to_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+26,"exu_io_from_idu_bits_idu_to_reg_inst", false,-1, 31,0);
    tracep->declBit(c+17,"exu_io_to_lsu_valid", false,-1);
    tracep->declBus(c+20,"exu_io_to_lsu_bits_idu_to_lsu_data", false,-1, 31,0);
    tracep->declBit(c+21,"exu_io_to_lsu_bits_idu_to_wbu_ResSrc", false,-1);
    tracep->declBit(c+22,"exu_io_to_lsu_bits_idu_to_reg_RegWrite", false,-1);
    tracep->declBus(c+23,"exu_io_to_lsu_bits_idu_to_reg_rd", false,-1, 4,0);
    tracep->declBus(c+24,"exu_io_to_lsu_bits_idu_to_reg_pc", false,-1, 31,0);
    tracep->declBus(c+25,"exu_io_to_lsu_bits_idu_to_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+26,"exu_io_to_lsu_bits_idu_to_reg_inst", false,-1, 31,0);
    tracep->declBus(c+27,"exu_io_to_lsu_bits_exu_to_wbu_ALURes", false,-1, 31,0);
    tracep->declBit(c+28,"lsu_io_from_exu_valid", false,-1);
    tracep->declBus(c+2,"lsu_io_from_exu_bits_idu_to_lsu_data", false,-1, 31,0);
    tracep->declBit(c+29,"lsu_io_from_exu_bits_idu_to_wbu_ResSrc", false,-1);
    tracep->declBit(c+30,"lsu_io_from_exu_bits_idu_to_reg_RegWrite", false,-1);
    tracep->declBus(c+31,"lsu_io_from_exu_bits_idu_to_reg_rd", false,-1, 4,0);
    tracep->declBus(c+32,"lsu_io_from_exu_bits_idu_to_reg_pc", false,-1, 31,0);
    tracep->declBus(c+33,"lsu_io_from_exu_bits_idu_to_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+34,"lsu_io_from_exu_bits_idu_to_reg_inst", false,-1, 31,0);
    tracep->declBus(c+1,"lsu_io_from_exu_bits_exu_to_wbu_ALURes", false,-1, 31,0);
    tracep->declBit(c+28,"lsu_io_to_wbu_valid", false,-1);
    tracep->declBus(c+3,"lsu_io_to_wbu_bits_data_from_mem", false,-1, 31,0);
    tracep->declBit(c+29,"lsu_io_to_wbu_bits_idu_to_wbu_ResSrc", false,-1);
    tracep->declBit(c+30,"lsu_io_to_wbu_bits_idu_to_reg_RegWrite", false,-1);
    tracep->declBus(c+31,"lsu_io_to_wbu_bits_idu_to_reg_rd", false,-1, 4,0);
    tracep->declBus(c+32,"lsu_io_to_wbu_bits_idu_to_reg_pc", false,-1, 31,0);
    tracep->declBus(c+33,"lsu_io_to_wbu_bits_idu_to_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+34,"lsu_io_to_wbu_bits_idu_to_reg_inst", false,-1, 31,0);
    tracep->declBus(c+1,"lsu_io_to_wbu_bits_exu_to_wbu_ALURes", false,-1, 31,0);
    tracep->declBus(c+2,"lsu_io_to_mem_data", false,-1, 31,0);
    tracep->declBus(c+1,"lsu_io_to_mem_addr", false,-1, 31,0);
    tracep->declBus(c+3,"lsu_io_from_mem_data", false,-1, 31,0);
    tracep->declBit(c+35,"wbu_io_from_lsu_valid", false,-1);
    tracep->declBus(c+36,"wbu_io_from_lsu_bits_data_from_mem", false,-1, 31,0);
    tracep->declBit(c+37,"wbu_io_from_lsu_bits_idu_to_wbu_ResSrc", false,-1);
    tracep->declBit(c+16,"wbu_io_from_lsu_bits_idu_to_reg_RegWrite", false,-1);
    tracep->declBus(c+14,"wbu_io_from_lsu_bits_idu_to_reg_rd", false,-1, 4,0);
    tracep->declBus(c+38,"wbu_io_from_lsu_bits_idu_to_reg_pc", false,-1, 31,0);
    tracep->declBus(c+39,"wbu_io_from_lsu_bits_idu_to_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+40,"wbu_io_from_lsu_bits_idu_to_reg_inst", false,-1, 31,0);
    tracep->declBus(c+41,"wbu_io_from_lsu_bits_exu_to_wbu_ALURes", false,-1, 31,0);
    tracep->declBit(c+35,"wbu_io_to_reg_valid", false,-1);
    tracep->declBus(c+14,"wbu_io_to_reg_bits_rd", false,-1, 4,0);
    tracep->declBus(c+15,"wbu_io_to_reg_bits_Res", false,-1, 31,0);
    tracep->declBit(c+16,"wbu_io_to_reg_bits_RegWrite", false,-1);
    tracep->declBus(c+38,"wbu_io_to_commit_pc", false,-1, 31,0);
    tracep->declBus(c+39,"wbu_io_to_commit_next_pc", false,-1, 31,0);
    tracep->declBus(c+40,"wbu_io_to_commit_inst", false,-1, 31,0);
    tracep->declBit(c+5,"idu_io_from_ifu_valid_r", false,-1);
    tracep->declBus(c+6,"idu_io_from_ifu_bits_r_inst", false,-1, 31,0);
    tracep->declBus(c+7,"idu_io_from_ifu_bits_r_pc", false,-1, 31,0);
    tracep->declBus(c+8,"idu_io_from_ifu_bits_r_next_pc", false,-1, 31,0);
    tracep->declBit(c+17,"exu_io_from_idu_valid_r", false,-1);
    tracep->declBus(c+18,"exu_io_from_idu_bits_r_srca", false,-1, 31,0);
    tracep->declBus(c+19,"exu_io_from_idu_bits_r_srcb", false,-1, 31,0);
    tracep->declBus(c+20,"exu_io_from_idu_bits_r_idu_to_lsu_data", false,-1, 31,0);
    tracep->declBit(c+21,"exu_io_from_idu_bits_r_idu_to_wbu_ResSrc", false,-1);
    tracep->declBit(c+22,"exu_io_from_idu_bits_r_idu_to_reg_RegWrite", false,-1);
    tracep->declBus(c+23,"exu_io_from_idu_bits_r_idu_to_reg_rd", false,-1, 4,0);
    tracep->declBus(c+24,"exu_io_from_idu_bits_r_idu_to_reg_pc", false,-1, 31,0);
    tracep->declBus(c+25,"exu_io_from_idu_bits_r_idu_to_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+26,"exu_io_from_idu_bits_r_idu_to_reg_inst", false,-1, 31,0);
    tracep->declBit(c+28,"lsu_io_from_exu_valid_r", false,-1);
    tracep->declBus(c+2,"lsu_io_from_exu_bits_r_idu_to_lsu_data", false,-1, 31,0);
    tracep->declBit(c+29,"lsu_io_from_exu_bits_r_idu_to_wbu_ResSrc", false,-1);
    tracep->declBit(c+30,"lsu_io_from_exu_bits_r_idu_to_reg_RegWrite", false,-1);
    tracep->declBus(c+31,"lsu_io_from_exu_bits_r_idu_to_reg_rd", false,-1, 4,0);
    tracep->declBus(c+32,"lsu_io_from_exu_bits_r_idu_to_reg_pc", false,-1, 31,0);
    tracep->declBus(c+33,"lsu_io_from_exu_bits_r_idu_to_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+34,"lsu_io_from_exu_bits_r_idu_to_reg_inst", false,-1, 31,0);
    tracep->declBus(c+1,"lsu_io_from_exu_bits_r_exu_to_wbu_ALURes", false,-1, 31,0);
    tracep->declBit(c+35,"wbu_io_from_lsu_valid_r", false,-1);
    tracep->declBus(c+36,"wbu_io_from_lsu_bits_r_data_from_mem", false,-1, 31,0);
    tracep->declBit(c+37,"wbu_io_from_lsu_bits_r_idu_to_wbu_ResSrc", false,-1);
    tracep->declBit(c+16,"wbu_io_from_lsu_bits_r_idu_to_reg_RegWrite", false,-1);
    tracep->declBus(c+14,"wbu_io_from_lsu_bits_r_idu_to_reg_rd", false,-1, 4,0);
    tracep->declBus(c+38,"wbu_io_from_lsu_bits_r_idu_to_reg_pc", false,-1, 31,0);
    tracep->declBus(c+39,"wbu_io_from_lsu_bits_r_idu_to_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+40,"wbu_io_from_lsu_bits_r_idu_to_reg_inst", false,-1, 31,0);
    tracep->declBus(c+41,"wbu_io_from_lsu_bits_r_exu_to_wbu_ALURes", false,-1, 31,0);
    tracep->declBit(c+42,"io_commit_valid_REG", false,-1);
    tracep->declBus(c+43,"io_commit_pc_REG", false,-1, 31,0);
    tracep->declBus(c+44,"io_commit_next_pc_REG", false,-1, 31,0);
    tracep->declBus(c+45,"io_commit_inst_REG", false,-1, 31,0);
    tracep->pushNamePrefix("exu ");
    tracep->declBit(c+17,"io_from_idu_valid", false,-1);
    tracep->declBus(c+18,"io_from_idu_bits_srca", false,-1, 31,0);
    tracep->declBus(c+19,"io_from_idu_bits_srcb", false,-1, 31,0);
    tracep->declBus(c+20,"io_from_idu_bits_idu_to_lsu_data", false,-1, 31,0);
    tracep->declBit(c+21,"io_from_idu_bits_idu_to_wbu_ResSrc", false,-1);
    tracep->declBit(c+22,"io_from_idu_bits_idu_to_reg_RegWrite", false,-1);
    tracep->declBus(c+23,"io_from_idu_bits_idu_to_reg_rd", false,-1, 4,0);
    tracep->declBus(c+24,"io_from_idu_bits_idu_to_reg_pc", false,-1, 31,0);
    tracep->declBus(c+25,"io_from_idu_bits_idu_to_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+26,"io_from_idu_bits_idu_to_reg_inst", false,-1, 31,0);
    tracep->declBit(c+17,"io_to_lsu_valid", false,-1);
    tracep->declBus(c+20,"io_to_lsu_bits_idu_to_lsu_data", false,-1, 31,0);
    tracep->declBit(c+21,"io_to_lsu_bits_idu_to_wbu_ResSrc", false,-1);
    tracep->declBit(c+22,"io_to_lsu_bits_idu_to_reg_RegWrite", false,-1);
    tracep->declBus(c+23,"io_to_lsu_bits_idu_to_reg_rd", false,-1, 4,0);
    tracep->declBus(c+24,"io_to_lsu_bits_idu_to_reg_pc", false,-1, 31,0);
    tracep->declBus(c+25,"io_to_lsu_bits_idu_to_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+26,"io_to_lsu_bits_idu_to_reg_inst", false,-1, 31,0);
    tracep->declBus(c+27,"io_to_lsu_bits_exu_to_wbu_ALURes", false,-1, 31,0);
    tracep->declBus(c+18,"alu0_io_srca", false,-1, 31,0);
    tracep->declBus(c+19,"alu0_io_srcb", false,-1, 31,0);
    tracep->declBus(c+27,"alu0_io_ALURes", false,-1, 31,0);
    tracep->pushNamePrefix("alu0 ");
    tracep->declBus(c+18,"io_srca", false,-1, 31,0);
    tracep->declBus(c+19,"io_srcb", false,-1, 31,0);
    tracep->declBus(c+27,"io_ALURes", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+68,"clock", false,-1);
    tracep->declBit(c+5,"io_from_ifu_valid", false,-1);
    tracep->declBus(c+6,"io_from_ifu_bits_inst", false,-1, 31,0);
    tracep->declBus(c+7,"io_from_ifu_bits_pc", false,-1, 31,0);
    tracep->declBus(c+8,"io_from_ifu_bits_next_pc", false,-1, 31,0);
    tracep->declBit(c+5,"io_to_exu_valid", false,-1);
    tracep->declBus(c+9,"io_to_exu_bits_srca", false,-1, 31,0);
    tracep->declBus(c+10,"io_to_exu_bits_srcb", false,-1, 31,0);
    tracep->declBus(c+9,"io_to_exu_bits_idu_to_lsu_data", false,-1, 31,0);
    tracep->declBit(c+11,"io_to_exu_bits_idu_to_wbu_ResSrc", false,-1);
    tracep->declBit(c+12,"io_to_exu_bits_idu_to_reg_RegWrite", false,-1);
    tracep->declBus(c+13,"io_to_exu_bits_idu_to_reg_rd", false,-1, 4,0);
    tracep->declBus(c+7,"io_to_exu_bits_idu_to_reg_pc", false,-1, 31,0);
    tracep->declBus(c+8,"io_to_exu_bits_idu_to_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+6,"io_to_exu_bits_idu_to_reg_inst", false,-1, 31,0);
    tracep->declBus(c+14,"io_from_wbu_bits_rd", false,-1, 4,0);
    tracep->declBus(c+15,"io_from_wbu_bits_Res", false,-1, 31,0);
    tracep->declBit(c+16,"io_from_wbu_bits_RegWrite", false,-1);
    tracep->declBit(c+68,"regfile_clk", false,-1);
    tracep->declBus(c+46,"regfile_rs1", false,-1, 4,0);
    tracep->declBus(c+47,"regfile_rs2", false,-1, 4,0);
    tracep->declBus(c+14,"regfile_rd", false,-1, 4,0);
    tracep->declBus(c+15,"regfile_dest", false,-1, 31,0);
    tracep->declBit(c+16,"regfile_RegWrite", false,-1);
    tracep->declBus(c+9,"regfile_src1", false,-1, 31,0);
    tracep->declBus(c+48,"regfile_src2", false,-1, 31,0);
    tracep->declBit(c+12,"ALUSrc", false,-1);
    tracep->declBus(c+49,"ImmExt", false,-1, 31,0);
    tracep->pushNamePrefix("regfile ");
    tracep->declBus(c+76,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+79,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+68,"clk", false,-1);
    tracep->declBus(c+46,"rs1", false,-1, 4,0);
    tracep->declBus(c+47,"rs2", false,-1, 4,0);
    tracep->declBus(c+14,"rd", false,-1, 4,0);
    tracep->declBus(c+15,"dest", false,-1, 31,0);
    tracep->declBit(c+16,"RegWrite", false,-1);
    tracep->declBus(c+9,"src1", false,-1, 31,0);
    tracep->declBus(c+48,"src2", false,-1, 31,0);
    tracep->declBus(c+80,"NR_GPR", false,-1, 31,0);
    tracep->declBus(c+81,"REG_WIDTH", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+50+i*1,"x", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+68,"clock", false,-1);
    tracep->declBit(c+69,"reset", false,-1);
    tracep->declBus(c+70,"io_inst", false,-1, 31,0);
    tracep->declBus(c+70,"io_to_idu_bits_inst", false,-1, 31,0);
    tracep->declBus(c+71,"io_to_idu_bits_pc", false,-1, 31,0);
    tracep->declBus(c+4,"io_to_idu_bits_next_pc", false,-1, 31,0);
    tracep->declBus(c+71,"io_pc", false,-1, 31,0);
    tracep->declBus(c+66,"pc", false,-1, 31,0);
    tracep->declBus(c+4,"next_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu ");
    tracep->declBit(c+28,"io_from_exu_valid", false,-1);
    tracep->declBus(c+2,"io_from_exu_bits_idu_to_lsu_data", false,-1, 31,0);
    tracep->declBit(c+29,"io_from_exu_bits_idu_to_wbu_ResSrc", false,-1);
    tracep->declBit(c+30,"io_from_exu_bits_idu_to_reg_RegWrite", false,-1);
    tracep->declBus(c+31,"io_from_exu_bits_idu_to_reg_rd", false,-1, 4,0);
    tracep->declBus(c+32,"io_from_exu_bits_idu_to_reg_pc", false,-1, 31,0);
    tracep->declBus(c+33,"io_from_exu_bits_idu_to_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+34,"io_from_exu_bits_idu_to_reg_inst", false,-1, 31,0);
    tracep->declBus(c+1,"io_from_exu_bits_exu_to_wbu_ALURes", false,-1, 31,0);
    tracep->declBit(c+28,"io_to_wbu_valid", false,-1);
    tracep->declBus(c+3,"io_to_wbu_bits_data_from_mem", false,-1, 31,0);
    tracep->declBit(c+29,"io_to_wbu_bits_idu_to_wbu_ResSrc", false,-1);
    tracep->declBit(c+30,"io_to_wbu_bits_idu_to_reg_RegWrite", false,-1);
    tracep->declBus(c+31,"io_to_wbu_bits_idu_to_reg_rd", false,-1, 4,0);
    tracep->declBus(c+32,"io_to_wbu_bits_idu_to_reg_pc", false,-1, 31,0);
    tracep->declBus(c+33,"io_to_wbu_bits_idu_to_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+34,"io_to_wbu_bits_idu_to_reg_inst", false,-1, 31,0);
    tracep->declBus(c+1,"io_to_wbu_bits_exu_to_wbu_ALURes", false,-1, 31,0);
    tracep->declBus(c+2,"io_to_mem_data", false,-1, 31,0);
    tracep->declBus(c+1,"io_to_mem_addr", false,-1, 31,0);
    tracep->declBus(c+3,"io_from_mem_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu ");
    tracep->declBit(c+35,"io_from_lsu_valid", false,-1);
    tracep->declBus(c+36,"io_from_lsu_bits_data_from_mem", false,-1, 31,0);
    tracep->declBit(c+37,"io_from_lsu_bits_idu_to_wbu_ResSrc", false,-1);
    tracep->declBit(c+16,"io_from_lsu_bits_idu_to_reg_RegWrite", false,-1);
    tracep->declBus(c+14,"io_from_lsu_bits_idu_to_reg_rd", false,-1, 4,0);
    tracep->declBus(c+38,"io_from_lsu_bits_idu_to_reg_pc", false,-1, 31,0);
    tracep->declBus(c+39,"io_from_lsu_bits_idu_to_reg_next_pc", false,-1, 31,0);
    tracep->declBus(c+40,"io_from_lsu_bits_idu_to_reg_inst", false,-1, 31,0);
    tracep->declBus(c+41,"io_from_lsu_bits_exu_to_wbu_ALURes", false,-1, 31,0);
    tracep->declBit(c+35,"io_to_reg_valid", false,-1);
    tracep->declBus(c+14,"io_to_reg_bits_rd", false,-1, 4,0);
    tracep->declBus(c+15,"io_to_reg_bits_Res", false,-1, 31,0);
    tracep->declBit(c+16,"io_to_reg_bits_RegWrite", false,-1);
    tracep->declBus(c+38,"io_to_commit_pc", false,-1, 31,0);
    tracep->declBus(c+39,"io_to_commit_next_pc", false,-1, 31,0);
    tracep->declBus(c+40,"io_to_commit_inst", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_datamem ");
    tracep->declBus(c+76,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"FromCore_Addr", false,-1, 31,0);
    tracep->declBus(c+77,"Wmask", false,-1, 7,0);
    tracep->declBus(c+2,"FromCore_Data", false,-1, 31,0);
    tracep->declBit(c+78,"MemWrite", false,-1);
    tracep->declBus(c+3,"ToCore_Data", false,-1, 31,0);
    tracep->declBus(c+1,"AddrMem", false,-1, 31,0);
    tracep->declBus(c+2,"DataToMem", false,-1, 31,0);
    tracep->declBus(c+3,"DPI_DataFromMem", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_instmem ");
    tracep->declBus(c+76,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+71,"pc", false,-1, 31,0);
    tracep->declBus(c+70,"inst", false,-1, 31,0);
    tracep->declBus(c+67,"DPI_DataFromMem", false,-1, 31,0);
    tracep->declBus(c+71,"DPI_nextPC", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP____024unit__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP____024unit__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+76,"XLEN", false,-1, 31,0);
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
    bufp->fullIData(oldp+1,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__lsu_io_from_exu_bits_r_exu_to_wbu_ALURes),32);
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__lsu_io_from_exu_bits_r_idu_to_lsu_data),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem),32);
    bufp->fullIData(oldp+4,(((IData)(4U) + vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__pc)),32);
    bufp->fullBit(oldp+5,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_valid_r));
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_pc),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_next_pc),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_lsu_data),32);
    bufp->fullIData(oldp+10,(((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_reg_RegWrite)
                               ? ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_reg_RegWrite)
                                   ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__ImmExt
                                   : ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_reg_RegWrite)
                                       ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__ImmExt
                                       : vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile_src2))
                               : vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile_src2)),32);
    bufp->fullBit(oldp+11,((1U & (~ (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_reg_RegWrite)))));
    bufp->fullBit(oldp+12,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_reg_RegWrite));
    bufp->fullCData(oldp+13,((0x1fU & (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                       >> 7U))),5);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_idu_to_reg_rd),5);
    bufp->fullIData(oldp+15,(((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_idu_to_wbu_ResSrc)
                               ? ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_idu_to_wbu_ResSrc)
                                   ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_data_from_mem
                                   : 0U) : vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_exu_to_wbu_ALURes)),32);
    bufp->fullBit(oldp+16,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_idu_to_reg_RegWrite));
    bufp->fullBit(oldp+17,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_valid_r));
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_srca),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_srcb),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_idu_to_lsu_data),32);
    bufp->fullBit(oldp+21,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_idu_to_wbu_ResSrc));
    bufp->fullBit(oldp+22,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_idu_to_reg_RegWrite));
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_idu_to_reg_rd),5);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_idu_to_reg_pc),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_idu_to_reg_next_pc),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_idu_to_reg_inst),32);
    bufp->fullIData(oldp+27,((vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_srca 
                              + vlSelf->top__DOT__ysyx_core_rv32e__DOT__exu_io_from_idu_bits_r_srcb)),32);
    bufp->fullBit(oldp+28,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__lsu_io_from_exu_valid_r));
    bufp->fullBit(oldp+29,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__lsu_io_from_exu_bits_r_idu_to_wbu_ResSrc));
    bufp->fullBit(oldp+30,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__lsu_io_from_exu_bits_r_idu_to_reg_RegWrite));
    bufp->fullCData(oldp+31,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__lsu_io_from_exu_bits_r_idu_to_reg_rd),5);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__lsu_io_from_exu_bits_r_idu_to_reg_pc),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__lsu_io_from_exu_bits_r_idu_to_reg_next_pc),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__lsu_io_from_exu_bits_r_idu_to_reg_inst),32);
    bufp->fullBit(oldp+35,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_valid_r));
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_data_from_mem),32);
    bufp->fullBit(oldp+37,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_idu_to_wbu_ResSrc));
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_idu_to_reg_pc),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_idu_to_reg_next_pc),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_idu_to_reg_inst),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__wbu_io_from_lsu_bits_r_exu_to_wbu_ALURes),32);
    bufp->fullBit(oldp+42,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_valid_REG));
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_pc_REG),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_next_pc_REG),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__io_commit_inst_REG),32);
    bufp->fullCData(oldp+46,((0x1fU & (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+47,((0x1fU & (vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_from_ifu_bits_r_inst 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile_src2),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__ImmExt),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[0]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[1]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[2]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[3]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[4]),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[5]),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[6]),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[7]),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[8]),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[9]),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[10]),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[11]),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[12]),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[13]),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[14]),32);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[15]),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__pc),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem),32);
    bufp->fullBit(oldp+68,(vlSelf->clk));
    bufp->fullBit(oldp+69,(vlSelf->rst));
    bufp->fullIData(oldp+70,(vlSelf->inst),32);
    bufp->fullIData(oldp+71,(vlSelf->pc),32);
    bufp->fullBit(oldp+72,(vlSelf->commit_valid));
    bufp->fullIData(oldp+73,(vlSelf->commit_pc),32);
    bufp->fullIData(oldp+74,(vlSelf->commit_next_pc),32);
    bufp->fullIData(oldp+75,(vlSelf->commit_inst),32);
    bufp->fullIData(oldp+76,(0x20U),32);
    bufp->fullCData(oldp+77,(0xffU),8);
    bufp->fullBit(oldp+78,(0U));
    bufp->fullIData(oldp+79,(5U),32);
    bufp->fullIData(oldp+80,(0x10U),32);
    bufp->fullIData(oldp+81,(4U),32);
}
