// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSingleCycleCPU.h for the primary calling header

#include "verilated.h"

#include "VSingleCycleCPU___024root.h"

void VSingleCycleCPU___024root___eval_act(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_act\n"); );
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__0(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 0U;
    vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 0U;
    if (vlSelf->start) {
        if (vlSelf->SingleCycleCPU__DOT__memWriteMEM) {
            vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 
                = (vlSelf->SingleCycleCPU__DOT__dataR2MEM 
                   >> 0x18U);
            vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 1U;
            vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 
                = (0x7fU & ((IData)(3U) + vlSelf->SingleCycleCPU__DOT__ALUMEM));
            vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1 
                = (0xffU & (vlSelf->SingleCycleCPU__DOT__dataR2MEM 
                            >> 0x10U));
            vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1 
                = (0x7fU & ((IData)(2U) + vlSelf->SingleCycleCPU__DOT__ALUMEM));
            vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2 
                = (0xffU & (vlSelf->SingleCycleCPU__DOT__dataR2MEM 
                            >> 8U));
            vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2 
                = (0x7fU & ((IData)(1U) + vlSelf->SingleCycleCPU__DOT__ALUMEM));
            vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3 
                = (0xffU & vlSelf->SingleCycleCPU__DOT__dataR2MEM);
            vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3 
                = (0x7fU & vlSelf->SingleCycleCPU__DOT__ALUMEM);
        }
    } else {
        vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 1U;
    }
}

extern const VlUnpacked<CData/*3:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_h73d43c22_0;

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__1(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*4:0*/ __Vdlyvdim0__SingleCycleCPU__DOT__m_Register__DOT__regs__v0;
    __Vdlyvdim0__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__SingleCycleCPU__DOT__m_Register__DOT__regs__v0;
    __Vdlyvval__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v0;
    __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v1;
    __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v1 = 0;
    // Body
    __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 0U;
    __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v1 = 0U;
    if (vlSelf->start) {
        if (vlSelf->SingleCycleCPU__DOT__regWriteWB) {
            __Vdlyvval__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 
                = ((0U == (IData)(vlSelf->SingleCycleCPU__DOT__instWB))
                    ? 0U : ((0U == (IData)(vlSelf->SingleCycleCPU__DOT__memtoRegWB))
                             ? vlSelf->SingleCycleCPU__DOT__memDataWB
                             : ((1U == (IData)(vlSelf->SingleCycleCPU__DOT__memtoRegWB))
                                 ? vlSelf->SingleCycleCPU__DOT__ALUWB
                                 : ((2U == (IData)(vlSelf->SingleCycleCPU__DOT__memtoRegWB))
                                     ? vlSelf->SingleCycleCPU__DOT__PCplus4WB
                                     : vlSelf->SingleCycleCPU__DOT__memDataWB))));
            __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 1U;
            __Vdlyvdim0__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 
                = vlSelf->SingleCycleCPU__DOT__instWB;
        }
        vlSelf->SingleCycleCPU__DOT__ALUOpEX = (7U 
                                                & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                                   >> 2U));
        vlSelf->SingleCycleCPU__DOT__func7n3 = ((8U 
                                                 & (vlSelf->SingleCycleCPU__DOT__instID 
                                                    >> 0x1bU)) 
                                                | (7U 
                                                   & (vlSelf->SingleCycleCPU__DOT__instID 
                                                      >> 0xcU)));
        vlSelf->SingleCycleCPU__DOT__branchAddrMEM 
            = (((IData)(vlSelf->SingleCycleCPU__DOT__addrSrcAEX)
                 ? vlSelf->SingleCycleCPU__DOT__dataR1EX
                 : vlSelf->SingleCycleCPU__DOT__PCEX) 
               + ((IData)(vlSelf->SingleCycleCPU__DOT__addrSrcBEX)
                   ? vlSelf->SingleCycleCPU__DOT__immEX
                   : (vlSelf->SingleCycleCPU__DOT__immEX 
                      << 1U)));
        vlSelf->SingleCycleCPU__DOT__dataR2MEM = vlSelf->SingleCycleCPU__DOT__dataR2EX;
        vlSelf->SingleCycleCPU__DOT__ALUWB = vlSelf->SingleCycleCPU__DOT__ALUMEM;
        vlSelf->SingleCycleCPU__DOT__memtoRegWB = vlSelf->SingleCycleCPU__DOT__memtoRegMEM;
        vlSelf->SingleCycleCPU__DOT__memDataWB = vlSelf->SingleCycleCPU__DOT__memDataOut;
        vlSelf->SingleCycleCPU__DOT__PCplus4WB = ((IData)(4U) 
                                                  + vlSelf->SingleCycleCPU__DOT__PCMEM);
        vlSelf->SingleCycleCPU__DOT__instWB = vlSelf->SingleCycleCPU__DOT__instMEM;
        vlSelf->SingleCycleCPU__DOT__immEX = vlSelf->SingleCycleCPU__DOT__imm;
        vlSelf->SingleCycleCPU__DOT__dataR1EX = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
            [(0x1fU & (vlSelf->SingleCycleCPU__DOT__instID 
                       >> 0xfU))];
        vlSelf->SingleCycleCPU__DOT__dataR2EX = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
            [(0x1fU & (vlSelf->SingleCycleCPU__DOT__instID 
                       >> 0x14U))];
        vlSelf->SingleCycleCPU__DOT__memtoRegMEM = vlSelf->SingleCycleCPU__DOT__memtoRegEX;
        vlSelf->SingleCycleCPU__DOT__PCMEM = vlSelf->SingleCycleCPU__DOT__PCEX;
        vlSelf->SingleCycleCPU__DOT__instMEM = vlSelf->SingleCycleCPU__DOT__instEX;
        vlSelf->SingleCycleCPU__DOT__memtoRegEX = (3U 
                                                   & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                                      >> 8U));
        vlSelf->SingleCycleCPU__DOT__PCEX = vlSelf->SingleCycleCPU__DOT__PCID;
        vlSelf->SingleCycleCPU__DOT__instEX = (0x1fU 
                                               & (vlSelf->SingleCycleCPU__DOT__instID 
                                                  >> 7U));
        vlSelf->SingleCycleCPU__DOT__PCID = vlSelf->SingleCycleCPU__DOT__PC;
        vlSelf->SingleCycleCPU__DOT__instID = ((0x80U 
                                                <= vlSelf->SingleCycleCPU__DOT__PC)
                                                ? 0U
                                                : (
                                                   (vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                                    [
                                                    (0x7fU 
                                                     & vlSelf->SingleCycleCPU__DOT__PC)] 
                                                    << 0x18U) 
                                                   | ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                                       [
                                                       (0x7fU 
                                                        & ((IData)(1U) 
                                                           + vlSelf->SingleCycleCPU__DOT__PC))] 
                                                       << 0x10U) 
                                                      | ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                                          [
                                                          (0x7fU 
                                                           & ((IData)(2U) 
                                                              + vlSelf->SingleCycleCPU__DOT__PC))] 
                                                          << 8U) 
                                                         | vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                                         [
                                                         (0x7fU 
                                                          & ((IData)(3U) 
                                                             + vlSelf->SingleCycleCPU__DOT__PC))]))));
        vlSelf->SingleCycleCPU__DOT__zeroMEM = (0U 
                                                != vlSelf->SingleCycleCPU__DOT__ALUOut);
        vlSelf->SingleCycleCPU__DOT__ALUSrcBEX = (1U 
                                                  & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                                     >> 6U));
        vlSelf->SingleCycleCPU__DOT__branchMEM = vlSelf->SingleCycleCPU__DOT__branchEX;
        vlSelf->SingleCycleCPU__DOT__memWriteMEM = vlSelf->SingleCycleCPU__DOT__memWriteEX;
        vlSelf->SingleCycleCPU__DOT__regWriteWB = vlSelf->SingleCycleCPU__DOT__regWriteMEM;
        vlSelf->SingleCycleCPU__DOT__branchEX = ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                                 >> 0xbU);
    } else {
        __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v1 = 1U;
        vlSelf->SingleCycleCPU__DOT__ALUOpEX = 0U;
        vlSelf->SingleCycleCPU__DOT__func7n3 = 0U;
        vlSelf->SingleCycleCPU__DOT__branchAddrMEM = 0U;
        vlSelf->SingleCycleCPU__DOT__dataR2MEM = 0U;
        vlSelf->SingleCycleCPU__DOT__ALUWB = 0U;
        vlSelf->SingleCycleCPU__DOT__memtoRegWB = 0U;
        vlSelf->SingleCycleCPU__DOT__memDataWB = 0U;
        vlSelf->SingleCycleCPU__DOT__PCplus4WB = 0U;
        vlSelf->SingleCycleCPU__DOT__instWB = 0U;
        vlSelf->SingleCycleCPU__DOT__immEX = 0U;
        vlSelf->SingleCycleCPU__DOT__dataR1EX = 0U;
        vlSelf->SingleCycleCPU__DOT__dataR2EX = 0U;
        vlSelf->SingleCycleCPU__DOT__memtoRegMEM = 0U;
        vlSelf->SingleCycleCPU__DOT__PCMEM = 0U;
        vlSelf->SingleCycleCPU__DOT__instMEM = 0U;
        vlSelf->SingleCycleCPU__DOT__memtoRegEX = 0U;
        vlSelf->SingleCycleCPU__DOT__PCEX = 0U;
        vlSelf->SingleCycleCPU__DOT__instEX = 0U;
        vlSelf->SingleCycleCPU__DOT__PCID = 0U;
        vlSelf->SingleCycleCPU__DOT__instID = 0U;
        vlSelf->SingleCycleCPU__DOT__zeroMEM = 0U;
        vlSelf->SingleCycleCPU__DOT__ALUSrcBEX = 0U;
        vlSelf->SingleCycleCPU__DOT__branchMEM = 0U;
        vlSelf->SingleCycleCPU__DOT__memWriteMEM = 0U;
        vlSelf->SingleCycleCPU__DOT__regWriteWB = 0U;
        vlSelf->SingleCycleCPU__DOT__branchEX = 0U;
    }
    __Vtableidx2 = ((0x40U & ((IData)(vlSelf->SingleCycleCPU__DOT__func7n3) 
                              << 3U)) | ((0x38U & ((IData)(vlSelf->SingleCycleCPU__DOT__func7n3) 
                                                   << 3U)) 
                                         | (IData)(vlSelf->SingleCycleCPU__DOT__ALUOpEX)));
    vlSelf->SingleCycleCPU__DOT__ALUCtl = VSingleCycleCPU__ConstPool__TABLE_h73d43c22_0
        [__Vtableidx2];
    vlSelf->SingleCycleCPU__DOT__addrSrcAEX = ((IData)(vlSelf->start) 
                                               & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                                  >> 1U));
    vlSelf->SingleCycleCPU__DOT__addrSrcBEX = ((IData)(vlSelf->start) 
                                               & (IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl));
    vlSelf->SingleCycleCPU__DOT__memWriteEX = ((IData)(vlSelf->start) 
                                               & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                                  >> 7U));
    if (__Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v0) {
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[__Vdlyvdim0__SingleCycleCPU__DOT__m_Register__DOT__regs__v0] 
            = __Vdlyvval__SingleCycleCPU__DOT__m_Register__DOT__regs__v0;
    }
    if (__Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v1) {
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[1U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[2U] = 0x80U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[3U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[4U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[5U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[6U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[7U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[8U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[9U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xaU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xbU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xcU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xdU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xeU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xfU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x10U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x11U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x12U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x13U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x14U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x15U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x16U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x17U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x18U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x19U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1aU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1bU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1cU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1dU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1eU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1fU] = 0U;
    }
    vlSelf->SingleCycleCPU__DOT__regWriteMEM = ((IData)(vlSelf->start) 
                                                & (IData)(vlSelf->SingleCycleCPU__DOT__regWriteEX));
    vlSelf->SingleCycleCPU__DOT__muxALUB = ((IData)(vlSelf->SingleCycleCPU__DOT__ALUSrcBEX)
                                             ? vlSelf->SingleCycleCPU__DOT__immEX
                                             : vlSelf->SingleCycleCPU__DOT__dataR2EX);
    vlSelf->r[0U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0U];
    vlSelf->r[1U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [1U];
    vlSelf->r[2U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [2U];
    vlSelf->r[3U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [3U];
    vlSelf->r[4U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [4U];
    vlSelf->r[5U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [5U];
    vlSelf->r[6U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [6U];
    vlSelf->r[7U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [7U];
    vlSelf->r[8U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [8U];
    vlSelf->r[9U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [9U];
    vlSelf->r[0xaU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xaU];
    vlSelf->r[0xbU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xbU];
    vlSelf->r[0xcU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xcU];
    vlSelf->r[0xdU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xdU];
    vlSelf->r[0xeU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xeU];
    vlSelf->r[0xfU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xfU];
    vlSelf->r[0x10U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x10U];
    vlSelf->r[0x11U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x11U];
    vlSelf->r[0x12U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x12U];
    vlSelf->r[0x13U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x13U];
    vlSelf->r[0x14U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x14U];
    vlSelf->r[0x15U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x15U];
    vlSelf->r[0x16U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x16U];
    vlSelf->r[0x17U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x17U];
    vlSelf->r[0x18U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x18U];
    vlSelf->r[0x19U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x19U];
    vlSelf->r[0x1aU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1aU];
    vlSelf->r[0x1bU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1bU];
    vlSelf->r[0x1cU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1cU];
    vlSelf->r[0x1dU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1dU];
    vlSelf->r[0x1eU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1eU];
    vlSelf->r[0x1fU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1fU];
    vlSelf->SingleCycleCPU__DOT__regWriteEX = ((IData)(vlSelf->start) 
                                               & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                                  >> 5U));
    vlSelf->SingleCycleCPU__DOT__imm = ((0x40U & vlSelf->SingleCycleCPU__DOT__instID)
                                         ? ((0x20U 
                                             & vlSelf->SingleCycleCPU__DOT__instID)
                                             ? ((0x10U 
                                                 & vlSelf->SingleCycleCPU__DOT__instID)
                                                 ? 0U
                                                 : 
                                                ((8U 
                                                  & vlSelf->SingleCycleCPU__DOT__instID)
                                                  ? 
                                                 ((4U 
                                                   & vlSelf->SingleCycleCPU__DOT__instID)
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->SingleCycleCPU__DOT__instID)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->SingleCycleCPU__DOT__instID)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->SingleCycleCPU__DOT__instID 
                                                                  >> 0x1fU))) 
                                                      << 0x14U) 
                                                     | ((0x80000U 
                                                         & (vlSelf->SingleCycleCPU__DOT__instID 
                                                            >> 0xcU)) 
                                                        | ((0x7f800U 
                                                            & (vlSelf->SingleCycleCPU__DOT__instID 
                                                               >> 1U)) 
                                                           | ((0x400U 
                                                               & (vlSelf->SingleCycleCPU__DOT__instID 
                                                                  >> 0xaU)) 
                                                              | (0x3ffU 
                                                                 & (vlSelf->SingleCycleCPU__DOT__instID 
                                                                    >> 0x15U))))))
                                                     : 0U)
                                                    : 0U)
                                                   : 0U)
                                                  : 
                                                 ((4U 
                                                   & vlSelf->SingleCycleCPU__DOT__instID)
                                                   ? 
                                                  ((2U 
                                                    & vlSelf->SingleCycleCPU__DOT__instID)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->SingleCycleCPU__DOT__instID)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->SingleCycleCPU__DOT__instID 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelf->SingleCycleCPU__DOT__instID 
                                                        >> 0x14U))
                                                     : 0U)
                                                    : 0U)
                                                   : 
                                                  ((2U 
                                                    & vlSelf->SingleCycleCPU__DOT__instID)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->SingleCycleCPU__DOT__instID)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->SingleCycleCPU__DOT__instID 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | ((0x800U 
                                                         & (vlSelf->SingleCycleCPU__DOT__instID 
                                                            >> 0x14U)) 
                                                        | ((0x400U 
                                                            & (vlSelf->SingleCycleCPU__DOT__instID 
                                                               << 3U)) 
                                                           | ((0x3f0U 
                                                               & (vlSelf->SingleCycleCPU__DOT__instID 
                                                                  >> 0x15U)) 
                                                              | (0xfU 
                                                                 & (vlSelf->SingleCycleCPU__DOT__instID 
                                                                    >> 8U))))))
                                                     : 0U)
                                                    : 0U))))
                                             : 0U) : 
                                        ((0x20U & vlSelf->SingleCycleCPU__DOT__instID)
                                          ? ((0x10U 
                                              & vlSelf->SingleCycleCPU__DOT__instID)
                                              ? 0U : 
                                             ((8U & vlSelf->SingleCycleCPU__DOT__instID)
                                               ? 0U
                                               : ((4U 
                                                   & vlSelf->SingleCycleCPU__DOT__instID)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSelf->SingleCycleCPU__DOT__instID)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->SingleCycleCPU__DOT__instID)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->SingleCycleCPU__DOT__instID 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | ((0xfe0U 
                                                         & (vlSelf->SingleCycleCPU__DOT__instID 
                                                            >> 0x14U)) 
                                                        | (0x1fU 
                                                           & (vlSelf->SingleCycleCPU__DOT__instID 
                                                              >> 7U))))
                                                     : 0U)
                                                    : 0U))))
                                          : ((0x10U 
                                              & vlSelf->SingleCycleCPU__DOT__instID)
                                              ? ((8U 
                                                  & vlSelf->SingleCycleCPU__DOT__instID)
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & vlSelf->SingleCycleCPU__DOT__instID)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSelf->SingleCycleCPU__DOT__instID)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->SingleCycleCPU__DOT__instID)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->SingleCycleCPU__DOT__instID 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelf->SingleCycleCPU__DOT__instID 
                                                        >> 0x14U))
                                                     : 0U)
                                                    : 0U)))
                                              : ((8U 
                                                  & vlSelf->SingleCycleCPU__DOT__instID)
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   & vlSelf->SingleCycleCPU__DOT__instID)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSelf->SingleCycleCPU__DOT__instID)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->SingleCycleCPU__DOT__instID)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->SingleCycleCPU__DOT__instID 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelf->SingleCycleCPU__DOT__instID 
                                                        >> 0x14U))
                                                     : 0U)
                                                    : 0U))))));
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__2(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->SingleCycleCPU__DOT__memReadMEM) {
        vlSelf->SingleCycleCPU__DOT__memDataOut = (
                                                   (0xffffffU 
                                                    & vlSelf->SingleCycleCPU__DOT__memDataOut) 
                                                   | (vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory
                                                      [
                                                      (0x7fU 
                                                       & ((IData)(3U) 
                                                          + vlSelf->SingleCycleCPU__DOT__ALUMEM))] 
                                                      << 0x18U));
        vlSelf->SingleCycleCPU__DOT__memDataOut = (
                                                   (0xff00ffffU 
                                                    & vlSelf->SingleCycleCPU__DOT__memDataOut) 
                                                   | (vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory
                                                      [
                                                      (0x7fU 
                                                       & ((IData)(2U) 
                                                          + vlSelf->SingleCycleCPU__DOT__ALUMEM))] 
                                                      << 0x10U));
        vlSelf->SingleCycleCPU__DOT__memDataOut = (
                                                   (0xffff00ffU 
                                                    & vlSelf->SingleCycleCPU__DOT__memDataOut) 
                                                   | (vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory
                                                      [
                                                      (0x7fU 
                                                       & ((IData)(1U) 
                                                          + vlSelf->SingleCycleCPU__DOT__ALUMEM))] 
                                                      << 8U));
        vlSelf->SingleCycleCPU__DOT__memDataOut = (
                                                   (0xffffff00U 
                                                    & vlSelf->SingleCycleCPU__DOT__memDataOut) 
                                                   | vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory
                                                   [
                                                   (0x7fU 
                                                    & vlSelf->SingleCycleCPU__DOT__ALUMEM)]);
    }
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__3(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__3\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    if (vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0) {
        vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0] 
            = vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1] 
            = vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2] 
            = vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3] 
            = vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3;
    }
    if (vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v4) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    vlSelf->SingleCycleCPU__DOT__PC = ((IData)(vlSelf->start)
                                        ? vlSelf->SingleCycleCPU__DOT__muxPC
                                        : 0U);
}

