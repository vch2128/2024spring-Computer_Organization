// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu__Syms.h"


void Valu___024root__trace_chg_sub_0(Valu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Valu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_chg_top_0\n"); );
    // Init
    Valu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu___024root*>(voidSelf);
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Valu___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Valu___024root__trace_chg_sub_0(Valu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->alu__DOT__c1));
        bufp->chgBit(oldp+1,(vlSelf->alu__DOT__c2));
        bufp->chgBit(oldp+2,(vlSelf->alu__DOT__c3));
        bufp->chgBit(oldp+3,(vlSelf->alu__DOT__b1));
        bufp->chgBit(oldp+4,(vlSelf->alu__DOT__b2));
        bufp->chgBit(oldp+5,(vlSelf->alu__DOT__b3));
        bufp->chgBit(oldp+6,(((IData)(vlSelf->alu__DOT__add2__DOT__s1) 
                              ^ (IData)(vlSelf->alu__DOT__c1))));
        bufp->chgBit(oldp+7,(vlSelf->alu__DOT__add2__DOT__s1));
        bufp->chgBit(oldp+8,(((IData)(vlSelf->alu__DOT__add2__DOT__s1) 
                              & (IData)(vlSelf->alu__DOT__c1))));
        bufp->chgBit(oldp+9,(((IData)(vlSelf->alu__DOT__add3__DOT__s1) 
                              ^ (IData)(vlSelf->alu__DOT__c2))));
        bufp->chgBit(oldp+10,(vlSelf->alu__DOT__add3__DOT__s1));
        bufp->chgBit(oldp+11,(((IData)(vlSelf->alu__DOT__add3__DOT__s1) 
                               & (IData)(vlSelf->alu__DOT__c2))));
        bufp->chgBit(oldp+12,(((IData)(vlSelf->alu__DOT__add4__DOT__s1) 
                               ^ (IData)(vlSelf->alu__DOT__c3))));
        bufp->chgBit(oldp+13,(vlSelf->alu__DOT__add4__DOT__s1));
        bufp->chgBit(oldp+14,(((IData)(vlSelf->alu__DOT__add4__DOT__s1) 
                               & (IData)(vlSelf->alu__DOT__c3))));
        bufp->chgBit(oldp+15,(((IData)(vlSelf->alu__DOT__sub2__DOT__s1) 
                               ^ (IData)(vlSelf->alu__DOT__b1))));
        bufp->chgBit(oldp+16,(vlSelf->alu__DOT__sub2__DOT__s1));
        bufp->chgBit(oldp+17,(((IData)(vlSelf->alu__DOT__sub2__DOT__s1) 
                               & (IData)(vlSelf->alu__DOT__b1))));
        bufp->chgBit(oldp+18,(((IData)(vlSelf->alu__DOT__sub3__DOT__s1) 
                               ^ (IData)(vlSelf->alu__DOT__b2))));
        bufp->chgBit(oldp+19,(vlSelf->alu__DOT__sub3__DOT__s1));
        bufp->chgBit(oldp+20,(((IData)(vlSelf->alu__DOT__sub3__DOT__s1) 
                               & (IData)(vlSelf->alu__DOT__b2))));
        bufp->chgBit(oldp+21,(((IData)(vlSelf->alu__DOT__sub4__DOT__s1) 
                               ^ (IData)(vlSelf->alu__DOT__b3))));
        bufp->chgBit(oldp+22,(vlSelf->alu__DOT__sub4__DOT__s1));
        bufp->chgBit(oldp+23,(((IData)(vlSelf->alu__DOT__sub4__DOT__s1) 
                               & (IData)(vlSelf->alu__DOT__b3))));
    }
    bufp->chgCData(oldp+24,(vlSelf->a),4);
    bufp->chgCData(oldp+25,(vlSelf->b),4);
    bufp->chgCData(oldp+26,(vlSelf->s),3);
    bufp->chgCData(oldp+27,(vlSelf->y),4);
    bufp->chgCData(oldp+28,(((((IData)(vlSelf->alu__DOT__add4__DOT__s1) 
                               ^ (IData)(vlSelf->alu__DOT__c3)) 
                              << 3U) | ((((IData)(vlSelf->alu__DOT__add3__DOT__s1) 
                                          ^ (IData)(vlSelf->alu__DOT__c2)) 
                                         << 2U) | (
                                                   (((IData)(vlSelf->alu__DOT__add2__DOT__s1) 
                                                     ^ (IData)(vlSelf->alu__DOT__c1)) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->a) 
                                                         ^ (IData)(vlSelf->b))))))),4);
    bufp->chgCData(oldp+29,(((((IData)(vlSelf->alu__DOT__sub4__DOT__s1) 
                               ^ (IData)(vlSelf->alu__DOT__b3)) 
                              << 3U) | ((((IData)(vlSelf->alu__DOT__sub3__DOT__s1) 
                                          ^ (IData)(vlSelf->alu__DOT__b2)) 
                                         << 2U) | (
                                                   (((IData)(vlSelf->alu__DOT__sub2__DOT__s1) 
                                                     ^ (IData)(vlSelf->alu__DOT__b1)) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->a) 
                                                         ^ 
                                                         ((IData)(1U) 
                                                          + 
                                                          (~ (IData)(vlSelf->b))))))))),4);
    bufp->chgBit(oldp+30,((1U & (((IData)(vlSelf->alu__DOT__add4__DOT__s1) 
                                  & (IData)(vlSelf->alu__DOT__c3)) 
                                 | (((IData)(vlSelf->a) 
                                     & (IData)(vlSelf->b)) 
                                    >> 3U)))));
    bufp->chgBit(oldp+31,((1U & (((IData)(vlSelf->alu__DOT__sub4__DOT__s1) 
                                  & (IData)(vlSelf->alu__DOT__b3)) 
                                 | (1U & (((IData)(vlSelf->a) 
                                           & ((IData)(1U) 
                                              + (~ (IData)(vlSelf->b)))) 
                                          >> 3U))))));
    bufp->chgCData(oldp+32,((0xfU & ((IData)(1U) + 
                                     (~ (IData)(vlSelf->b))))),4);
    bufp->chgBit(oldp+33,((1U & (IData)(vlSelf->a))));
    bufp->chgBit(oldp+34,((1U & (IData)(vlSelf->b))));
    bufp->chgBit(oldp+35,((1U & ((IData)(vlSelf->a) 
                                 ^ (IData)(vlSelf->b)))));
    bufp->chgBit(oldp+36,((1U & ((IData)(vlSelf->a) 
                                 >> 1U))));
    bufp->chgBit(oldp+37,((1U & ((IData)(vlSelf->b) 
                                 >> 1U))));
    bufp->chgBit(oldp+38,((1U & (((IData)(vlSelf->a) 
                                  & (IData)(vlSelf->b)) 
                                 >> 1U))));
    bufp->chgBit(oldp+39,((1U & ((IData)(vlSelf->a) 
                                 >> 2U))));
    bufp->chgBit(oldp+40,((1U & ((IData)(vlSelf->b) 
                                 >> 2U))));
    bufp->chgBit(oldp+41,((1U & (((IData)(vlSelf->a) 
                                  & (IData)(vlSelf->b)) 
                                 >> 2U))));
    bufp->chgBit(oldp+42,((1U & ((IData)(vlSelf->a) 
                                 >> 3U))));
    bufp->chgBit(oldp+43,((1U & ((IData)(vlSelf->b) 
                                 >> 3U))));
    bufp->chgBit(oldp+44,((1U & (((IData)(vlSelf->a) 
                                  & (IData)(vlSelf->b)) 
                                 >> 3U))));
    bufp->chgBit(oldp+45,((1U & ((IData)(1U) + (~ (IData)(vlSelf->b))))));
    bufp->chgBit(oldp+46,((1U & ((IData)(vlSelf->a) 
                                 ^ ((IData)(1U) + (~ (IData)(vlSelf->b)))))));
    bufp->chgBit(oldp+47,((1U & (((IData)(1U) + (~ (IData)(vlSelf->b))) 
                                 >> 1U))));
    bufp->chgBit(oldp+48,((1U & (((IData)(vlSelf->a) 
                                  & ((IData)(1U) + 
                                     (~ (IData)(vlSelf->b)))) 
                                 >> 1U))));
    bufp->chgBit(oldp+49,((1U & (((IData)(1U) + (~ (IData)(vlSelf->b))) 
                                 >> 2U))));
    bufp->chgBit(oldp+50,((1U & (((IData)(vlSelf->a) 
                                  & ((IData)(1U) + 
                                     (~ (IData)(vlSelf->b)))) 
                                 >> 2U))));
    bufp->chgBit(oldp+51,((1U & (((IData)(1U) + (~ (IData)(vlSelf->b))) 
                                 >> 3U))));
    bufp->chgBit(oldp+52,((1U & (((IData)(vlSelf->a) 
                                  & ((IData)(1U) + 
                                     (~ (IData)(vlSelf->b)))) 
                                 >> 3U))));
}

void Valu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_cleanup\n"); );
    // Init
    Valu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu___024root*>(voidSelf);
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
