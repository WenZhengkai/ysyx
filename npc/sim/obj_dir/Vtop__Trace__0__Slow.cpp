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
    tracep->declBit(c+32,"clk", false,-1);
    tracep->declBit(c+33,"rst", false,-1);
    tracep->declBus(c+34,"inst", false,-1, 31,0);
    tracep->declBus(c+35,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+36,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+32,"clk", false,-1);
    tracep->declBit(c+33,"rst", false,-1);
    tracep->declBus(c+34,"inst", false,-1, 31,0);
    tracep->declBus(c+35,"pc", false,-1, 31,0);
    tracep->declBus(c+1,"ToMem_Addr", false,-1, 31,0);
    tracep->declBus(c+2,"ToMem_Data", false,-1, 31,0);
    tracep->declBus(c+3,"FromMem_Data", false,-1, 31,0);
    tracep->declBus(c+37,"Wmask", false,-1, 7,0);
    tracep->declBit(c+38,"MemWrite", false,-1);
    tracep->pushNamePrefix("ysyx_core_rv32e ");
    tracep->declBit(c+32,"clock", false,-1);
    tracep->declBit(c+33,"reset", false,-1);
    tracep->declBus(c+3,"io_from_mem_data", false,-1, 31,0);
    tracep->declBus(c+2,"io_to_mem_data", false,-1, 31,0);
    tracep->declBus(c+1,"io_to_mem_addr", false,-1, 31,0);
    tracep->declBus(c+37,"io_to_mem_Wmask", false,-1, 7,0);
    tracep->declBit(c+38,"io_to_mem_MemWrite", false,-1);
    tracep->declBus(c+34,"io_inst", false,-1, 31,0);
    tracep->declBus(c+35,"io_pc", false,-1, 31,0);
    tracep->declBit(c+32,"ifu_clock", false,-1);
    tracep->declBit(c+33,"ifu_reset", false,-1);
    tracep->declBus(c+34,"ifu_io_inst", false,-1, 31,0);
    tracep->declBus(c+34,"ifu_io_to_idu_bits_inst", false,-1, 31,0);
    tracep->declBus(c+35,"ifu_io_to_idu_bits_pc", false,-1, 31,0);
    tracep->declBus(c+35,"ifu_io_pc", false,-1, 31,0);
    tracep->declBit(c+32,"idu_clock", false,-1);
    tracep->declBus(c+34,"idu_io_from_ifu_bits_inst", false,-1, 31,0);
    tracep->declBus(c+35,"idu_io_from_ifu_bits_pc", false,-1, 31,0);
    tracep->declBus(c+2,"idu_io_to_exu_bits_srca", false,-1, 31,0);
    tracep->declBus(c+4,"idu_io_to_exu_bits_srcb", false,-1, 31,0);
    tracep->declBus(c+2,"idu_io_to_exu_bits_idu_to_lsu_data", false,-1, 31,0);
    tracep->declBus(c+5,"idu_io_to_exu_bits_idu_to_wbu_ResSrc", false,-1, 2,0);
    tracep->declBit(c+6,"idu_io_to_exu_bits_idu_to_reg_RegWrite", false,-1);
    tracep->declBus(c+7,"idu_io_to_exu_bits_idu_to_reg_rd", false,-1, 4,0);
    tracep->declBus(c+7,"idu_io_from_wbu_bits_rd", false,-1, 4,0);
    tracep->declBus(c+8,"idu_io_from_wbu_bits_Res", false,-1, 31,0);
    tracep->declBit(c+6,"idu_io_from_wbu_bits_RegWrite", false,-1);
    tracep->declBus(c+2,"exu_io_from_idu_bits_srca", false,-1, 31,0);
    tracep->declBus(c+4,"exu_io_from_idu_bits_srcb", false,-1, 31,0);
    tracep->declBus(c+2,"exu_io_from_idu_bits_idu_to_lsu_data", false,-1, 31,0);
    tracep->declBus(c+5,"exu_io_from_idu_bits_idu_to_wbu_ResSrc", false,-1, 2,0);
    tracep->declBit(c+6,"exu_io_from_idu_bits_idu_to_reg_RegWrite", false,-1);
    tracep->declBus(c+7,"exu_io_from_idu_bits_idu_to_reg_rd", false,-1, 4,0);
    tracep->declBus(c+2,"exu_io_to_lsu_bits_idu_to_lsu_data", false,-1, 31,0);
    tracep->declBus(c+5,"exu_io_to_lsu_bits_idu_to_wbu_ResSrc", false,-1, 2,0);
    tracep->declBit(c+6,"exu_io_to_lsu_bits_idu_to_reg_RegWrite", false,-1);
    tracep->declBus(c+7,"exu_io_to_lsu_bits_idu_to_reg_rd", false,-1, 4,0);
    tracep->declBus(c+1,"exu_io_to_lsu_bits_exu_to_wbu_ALURes", false,-1, 31,0);
    tracep->declBus(c+2,"lsu_io_from_exu_bits_idu_to_lsu_data", false,-1, 31,0);
    tracep->declBus(c+5,"lsu_io_from_exu_bits_idu_to_wbu_ResSrc", false,-1, 2,0);
    tracep->declBit(c+6,"lsu_io_from_exu_bits_idu_to_reg_RegWrite", false,-1);
    tracep->declBus(c+7,"lsu_io_from_exu_bits_idu_to_reg_rd", false,-1, 4,0);
    tracep->declBus(c+1,"lsu_io_from_exu_bits_exu_to_wbu_ALURes", false,-1, 31,0);
    tracep->declBus(c+3,"lsu_io_to_wbu_bits_data_from_mem", false,-1, 31,0);
    tracep->declBus(c+5,"lsu_io_to_wbu_bits_idu_to_wbu_ResSrc", false,-1, 2,0);
    tracep->declBit(c+6,"lsu_io_to_wbu_bits_idu_to_reg_RegWrite", false,-1);
    tracep->declBus(c+7,"lsu_io_to_wbu_bits_idu_to_reg_rd", false,-1, 4,0);
    tracep->declBus(c+1,"lsu_io_to_wbu_bits_exu_to_wbu_ALURes", false,-1, 31,0);
    tracep->declBus(c+2,"lsu_io_to_mem_data", false,-1, 31,0);
    tracep->declBus(c+1,"lsu_io_to_mem_addr", false,-1, 31,0);
    tracep->declBus(c+3,"lsu_io_from_mem_data", false,-1, 31,0);
    tracep->declBus(c+3,"wbu_io_from_lsu_bits_data_from_mem", false,-1, 31,0);
    tracep->declBus(c+5,"wbu_io_from_lsu_bits_idu_to_wbu_ResSrc", false,-1, 2,0);
    tracep->declBit(c+6,"wbu_io_from_lsu_bits_idu_to_reg_RegWrite", false,-1);
    tracep->declBus(c+7,"wbu_io_from_lsu_bits_idu_to_reg_rd", false,-1, 4,0);
    tracep->declBus(c+1,"wbu_io_from_lsu_bits_exu_to_wbu_ALURes", false,-1, 31,0);
    tracep->declBus(c+7,"wbu_io_to_reg_bits_rd", false,-1, 4,0);
    tracep->declBus(c+8,"wbu_io_to_reg_bits_Res", false,-1, 31,0);
    tracep->declBit(c+6,"wbu_io_to_reg_bits_RegWrite", false,-1);
    tracep->pushNamePrefix("exu ");
    tracep->declBus(c+2,"io_from_idu_bits_srca", false,-1, 31,0);
    tracep->declBus(c+4,"io_from_idu_bits_srcb", false,-1, 31,0);
    tracep->declBus(c+2,"io_from_idu_bits_idu_to_lsu_data", false,-1, 31,0);
    tracep->declBus(c+5,"io_from_idu_bits_idu_to_wbu_ResSrc", false,-1, 2,0);
    tracep->declBit(c+6,"io_from_idu_bits_idu_to_reg_RegWrite", false,-1);
    tracep->declBus(c+7,"io_from_idu_bits_idu_to_reg_rd", false,-1, 4,0);
    tracep->declBus(c+2,"io_to_lsu_bits_idu_to_lsu_data", false,-1, 31,0);
    tracep->declBus(c+5,"io_to_lsu_bits_idu_to_wbu_ResSrc", false,-1, 2,0);
    tracep->declBit(c+6,"io_to_lsu_bits_idu_to_reg_RegWrite", false,-1);
    tracep->declBus(c+7,"io_to_lsu_bits_idu_to_reg_rd", false,-1, 4,0);
    tracep->declBus(c+1,"io_to_lsu_bits_exu_to_wbu_ALURes", false,-1, 31,0);
    tracep->declBus(c+2,"alu0_io_srca", false,-1, 31,0);
    tracep->declBus(c+4,"alu0_io_srcb", false,-1, 31,0);
    tracep->declBus(c+1,"alu0_io_ALURes", false,-1, 31,0);
    tracep->pushNamePrefix("alu0 ");
    tracep->declBus(c+2,"io_srca", false,-1, 31,0);
    tracep->declBus(c+4,"io_srcb", false,-1, 31,0);
    tracep->declBus(c+1,"io_ALURes", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("idu ");
    tracep->declBit(c+32,"clock", false,-1);
    tracep->declBus(c+34,"io_from_ifu_bits_inst", false,-1, 31,0);
    tracep->declBus(c+35,"io_from_ifu_bits_pc", false,-1, 31,0);
    tracep->declBus(c+2,"io_to_exu_bits_srca", false,-1, 31,0);
    tracep->declBus(c+4,"io_to_exu_bits_srcb", false,-1, 31,0);
    tracep->declBus(c+2,"io_to_exu_bits_idu_to_lsu_data", false,-1, 31,0);
    tracep->declBus(c+5,"io_to_exu_bits_idu_to_wbu_ResSrc", false,-1, 2,0);
    tracep->declBit(c+6,"io_to_exu_bits_idu_to_reg_RegWrite", false,-1);
    tracep->declBus(c+7,"io_to_exu_bits_idu_to_reg_rd", false,-1, 4,0);
    tracep->declBus(c+7,"io_from_wbu_bits_rd", false,-1, 4,0);
    tracep->declBus(c+8,"io_from_wbu_bits_Res", false,-1, 31,0);
    tracep->declBit(c+6,"io_from_wbu_bits_RegWrite", false,-1);
    tracep->declBit(c+32,"regfile_clk", false,-1);
    tracep->declBus(c+9,"regfile_rs1", false,-1, 4,0);
    tracep->declBus(c+10,"regfile_rs2", false,-1, 4,0);
    tracep->declBus(c+7,"regfile_rd", false,-1, 4,0);
    tracep->declBus(c+8,"regfile_dest", false,-1, 31,0);
    tracep->declBit(c+6,"regfile_RegWrite", false,-1);
    tracep->declBus(c+2,"regfile_src1", false,-1, 31,0);
    tracep->declBus(c+11,"regfile_src2", false,-1, 31,0);
    tracep->declBit(c+6,"ALUSrc", false,-1);
    tracep->declBit(c+12,"ResSrc", false,-1);
    tracep->declBus(c+13,"ImmExt", false,-1, 31,0);
    tracep->pushNamePrefix("regfile ");
    tracep->declBus(c+36,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+39,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+32,"clk", false,-1);
    tracep->declBus(c+9,"rs1", false,-1, 4,0);
    tracep->declBus(c+10,"rs2", false,-1, 4,0);
    tracep->declBus(c+7,"rd", false,-1, 4,0);
    tracep->declBus(c+8,"dest", false,-1, 31,0);
    tracep->declBit(c+6,"RegWrite", false,-1);
    tracep->declBus(c+2,"src1", false,-1, 31,0);
    tracep->declBus(c+11,"src2", false,-1, 31,0);
    tracep->declBus(c+40,"NR_GPR", false,-1, 31,0);
    tracep->declBus(c+41,"REG_WIDTH", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+14+i*1,"x", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ifu ");
    tracep->declBit(c+32,"clock", false,-1);
    tracep->declBit(c+33,"reset", false,-1);
    tracep->declBus(c+34,"io_inst", false,-1, 31,0);
    tracep->declBus(c+34,"io_to_idu_bits_inst", false,-1, 31,0);
    tracep->declBus(c+35,"io_to_idu_bits_pc", false,-1, 31,0);
    tracep->declBus(c+35,"io_pc", false,-1, 31,0);
    tracep->declBus(c+30,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lsu ");
    tracep->declBus(c+2,"io_from_exu_bits_idu_to_lsu_data", false,-1, 31,0);
    tracep->declBus(c+5,"io_from_exu_bits_idu_to_wbu_ResSrc", false,-1, 2,0);
    tracep->declBit(c+6,"io_from_exu_bits_idu_to_reg_RegWrite", false,-1);
    tracep->declBus(c+7,"io_from_exu_bits_idu_to_reg_rd", false,-1, 4,0);
    tracep->declBus(c+1,"io_from_exu_bits_exu_to_wbu_ALURes", false,-1, 31,0);
    tracep->declBus(c+3,"io_to_wbu_bits_data_from_mem", false,-1, 31,0);
    tracep->declBus(c+5,"io_to_wbu_bits_idu_to_wbu_ResSrc", false,-1, 2,0);
    tracep->declBit(c+6,"io_to_wbu_bits_idu_to_reg_RegWrite", false,-1);
    tracep->declBus(c+7,"io_to_wbu_bits_idu_to_reg_rd", false,-1, 4,0);
    tracep->declBus(c+1,"io_to_wbu_bits_exu_to_wbu_ALURes", false,-1, 31,0);
    tracep->declBus(c+2,"io_to_mem_data", false,-1, 31,0);
    tracep->declBus(c+1,"io_to_mem_addr", false,-1, 31,0);
    tracep->declBus(c+3,"io_from_mem_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("wbu ");
    tracep->declBus(c+3,"io_from_lsu_bits_data_from_mem", false,-1, 31,0);
    tracep->declBus(c+5,"io_from_lsu_bits_idu_to_wbu_ResSrc", false,-1, 2,0);
    tracep->declBit(c+6,"io_from_lsu_bits_idu_to_reg_RegWrite", false,-1);
    tracep->declBus(c+7,"io_from_lsu_bits_idu_to_reg_rd", false,-1, 4,0);
    tracep->declBus(c+1,"io_from_lsu_bits_exu_to_wbu_ALURes", false,-1, 31,0);
    tracep->declBus(c+7,"io_to_reg_bits_rd", false,-1, 4,0);
    tracep->declBus(c+8,"io_to_reg_bits_Res", false,-1, 31,0);
    tracep->declBit(c+6,"io_to_reg_bits_RegWrite", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_datamem ");
    tracep->declBus(c+36,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"FromCore_Addr", false,-1, 31,0);
    tracep->declBus(c+37,"Wmask", false,-1, 7,0);
    tracep->declBus(c+2,"FromCore_Data", false,-1, 31,0);
    tracep->declBit(c+38,"MemWrite", false,-1);
    tracep->declBus(c+3,"ToCore_Data", false,-1, 31,0);
    tracep->declBus(c+1,"AddrMem", false,-1, 31,0);
    tracep->declBus(c+2,"DataToMem", false,-1, 31,0);
    tracep->declBus(c+3,"DPI_DataFromMem", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_instmem ");
    tracep->declBus(c+36,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+35,"pc", false,-1, 31,0);
    tracep->declBus(c+34,"inst", false,-1, 31,0);
    tracep->declBus(c+31,"DPI_DataFromMem", false,-1, 31,0);
    tracep->declBus(c+35,"DPI_nextPC", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP____024unit__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP____024unit__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+36,"XLEN", false,-1, 31,0);
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
    bufp->fullIData(oldp+2,(vlSelf->top__DOT__ToMem_Data),32);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem),32);
    bufp->fullIData(oldp+4,(((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_reg_RegWrite)
                              ? ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_reg_RegWrite)
                                  ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__ImmExt
                                  : ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_reg_RegWrite)
                                      ? vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__ImmExt
                                      : vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile_src2))
                              : vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile_src2)),32);
    bufp->fullCData(oldp+5,((1U & (~ (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_reg_RegWrite)))),3);
    bufp->fullBit(oldp+6,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_reg_RegWrite));
    bufp->fullCData(oldp+7,((0x1fU & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                      >> 7U))),5);
    bufp->fullIData(oldp+8,(((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_reg_RegWrite)
                              ? vlSelf->top__DOT__ToMem_Addr
                              : ((IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_reg_RegWrite)
                                  ? 0U : vlSelf->top__DOT__ysyx_datamem__DOT__DPI_DataFromMem))),32);
    bufp->fullCData(oldp+9,((0x1fU & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                      >> 0xfU))),5);
    bufp->fullCData(oldp+10,((0x1fU & (vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile_src2),32);
    bufp->fullBit(oldp+12,((1U & (~ (IData)(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu_io_to_exu_bits_idu_to_reg_RegWrite)))));
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__ImmExt),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[0]),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[1]),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[2]),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[3]),32);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[4]),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[5]),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[6]),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[7]),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[8]),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[9]),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[10]),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[11]),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[12]),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[13]),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[14]),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__idu__DOT__regfile__DOT__x[15]),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__ysyx_core_rv32e__DOT__ifu__DOT__pc),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__ysyx_instmem__DOT__DPI_DataFromMem),32);
    bufp->fullBit(oldp+32,(vlSelf->clk));
    bufp->fullBit(oldp+33,(vlSelf->rst));
    bufp->fullIData(oldp+34,(vlSelf->inst),32);
    bufp->fullIData(oldp+35,(vlSelf->pc),32);
    bufp->fullIData(oldp+36,(0x20U),32);
    bufp->fullCData(oldp+37,(0xffU),8);
    bufp->fullBit(oldp+38,(0U));
    bufp->fullIData(oldp+39,(5U),32);
    bufp->fullIData(oldp+40,(0x10U),32);
    bufp->fullIData(oldp+41,(4U),32);
}
