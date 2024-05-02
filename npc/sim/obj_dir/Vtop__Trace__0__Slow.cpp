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
    tracep->declBit(c+43,"clk", false,-1);
    tracep->declBit(c+44,"rst", false,-1);
    tracep->declBus(c+45,"DataFromMem", false,-1, 31,0);
    tracep->declBus(c+46,"inst", false,-1, 31,0);
    tracep->declBus(c+47,"pc", false,-1, 31,0);
    tracep->declBus(c+48,"AddrMem", false,-1, 31,0);
    tracep->declBus(c+49,"DataToMem", false,-1, 31,0);
    tracep->declBit(c+50,"MemWrite", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+43,"clk", false,-1);
    tracep->declBit(c+44,"rst", false,-1);
    tracep->declBus(c+45,"DataFromMem", false,-1, 31,0);
    tracep->declBus(c+46,"inst", false,-1, 31,0);
    tracep->declBus(c+47,"pc", false,-1, 31,0);
    tracep->declBus(c+48,"AddrMem", false,-1, 31,0);
    tracep->declBus(c+49,"DataToMem", false,-1, 31,0);
    tracep->declBit(c+50,"MemWrite", false,-1);
    tracep->pushNamePrefix("ysyx_core ");
    tracep->declBit(c+43,"clk", false,-1);
    tracep->declBit(c+44,"rst", false,-1);
    tracep->declBus(c+45,"DataFromMem", false,-1, 31,0);
    tracep->declBus(c+46,"inst", false,-1, 31,0);
    tracep->declBus(c+47,"pc", false,-1, 31,0);
    tracep->declBus(c+48,"AddrMem", false,-1, 31,0);
    tracep->declBus(c+49,"DataToMem", false,-1, 31,0);
    tracep->declBit(c+50,"MemWrite", false,-1);
    tracep->declBit(c+51,"PCSrc", false,-1);
    tracep->declBus(c+52,"tnpc", false,-1, 31,0);
    tracep->declBit(c+6,"Zero", false,-1);
    tracep->declBus(c+53,"ResSrc", false,-1, 1,0);
    tracep->declBus(c+54,"ALUCtrl", false,-1, 2,0);
    tracep->declBit(c+55,"ALUSrc", false,-1);
    tracep->declBus(c+56,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+57,"RegWrite", false,-1);
    tracep->declBus(c+7,"Result", false,-1, 31,0);
    tracep->declBus(c+58,"src1", false,-1, 31,0);
    tracep->declBus(c+49,"src2", false,-1, 31,0);
    tracep->declBus(c+59,"ImmExt", false,-1, 31,0);
    tracep->declBus(c+60,"srcb", false,-1, 31,0);
    tracep->declBus(c+8,"ALURes", false,-1, 31,0);
    tracep->declBus(c+61,"PCplus4", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_ALU ");
    tracep->declBus(c+98,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+58,"srca", false,-1, 31,0);
    tracep->declBus(c+60,"srcb", false,-1, 31,0);
    tracep->declBus(c+54,"ALUCtrl", false,-1, 2,0);
    tracep->declBus(c+8,"ALURes", false,-1, 31,0);
    tracep->declBit(c+6,"Zero", false,-1);
    tracep->declBus(c+62,"adder_Res", false,-1, 31,0);
    tracep->pushNamePrefix("ysyx_ALU_adder ");
    tracep->declBus(c+98,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+58,"srca", false,-1, 31,0);
    tracep->declBus(c+60,"srcb", false,-1, 31,0);
    tracep->declBus(c+62,"Res", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_ALUSrc_MuxKey ");
    tracep->declBus(c+99,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+100,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+98,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+60,"out", false,-1, 31,0);
    tracep->declBus(c+55,"key", false,-1, 0,0);
    tracep->declBus(c+101,"default_out", false,-1, 31,0);
    tracep->declArray(c+63,"lut", false,-1, 65,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+99,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+100,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+98,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+100,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+60,"out", false,-1, 31,0);
    tracep->declBus(c+55,"key", false,-1, 0,0);
    tracep->declBus(c+101,"default_out", false,-1, 31,0);
    tracep->declArray(c+63,"lut", false,-1, 65,0);
    tracep->declBus(c+102,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+66+i*2,"pair_list", true,(i+0), 32,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+70+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+72,"lut_out", false,-1, 31,0);
    tracep->declBit(c+73,"hit", false,-1);
    tracep->declBus(c+103,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_Extend ");
    tracep->declBus(c+74,"inst", false,-1, 31,7);
    tracep->declBus(c+56,"ImmSrc", false,-1, 2,0);
    tracep->declBus(c+59,"ImmExt", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_IDU ");
    tracep->declBus(c+75,"opcode", false,-1, 6,0);
    tracep->declBus(c+76,"funt3", false,-1, 2,0);
    tracep->declBus(c+77,"funt7", false,-1, 6,0);
    tracep->declBit(c+6,"Zero", false,-1);
    tracep->declBit(c+51,"PCSrc", false,-1);
    tracep->declBus(c+53,"ResSrc", false,-1, 1,0);
    tracep->declBit(c+50,"MemWrite", false,-1);
    tracep->declBus(c+54,"ALUCtrl", false,-1, 2,0);
    tracep->declBit(c+55,"ALUSrc", false,-1);
    tracep->declBus(c+56,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+57,"RegWrite", false,-1);
    tracep->declBus(c+78,"controls", false,-1, 11,0);
    tracep->declBit(c+79,"Branch", false,-1);
    tracep->declBus(c+80,"ALUop", false,-1, 1,0);
    tracep->declBit(c+81,"Jump", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_IFU ");
    tracep->declBit(c+43,"clk", false,-1);
    tracep->declBit(c+44,"rst", false,-1);
    tracep->declBit(c+51,"PCSrc", false,-1);
    tracep->declBus(c+52,"tnpc", false,-1, 31,0);
    tracep->declBus(c+47,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_PCTarget ");
    tracep->declBus(c+98,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+47,"srca", false,-1, 31,0);
    tracep->declBus(c+59,"srcb", false,-1, 31,0);
    tracep->declBus(c+52,"Res", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_PCplus4 ");
    tracep->declBus(c+98,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+47,"srca", false,-1, 31,0);
    tracep->declBus(c+104,"srcb", false,-1, 31,0);
    tracep->declBus(c+61,"Res", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_RegFile ");
    tracep->declBit(c+43,"clk", false,-1);
    tracep->declBus(c+82,"rs1", false,-1, 4,0);
    tracep->declBus(c+83,"rs2", false,-1, 4,0);
    tracep->declBus(c+84,"rd", false,-1, 4,0);
    tracep->declBus(c+7,"dest", false,-1, 31,0);
    tracep->declBit(c+57,"RegWrite", false,-1);
    tracep->declBus(c+58,"src1", false,-1, 31,0);
    tracep->declBus(c+49,"src2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+11+i*1,"x", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_ResSrc ");
    tracep->declBus(c+105,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+99,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+98,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+7,"out", false,-1, 31,0);
    tracep->declBus(c+53,"key", false,-1, 1,0);
    tracep->declBus(c+101,"default_out", false,-1, 31,0);
    tracep->declArray(c+85,"lut", false,-1, 101,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+105,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+99,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+98,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+100,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+7,"out", false,-1, 31,0);
    tracep->declBus(c+53,"key", false,-1, 1,0);
    tracep->declBus(c+101,"default_out", false,-1, 31,0);
    tracep->declArray(c+85,"lut", false,-1, 101,0);
    tracep->declBus(c+106,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+89+i*2,"pair_list", true,(i+0), 33,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+3+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+95+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+9,"lut_out", false,-1, 31,0);
    tracep->declBit(c+10,"hit", false,-1);
    tracep->declBus(c+107,"i", false,-1, 31,0);
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
    VlWide<3>/*95:0*/ __Vtemp_ha37214ae__0;
    VlWide<4>/*127:0*/ __Vtemp_h4be6de5b__0;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+2,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__key_list[1]));
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__key_list[2]),2);
    bufp->fullBit(oldp+6,((0U == vlSelf->top__DOT__ysyx_core__DOT__ALURes)));
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__ysyx_core__DOT__Result),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__ysyx_core__DOT__ALURes),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+10,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+11,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[0]),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[1]),32);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[2]),32);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[3]),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[4]),32);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[5]),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[6]),32);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[7]),32);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[8]),32);
    bufp->fullIData(oldp+20,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[9]),32);
    bufp->fullIData(oldp+21,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[10]),32);
    bufp->fullIData(oldp+22,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[11]),32);
    bufp->fullIData(oldp+23,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[12]),32);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[13]),32);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[14]),32);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[15]),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[16]),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[17]),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[18]),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[19]),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[20]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[21]),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[22]),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[23]),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[24]),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[25]),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[26]),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[27]),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[28]),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[29]),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[30]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[31]),32);
    bufp->fullBit(oldp+43,(vlSelf->clk));
    bufp->fullBit(oldp+44,(vlSelf->rst));
    bufp->fullIData(oldp+45,(vlSelf->DataFromMem),32);
    bufp->fullIData(oldp+46,(vlSelf->inst),32);
    bufp->fullIData(oldp+47,(vlSelf->pc),32);
    bufp->fullIData(oldp+48,(vlSelf->AddrMem),32);
    bufp->fullIData(oldp+49,(vlSelf->DataToMem),32);
    bufp->fullBit(oldp+50,(vlSelf->MemWrite));
    bufp->fullBit(oldp+51,((1U & (((((0x13U == (0x7fU 
                                                & vlSelf->inst))
                                      ? 0x880U : 0U) 
                                    >> 3U) & (0U == vlSelf->top__DOT__ysyx_core__DOT__ALURes)) 
                                  | ((0x13U == (0x7fU 
                                                & vlSelf->inst))
                                      ? 0x880U : 0U)))));
    bufp->fullIData(oldp+52,((vlSelf->pc + vlSelf->top__DOT__ysyx_core__DOT__ImmExt)),32);
    bufp->fullCData(oldp+53,((3U & (((0x13U == (0x7fU 
                                                & vlSelf->inst))
                                      ? 0x880U : 0U) 
                                    >> 4U))),2);
    bufp->fullCData(oldp+54,(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl),3);
    bufp->fullBit(oldp+55,((1U & (((0x13U == (0x7fU 
                                              & vlSelf->inst))
                                    ? 0x880U : 0U) 
                                  >> 7U))));
    bufp->fullCData(oldp+56,((7U & (((0x13U == (0x7fU 
                                                & vlSelf->inst))
                                      ? 0x880U : 0U) 
                                    >> 8U))),3);
    bufp->fullBit(oldp+57,((1U & (((0x13U == (0x7fU 
                                              & vlSelf->inst))
                                    ? 0x880U : 0U) 
                                  >> 0xbU))));
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x
                             [(0x1fU & (vlSelf->inst 
                                        >> 0xfU))]),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__ysyx_core__DOT__ImmExt),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__ysyx_core__DOT__srcb),32);
    bufp->fullIData(oldp+61,(((IData)(4U) + vlSelf->pc)),32);
    bufp->fullIData(oldp+62,((vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x
                              [(0x1fU & (vlSelf->inst 
                                         >> 0xfU))] 
                              + vlSelf->top__DOT__ysyx_core__DOT__srcb)),32);
    __Vtemp_ha37214ae__0[0U] = (IData)((0x100000000ULL 
                                        | (QData)((IData)(vlSelf->top__DOT__ysyx_core__DOT__ImmExt))));
    __Vtemp_ha37214ae__0[1U] = ((vlSelf->DataToMem 
                                 << 1U) | (IData)((
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(vlSelf->top__DOT__ysyx_core__DOT__ImmExt))) 
                                                   >> 0x20U)));
    __Vtemp_ha37214ae__0[2U] = (vlSelf->DataToMem >> 0x1fU);
    bufp->fullWData(oldp+63,(__Vtemp_ha37214ae__0),66);
    bufp->fullQData(oldp+66,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+68,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+73,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+74,((vlSelf->inst >> 7U)),25);
    bufp->fullCData(oldp+75,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+76,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+77,((vlSelf->inst >> 0x19U)),7);
    bufp->fullSData(oldp+78,(((0x13U == (0x7fU & vlSelf->inst))
                               ? 0x880U : 0U)),12);
    bufp->fullBit(oldp+79,((1U & (((0x13U == (0x7fU 
                                              & vlSelf->inst))
                                    ? 0x880U : 0U) 
                                  >> 3U))));
    bufp->fullCData(oldp+80,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__ALUop),2);
    bufp->fullBit(oldp+81,(0U));
    bufp->fullCData(oldp+82,((0x1fU & (vlSelf->inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+83,((0x1fU & (vlSelf->inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+84,((0x1fU & (vlSelf->inst 
                                       >> 7U))),5);
    __Vtemp_h4be6de5b__0[0U] = (IData)((0x200000000ULL 
                                        | (QData)((IData)(
                                                          ((IData)(4U) 
                                                           + vlSelf->pc)))));
    __Vtemp_h4be6de5b__0[1U] = ((vlSelf->DataFromMem 
                                 << 2U) | (IData)((
                                                   (0x200000000ULL 
                                                    | (QData)((IData)(
                                                                      ((IData)(4U) 
                                                                       + vlSelf->pc)))) 
                                                   >> 0x20U)));
    __Vtemp_h4be6de5b__0[2U] = (4U | ((vlSelf->top__DOT__ysyx_core__DOT__ALURes 
                                       << 4U) | (vlSelf->DataFromMem 
                                                 >> 0x1eU)));
    __Vtemp_h4be6de5b__0[3U] = (vlSelf->top__DOT__ysyx_core__DOT__ALURes 
                                >> 0x1cU);
    bufp->fullWData(oldp+85,(__Vtemp_h4be6de5b__0),102);
    bufp->fullQData(oldp+89,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[0]),34);
    bufp->fullQData(oldp+91,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[1]),34);
    bufp->fullQData(oldp+93,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[2]),34);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+98,(0x20U),32);
    bufp->fullIData(oldp+99,(2U),32);
    bufp->fullIData(oldp+100,(1U),32);
    bufp->fullIData(oldp+101,(0U),32);
    bufp->fullIData(oldp+102,(0x21U),32);
    bufp->fullIData(oldp+103,(2U),32);
    bufp->fullIData(oldp+104,(4U),32);
    bufp->fullIData(oldp+105,(3U),32);
    bufp->fullIData(oldp+106,(0x22U),32);
    bufp->fullIData(oldp+107,(3U),32);
}
