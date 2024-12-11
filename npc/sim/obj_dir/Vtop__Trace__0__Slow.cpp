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
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+125,"inst", false,-1, 31,0);
    tracep->declBus(c+126,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+137,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+125,"inst", false,-1, 31,0);
    tracep->declBus(c+126,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_core_rv32im ");
    tracep->declBus(c+137,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+137,"INST_WIDTH", false,-1, 31,0);
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBus(c+125,"inst", false,-1, 31,0);
    tracep->declBus(c+126,"pc", false,-1, 31,0);
    tracep->declBit(c+10,"PCSrc", false,-1);
    tracep->declBus(c+11,"tnpc", false,-1, 31,0);
    tracep->declBit(c+12,"Zero", false,-1);
    tracep->declBus(c+13,"ResSrc", false,-1, 2,0);
    tracep->declBus(c+14,"ALUCtrl", false,-1, 4,0);
    tracep->declBit(c+15,"ALUSrc", false,-1);
    tracep->declBus(c+16,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+17,"RegWrite", false,-1);
    tracep->declBus(c+18,"src1", false,-1, 31,0);
    tracep->declBus(c+19,"src2", false,-1, 31,0);
    tracep->declBus(c+20,"ImmExt", false,-1, 31,0);
    tracep->declBus(c+21,"srcb", false,-1, 31,0);
    tracep->declBus(c+22,"ALURes", false,-1, 31,0);
    tracep->declBus(c+23,"Result", false,-1, 31,0);
    tracep->declBus(c+127,"PCplus4", false,-1, 31,0);
    tracep->declBus(c+24,"PCTarget_srca", false,-1, 31,0);
    tracep->declBit(c+25,"PCTarget_srca_key", false,-1);
    tracep->declBus(c+22,"AddrMem", false,-1, 31,0);
    tracep->declBus(c+19,"DataToMem", false,-1, 31,0);
    tracep->declBit(c+26,"MemWrite", false,-1);
    tracep->declBus(c+27,"DataFromMem", false,-1, 31,0);
    tracep->declBus(c+28,"Wmask", false,-1, 7,0);
    tracep->declBit(c+29,"dw", false,-1);
    tracep->pushNamePrefix("ysyx_ALU ");
    tracep->declBus(c+137,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+18,"srca", false,-1, 31,0);
    tracep->declBus(c+21,"srcb", false,-1, 31,0);
    tracep->declBus(c+14,"ALUCtrl", false,-1, 4,0);
    tracep->declBit(c+29,"dw", false,-1);
    tracep->declBus(c+22,"ALURes", false,-1, 31,0);
    tracep->declBit(c+12,"Zero", false,-1);
    tracep->declBus(c+30,"adder_Res", false,-1, 31,0);
    tracep->declBus(c+31,"srcb_inv", false,-1, 31,0);
    tracep->declBus(c+22,"ALURes_temp", false,-1, 31,0);
    tracep->declBus(c+32,"shamt", false,-1, 5,0);
    tracep->declBus(c+18,"shin_sra", false,-1, 31,0);
    tracep->declBus(c+18,"shin_srl", false,-1, 31,0);
    tracep->declBus(c+33,"sra_res", false,-1, 31,0);
    tracep->declBus(c+34,"srl_res", false,-1, 31,0);
    tracep->declBus(c+35,"sll_res", false,-1, 31,0);
    tracep->declBus(c+36,"xor_res", false,-1, 31,0);
    tracep->declBus(c+37,"and_res", false,-1, 31,0);
    tracep->declBus(c+38,"slt_res", false,-1, 31,0);
    tracep->declBus(c+39,"sltu_res", false,-1, 31,0);
    tracep->declBus(c+40,"mul_res", false,-1, 31,0);
    tracep->declBus(c+41,"or_res", false,-1, 31,0);
    tracep->declBus(c+42,"divu_res", false,-1, 31,0);
    tracep->declBus(c+43,"div_res", false,-1, 31,0);
    tracep->declBus(c+44,"rem_res", false,-1, 31,0);
    tracep->declQuad(c+45,"mulh1_res", false,-1, 63,0);
    tracep->declBus(c+47,"mulh_res", false,-1, 31,0);
    tracep->declBus(c+48,"remu_res", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_ALU_adder ");
    tracep->declBus(c+137,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+18,"srca", false,-1, 31,0);
    tracep->declBus(c+31,"srcb", false,-1, 31,0);
    tracep->declBus(c+30,"Res", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_ALUSrc_MuxKey ");
    tracep->declBus(c+138,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+139,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+137,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+21,"out", false,-1, 31,0);
    tracep->declBus(c+15,"key", false,-1, 0,0);
    tracep->declBus(c+140,"default_out", false,-1, 31,0);
    tracep->declArray(c+49,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+138,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+139,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+137,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+139,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+21,"out", false,-1, 31,0);
    tracep->declBus(c+15,"key", false,-1, 0,0);
    tracep->declBus(c+140,"default_out", false,-1, 31,0);
    tracep->declArray(c+49,"lut", false,-1, 65,0);
    tracep->declBus(c+141,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+52+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+56+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+58,"lut_out", false,-1, 31,0);
    tracep->declBit(c+59,"hit", false,-1);
    tracep->declBus(c+142,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_Extend ");
    tracep->declBus(c+137,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+60,"inst", false,-1, 31,7);
    tracep->declBus(c+16,"ImmSrc", false,-1, 2,0);
    tracep->declBus(c+20,"ImmExt", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_IDU ");
    tracep->declBus(c+61,"opcode", false,-1, 6,0);
    tracep->declBus(c+62,"funt3", false,-1, 2,0);
    tracep->declBus(c+63,"funt7", false,-1, 6,0);
    tracep->declBit(c+12,"Zero", false,-1);
    tracep->declBit(c+10,"PCSrc", false,-1);
    tracep->declBus(c+13,"ResSrc", false,-1, 2,0);
    tracep->declBit(c+26,"MemWrite", false,-1);
    tracep->declBus(c+14,"ALUCtrl", false,-1, 4,0);
    tracep->declBit(c+15,"ALUSrc", false,-1);
    tracep->declBus(c+16,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+25,"PCTarget_srca_key", false,-1);
    tracep->declBit(c+17,"RegWrite", false,-1);
    tracep->declBus(c+28,"Wmask", false,-1, 7,0);
    tracep->declBit(c+29,"dw", false,-1);
    tracep->declBus(c+64,"controls", false,-1, 12,0);
    tracep->declBit(c+65,"Branch", false,-1);
    tracep->declBus(c+66,"ALUop", false,-1, 1,0);
    tracep->declBit(c+67,"Jump", false,-1);
    tracep->declBit(c+25,"is_jalr", false,-1);
    tracep->declBit(c+68,"BranchHit", false,-1);
    tracep->declBit(c+69,"RtypeSub", false,-1);
    tracep->declBit(c+70,"RtypeMul", false,-1);
    tracep->declBit(c+70,"RtypeDiv", false,-1);
    tracep->declBit(c+71,"shif_ari", false,-1);
    tracep->declBit(c+72,"divu", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_IFU ");
    tracep->declBus(c+137,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBit(c+124,"rst", false,-1);
    tracep->declBit(c+10,"PCSrc", false,-1);
    tracep->declBus(c+11,"tnpc", false,-1, 31,0);
    tracep->declBus(c+127,"snpc", false,-1, 31,0);
    tracep->declBus(c+125,"inst", false,-1, 31,0);
    tracep->declBus(c+126,"pc", false,-1, 31,0);
    tracep->declBus(c+73,"DPI_DataFromMem", false,-1, 31,0);
    tracep->declBus(c+126,"DPI_nextPC", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_LSU ");
    tracep->declBus(c+137,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+22,"AddrMem", false,-1, 31,0);
    tracep->declBus(c+28,"Wmask", false,-1, 7,0);
    tracep->declBus(c+19,"DataToMem", false,-1, 31,0);
    tracep->declBit(c+26,"MemWrite", false,-1);
    tracep->declBit(c+74,"funt3_2", false,-1);
    tracep->declBus(c+27,"DataFromMem", false,-1, 31,0);
    tracep->declQuad(c+75,"Wmask64", false,-1, 63,0);
    tracep->declBus(c+77,"DPI_DataFromMem", false,-1, 31,0);
    tracep->declBus(c+77,"TEMP_DataFromMem", false,-1, 31,0);
    tracep->declBit(c+78,"sig", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_PCTarget ");
    tracep->declBus(c+137,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+24,"srca", false,-1, 31,0);
    tracep->declBus(c+20,"srcb", false,-1, 31,0);
    tracep->declBus(c+11,"Res", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_PCTarget_srca ");
    tracep->declBus(c+138,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+139,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+137,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+24,"out", false,-1, 31,0);
    tracep->declBus(c+25,"key", false,-1, 0,0);
    tracep->declBus(c+140,"default_out", false,-1, 31,0);
    tracep->declArray(c+128,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+138,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+139,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+137,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+139,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+24,"out", false,-1, 31,0);
    tracep->declBus(c+25,"key", false,-1, 0,0);
    tracep->declBus(c+140,"default_out", false,-1, 31,0);
    tracep->declArray(c+128,"lut", false,-1, 65,0);
    tracep->declBus(c+141,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+79+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+3+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+83+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+85,"lut_out", false,-1, 31,0);
    tracep->declBit(c+86,"hit", false,-1);
    tracep->declBus(c+142,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_PCplus4 ");
    tracep->declBus(c+137,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+126,"srca", false,-1, 31,0);
    tracep->declBus(c+143,"srcb", false,-1, 31,0);
    tracep->declBus(c+127,"Res", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_RegFile ");
    tracep->declBus(c+137,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+144,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+123,"clk", false,-1);
    tracep->declBus(c+87,"rs1", false,-1, 4,0);
    tracep->declBus(c+88,"rs2", false,-1, 4,0);
    tracep->declBus(c+89,"rd", false,-1, 4,0);
    tracep->declBus(c+23,"dest", false,-1, 31,0);
    tracep->declBit(c+17,"RegWrite", false,-1);
    tracep->declBus(c+18,"src1", false,-1, 31,0);
    tracep->declBus(c+19,"src2", false,-1, 31,0);
    tracep->declBus(c+145,"NR_GPR", false,-1, 31,0);
    tracep->declBus(c+146,"REG_WIDTH", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+90+i*1,"x", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_ResSrc ");
    tracep->declBus(c+144,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+147,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+137,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+23,"out", false,-1, 31,0);
    tracep->declBus(c+13,"key", false,-1, 2,0);
    tracep->declBus(c+140,"default_out", false,-1, 31,0);
    tracep->declArray(c+131,"lut", false,-1, 174,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+144,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+147,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+137,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+139,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+23,"out", false,-1, 31,0);
    tracep->declBus(c+13,"key", false,-1, 2,0);
    tracep->declBus(c+140,"default_out", false,-1, 31,0);
    tracep->declArray(c+131,"lut", false,-1, 174,0);
    tracep->declBus(c+148,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+106+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+5+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+116+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+121,"lut_out", false,-1, 31,0);
    tracep->declBit(c+122,"hit", false,-1);
    tracep->declBus(c+149,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP____024unit__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP____024unit__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+137,"W", false,-1, 31,0);
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
    VlWide<3>/*95:0*/ __Vtemp_h94780cc8__0;
    VlWide<3>/*95:0*/ __Vtemp_hc2151deb__0;
    VlWide<6>/*191:0*/ __Vtemp_h27237c9a__0;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+2,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+3,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+4,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__key_list[1]));
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list[4]),3);
    bufp->fullBit(oldp+10,((1U & ((((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls) 
                                    >> 3U) & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__BranchHit)) 
                                  | (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls)))));
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__tnpc),32);
    bufp->fullBit(oldp+12,(((1U == (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ALUCtrl))
                             ? (0U == vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALU__DOT__ALURes_temp)
                             : ((3U == (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ALUCtrl))
                                 ? (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALU__DOT____VdfgTmp_h30e473f3__0)
                                 : ((4U == (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ALUCtrl)) 
                                    & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALU__DOT____VdfgTmp_h30e9c121__0))))));
    bufp->fullCData(oldp+13,((7U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls) 
                                    >> 4U))),3);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ALUCtrl),5);
    bufp->fullBit(oldp+15,((1U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls) 
                                  >> 8U))));
    bufp->fullCData(oldp+16,((7U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls) 
                                    >> 9U))),3);
    bufp->fullBit(oldp+17,((1U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls) 
                                  >> 0xcU))));
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__src2),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ImmExt),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALU__DOT__ALURes_temp),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__Result),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__PCTarget_srca),32);
    bufp->fullBit(oldp+25,((IData)((0x67U == (0x707fU 
                                              & vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IFU__DOT__DPI_DataFromMem)))));
    bufp->fullBit(oldp+26,((1U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls) 
                                  >> 7U))));
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__DataFromMem),32);
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__Wmask),8);
    bufp->fullBit(oldp+29,(((0x3bU == (0x7fU & vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IFU__DOT__DPI_DataFromMem)) 
                            | (0x1bU == (0x7fU & vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IFU__DOT__DPI_DataFromMem)))));
    bufp->fullIData(oldp+30,((vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1 
                              + ((1U & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ALUCtrl))
                                  ? ((IData)(1U) + 
                                     (~ vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb))
                                  : vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb))),32);
    bufp->fullIData(oldp+31,(((1U & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ALUCtrl))
                               ? ((IData)(1U) + (~ vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb))
                               : vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb)),32);
    bufp->fullCData(oldp+32,((0x3fU & vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb)),6);
    bufp->fullIData(oldp+33,(((0x1fU >= (0x3fU & vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb))
                               ? VL_SHIFTRS_III(32,32,6, vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1, 
                                                (0x3fU 
                                                 & vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb))
                               : (- (vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1 
                                     >> 0x1fU)))),32);
    bufp->fullIData(oldp+34,(((0x1fU >= (0x3fU & vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb))
                               ? (vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1 
                                  >> (0x3fU & vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb))
                               : 0U)),32);
    bufp->fullIData(oldp+35,(((0x1fU >= (0x3fU & vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb))
                               ? (vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1 
                                  << (0x3fU & vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb))
                               : 0U)),32);
    bufp->fullIData(oldp+36,((vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1 
                              ^ vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb)),32);
    bufp->fullIData(oldp+37,((vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1 
                              & vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb)),32);
    bufp->fullIData(oldp+38,(((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALU__DOT____VdfgTmp_h30e473f3__0)
                               ? 1U : 0U)),32);
    bufp->fullIData(oldp+39,(((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALU__DOT____VdfgTmp_h30e9c121__0)
                               ? 1U : 0U)),32);
    bufp->fullIData(oldp+40,((vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1 
                              * vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb)),32);
    bufp->fullIData(oldp+41,((vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1 
                              | vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb)),32);
    bufp->fullIData(oldp+42,(VL_DIV_III(32, vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1, vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb)),32);
    bufp->fullIData(oldp+43,(VL_DIVS_III(32, vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1, vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb)),32);
    bufp->fullIData(oldp+44,(VL_MODDIVS_III(32, vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1, vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb)),32);
    bufp->fullQData(oldp+45,(VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1), 
                                         VL_EXTENDS_QI(64,32, vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb))),64);
    bufp->fullIData(oldp+47,((IData)((VL_MULS_QQQ(64, 
                                                  VL_EXTENDS_QI(64,32, vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1), 
                                                  VL_EXTENDS_QI(64,32, vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb)) 
                                      >> 0x20U))),32);
    bufp->fullIData(oldp+48,(VL_MODDIV_III(32, vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1, vlSelf->top__DOT__ysyx_core_rv32im__DOT__srcb)),32);
    __Vtemp_h94780cc8__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ImmExt))));
    __Vtemp_h94780cc8__0[1U] = ((vlSelf->top__DOT__ysyx_core_rv32im__DOT__src2 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ImmExt))) 
                                                   >> 0x20U)));
    __Vtemp_h94780cc8__0[2U] = (vlSelf->top__DOT__ysyx_core_rv32im__DOT__src2 
                                >> 0x1fU);
    bufp->fullWData(oldp+49,(__Vtemp_h94780cc8__0),66);
    bufp->fullQData(oldp+52,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+54,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+59,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+60,((vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                              >> 7U)),25);
    bufp->fullCData(oldp+61,((0x7fU & vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IFU__DOT__DPI_DataFromMem)),7);
    bufp->fullCData(oldp+62,((7U & (vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+63,((vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                              >> 0x19U)),7);
    bufp->fullSData(oldp+64,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls),13);
    bufp->fullBit(oldp+65,((1U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls) 
                                  >> 3U))));
    bufp->fullCData(oldp+66,((3U & ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls) 
                                    >> 1U))),2);
    bufp->fullBit(oldp+67,((1U & (IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__controls))));
    bufp->fullBit(oldp+68,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__BranchHit));
    bufp->fullBit(oldp+69,((IData)((0x40000020U == 
                                    (0x40000020U & vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IFU__DOT__DPI_DataFromMem)))));
    bufp->fullBit(oldp+70,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IDU__DOT__RtypeMul));
    bufp->fullBit(oldp+71,((1U & (vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                                  >> 0x1eU))));
    bufp->fullBit(oldp+72,((1U & (vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                                  >> 0x19U))));
    bufp->fullIData(oldp+73,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IFU__DOT__DPI_DataFromMem),32);
    bufp->fullBit(oldp+74,((1U & (vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                                  >> 0xeU))));
    bufp->fullQData(oldp+75,((((QData)((IData)((0xffU 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__Wmask) 
                                                                 >> 7U))))))) 
                               << 0x38U) | (((QData)((IData)(
                                                             (0xffU 
                                                              & (- (IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__Wmask) 
                                                                               >> 6U))))))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & (- (IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__Wmask) 
                                                                                >> 5U))))))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__Wmask) 
                                                                                >> 4U))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_LSU__DOT____VdfgTmp_hd1f2e586__0))))))),64);
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_LSU__DOT__DPI_DataFromMem),32);
    bufp->fullBit(oldp+78,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_LSU__DOT__sig));
    bufp->fullQData(oldp+79,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+81,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+85,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+86,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+87,((0x1fU & (vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+88,((0x1fU & (vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+89,((0x1fU & (vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                                       >> 7U))),5);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__x[0]),32);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__x[1]),32);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__x[2]),32);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__x[3]),32);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__x[4]),32);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__x[5]),32);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__x[6]),32);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__x[7]),32);
    bufp->fullIData(oldp+98,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__x[8]),32);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__x[9]),32);
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__x[10]),32);
    bufp->fullIData(oldp+101,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__x[11]),32);
    bufp->fullIData(oldp+102,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__x[12]),32);
    bufp->fullIData(oldp+103,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__x[13]),32);
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__x[14]),32);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_RegFile__DOT__x[15]),32);
    bufp->fullQData(oldp+106,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+108,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+110,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+112,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[3]),35);
    bufp->fullQData(oldp+114,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[4]),35);
    bufp->fullIData(oldp+116,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+117,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+118,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+119,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+120,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+121,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+122,(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ResSrc__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+123,(vlSelf->clk));
    bufp->fullBit(oldp+124,(vlSelf->rst));
    bufp->fullIData(oldp+125,(vlSelf->inst),32);
    bufp->fullIData(oldp+126,(vlSelf->pc),32);
    bufp->fullIData(oldp+127,(((IData)(4U) + vlSelf->pc)),32);
    __Vtemp_hc2151deb__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1))));
    __Vtemp_hc2151deb__0[1U] = ((vlSelf->pc << 1U) 
                                | (IData)(((0x100000000ULL 
                                            | (QData)((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__src1))) 
                                           >> 0x20U)));
    __Vtemp_hc2151deb__0[2U] = (vlSelf->pc >> 0x1fU);
    bufp->fullWData(oldp+128,(__Vtemp_hc2151deb__0),66);
    __Vtemp_h27237c9a__0[0U] = (IData)((0x400000000ULL 
                                        | (QData)((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ImmExt))));
    __Vtemp_h27237c9a__0[1U] = ((vlSelf->top__DOT__ysyx_core_rv32im__DOT__tnpc 
                                 << 3U) | (IData)((
                                                   (0x400000000ULL 
                                                    | (QData)((IData)(vlSelf->top__DOT__ysyx_core_rv32im__DOT__ImmExt))) 
                                                   >> 0x20U)));
    __Vtemp_h27237c9a__0[2U] = (0x18U | ((((IData)(4U) 
                                           + vlSelf->pc) 
                                          << 6U) | 
                                         (vlSelf->top__DOT__ysyx_core_rv32im__DOT__tnpc 
                                          >> 0x1dU)));
    __Vtemp_h27237c9a__0[3U] = (0x80U | ((vlSelf->top__DOT__ysyx_core_rv32im__DOT__DataFromMem 
                                          << 9U) | 
                                         (((IData)(4U) 
                                           + vlSelf->pc) 
                                          >> 0x1aU)));
    __Vtemp_h27237c9a__0[4U] = (0x200U | ((vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALU__DOT__ALURes_temp 
                                           << 0xcU) 
                                          | (vlSelf->top__DOT__ysyx_core_rv32im__DOT__DataFromMem 
                                             >> 0x17U)));
    __Vtemp_h27237c9a__0[5U] = (vlSelf->top__DOT__ysyx_core_rv32im__DOT__ysyx_ALU__DOT__ALURes_temp 
                                >> 0x14U);
    bufp->fullWData(oldp+131,(__Vtemp_h27237c9a__0),175);
    bufp->fullIData(oldp+137,(0x20U),32);
    bufp->fullIData(oldp+138,(2U),32);
    bufp->fullIData(oldp+139,(1U),32);
    bufp->fullIData(oldp+140,(0U),32);
    bufp->fullIData(oldp+141,(0x21U),32);
    bufp->fullIData(oldp+142,(2U),32);
    bufp->fullIData(oldp+143,(4U),32);
    bufp->fullIData(oldp+144,(5U),32);
    bufp->fullIData(oldp+145,(0x10U),32);
    bufp->fullIData(oldp+146,(4U),32);
    bufp->fullIData(oldp+147,(3U),32);
    bufp->fullIData(oldp+148,(0x23U),32);
    bufp->fullIData(oldp+149,(5U),32);
}
