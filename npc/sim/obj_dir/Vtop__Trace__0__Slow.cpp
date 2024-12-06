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
    tracep->declBit(c+217,"clk", false,-1);
    tracep->declBit(c+218,"rst", false,-1);
    tracep->declBus(c+219,"inst", false,-1, 31,0);
    tracep->declQuad(c+220,"pc", false,-1, 63,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+240,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+217,"clk", false,-1);
    tracep->declBit(c+218,"rst", false,-1);
    tracep->declBus(c+219,"inst", false,-1, 31,0);
    tracep->declQuad(c+220,"pc", false,-1, 63,0);
    tracep->pushNamePrefix("ysyx_core ");
    tracep->declBus(c+240,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+241,"INST_WIDTH", false,-1, 31,0);
    tracep->declBit(c+217,"clk", false,-1);
    tracep->declBit(c+218,"rst", false,-1);
    tracep->declBus(c+219,"inst", false,-1, 31,0);
    tracep->declQuad(c+220,"pc", false,-1, 63,0);
    tracep->declBit(c+10,"PCSrc", false,-1);
    tracep->declQuad(c+11,"tnpc", false,-1, 63,0);
    tracep->declBit(c+13,"Zero", false,-1);
    tracep->declBus(c+14,"ResSrc", false,-1, 2,0);
    tracep->declBus(c+15,"ALUCtrl", false,-1, 4,0);
    tracep->declBit(c+16,"ALUSrc", false,-1);
    tracep->declBus(c+17,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+18,"RegWrite", false,-1);
    tracep->declQuad(c+19,"src1", false,-1, 63,0);
    tracep->declQuad(c+21,"src2", false,-1, 63,0);
    tracep->declQuad(c+23,"ImmExt", false,-1, 63,0);
    tracep->declQuad(c+25,"srcb", false,-1, 63,0);
    tracep->declQuad(c+27,"ALURes", false,-1, 63,0);
    tracep->declQuad(c+29,"Result", false,-1, 63,0);
    tracep->declQuad(c+222,"PCplus4", false,-1, 63,0);
    tracep->declQuad(c+31,"PCTarget_srca", false,-1, 63,0);
    tracep->declBit(c+33,"PCTarget_srca_key", false,-1);
    tracep->declQuad(c+27,"AddrMem", false,-1, 63,0);
    tracep->declQuad(c+21,"DataToMem", false,-1, 63,0);
    tracep->declBit(c+34,"MemWrite", false,-1);
    tracep->declQuad(c+35,"DataFromMem", false,-1, 63,0);
    tracep->declBus(c+37,"Wmask", false,-1, 7,0);
    tracep->declBit(c+38,"dw", false,-1);
    tracep->pushNamePrefix("ysyx_ALU ");
    tracep->declBus(c+240,"DATA_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+19,"srca", false,-1, 63,0);
    tracep->declQuad(c+25,"srcb", false,-1, 63,0);
    tracep->declBus(c+15,"ALUCtrl", false,-1, 4,0);
    tracep->declBit(c+38,"dw", false,-1);
    tracep->declQuad(c+27,"ALURes", false,-1, 63,0);
    tracep->declBit(c+13,"Zero", false,-1);
    tracep->declQuad(c+39,"adder_Res", false,-1, 63,0);
    tracep->declQuad(c+41,"srcb_inv", false,-1, 63,0);
    tracep->declQuad(c+43,"ALURes_temp", false,-1, 63,0);
    tracep->declBus(c+45,"shamt", false,-1, 5,0);
    tracep->declQuad(c+46,"shin_sra", false,-1, 63,0);
    tracep->declQuad(c+48,"shin_srl", false,-1, 63,0);
    tracep->declQuad(c+50,"sra_res", false,-1, 63,0);
    tracep->declQuad(c+52,"srl_res", false,-1, 63,0);
    tracep->declQuad(c+54,"sll_res", false,-1, 63,0);
    tracep->declQuad(c+56,"xor_res", false,-1, 63,0);
    tracep->declQuad(c+58,"and_res", false,-1, 63,0);
    tracep->declQuad(c+60,"slt_res", false,-1, 63,0);
    tracep->declQuad(c+62,"sltu_res", false,-1, 63,0);
    tracep->declQuad(c+64,"mul_res", false,-1, 63,0);
    tracep->declBus(c+66,"divw_res", false,-1, 31,0);
    tracep->declQuad(c+67,"div_res", false,-1, 63,0);
    tracep->declBus(c+69,"remw_res", false,-1, 31,0);
    tracep->declQuad(c+70,"rem_res", false,-1, 63,0);
    tracep->pushNamePrefix("ysyx_ALU_adder ");
    tracep->declBus(c+240,"DATA_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+19,"srca", false,-1, 63,0);
    tracep->declQuad(c+41,"srcb", false,-1, 63,0);
    tracep->declQuad(c+39,"Res", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_ALUSrc_MuxKey ");
    tracep->declBus(c+242,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+243,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+240,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+25,"out", false,-1, 63,0);
    tracep->declBus(c+16,"key", false,-1, 0,0);
    tracep->declQuad(c+244,"default_out", false,-1, 63,0);
    tracep->declArray(c+72,"lut", false,-1, 129,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+242,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+243,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+240,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+243,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+25,"out", false,-1, 63,0);
    tracep->declBus(c+16,"key", false,-1, 0,0);
    tracep->declQuad(c+244,"default_out", false,-1, 63,0);
    tracep->declArray(c+72,"lut", false,-1, 129,0);
    tracep->declBus(c+246,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+77+i*3,"pair_list", true,(i+0), 64,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+83+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+87,"lut_out", false,-1, 63,0);
    tracep->declBit(c+89,"hit", false,-1);
    tracep->declBus(c+247,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_Extend ");
    tracep->declBus(c+240,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+90,"inst", false,-1, 31,7);
    tracep->declBus(c+17,"ImmSrc", false,-1, 2,0);
    tracep->declQuad(c+23,"ImmExt", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_IDU ");
    tracep->declBus(c+91,"opcode", false,-1, 6,0);
    tracep->declBus(c+92,"funt3", false,-1, 2,0);
    tracep->declBus(c+93,"funt7", false,-1, 6,0);
    tracep->declBit(c+13,"Zero", false,-1);
    tracep->declBit(c+10,"PCSrc", false,-1);
    tracep->declBus(c+14,"ResSrc", false,-1, 2,0);
    tracep->declBit(c+34,"MemWrite", false,-1);
    tracep->declBus(c+15,"ALUCtrl", false,-1, 4,0);
    tracep->declBit(c+16,"ALUSrc", false,-1);
    tracep->declBus(c+17,"ImmSrc", false,-1, 2,0);
    tracep->declBit(c+33,"PCTarget_srca_key", false,-1);
    tracep->declBit(c+18,"RegWrite", false,-1);
    tracep->declBus(c+37,"Wmask", false,-1, 7,0);
    tracep->declBit(c+38,"dw", false,-1);
    tracep->declBus(c+94,"controls", false,-1, 12,0);
    tracep->declBit(c+95,"Branch", false,-1);
    tracep->declBus(c+96,"ALUop", false,-1, 1,0);
    tracep->declBit(c+97,"Jump", false,-1);
    tracep->declBit(c+33,"is_jalr", false,-1);
    tracep->declBit(c+98,"BranchHit", false,-1);
    tracep->declBit(c+99,"RtypeSub", false,-1);
    tracep->declBit(c+100,"RtypeMul", false,-1);
    tracep->declBit(c+100,"RtypeDiv", false,-1);
    tracep->declBit(c+101,"shif_ari", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_IFU ");
    tracep->declBus(c+240,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+217,"clk", false,-1);
    tracep->declBit(c+218,"rst", false,-1);
    tracep->declBit(c+10,"PCSrc", false,-1);
    tracep->declQuad(c+11,"tnpc", false,-1, 63,0);
    tracep->declQuad(c+222,"snpc", false,-1, 63,0);
    tracep->declBus(c+219,"inst", false,-1, 31,0);
    tracep->declQuad(c+220,"pc", false,-1, 63,0);
    tracep->declBus(c+102,"DPI_DataFromMem", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_LSU ");
    tracep->declBus(c+240,"DATA_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+27,"AddrMem", false,-1, 63,0);
    tracep->declBus(c+37,"Wmask", false,-1, 7,0);
    tracep->declQuad(c+21,"DataToMem", false,-1, 63,0);
    tracep->declBit(c+34,"MemWrite", false,-1);
    tracep->declBit(c+103,"funt3_2", false,-1);
    tracep->declQuad(c+35,"DataFromMem", false,-1, 63,0);
    tracep->declQuad(c+104,"Wmask64", false,-1, 63,0);
    tracep->declQuad(c+106,"DPI_DataFromMem", false,-1, 63,0);
    tracep->declQuad(c+106,"TEMP_DataFromMem", false,-1, 63,0);
    tracep->declBit(c+108,"sig", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_PCTarget ");
    tracep->declBus(c+240,"DATA_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+31,"srca", false,-1, 63,0);
    tracep->declQuad(c+23,"srcb", false,-1, 63,0);
    tracep->declQuad(c+11,"Res", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_PCTarget_srca ");
    tracep->declBus(c+242,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+243,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+240,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+31,"out", false,-1, 63,0);
    tracep->declBus(c+33,"key", false,-1, 0,0);
    tracep->declQuad(c+244,"default_out", false,-1, 63,0);
    tracep->declArray(c+224,"lut", false,-1, 129,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+242,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+243,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+240,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+243,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+31,"out", false,-1, 63,0);
    tracep->declBus(c+33,"key", false,-1, 0,0);
    tracep->declQuad(c+244,"default_out", false,-1, 63,0);
    tracep->declArray(c+224,"lut", false,-1, 129,0);
    tracep->declBus(c+246,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+109+i*3,"pair_list", true,(i+0), 64,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+3+i*1,"key_list", true,(i+0), 0,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+115+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+119,"lut_out", false,-1, 63,0);
    tracep->declBit(c+121,"hit", false,-1);
    tracep->declBus(c+247,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("ysyx_PCplus4 ");
    tracep->declBus(c+240,"DATA_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+220,"srca", false,-1, 63,0);
    tracep->declQuad(c+248,"srcb", false,-1, 63,0);
    tracep->declQuad(c+222,"Res", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_RegFile ");
    tracep->declBus(c+240,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+250,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+241,"REG_NUM", false,-1, 31,0);
    tracep->declBit(c+217,"clk", false,-1);
    tracep->declBus(c+122,"rs1", false,-1, 4,0);
    tracep->declBus(c+123,"rs2", false,-1, 4,0);
    tracep->declBus(c+124,"rd", false,-1, 4,0);
    tracep->declQuad(c+29,"dest", false,-1, 63,0);
    tracep->declBit(c+18,"RegWrite", false,-1);
    tracep->declQuad(c+19,"src1", false,-1, 63,0);
    tracep->declQuad(c+21,"src2", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+125+i*2,"x", true,(i+0), 63,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ysyx_ResSrc ");
    tracep->declBus(c+250,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+251,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+240,"DATA_LEN", false,-1, 31,0);
    tracep->declQuad(c+29,"out", false,-1, 63,0);
    tracep->declBus(c+14,"key", false,-1, 2,0);
    tracep->declQuad(c+244,"default_out", false,-1, 63,0);
    tracep->declArray(c+229,"lut", false,-1, 334,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+250,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+251,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+240,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+243,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declQuad(c+29,"out", false,-1, 63,0);
    tracep->declBus(c+14,"key", false,-1, 2,0);
    tracep->declQuad(c+244,"default_out", false,-1, 63,0);
    tracep->declArray(c+229,"lut", false,-1, 334,0);
    tracep->declBus(c+252,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declArray(c+189+i*3,"pair_list", true,(i+0), 66,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+5+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+204+i*2,"data_list", true,(i+0), 63,0);
    }
    tracep->declQuad(c+214,"lut_out", false,-1, 63,0);
    tracep->declBit(c+216,"hit", false,-1);
    tracep->declBus(c+253,"i", false,-1, 31,0);
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
    bufp->fullBit(oldp+10,((1U & ((((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                    >> 3U) & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__BranchHit)) 
                                  | (IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls)))));
    bufp->fullQData(oldp+11,(vlSelf->top__DOT__ysyx_core__DOT__tnpc),64);
    bufp->fullBit(oldp+13,(((1U == (IData)(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl))
                             ? (0ULL == vlSelf->top__DOT__ysyx_core__DOT__ALURes)
                             : ((3U == (IData)(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl))
                                 ? (IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT____VdfgTmp_h30e473f3__0)
                                 : ((4U == (IData)(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl)) 
                                    & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT____VdfgTmp_h30e9c121__0))))));
    bufp->fullCData(oldp+14,((7U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                    >> 4U))),3);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl),5);
    bufp->fullBit(oldp+16,((1U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                  >> 8U))));
    bufp->fullCData(oldp+17,((7U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                    >> 9U))),3);
    bufp->fullBit(oldp+18,((1U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                  >> 0xcU))));
    bufp->fullQData(oldp+19,(vlSelf->top__DOT__ysyx_core__DOT__src1),64);
    bufp->fullQData(oldp+21,(vlSelf->top__DOT__ysyx_core__DOT__src2),64);
    bufp->fullQData(oldp+23,(vlSelf->top__DOT__ysyx_core__DOT__ImmExt),64);
    bufp->fullQData(oldp+25,(vlSelf->top__DOT__ysyx_core__DOT__srcb),64);
    bufp->fullQData(oldp+27,(vlSelf->top__DOT__ysyx_core__DOT__ALURes),64);
    bufp->fullQData(oldp+29,(vlSelf->top__DOT__ysyx_core__DOT__Result),64);
    bufp->fullQData(oldp+31,(vlSelf->top__DOT__ysyx_core__DOT__PCTarget_srca),64);
    bufp->fullBit(oldp+33,((IData)((0x67U == (0x707fU 
                                              & vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem)))));
    bufp->fullBit(oldp+34,((1U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                  >> 7U))));
    bufp->fullQData(oldp+35,(vlSelf->top__DOT__ysyx_core__DOT__DataFromMem),64);
    bufp->fullCData(oldp+37,(vlSelf->top__DOT__ysyx_core__DOT__Wmask),8);
    bufp->fullBit(oldp+38,(vlSelf->top__DOT__ysyx_core__DOT__dw));
    bufp->fullQData(oldp+39,((vlSelf->top__DOT__ysyx_core__DOT__src1 
                              + ((1U & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl))
                                  ? (1ULL + (~ vlSelf->top__DOT__ysyx_core__DOT__srcb))
                                  : vlSelf->top__DOT__ysyx_core__DOT__srcb))),64);
    bufp->fullQData(oldp+41,(((1U & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ALUCtrl))
                               ? (1ULL + (~ vlSelf->top__DOT__ysyx_core__DOT__srcb))
                               : vlSelf->top__DOT__ysyx_core__DOT__srcb)),64);
    bufp->fullQData(oldp+43,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT__ALURes_temp),64);
    bufp->fullCData(oldp+45,((0x3fU & (IData)(vlSelf->top__DOT__ysyx_core__DOT__srcb))),6);
    bufp->fullQData(oldp+46,(((IData)(vlSelf->top__DOT__ysyx_core__DOT__dw)
                               ? (((QData)((IData)(
                                                   (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__ysyx_core__DOT__src1 
                                                                          >> 0x1fU))))))) 
                                   << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_core__DOT__src1)))
                               : vlSelf->top__DOT__ysyx_core__DOT__src1)),64);
    bufp->fullQData(oldp+48,(((IData)(vlSelf->top__DOT__ysyx_core__DOT__dw)
                               ? (QData)((IData)(vlSelf->top__DOT__ysyx_core__DOT__src1))
                               : vlSelf->top__DOT__ysyx_core__DOT__src1)),64);
    bufp->fullQData(oldp+50,(VL_SHIFTRS_QQI(64,64,6, 
                                            ((IData)(vlSelf->top__DOT__ysyx_core__DOT__dw)
                                              ? (((QData)((IData)(
                                                                  (- (IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->top__DOT__ysyx_core__DOT__src1 
                                                                                >> 0x1fU))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->top__DOT__ysyx_core__DOT__src1)))
                                              : vlSelf->top__DOT__ysyx_core__DOT__src1), 
                                            (0x3fU 
                                             & (IData)(vlSelf->top__DOT__ysyx_core__DOT__srcb)))),64);
    bufp->fullQData(oldp+52,((((IData)(vlSelf->top__DOT__ysyx_core__DOT__dw)
                                ? (QData)((IData)(vlSelf->top__DOT__ysyx_core__DOT__src1))
                                : vlSelf->top__DOT__ysyx_core__DOT__src1) 
                              >> (0x3fU & (IData)(vlSelf->top__DOT__ysyx_core__DOT__srcb)))),64);
    bufp->fullQData(oldp+54,((vlSelf->top__DOT__ysyx_core__DOT__src1 
                              << (0x3fU & (IData)(vlSelf->top__DOT__ysyx_core__DOT__srcb)))),64);
    bufp->fullQData(oldp+56,((vlSelf->top__DOT__ysyx_core__DOT__src1 
                              ^ vlSelf->top__DOT__ysyx_core__DOT__srcb)),64);
    bufp->fullQData(oldp+58,((vlSelf->top__DOT__ysyx_core__DOT__src1 
                              & vlSelf->top__DOT__ysyx_core__DOT__srcb)),64);
    bufp->fullQData(oldp+60,(((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT____VdfgTmp_h30e473f3__0)
                               ? 1ULL : 0ULL)),64);
    bufp->fullQData(oldp+62,(((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT____VdfgTmp_h30e9c121__0)
                               ? 1ULL : 0ULL)),64);
    bufp->fullQData(oldp+64,((vlSelf->top__DOT__ysyx_core__DOT__src1 
                              * vlSelf->top__DOT__ysyx_core__DOT__srcb)),64);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT__divw_res),32);
    bufp->fullQData(oldp+67,((((QData)((IData)((- (IData)(
                                                          (vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT__divw_res 
                                                           >> 0x1fU))))) 
                               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT__divw_res)))),64);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT__remw_res),32);
    bufp->fullQData(oldp+70,((((QData)((IData)((- (IData)(
                                                          (vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT__remw_res 
                                                           >> 0x1fU))))) 
                               << 0x20U) | (QData)((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALU__DOT__remw_res)))),64);
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
    bufp->fullWData(oldp+72,(__Vtemp_h84e36b2d__0),130);
    bufp->fullWData(oldp+77,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__pair_list[0]),65);
    bufp->fullWData(oldp+80,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__pair_list[1]),65);
    bufp->fullQData(oldp+83,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list[0]),64);
    bufp->fullQData(oldp+85,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__data_list[1]),64);
    bufp->fullQData(oldp+87,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__lut_out),64);
    bufp->fullBit(oldp+89,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ALUSrc_MuxKey__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+90,((vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                              >> 7U)),25);
    bufp->fullCData(oldp+91,((0x7fU & vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem)),7);
    bufp->fullCData(oldp+92,((7U & (vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+93,((vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                              >> 0x19U)),7);
    bufp->fullSData(oldp+94,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls),13);
    bufp->fullBit(oldp+95,((1U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                  >> 3U))));
    bufp->fullCData(oldp+96,((3U & ((IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls) 
                                    >> 1U))),2);
    bufp->fullBit(oldp+97,((1U & (IData)(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__controls))));
    bufp->fullBit(oldp+98,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__BranchHit));
    bufp->fullBit(oldp+99,((IData)((0x40000020U == 
                                    (0x40000020U & vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem)))));
    bufp->fullBit(oldp+100,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IDU__DOT__RtypeMul));
    bufp->fullBit(oldp+101,((1U & (vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                                   >> 0x1eU))));
    bufp->fullIData(oldp+102,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem),32);
    bufp->fullBit(oldp+103,((1U & (vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                                   >> 0xeU))));
    bufp->fullQData(oldp+104,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_LSU__DOT__Wmask64),64);
    bufp->fullQData(oldp+106,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_LSU__DOT__DPI_DataFromMem),64);
    bufp->fullBit(oldp+108,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_LSU__DOT__sig));
    bufp->fullWData(oldp+109,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__pair_list[0]),65);
    bufp->fullWData(oldp+112,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__pair_list[1]),65);
    bufp->fullQData(oldp+115,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__data_list[0]),64);
    bufp->fullQData(oldp+117,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__data_list[1]),64);
    bufp->fullQData(oldp+119,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__lut_out),64);
    bufp->fullBit(oldp+121,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_PCTarget_srca__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+122,((0x1fU & (vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+123,((0x1fU & (vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+124,((0x1fU & (vlSelf->top__DOT__ysyx_core__DOT__ysyx_IFU__DOT__DPI_DataFromMem 
                                        >> 7U))),5);
    bufp->fullQData(oldp+125,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[0]),64);
    bufp->fullQData(oldp+127,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[1]),64);
    bufp->fullQData(oldp+129,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[2]),64);
    bufp->fullQData(oldp+131,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[3]),64);
    bufp->fullQData(oldp+133,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[4]),64);
    bufp->fullQData(oldp+135,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[5]),64);
    bufp->fullQData(oldp+137,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[6]),64);
    bufp->fullQData(oldp+139,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[7]),64);
    bufp->fullQData(oldp+141,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[8]),64);
    bufp->fullQData(oldp+143,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[9]),64);
    bufp->fullQData(oldp+145,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[10]),64);
    bufp->fullQData(oldp+147,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[11]),64);
    bufp->fullQData(oldp+149,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[12]),64);
    bufp->fullQData(oldp+151,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[13]),64);
    bufp->fullQData(oldp+153,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[14]),64);
    bufp->fullQData(oldp+155,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[15]),64);
    bufp->fullQData(oldp+157,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[16]),64);
    bufp->fullQData(oldp+159,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[17]),64);
    bufp->fullQData(oldp+161,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[18]),64);
    bufp->fullQData(oldp+163,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[19]),64);
    bufp->fullQData(oldp+165,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[20]),64);
    bufp->fullQData(oldp+167,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[21]),64);
    bufp->fullQData(oldp+169,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[22]),64);
    bufp->fullQData(oldp+171,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[23]),64);
    bufp->fullQData(oldp+173,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[24]),64);
    bufp->fullQData(oldp+175,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[25]),64);
    bufp->fullQData(oldp+177,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[26]),64);
    bufp->fullQData(oldp+179,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[27]),64);
    bufp->fullQData(oldp+181,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[28]),64);
    bufp->fullQData(oldp+183,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[29]),64);
    bufp->fullQData(oldp+185,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[30]),64);
    bufp->fullQData(oldp+187,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_RegFile__DOT__x[31]),64);
    bufp->fullWData(oldp+189,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[0]),67);
    bufp->fullWData(oldp+192,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[1]),67);
    bufp->fullWData(oldp+195,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[2]),67);
    bufp->fullWData(oldp+198,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[3]),67);
    bufp->fullWData(oldp+201,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__pair_list[4]),67);
    bufp->fullQData(oldp+204,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[0]),64);
    bufp->fullQData(oldp+206,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[1]),64);
    bufp->fullQData(oldp+208,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[2]),64);
    bufp->fullQData(oldp+210,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[3]),64);
    bufp->fullQData(oldp+212,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__data_list[4]),64);
    bufp->fullQData(oldp+214,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__lut_out),64);
    bufp->fullBit(oldp+216,(vlSelf->top__DOT__ysyx_core__DOT__ysyx_ResSrc__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+217,(vlSelf->clk));
    bufp->fullBit(oldp+218,(vlSelf->rst));
    bufp->fullIData(oldp+219,(vlSelf->inst),32);
    bufp->fullQData(oldp+220,(vlSelf->pc),64);
    bufp->fullQData(oldp+222,((4ULL + vlSelf->pc)),64);
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
    bufp->fullWData(oldp+224,(__Vtemp_h49dee185__0),130);
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
    bufp->fullWData(oldp+229,(__Vtemp_h4e4ad826__0),335);
    bufp->fullIData(oldp+240,(0x40U),32);
    bufp->fullIData(oldp+241,(0x20U),32);
    bufp->fullIData(oldp+242,(2U),32);
    bufp->fullIData(oldp+243,(1U),32);
    bufp->fullQData(oldp+244,(0ULL),64);
    bufp->fullIData(oldp+246,(0x41U),32);
    bufp->fullIData(oldp+247,(2U),32);
    bufp->fullQData(oldp+248,(4ULL),64);
    bufp->fullIData(oldp+250,(5U),32);
    bufp->fullIData(oldp+251,(3U),32);
    bufp->fullIData(oldp+252,(0x43U),32);
    bufp->fullIData(oldp+253,(5U),32);
}
