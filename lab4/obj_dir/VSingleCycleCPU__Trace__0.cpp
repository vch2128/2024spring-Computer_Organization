// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSingleCycleCPU__Syms.h"


void VSingleCycleCPU___024root__trace_chg_sub_0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VSingleCycleCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_chg_top_0\n"); );
    // Init
    VSingleCycleCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingleCycleCPU___024root*>(voidSelf);
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSingleCycleCPU___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VSingleCycleCPU___024root__trace_chg_sub_0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->SingleCycleCPU__DOT__imm),32);
        bufp->chgIData(oldp+1,((vlSelf->SingleCycleCPU__DOT__immEX 
                                << 1U)),32);
        bufp->chgIData(oldp+2,((((IData)(vlSelf->SingleCycleCPU__DOT__addrSrcAEX)
                                  ? vlSelf->SingleCycleCPU__DOT__dataR1EX
                                  : vlSelf->SingleCycleCPU__DOT__PCEX) 
                                + ((IData)(vlSelf->SingleCycleCPU__DOT__addrSrcBEX)
                                    ? vlSelf->SingleCycleCPU__DOT__immEX
                                    : (vlSelf->SingleCycleCPU__DOT__immEX 
                                       << 1U)))),32);
        bufp->chgIData(oldp+3,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                               [(0x1fU & (vlSelf->SingleCycleCPU__DOT__instID 
                                          >> 0xfU))]),32);
        bufp->chgIData(oldp+4,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                               [(0x1fU & (vlSelf->SingleCycleCPU__DOT__instID 
                                          >> 0x14U))]),32);
        bufp->chgIData(oldp+5,(((0U == (IData)(vlSelf->SingleCycleCPU__DOT__memtoRegWB))
                                 ? vlSelf->SingleCycleCPU__DOT__memDataWB
                                 : ((1U == (IData)(vlSelf->SingleCycleCPU__DOT__memtoRegWB))
                                     ? vlSelf->SingleCycleCPU__DOT__ALUWB
                                     : ((2U == (IData)(vlSelf->SingleCycleCPU__DOT__memtoRegWB))
                                         ? vlSelf->SingleCycleCPU__DOT__PCplus4WB
                                         : vlSelf->SingleCycleCPU__DOT__memDataWB)))),32);
        bufp->chgIData(oldp+6,(vlSelf->SingleCycleCPU__DOT__muxALUB),32);
        bufp->chgIData(oldp+7,(((IData)(vlSelf->SingleCycleCPU__DOT__addrSrcAEX)
                                 ? vlSelf->SingleCycleCPU__DOT__dataR1EX
                                 : vlSelf->SingleCycleCPU__DOT__PCEX)),32);
        bufp->chgIData(oldp+8,(((IData)(vlSelf->SingleCycleCPU__DOT__addrSrcBEX)
                                 ? vlSelf->SingleCycleCPU__DOT__immEX
                                 : (vlSelf->SingleCycleCPU__DOT__immEX 
                                    << 1U))),32);
        bufp->chgIData(oldp+9,(vlSelf->SingleCycleCPU__DOT__PCID),32);
        bufp->chgIData(oldp+10,(vlSelf->SingleCycleCPU__DOT__instID),32);
        bufp->chgIData(oldp+11,(vlSelf->SingleCycleCPU__DOT__PCEX),32);
        bufp->chgIData(oldp+12,(vlSelf->SingleCycleCPU__DOT__dataR1EX),32);
        bufp->chgIData(oldp+13,(vlSelf->SingleCycleCPU__DOT__dataR2EX),32);
        bufp->chgIData(oldp+14,(vlSelf->SingleCycleCPU__DOT__immEX),32);
        bufp->chgIData(oldp+15,(vlSelf->SingleCycleCPU__DOT__PCMEM),32);
        bufp->chgIData(oldp+16,(vlSelf->SingleCycleCPU__DOT__dataR2MEM),32);
        bufp->chgIData(oldp+17,(vlSelf->SingleCycleCPU__DOT__branchAddrMEM),32);
        bufp->chgIData(oldp+18,(((IData)(4U) + vlSelf->SingleCycleCPU__DOT__PCMEM)),32);
        bufp->chgIData(oldp+19,(vlSelf->SingleCycleCPU__DOT__PCplus4WB),32);
        bufp->chgIData(oldp+20,(vlSelf->SingleCycleCPU__DOT__memDataWB),32);
        bufp->chgIData(oldp+21,(vlSelf->SingleCycleCPU__DOT__ALUWB),32);
        bufp->chgCData(oldp+22,(vlSelf->SingleCycleCPU__DOT__ALUCtl),4);
        bufp->chgCData(oldp+23,(vlSelf->SingleCycleCPU__DOT__memtoRegEX),2);
        bufp->chgCData(oldp+24,(vlSelf->SingleCycleCPU__DOT__memtoRegMEM),2);
        bufp->chgCData(oldp+25,(vlSelf->SingleCycleCPU__DOT__memtoRegWB),2);
        bufp->chgCData(oldp+26,(vlSelf->SingleCycleCPU__DOT__ALUOpEX),3);
        bufp->chgBit(oldp+27,(((IData)(vlSelf->SingleCycleCPU__DOT__branchMEM) 
                               & (IData)(vlSelf->SingleCycleCPU__DOT__zeroMEM))));
        bufp->chgBit(oldp+28,(vlSelf->SingleCycleCPU__DOT__branchEX));
        bufp->chgBit(oldp+29,(vlSelf->SingleCycleCPU__DOT__memWriteEX));
        bufp->chgBit(oldp+30,(vlSelf->SingleCycleCPU__DOT__regWriteEX));
        bufp->chgBit(oldp+31,(vlSelf->SingleCycleCPU__DOT__ALUSrcBEX));
        bufp->chgBit(oldp+32,(vlSelf->SingleCycleCPU__DOT__addrSrcAEX));
        bufp->chgBit(oldp+33,(vlSelf->SingleCycleCPU__DOT__addrSrcBEX));
        bufp->chgBit(oldp+34,(vlSelf->SingleCycleCPU__DOT__branchMEM));
        bufp->chgBit(oldp+35,(vlSelf->SingleCycleCPU__DOT__memWriteMEM));
        bufp->chgBit(oldp+36,(vlSelf->SingleCycleCPU__DOT__regWriteMEM));
        bufp->chgBit(oldp+37,(vlSelf->SingleCycleCPU__DOT__zeroMEM));
        bufp->chgBit(oldp+38,(vlSelf->SingleCycleCPU__DOT__regWriteWB));
        bufp->chgCData(oldp+39,(vlSelf->SingleCycleCPU__DOT__instEX),5);
        bufp->chgCData(oldp+40,(vlSelf->SingleCycleCPU__DOT__instMEM),5);
        bufp->chgCData(oldp+41,(vlSelf->SingleCycleCPU__DOT__instWB),5);
        bufp->chgCData(oldp+42,(vlSelf->SingleCycleCPU__DOT__func7n3),4);
        bufp->chgCData(oldp+43,(((8U & (vlSelf->SingleCycleCPU__DOT__instID 
                                        >> 0x1bU)) 
                                 | (7U & (vlSelf->SingleCycleCPU__DOT__instID 
                                          >> 0xcU)))),4);
        bufp->chgCData(oldp+44,((0x1fU & (vlSelf->SingleCycleCPU__DOT__instID 
                                          >> 7U))),5);
        bufp->chgBit(oldp+45,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__func7n3) 
                                     >> 3U))));
        bufp->chgCData(oldp+46,((7U & (IData)(vlSelf->SingleCycleCPU__DOT__func7n3))),3);
        bufp->chgCData(oldp+47,((0x7fU & vlSelf->SingleCycleCPU__DOT__instID)),7);
        bufp->chgCData(oldp+48,((0x1fU & (vlSelf->SingleCycleCPU__DOT__instID 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+49,((0x1fU & (vlSelf->SingleCycleCPU__DOT__instID 
                                          >> 0x14U))),5);
        bufp->chgIData(oldp+50,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0]),32);
        bufp->chgIData(oldp+51,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[1]),32);
        bufp->chgIData(oldp+52,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[2]),32);
        bufp->chgIData(oldp+53,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[3]),32);
        bufp->chgIData(oldp+54,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[4]),32);
        bufp->chgIData(oldp+55,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[5]),32);
        bufp->chgIData(oldp+56,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[6]),32);
        bufp->chgIData(oldp+57,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[7]),32);
        bufp->chgIData(oldp+58,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[8]),32);
        bufp->chgIData(oldp+59,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[9]),32);
        bufp->chgIData(oldp+60,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[10]),32);
        bufp->chgIData(oldp+61,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[11]),32);
        bufp->chgIData(oldp+62,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[12]),32);
        bufp->chgIData(oldp+63,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[13]),32);
        bufp->chgIData(oldp+64,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[14]),32);
        bufp->chgIData(oldp+65,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[15]),32);
        bufp->chgIData(oldp+66,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[16]),32);
        bufp->chgIData(oldp+67,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[17]),32);
        bufp->chgIData(oldp+68,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[18]),32);
        bufp->chgIData(oldp+69,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[19]),32);
        bufp->chgIData(oldp+70,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[20]),32);
        bufp->chgIData(oldp+71,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[21]),32);
        bufp->chgIData(oldp+72,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[22]),32);
        bufp->chgIData(oldp+73,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[23]),32);
        bufp->chgIData(oldp+74,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[24]),32);
        bufp->chgIData(oldp+75,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[25]),32);
        bufp->chgIData(oldp+76,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[26]),32);
        bufp->chgIData(oldp+77,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[27]),32);
        bufp->chgIData(oldp+78,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[28]),32);
        bufp->chgIData(oldp+79,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[29]),32);
        bufp->chgIData(oldp+80,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[30]),32);
        bufp->chgIData(oldp+81,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+82,(vlSelf->SingleCycleCPU__DOT__PC),32);
        bufp->chgIData(oldp+83,(((IData)(4U) + vlSelf->SingleCycleCPU__DOT__PC)),32);
        bufp->chgIData(oldp+84,(((0x80U <= vlSelf->SingleCycleCPU__DOT__PC)
                                  ? 0U : ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                           [(0x7fU 
                                             & vlSelf->SingleCycleCPU__DOT__PC)] 
                                           << 0x18U) 
                                          | ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                              [(0x7fU 
                                                & ((IData)(1U) 
                                                   + vlSelf->SingleCycleCPU__DOT__PC))] 
                                              << 0x10U) 
                                             | ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                                 [(0x7fU 
                                                   & ((IData)(2U) 
                                                      + vlSelf->SingleCycleCPU__DOT__PC))] 
                                                 << 8U) 
                                                | vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                                [(0x7fU 
                                                  & ((IData)(3U) 
                                                     + vlSelf->SingleCycleCPU__DOT__PC))]))))),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+85,(vlSelf->SingleCycleCPU__DOT__ALUOut),32);
        bufp->chgIData(oldp+86,(vlSelf->SingleCycleCPU__DOT__ALUMEM),32);
        bufp->chgCData(oldp+87,((3U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                       >> 8U))),2);
        bufp->chgCData(oldp+88,((7U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                       >> 2U))),3);
        bufp->chgBit(oldp+89,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                     >> 0xbU))));
        bufp->chgBit(oldp+90,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                     >> 0xaU))));
        bufp->chgBit(oldp+91,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                     >> 7U))));
        bufp->chgBit(oldp+92,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                     >> 5U))));
        bufp->chgBit(oldp+93,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                     >> 6U))));
        bufp->chgBit(oldp+94,((0U != vlSelf->SingleCycleCPU__DOT__ALUOut)));
        bufp->chgBit(oldp+95,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                     >> 1U))));
        bufp->chgBit(oldp+96,((1U & (IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl))));
        bufp->chgBit(oldp+97,(vlSelf->SingleCycleCPU__DOT__memReadEX));
        bufp->chgBit(oldp+98,(vlSelf->SingleCycleCPU__DOT__memReadMEM));
        bufp->chgSData(oldp+99,(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl),12);
    }
    bufp->chgBit(oldp+100,(vlSelf->clk));
    bufp->chgBit(oldp+101,(vlSelf->start));
    bufp->chgIData(oldp+102,(vlSelf->r[0]),32);
    bufp->chgIData(oldp+103,(vlSelf->r[1]),32);
    bufp->chgIData(oldp+104,(vlSelf->r[2]),32);
    bufp->chgIData(oldp+105,(vlSelf->r[3]),32);
    bufp->chgIData(oldp+106,(vlSelf->r[4]),32);
    bufp->chgIData(oldp+107,(vlSelf->r[5]),32);
    bufp->chgIData(oldp+108,(vlSelf->r[6]),32);
    bufp->chgIData(oldp+109,(vlSelf->r[7]),32);
    bufp->chgIData(oldp+110,(vlSelf->r[8]),32);
    bufp->chgIData(oldp+111,(vlSelf->r[9]),32);
    bufp->chgIData(oldp+112,(vlSelf->r[10]),32);
    bufp->chgIData(oldp+113,(vlSelf->r[11]),32);
    bufp->chgIData(oldp+114,(vlSelf->r[12]),32);
    bufp->chgIData(oldp+115,(vlSelf->r[13]),32);
    bufp->chgIData(oldp+116,(vlSelf->r[14]),32);
    bufp->chgIData(oldp+117,(vlSelf->r[15]),32);
    bufp->chgIData(oldp+118,(vlSelf->r[16]),32);
    bufp->chgIData(oldp+119,(vlSelf->r[17]),32);
    bufp->chgIData(oldp+120,(vlSelf->r[18]),32);
    bufp->chgIData(oldp+121,(vlSelf->r[19]),32);
    bufp->chgIData(oldp+122,(vlSelf->r[20]),32);
    bufp->chgIData(oldp+123,(vlSelf->r[21]),32);
    bufp->chgIData(oldp+124,(vlSelf->r[22]),32);
    bufp->chgIData(oldp+125,(vlSelf->r[23]),32);
    bufp->chgIData(oldp+126,(vlSelf->r[24]),32);
    bufp->chgIData(oldp+127,(vlSelf->r[25]),32);
    bufp->chgIData(oldp+128,(vlSelf->r[26]),32);
    bufp->chgIData(oldp+129,(vlSelf->r[27]),32);
    bufp->chgIData(oldp+130,(vlSelf->r[28]),32);
    bufp->chgIData(oldp+131,(vlSelf->r[29]),32);
    bufp->chgIData(oldp+132,(vlSelf->r[30]),32);
    bufp->chgIData(oldp+133,(vlSelf->r[31]),32);
    bufp->chgIData(oldp+134,((((IData)(vlSelf->SingleCycleCPU__DOT__branchMEM) 
                               & (IData)(vlSelf->SingleCycleCPU__DOT__zeroMEM))
                               ? vlSelf->SingleCycleCPU__DOT__branchAddrMEM
                               : ((IData)(4U) + vlSelf->SingleCycleCPU__DOT__PC))),32);
    bufp->chgIData(oldp+135,(vlSelf->SingleCycleCPU__DOT__memDataOut),32);
}

void VSingleCycleCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_cleanup\n"); );
    // Init
    VSingleCycleCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingleCycleCPU___024root*>(voidSelf);
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
