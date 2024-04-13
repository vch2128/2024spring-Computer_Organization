// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VfullAdder__Syms.h"


void VfullAdder___024root__trace_chg_sub_0(VfullAdder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VfullAdder___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfullAdder___024root__trace_chg_top_0\n"); );
    // Init
    VfullAdder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VfullAdder___024root*>(voidSelf);
    VfullAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VfullAdder___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VfullAdder___024root__trace_chg_sub_0(VfullAdder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VfullAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfullAdder___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->cin));
    bufp->chgBit(oldp+1,(vlSelf->a));
    bufp->chgBit(oldp+2,(vlSelf->b));
    bufp->chgBit(oldp+3,(vlSelf->s));
    bufp->chgBit(oldp+4,(vlSelf->cout));
    bufp->chgBit(oldp+5,(vlSelf->fullAdder__DOT__s1));
    bufp->chgBit(oldp+6,(((IData)(vlSelf->fullAdder__DOT__s1) 
                          & (IData)(vlSelf->cin))));
    bufp->chgBit(oldp+7,(((IData)(vlSelf->a) & (IData)(vlSelf->b))));
}

void VfullAdder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VfullAdder___024root__trace_cleanup\n"); );
    // Init
    VfullAdder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VfullAdder___024root*>(voidSelf);
    VfullAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
