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
    tracep->declBit(c+177,"clk", false,-1);
    tracep->declBit(c+178,"rst", false,-1);
    tracep->declBus(c+179,"inst", false,-1, 31,0);
    tracep->declQuad(c+180,"pc", false,-1, 63,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+212,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+177,"clk", false,-1);
    tracep->declBit(c+178,"rst", false,-1);
    tracep->declBus(c+179,"inst", false,-1, 31,0);
    tracep->declQuad(c+180,"pc", false,-1, 63,0);
    tracep->pushNamePrefix("ysyx_core ");
    tracep->declBus(c+212,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+213,"INST_WIDTH", false,-1, 31,0);
    tracep->declBit(c+177,"clk", false,-1);
    tracep->declBit(c+178,"rst", false,-1);
    tracep->declBus(c+179,"inst", false,-1, 31,0);
    tracep->declQuad(c+180,"pc", false,-1, 63,0);
    tracep->declBit(c+182,"PCSrc", false,-1);
    tracep->declQuad(c+26,"tnpc", false,-1, 63,0);
    tracep->declBit(c+28,"Zero", false,-1);
    tracep->declBus(c+10,"ResSrc", false,-1, 2,0);
    tracep->declBus(c+11,"ALUCtrl", false,-1, 2,0);
    tracep->declBit(c+12,"ALUSrc", false,-1);
    tracep->declBus(c+13,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+14,"RegWrite", false,-1);
    tracep->declQuad(c+29,"src1", false,-1, 63,0);
    tracep->declQuad(c+31,"src2", false,-1, 63,0);
    tracep->declQuad(c+15,"ImmExt", false,-1, 63,0);
    tracep->declQuad(c+33,"srcb", false,-1, 63,0);
    tracep->declQuad(c+35,"ALURes", false,-1, 63,0);
    tracep->declQuad(c+37,"Result", false,-1, 63,0);
    tracep->declQuad(c+183,"PCplus4", false,-1, 63,0);
    tracep->declQuad(c+39,"PCTarget_srca", false,-1, 63,0);
    tracep->declBit(c+185,"PCTarget_srca_key", false,-1);
    tracep->declQuad(c+35,"AddrMem", false,-1, 63,0);
    tracep->declQuad(c+31,"DataToMem", false,-1, 63,0);
    tracep->declBit(c+17,"MemWrite", false,-1);
    tracep->declQuad(c+41,"DataFromMem", false,-1, 63,0);
    tracep->declBus(c+18,"Wmask", false,-1, 7,0);
    tracep->declBit(c+19,"dw", false,-1);
    tracep->pushNamePrefix("ysyx_ALU ");
    tracep->declBus(c+212,"DATA_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+29,"srca", false,-1, 63,0);
    tracep->declQuad(c+33,"srcb", false,-1, 63,0);
    tracep->declBus(c+11,"ALUCtrl", false,-1, 2,0);
    tracep->declBit(c+19,"dw", false,-1);
    tracep->declQuad(c+35,"ALURes", false,-1, 63,0);
    tracep->declBit(c+28,"Zero", false,-1);
    tracep->declQuad(c+43,"adder_Res", false,-1, 63,0);
    tracep->declQuad(c+45,"srcb_inv", false,-1, 63,0);
    tracep->declQuad(c+47,"ALURes_temp", false,-1, 63,0);
    tracep->declQuad(c+49,"right_shift_ari", false,-1, 63,0);
    tracep->pushNamePrefix("ysyx_ALU_adder ");
    tracep->declBus(c+212,"DATA_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+29,"srca", false,-1, 63,0);
    tracep->declQuad(c+45,"srcb", false,-1, 63,0);
    tracep->declQuad(c+43,"Res", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_ALUSrc_MuxKey ");
    tracep->declBus(c+214,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+215,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+212,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+33,"out", false,-1, 63,0);
    tracep->declBus(c+12,"key", false,-1, 0,0);
    tracep->declQuad(c+216,"default_out", false,-1, 63,0);
    tracep->declArray(c+51,"lut", false,-1, 129,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+214,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+215,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+212,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+215,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+33,"out", false,-1, 63,0);
    tracep->declBus(c+12,"key", false,-1, 0,0);
    tracep->declQuad(c+216,"default_out", false,-1, 63,0);
    tracep->declArray(c+51,"lut", false,-1, 129,0);
    tracep->declBus(c+218,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+56+i*3,"pair_list", true,(i+0), 64,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+62+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+66,"lut_out", false,-1, 63,0);
    tracep->declBit(c+68,"hit", false,-1);
    tracep->declBus(c+219,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_Extend ");
    tracep->declBus(c+212,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+186,"inst", false,-1, 31,7);
    tracep->declBus(c+13,"ImmSrc", false,-1, 2,0);
    tracep->declQuad(c+15,"ImmExt", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_IDU ");
    tracep->declBus(c+187,"opcode", false,-1, 6,0);
    tracep->declBus(c+188,"funt3", false,-1, 2,0);
    tracep->declBus(c+189,"funt7", false,-1, 6,0);
    tracep->declBit(c+28,"Zero", false,-1);
    tracep->declBit(c+182,"PCSrc", false,-1);
    tracep->declBus(c+10,"ResSrc", false,-1, 2,0);
    tracep->declBit(c+17,"MemWrite", false,-1);
    tracep->declBus(c+11,"ALUCtrl", false,-1, 2,0);
    tracep->declBit(c+12,"ALUSrc", false,-1);
    tracep->declBus(c+13,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+185,"PCTarget_srca_key", false,-1);
    tracep->declBit(c+14,"RegWrite", false,-1);
    tracep->declBus(c+18,"Wmask", false,-1, 7,0);
    tracep->declBit(c+19,"dw", false,-1);
    tracep->declBus(c+20,"controls", false,-1, 12,0);
    tracep->declBit(c+21,"Branch", false,-1);
    tracep->declBus(c+22,"ALUop", false,-1, 1,0);
    tracep->declBit(c+23,"Jump", false,-1);
    tracep->declBit(c+185,"is_jalr", false,-1);
    tracep->declBit(c+190,"BranchHit", false,-1);
    tracep->declBit(c+191,"RtypeSub", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_IFU ");
    tracep->declBus(c+212,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+177,"clk", false,-1);
    tracep->declBit(c+178,"rst", false,-1);
    tracep->declBit(c+182,"PCSrc", false,-1);
    tracep->declQuad(c+26,"tnpc", false,-1, 63,0);
    tracep->declQuad(c+183,"snpc", false,-1, 63,0);
    tracep->declQuad(c+180,"pc", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_LSU ");
    tracep->declBus(c+212,"DATA_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+35,"AddrMem", false,-1, 63,0);
    tracep->declBus(c+18,"Wmask", false,-1, 7,0);
    tracep->declQuad(c+31,"DataToMem", false,-1, 63,0);
    tracep->declBit(c+17,"MemWrite", false,-1);
    tracep->declBit(c+192,"funt3_2", false,-1);
    tracep->declQuad(c+41,"DataFromMem", false,-1, 63,0);
    tracep->declQuad(c+24,"Wmask64", false,-1, 63,0);
    tracep->declQuad(c+69,"DPI_DataFromMem", false,-1, 63,0);
    tracep->declQuad(c+69,"TEMP_DataFromMem", false,-1, 63,0);
    tracep->declBit(c+71,"sig", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_PCTarget ");
    tracep->declBus(c+212,"DATA_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+39,"srca", false,-1, 63,0);
    tracep->declQuad(c+15,"srcb", false,-1, 63,0);
    tracep->declQuad(c+26,"Res", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_PCTarget_srca ");
    tracep->declBus(c+214,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+215,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+212,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+39,"out", false,-1, 63,0);
    tracep->declBus(c+185,"key", false,-1, 0,0);
    tracep->declQuad(c+216,"default_out", false,-1, 63,0);
    tracep->declArray(c+193,"lut", false,-1, 129,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+214,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+215,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+212,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+215,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+39,"out", false,-1, 63,0);
    tracep->declBus(c+185,"key", false,-1, 0,0);
    tracep->declQuad(c+216,"default_out", false,-1, 63,0);
    tracep->declArray(c+193,"lut", false,-1, 129,0);
    tracep->declBus(c+218,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+72+i*3,"pair_list", true,(i+0), 64,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+3+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+78+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+82,"lut_out", false,-1, 63,0);
    tracep->declBit(c+84,"hit", false,-1);
    tracep->declBus(c+219,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_PCplus4 ");
    tracep->declBus(c+212,"DATA_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+180,"srca", false,-1, 63,0);
    tracep->declQuad(c+220,"srcb", false,-1, 63,0);
    tracep->declQuad(c+183,"Res", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_RegFile ");
    tracep->declBus(c+212,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+222,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+213,"REG_NUM", false,-1, 31,0);
    tracep->declBit(c+177,"clk", false,-1);
    tracep->declBus(c+198,"rs1", false,-1, 4,0);
    tracep->declBus(c+199,"rs2", false,-1, 4,0);
    tracep->declBus(c+200,"rd", false,-1, 4,0);
    tracep->declQuad(c+37,"dest", false,-1, 63,0);
    tracep->declBit(c+14,"RegWrite", false,-1);
    tracep->declQuad(c+29,"src1", false,-1, 63,0);
    tracep->declQuad(c+31,"src2", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+113+i*2,"x", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_ResSrc ");
    tracep->declBus(c+222,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+223,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+212,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+37,"out", false,-1, 63,0);
    tracep->declBus(c+10,"key", false,-1, 2,0);
    tracep->declQuad(c+216,"default_out", false,-1, 63,0);
    tracep->declArray(c+201,"lut", false,-1, 334,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+222,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+223,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+212,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+215,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+37,"out", false,-1, 63,0);
    tracep->declBus(c+10,"key", false,-1, 2,0);
    tracep->declQuad(c+216,"default_out", false,-1, 63,0);
    tracep->declArray(c+201,"lut", false,-1, 334,0);
    tracep->declBus(c+224,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declArray(c+85+i*3,"pair_list", true,(i+0), 66,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+5+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+100+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+110,"lut_out", false,-1, 63,0);
    tracep->declBit(c+112,"hit", false,-1);
    tracep->declBus(c+225,"i", false,-1, 31,0);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
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
    VlWide<5>/*159:0*/ __Vtemp_h84e36b2d__0;
    VlWide<5>/*159:0*/ __Vtemp_h49dee185__0;
    VlWide<11>/*351:0*/ __Vtemp_h4e4ad826__0;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+2,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__key_list[1]));
    bufp->fullBit(oldp+3,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+4,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__key_list[1]));
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list[1]),3);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list[2]),3);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list[3]),3);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list[4]),3);
    bufp->fullCData(oldp+10,((7U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                    >> 4U))),3);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl),3);
    bufp->fullBit(oldp+12,((1U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                  >> 8U))));
    bufp->fullCData(oldp+13,((7U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                    >> 9U))),3);
    bufp->fullBit(oldp+14,((1U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                  >> 0xcU))));
    bufp->fullQData(oldp+15,(vlSelf->top__DOT__ysyx_core__DOT__ImmExt),64);
    bufp->fullBit(oldp+17,((1U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                  >> 7U))));
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__ysyx_core__DOT__Wmask),8);
    bufp->fullBit(oldp+19,(vlSelf->top__DOT__ysyx_core__DOT__dw));
    bufp->fullSData(oldp+20,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls),13);
    bufp->fullBit(oldp+21,((1U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                  >> 3U))));
    bufp->fullCData(oldp+22,((3U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                    >> 1U))),2);
    bufp->fullBit(oldp+23,((1U & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls))));
    bufp->fullQData(oldp+24,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_LSU__DOT__Wmask64),64);
    bufp->fullQData(oldp+26,(vlSelf->top__DOT__ysyx_core__DOT__tnpc),64);
    bufp->fullBit(oldp+28,((0ULL == vlSelf->top__DOT__ysyx_core__DOT__ALURes)));
    bufp->fullQData(oldp+29,(vlSelf->top__DOT__ysyx_core__DOT__src1),64);
    bufp->fullQData(oldp+31,(vlSelf->top__DOT__ysyx_core__DOT__src2),64);
    bufp->fullQData(oldp+33,(vlSelf->top__DOT__ysyx_core__DOT__srcb),64);
    bufp->fullQData(oldp+35,(vlSelf->top__DOT__ysyx_core__DOT__ALURes),64);
    bufp->fullQData(oldp+37,(vlSelf->top__DOT__ysyx_core__DOT__Result),64);
    bufp->fullQData(oldp+39,(vlSelf->top__DOT__ysyx_core__DOT__PCTarget_srca),64);
    bufp->fullQData(oldp+41,(vlSelf->top__DOT__ysyx_core__DOT__DataFromMem),64);
    bufp->fullQData(oldp+43,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT__adder_Res),64);
    bufp->fullQData(oldp+45,(((1U & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl))
                               ? (1ULL + (~ vlSelf->top__DOT__ysyx_core__DOT__srcb))
                               : vlSelf->top__DOT__ysyx_core__DOT__srcb)),64);
    bufp->fullQData(oldp+47,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT__ALURes_temp),64);
    bufp->fullQData(oldp+49,(VL_SHIFTRS_QQQ(64,64,64, vlSelf->top__DOT__ysyx_core__DOT__src1, vlSelf->top__DOT__ysyx_core__DOT__srcb)),64);
    __Vtemp_h84e36b2d__0[0U] = (IData)(vlSelf->top__DOT__ysyx_core__DOT__ImmExt);
    __Vtemp_h84e36b2d__0[1U] = (IData)((vlSelf->top__DOT__ysyx_core__DOT__ImmExt 
                                        >> 0x20U));
    __Vtemp_h84e36b2d__0[2U] = (1U | ((IData)(vlSelf->top__DOT__ysyx_core__DOT__src2) 
                                      << 1U));
    __Vtemp_h84e36b2d__0[3U] = (((IData)(vlSelf->top__DOT__ysyx_core__DOT__src2) 
                                 >> 0x1fU) | ((IData)(
                                                      (vlSelf->top__DOT__ysyx_core__DOT__src2 
                                                       >> 0x20U)) 
                                              << 1U));
    __Vtemp_h84e36b2d__0[4U] = ((IData)((vlSelf->top__DOT__ysyx_core__DOT__src2 
                                         >> 0x20U)) 
                                >> 0x1fU);
    bufp->fullWData(oldp+51,(__Vtemp_h84e36b2d__0),130);
    bufp->fullWData(oldp+56,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__pair_list[0]),65);
    bufp->fullWData(oldp+59,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__pair_list[1]),65);
    bufp->fullQData(oldp+62,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list[0]),64);
    bufp->fullQData(oldp+64,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list[1]),64);
    bufp->fullQData(oldp+66,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__lut_out),64);
    bufp->fullBit(oldp+68,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+69,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_LSU__DOT__DPI_DataFromMem),64);
    bufp->fullBit(oldp+71,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_LSU__DOT__sig));
    bufp->fullWData(oldp+72,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__pair_list[0]),65);
    bufp->fullWData(oldp+75,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__pair_list[1]),65);
    bufp->fullQData(oldp+78,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__data_list[0]),64);
    bufp->fullQData(oldp+80,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__data_list[1]),64);
    bufp->fullQData(oldp+82,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__lut_out),64);
    bufp->fullBit(oldp+84,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__hit));
    bufp->fullWData(oldp+85,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[0]),67);
    bufp->fullWData(oldp+88,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[1]),67);
    bufp->fullWData(oldp+91,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[2]),67);
    bufp->fullWData(oldp+94,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[3]),67);
    bufp->fullWData(oldp+97,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[4]),67);
    bufp->fullQData(oldp+100,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[0]),64);
    bufp->fullQData(oldp+102,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[1]),64);
    bufp->fullQData(oldp+104,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[2]),64);
    bufp->fullQData(oldp+106,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[3]),64);
    bufp->fullQData(oldp+108,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[4]),64);
    bufp->fullQData(oldp+110,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out),64);
    bufp->fullBit(oldp+112,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+113,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[0]),64);
    bufp->fullQData(oldp+115,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[1]),64);
    bufp->fullQData(oldp+117,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[2]),64);
    bufp->fullQData(oldp+119,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[3]),64);
    bufp->fullQData(oldp+121,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[4]),64);
    bufp->fullQData(oldp+123,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[5]),64);
    bufp->fullQData(oldp+125,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[6]),64);
    bufp->fullQData(oldp+127,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[7]),64);
    bufp->fullQData(oldp+129,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[8]),64);
    bufp->fullQData(oldp+131,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[9]),64);
    bufp->fullQData(oldp+133,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[10]),64);
    bufp->fullQData(oldp+135,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[11]),64);
    bufp->fullQData(oldp+137,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[12]),64);
    bufp->fullQData(oldp+139,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[13]),64);
    bufp->fullQData(oldp+141,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[14]),64);
    bufp->fullQData(oldp+143,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[15]),64);
    bufp->fullQData(oldp+145,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[16]),64);
    bufp->fullQData(oldp+147,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[17]),64);
    bufp->fullQData(oldp+149,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[18]),64);
    bufp->fullQData(oldp+151,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[19]),64);
    bufp->fullQData(oldp+153,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[20]),64);
    bufp->fullQData(oldp+155,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[21]),64);
    bufp->fullQData(oldp+157,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[22]),64);
    bufp->fullQData(oldp+159,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[23]),64);
    bufp->fullQData(oldp+161,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[24]),64);
    bufp->fullQData(oldp+163,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[25]),64);
    bufp->fullQData(oldp+165,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[26]),64);
    bufp->fullQData(oldp+167,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[27]),64);
    bufp->fullQData(oldp+169,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[28]),64);
    bufp->fullQData(oldp+171,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[29]),64);
    bufp->fullQData(oldp+173,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[30]),64);
    bufp->fullQData(oldp+175,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[31]),64);
    bufp->fullBit(oldp+177,(vlSelf->clk));
    bufp->fullBit(oldp+178,(vlSelf->rst));
    bufp->fullIData(oldp+179,(vlSelf->inst),32);
    bufp->fullQData(oldp+180,(vlSelf->pc),64);
    bufp->fullBit(oldp+182,((1U & ((((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                     >> 3U) & ((0x63U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->inst)) 
                                               & ((0U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->inst 
                                                       >> 0xcU)))
                                                   ? 
                                                  (0ULL 
                                                   == vlSelf->top__DOT__ysyx_core__DOT__ALURes)
                                                   : (IData)(
                                                             ((0x1000U 
                                                               == 
                                                               (0x7000U 
                                                                & vlSelf->inst)) 
                                                              & (0ULL 
                                                                 != vlSelf->top__DOT__ysyx_core__DOT__ALURes)))))) 
                                   | (IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls)))));
    bufp->fullQData(oldp+183,((4ULL + vlSelf->pc)),64);
    bufp->fullBit(oldp+185,((IData)((0x67U == (0x707fU 
                                               & vlSelf->inst)))));
    bufp->fullIData(oldp+186,((vlSelf->inst >> 7U)),25);
    bufp->fullCData(oldp+187,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+188,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+189,((vlSelf->inst >> 0x19U)),7);
    bufp->fullBit(oldp+190,(((0x63U == (0x7fU & vlSelf->inst)) 
                             & ((0U == (7U & (vlSelf->inst 
                                              >> 0xcU)))
                                 ? (0ULL == vlSelf->top__DOT__ysyx_core__DOT__ALURes)
                                 : (IData)(((0x1000U 
                                             == (0x7000U 
                                                 & vlSelf->inst)) 
                                            & (0ULL 
                                               != vlSelf->top__DOT__ysyx_core__DOT__ALURes)))))));
    bufp->fullBit(oldp+191,((IData)((0x40000020U == 
                                     (0x40000020U & vlSelf->inst)))));
    bufp->fullBit(oldp+192,((1U & (vlSelf->inst >> 0xeU))));
    __Vtemp_h49dee185__0[0U] = (IData)(vlSelf->top__DOT__ysyx_core__DOT__src1);
    __Vtemp_h49dee185__0[1U] = (IData)((vlSelf->top__DOT__ysyx_core__DOT__src1 
                                        >> 0x20U));
    __Vtemp_h49dee185__0[2U] = (1U | ((IData)(vlSelf->pc) 
                                      << 1U));
    __Vtemp_h49dee185__0[3U] = (((IData)(vlSelf->pc) 
                                 >> 0x1fU) | ((IData)(
                                                      (vlSelf->pc 
                                                       >> 0x20U)) 
                                              << 1U));
    __Vtemp_h49dee185__0[4U] = ((IData)((vlSelf->pc 
                                         >> 0x20U)) 
                                >> 0x1fU);
    bufp->fullWData(oldp+193,(__Vtemp_h49dee185__0),130);
    bufp->fullCData(oldp+198,((0x1fU & (vlSelf->inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+199,((0x1fU & (vlSelf->inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+200,((0x1fU & (vlSelf->inst 
                                        >> 7U))),5);
    __Vtemp_h4e4ad826__0[0U] = (IData)(vlSelf->top__DOT__ysyx_core__DOT__ImmExt);
    __Vtemp_h4e4ad826__0[1U] = (IData)((vlSelf->top__DOT__ysyx_core__DOT__ImmExt 
                                        >> 0x20U));
    __Vtemp_h4e4ad826__0[2U] = (4U | ((IData)(vlSelf->top__DOT__ysyx_core__DOT__tnpc) 
                                      << 3U));
    __Vtemp_h4e4ad826__0[3U] = (((IData)(vlSelf->top__DOT__ysyx_core__DOT__tnpc) 
                                 >> 0x1dU) | ((IData)(
                                                      (vlSelf->top__DOT__ysyx_core__DOT__tnpc 
                                                       >> 0x20U)) 
                                              << 3U));
    __Vtemp_h4e4ad826__0[4U] = (0x18U | (((IData)((4ULL 
                                                   + vlSelf->pc)) 
                                          << 6U) | 
                                         ((IData)((vlSelf->top__DOT__ysyx_core__DOT__tnpc 
                                                   >> 0x20U)) 
                                          >> 0x1dU)));
    __Vtemp_h4e4ad826__0[5U] = (((IData)((4ULL + vlSelf->pc)) 
                                 >> 0x1aU) | ((IData)(
                                                      ((4ULL 
                                                        + vlSelf->pc) 
                                                       >> 0x20U)) 
                                              << 6U));
    __Vtemp_h4e4ad826__0[6U] = (0x80U | (((IData)(vlSelf->top__DOT__ysyx_core__DOT__DataFromMem) 
                                          << 9U) | 
                                         ((IData)((
                                                   (4ULL 
                                                    + vlSelf->pc) 
                                                   >> 0x20U)) 
                                          >> 0x1aU)));
    __Vtemp_h4e4ad826__0[7U] = (((IData)(vlSelf->top__DOT__ysyx_core__DOT__DataFromMem) 
                                 >> 0x17U) | ((IData)(
                                                      (vlSelf->top__DOT__ysyx_core__DOT__DataFromMem 
                                                       >> 0x20U)) 
                                              << 9U));
    __Vtemp_h4e4ad826__0[8U] = (0x200U | (((IData)(vlSelf->top__DOT__ysyx_core__DOT__ALURes) 
                                           << 0xcU) 
                                          | ((IData)(
                                                     (vlSelf->top__DOT__ysyx_core__DOT__DataFromMem 
                                                      >> 0x20U)) 
                                             >> 0x17U)));
    __Vtemp_h4e4ad826__0[9U] = (((IData)(vlSelf->top__DOT__ysyx_core__DOT__ALURes) 
                                 >> 0x14U) | ((IData)(
                                                      (vlSelf->top__DOT__ysyx_core__DOT__ALURes 
                                                       >> 0x20U)) 
                                              << 0xcU));
    __Vtemp_h4e4ad826__0[0xaU] = ((IData)((vlSelf->top__DOT__ysyx_core__DOT__ALURes 
                                           >> 0x20U)) 
                                  >> 0x14U);
    bufp->fullWData(oldp+201,(__Vtemp_h4e4ad826__0),335);
    bufp->fullIData(oldp+212,(0x40U),32);
    bufp->fullIData(oldp+213,(0x20U),32);
    bufp->fullIData(oldp+214,(2U),32);
    bufp->fullIData(oldp+215,(1U),32);
    bufp->fullQData(oldp+216,(0ULL),64);
    bufp->fullIData(oldp+218,(0x41U),32);
    bufp->fullIData(oldp+219,(2U),32);
    bufp->fullQData(oldp+220,(4ULL),64);
    bufp->fullIData(oldp+222,(5U),32);
    bufp->fullIData(oldp+223,(3U),32);
    bufp->fullIData(oldp+224,(0x43U),32);
    bufp->fullIData(oldp+225,(5U),32);
}
