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
    tracep->declBit(c+156,"clk", false,-1);
    tracep->declBit(c+157,"rst", false,-1);
    tracep->declBus(c+158,"inst", false,-1, 31,0);
    tracep->declQuad(c+159,"pc", false,-1, 63,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+197,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+156,"clk", false,-1);
    tracep->declBit(c+157,"rst", false,-1);
    tracep->declBus(c+158,"inst", false,-1, 31,0);
    tracep->declQuad(c+159,"pc", false,-1, 63,0);
    tracep->pushNamePrefix("ysyx_core ");
    tracep->declBus(c+197,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+198,"INST_WIDTH", false,-1, 31,0);
    tracep->declBit(c+156,"clk", false,-1);
    tracep->declBit(c+157,"rst", false,-1);
    tracep->declBus(c+158,"inst", false,-1, 31,0);
    tracep->declQuad(c+159,"pc", false,-1, 63,0);
    tracep->declBit(c+81,"PCSrc", false,-1);
    tracep->declQuad(c+161,"tnpc", false,-1, 63,0);
    tracep->declBit(c+82,"Zero", false,-1);
    tracep->declBus(c+10,"ResSrc", false,-1, 2,0);
    tracep->declBus(c+163,"ALUCtrl", false,-1, 2,0);
    tracep->declBit(c+11,"ALUSrc", false,-1);
    tracep->declBus(c+12,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+13,"RegWrite", false,-1);
    tracep->declQuad(c+22,"src1", false,-1, 63,0);
    tracep->declQuad(c+24,"src2", false,-1, 63,0);
    tracep->declQuad(c+14,"ImmExt", false,-1, 63,0);
    tracep->declQuad(c+164,"srcb", false,-1, 63,0);
    tracep->declQuad(c+83,"ALURes", false,-1, 63,0);
    tracep->declQuad(c+85,"Result", false,-1, 63,0);
    tracep->declQuad(c+166,"PCplus4", false,-1, 63,0);
    tracep->declQuad(c+26,"PCTarget_srca", false,-1, 63,0);
    tracep->declBit(c+168,"PCTarget_srca_key", false,-1);
    tracep->declQuad(c+83,"AddrMem", false,-1, 63,0);
    tracep->declQuad(c+24,"DataToMem", false,-1, 63,0);
    tracep->declBit(c+16,"MemWrite", false,-1);
    tracep->declQuad(c+87,"DataFromMem", false,-1, 63,0);
    tracep->declBus(c+17,"Wmask", false,-1, 7,0);
    tracep->pushNamePrefix("ysyx_ALU ");
    tracep->declBus(c+197,"DATA_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+22,"srca", false,-1, 63,0);
    tracep->declQuad(c+164,"srcb", false,-1, 63,0);
    tracep->declBus(c+163,"ALUCtrl", false,-1, 2,0);
    tracep->declQuad(c+83,"ALURes", false,-1, 63,0);
    tracep->declBit(c+82,"Zero", false,-1);
    tracep->declQuad(c+169,"adder_Res", false,-1, 63,0);
    tracep->pushNamePrefix("ysyx_ALU_adder ");
    tracep->declBus(c+197,"DATA_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+22,"srca", false,-1, 63,0);
    tracep->declQuad(c+164,"srcb", false,-1, 63,0);
    tracep->declQuad(c+169,"Res", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_ALUSrc_MuxKey ");
    tracep->declBus(c+199,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+200,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+197,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+164,"out", false,-1, 63,0);
    tracep->declBus(c+11,"key", false,-1, 0,0);
    tracep->declQuad(c+201,"default_out", false,-1, 63,0);
    tracep->declArray(c+28,"lut", false,-1, 129,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+199,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+200,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+197,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+200,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+164,"out", false,-1, 63,0);
    tracep->declBus(c+11,"key", false,-1, 0,0);
    tracep->declQuad(c+201,"default_out", false,-1, 63,0);
    tracep->declArray(c+28,"lut", false,-1, 129,0);
    tracep->declBus(c+203,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+33+i*3,"pair_list", true,(i+0), 64,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+39+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+171,"lut_out", false,-1, 63,0);
    tracep->declBit(c+173,"hit", false,-1);
    tracep->declBus(c+204,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_Extend ");
    tracep->declBus(c+197,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+174,"inst", false,-1, 31,7);
    tracep->declBus(c+12,"ImmSrc", false,-1, 2,0);
    tracep->declQuad(c+14,"ImmExt", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_IDU ");
    tracep->declBus(c+175,"opcode", false,-1, 6,0);
    tracep->declBus(c+176,"funt3", false,-1, 2,0);
    tracep->declBus(c+177,"funt7", false,-1, 6,0);
    tracep->declBit(c+82,"Zero", false,-1);
    tracep->declBit(c+81,"PCSrc", false,-1);
    tracep->declBus(c+10,"ResSrc", false,-1, 2,0);
    tracep->declBit(c+16,"MemWrite", false,-1);
    tracep->declBus(c+163,"ALUCtrl", false,-1, 2,0);
    tracep->declBit(c+11,"ALUSrc", false,-1);
    tracep->declBus(c+12,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+168,"PCTarget_srca_key", false,-1);
    tracep->declBit(c+13,"RegWrite", false,-1);
    tracep->declBus(c+17,"Wmask", false,-1, 7,0);
    tracep->declBus(c+18,"controls", false,-1, 12,0);
    tracep->declBit(c+19,"Branch", false,-1);
    tracep->declBus(c+20,"ALUop", false,-1, 1,0);
    tracep->declBit(c+21,"Jump", false,-1);
    tracep->declBit(c+168,"is_jalr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_IFU ");
    tracep->declBus(c+197,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+156,"clk", false,-1);
    tracep->declBit(c+157,"rst", false,-1);
    tracep->declBit(c+81,"PCSrc", false,-1);
    tracep->declQuad(c+161,"tnpc", false,-1, 63,0);
    tracep->declQuad(c+166,"snpc", false,-1, 63,0);
    tracep->declQuad(c+159,"pc", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_LSU ");
    tracep->declBus(c+197,"DATA_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+83,"AddrMem", false,-1, 63,0);
    tracep->declBus(c+17,"Wmask", false,-1, 7,0);
    tracep->declQuad(c+24,"DataToMem", false,-1, 63,0);
    tracep->declBit(c+16,"MemWrite", false,-1);
    tracep->declQuad(c+87,"DataFromMem", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_PCTarget ");
    tracep->declBus(c+197,"DATA_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+26,"srca", false,-1, 63,0);
    tracep->declQuad(c+14,"srcb", false,-1, 63,0);
    tracep->declQuad(c+161,"Res", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_PCTarget_srca ");
    tracep->declBus(c+199,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+200,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+197,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+26,"out", false,-1, 63,0);
    tracep->declBus(c+168,"key", false,-1, 0,0);
    tracep->declQuad(c+201,"default_out", false,-1, 63,0);
    tracep->declArray(c+178,"lut", false,-1, 129,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+199,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+200,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+197,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+200,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+26,"out", false,-1, 63,0);
    tracep->declBus(c+168,"key", false,-1, 0,0);
    tracep->declQuad(c+201,"default_out", false,-1, 63,0);
    tracep->declArray(c+178,"lut", false,-1, 129,0);
    tracep->declBus(c+203,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+43+i*3,"pair_list", true,(i+0), 64,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+3+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+49+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+53,"lut_out", false,-1, 63,0);
    tracep->declBit(c+55,"hit", false,-1);
    tracep->declBus(c+204,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_PCplus4 ");
    tracep->declBus(c+197,"DATA_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+159,"srca", false,-1, 63,0);
    tracep->declQuad(c+205,"srcb", false,-1, 63,0);
    tracep->declQuad(c+166,"Res", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_RegFile ");
    tracep->declBus(c+197,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+207,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+198,"REG_NUM", false,-1, 31,0);
    tracep->declBit(c+156,"clk", false,-1);
    tracep->declBus(c+183,"rs1", false,-1, 4,0);
    tracep->declBus(c+184,"rs2", false,-1, 4,0);
    tracep->declBus(c+185,"rd", false,-1, 4,0);
    tracep->declQuad(c+85,"dest", false,-1, 63,0);
    tracep->declBit(c+13,"RegWrite", false,-1);
    tracep->declQuad(c+22,"src1", false,-1, 63,0);
    tracep->declQuad(c+24,"src2", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+92+i*2,"x", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_ResSrc ");
    tracep->declBus(c+207,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+208,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+197,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+85,"out", false,-1, 63,0);
    tracep->declBus(c+10,"key", false,-1, 2,0);
    tracep->declQuad(c+201,"default_out", false,-1, 63,0);
    tracep->declArray(c+186,"lut", false,-1, 334,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+207,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+208,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+197,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+200,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+85,"out", false,-1, 63,0);
    tracep->declBus(c+10,"key", false,-1, 2,0);
    tracep->declQuad(c+201,"default_out", false,-1, 63,0);
    tracep->declArray(c+186,"lut", false,-1, 334,0);
    tracep->declBus(c+209,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declArray(c+56+i*3,"pair_list", true,(i+0), 66,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+5+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+71+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+89,"lut_out", false,-1, 63,0);
    tracep->declBit(c+91,"hit", false,-1);
    tracep->declBus(c+210,"i", false,-1, 31,0);
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
    bufp->fullBit(oldp+11,((1U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                  >> 8U))));
    bufp->fullCData(oldp+12,((7U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                    >> 9U))),3);
    bufp->fullBit(oldp+13,((1U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                  >> 0xcU))));
    bufp->fullQData(oldp+14,(vlSelf->top__DOT__ysyx_core__DOT__ImmExt),64);
    bufp->fullBit(oldp+16,((1U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                  >> 7U))));
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__ysyx_core__DOT__Wmask),8);
    bufp->fullSData(oldp+18,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls),13);
    bufp->fullBit(oldp+19,((1U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                  >> 3U))));
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__ALUop),2);
    bufp->fullBit(oldp+21,((1U & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls))));
    bufp->fullQData(oldp+22,(vlSelf->top__DOT__ysyx_core__DOT__src1),64);
    bufp->fullQData(oldp+24,(vlSelf->top__DOT__ysyx_core__DOT__src2),64);
    bufp->fullQData(oldp+26,(vlSelf->top__DOT__ysyx_core__DOT__PCTarget_srca),64);
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
    bufp->fullWData(oldp+28,(__Vtemp_h84e36b2d__0),130);
    bufp->fullWData(oldp+33,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__pair_list[0]),65);
    bufp->fullWData(oldp+36,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__pair_list[1]),65);
    bufp->fullQData(oldp+39,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list[0]),64);
    bufp->fullQData(oldp+41,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list[1]),64);
    bufp->fullWData(oldp+43,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__pair_list[0]),65);
    bufp->fullWData(oldp+46,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__pair_list[1]),65);
    bufp->fullQData(oldp+49,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__data_list[0]),64);
    bufp->fullQData(oldp+51,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__data_list[1]),64);
    bufp->fullQData(oldp+53,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__lut_out),64);
    bufp->fullBit(oldp+55,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__hit));
    bufp->fullWData(oldp+56,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[0]),67);
    bufp->fullWData(oldp+59,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[1]),67);
    bufp->fullWData(oldp+62,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[2]),67);
    bufp->fullWData(oldp+65,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[3]),67);
    bufp->fullWData(oldp+68,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[4]),67);
    bufp->fullQData(oldp+71,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[0]),64);
    bufp->fullQData(oldp+73,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[1]),64);
    bufp->fullQData(oldp+75,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[2]),64);
    bufp->fullQData(oldp+77,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[3]),64);
    bufp->fullQData(oldp+79,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[4]),64);
    bufp->fullBit(oldp+81,((1U & ((((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                    >> 3U) & (0ULL 
                                              == vlSelf->top__DOT__ysyx_core__DOT__ALURes)) 
                                  | (IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls)))));
    bufp->fullBit(oldp+82,((0ULL == vlSelf->top__DOT__ysyx_core__DOT__ALURes)));
    bufp->fullQData(oldp+83,(vlSelf->top__DOT__ysyx_core__DOT__ALURes),64);
    bufp->fullQData(oldp+85,(vlSelf->top__DOT__ysyx_core__DOT__Result),64);
    bufp->fullQData(oldp+87,(vlSelf->top__DOT__ysyx_core__DOT__DataFromMem),64);
    bufp->fullQData(oldp+89,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out),64);
    bufp->fullBit(oldp+91,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+92,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[0]),64);
    bufp->fullQData(oldp+94,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[1]),64);
    bufp->fullQData(oldp+96,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[2]),64);
    bufp->fullQData(oldp+98,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[3]),64);
    bufp->fullQData(oldp+100,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[4]),64);
    bufp->fullQData(oldp+102,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[5]),64);
    bufp->fullQData(oldp+104,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[6]),64);
    bufp->fullQData(oldp+106,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[7]),64);
    bufp->fullQData(oldp+108,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[8]),64);
    bufp->fullQData(oldp+110,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[9]),64);
    bufp->fullQData(oldp+112,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[10]),64);
    bufp->fullQData(oldp+114,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[11]),64);
    bufp->fullQData(oldp+116,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[12]),64);
    bufp->fullQData(oldp+118,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[13]),64);
    bufp->fullQData(oldp+120,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[14]),64);
    bufp->fullQData(oldp+122,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[15]),64);
    bufp->fullQData(oldp+124,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[16]),64);
    bufp->fullQData(oldp+126,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[17]),64);
    bufp->fullQData(oldp+128,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[18]),64);
    bufp->fullQData(oldp+130,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[19]),64);
    bufp->fullQData(oldp+132,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[20]),64);
    bufp->fullQData(oldp+134,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[21]),64);
    bufp->fullQData(oldp+136,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[22]),64);
    bufp->fullQData(oldp+138,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[23]),64);
    bufp->fullQData(oldp+140,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[24]),64);
    bufp->fullQData(oldp+142,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[25]),64);
    bufp->fullQData(oldp+144,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[26]),64);
    bufp->fullQData(oldp+146,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[27]),64);
    bufp->fullQData(oldp+148,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[28]),64);
    bufp->fullQData(oldp+150,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[29]),64);
    bufp->fullQData(oldp+152,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[30]),64);
    bufp->fullQData(oldp+154,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[31]),64);
    bufp->fullBit(oldp+156,(vlSelf->clk));
    bufp->fullBit(oldp+157,(vlSelf->rst));
    bufp->fullIData(oldp+158,(vlSelf->inst),32);
    bufp->fullQData(oldp+159,(vlSelf->pc),64);
    bufp->fullQData(oldp+161,(vlSelf->top__DOT__ysyx_core__DOT__tnpc),64);
    bufp->fullCData(oldp+163,(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl),3);
    bufp->fullQData(oldp+164,(vlSelf->top__DOT__ysyx_core__DOT__srcb),64);
    bufp->fullQData(oldp+166,((4ULL + vlSelf->pc)),64);
    bufp->fullBit(oldp+168,((IData)((0x67U == (0x707fU 
                                               & vlSelf->inst)))));
    bufp->fullQData(oldp+169,((vlSelf->top__DOT__ysyx_core__DOT__src1 
                               + vlSelf->top__DOT__ysyx_core__DOT__srcb)),64);
    bufp->fullQData(oldp+171,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__lut_out),64);
    bufp->fullBit(oldp+173,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+174,((vlSelf->inst >> 7U)),25);
    bufp->fullCData(oldp+175,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+176,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+177,((vlSelf->inst >> 0x19U)),7);
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
    bufp->fullWData(oldp+178,(__Vtemp_h49dee185__0),130);
    bufp->fullCData(oldp+183,((0x1fU & (vlSelf->inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+184,((0x1fU & (vlSelf->inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+185,((0x1fU & (vlSelf->inst 
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
    bufp->fullWData(oldp+186,(__Vtemp_h4e4ad826__0),335);
    bufp->fullIData(oldp+197,(0x40U),32);
    bufp->fullIData(oldp+198,(0x20U),32);
    bufp->fullIData(oldp+199,(2U),32);
    bufp->fullIData(oldp+200,(1U),32);
    bufp->fullQData(oldp+201,(0ULL),64);
    bufp->fullIData(oldp+203,(0x41U),32);
    bufp->fullIData(oldp+204,(2U),32);
    bufp->fullQData(oldp+205,(4ULL),64);
    bufp->fullIData(oldp+207,(5U),32);
    bufp->fullIData(oldp+208,(3U),32);
    bufp->fullIData(oldp+209,(0x43U),32);
    bufp->fullIData(oldp+210,(5U),32);
}
