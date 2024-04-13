// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VfullAdder__Syms.h"


VL_ATTR_COLD void VfullAdder___024root__trace_init_sub__TOP__0(VfullAdder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VfullAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfullAdder___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"cin", false,-1);
    tracep->declBit(c+2,"a", false,-1);
    tracep->declBit(c+3,"b", false,-1);
    tracep->declBit(c+4,"s", false,-1);
    tracep->declBit(c+5,"cout", false,-1);
    tracep->pushNamePrefix("fullAdder ");
    tracep->declBit(c+1,"cin", false,-1);
    tracep->declBit(c+2,"a", false,-1);
    tracep->declBit(c+3,"b", false,-1);
    tracep->declBit(c+4,"s", false,-1);
    tracep->declBit(c+5,"cout", false,-1);
    tracep->declBit(c+6,"s1", false,-1);
    tracep->declBit(c+7,"c1", false,-1);
    tracep->declBit(c+8,"c2", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VfullAdder___024root__trace_init_top(VfullAdder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VfullAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfullAdder___024root__trace_init_top\n"); );
    // Body
    VfullAdder___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VfullAdder___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VfullAdder___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VfullAdder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VfullAdder___024root__trace_register(VfullAdder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VfullAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfullAdder___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VfullAdder___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VfullAdder___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VfullAdder___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VfullAdder___024root__trace_full_sub_0(VfullAdder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VfullAdder___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfullAdder___024root__trace_full_top_0\n"); );
    // Init
    VfullAdder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VfullAdder___024root*>(voidSelf);
    VfullAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VfullAdder___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VfullAdder___024root__trace_full_sub_0(VfullAdder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VfullAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfullAdder___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->cin));
    bufp->fullBit(oldp+2,(vlSelf->a));
    bufp->fullBit(oldp+3,(vlSelf->b));
    bufp->fullBit(oldp+4,(vlSelf->s));
    bufp->fullBit(oldp+5,(vlSelf->cout));
    bufp->fullBit(oldp+6,(vlSelf->fullAdder__DOT__s1));
    bufp->fullBit(oldp+7,(((IData)(vlSelf->fullAdder__DOT__s1) 
                           & (IData)(vlSelf->cin))));
    bufp->fullBit(oldp+8,(((IData)(vlSelf->a) & (IData)(vlSelf->b))));
}