extern const VlUnpacked<SData/*11:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_h12043b62_0;

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__4(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__4\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if (vlSelf->start) {
        vlSelf->SingleCycleCPU__DOT__ALUMEM = vlSelf->SingleCycleCPU__DOT__ALUOut;
        vlSelf->SingleCycleCPU__DOT__memReadMEM = vlSelf->SingleCycleCPU__DOT__memReadEX;
    } else {
        vlSelf->SingleCycleCPU__DOT__ALUMEM = 0U;
        vlSelf->SingleCycleCPU__DOT__memReadMEM = 0U;
    }
    vlSelf->SingleCycleCPU__DOT__ALUOut = ((8U & (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))
                                            ? ((4U 
                                                & (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))
                                                ? 0U
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))
                                                     ? 0U
                                                     : 1U)))
                                            : ((4U 
                                                & (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))
                                                     ? 
                                                    (VL_GTES_III(32, vlSelf->SingleCycleCPU__DOT__dataR1EX, vlSelf->SingleCycleCPU__DOT__muxALUB)
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    ((vlSelf->SingleCycleCPU__DOT__dataR1EX 
                                                      != vlSelf->SingleCycleCPU__DOT__muxALUB)
                                                      ? 1U
                                                      : 0U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))
                                                     ? 
                                                    ((vlSelf->SingleCycleCPU__DOT__dataR1EX 
                                                      == vlSelf->SingleCycleCPU__DOT__muxALUB)
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    (VL_LTS_III(32, vlSelf->SingleCycleCPU__DOT__dataR1EX, vlSelf->SingleCycleCPU__DOT__muxALUB)
                                                      ? 1U
                                                      : 0U)))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))
                                                     ? 
                                                    (vlSelf->SingleCycleCPU__DOT__dataR1EX 
                                                     | vlSelf->SingleCycleCPU__DOT__muxALUB)
                                                     : 
                                                    (vlSelf->SingleCycleCPU__DOT__dataR1EX 
                                                     & vlSelf->SingleCycleCPU__DOT__muxALUB))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))
                                                     ? 
                                                    (vlSelf->SingleCycleCPU__DOT__dataR1EX 
                                                     - vlSelf->SingleCycleCPU__DOT__muxALUB)
                                                     : 
                                                    (vlSelf->SingleCycleCPU__DOT__dataR1EX 
                                                     + vlSelf->SingleCycleCPU__DOT__muxALUB)))));
    vlSelf->SingleCycleCPU__DOT__memReadEX = ((IData)(vlSelf->start) 
                                              & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                                 >> 0xaU));
    __Vtableidx1 = (0x7fU & vlSelf->SingleCycleCPU__DOT__instID);
    vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl 
        = VSingleCycleCPU__ConstPool__TABLE_h12043b62_0
        [__Vtableidx1];
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_comb__TOP__0(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->SingleCycleCPU__DOT__muxPC = (((IData)(vlSelf->SingleCycleCPU__DOT__branchMEM) 
                                           & (IData)(vlSelf->SingleCycleCPU__DOT__zeroMEM))
                                           ? vlSelf->SingleCycleCPU__DOT__branchAddrMEM
                                           : ((IData)(4U) 
                                              + vlSelf->SingleCycleCPU__DOT__PC));
}

void VSingleCycleCPU___024root___eval_nba(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__2(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        VSingleCycleCPU___024root___nba_comb__TOP__0(vlSelf);
    }
}

void VSingleCycleCPU___024root___eval_triggers__act(VSingleCycleCPU___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__act(VSingleCycleCPU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__nba(VSingleCycleCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VSingleCycleCPU___024root___eval(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
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
            VSingleCycleCPU___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VSingleCycleCPU___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("SingleCycleCPU.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VSingleCycleCPU___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VSingleCycleCPU___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("SingleCycleCPU.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VSingleCycleCPU___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VSingleCycleCPU___024root___eval_debug_assertions(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->start & 0xfeU))) {
        Verilated::overWidthError("start");}
}
#endif  // VL_DEBUG
