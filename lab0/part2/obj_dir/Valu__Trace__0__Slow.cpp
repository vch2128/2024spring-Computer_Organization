// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu__Syms.h"


VL_ATTR_COLD void Valu___024root__trace_init_sub__TOP__0(Valu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+25,"a", false,-1, 3,0);
    tracep->declBus(c+26,"b", false,-1, 3,0);
    tracep->declBus(c+27,"s", false,-1, 2,0);
    tracep->declBus(c+28,"y", false,-1, 3,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+25,"a", false,-1, 3,0);
    tracep->declBus(c+26,"b", false,-1, 3,0);
    tracep->declBus(c+27,"s", false,-1, 2,0);
    tracep->declBus(c+28,"y", false,-1, 3,0);
    tracep->declBus(c+29,"ad", false,-1, 3,0);
    tracep->declBus(c+30,"su", false,-1, 3,0);
    tracep->declBit(c+1,"c1", false,-1);
    tracep->declBit(c+2,"c2", false,-1);
    tracep->declBit(c+3,"c3", false,-1);
    tracep->declBit(c+31,"c4", false,-1);
    tracep->declBit(c+4,"b1", false,-1);
    tracep->declBit(c+5,"b2", false,-1);
    tracep->declBit(c+6,"b3", false,-1);
    tracep->declBit(c+32,"b4", false,-1);
    tracep->declBus(c+33,"b_complement", false,-1, 3,0);
    tracep->pushNamePrefix("add1 ");
    tracep->declBit(c+54,"cin", false,-1);
    tracep->declBit(c+34,"a", false,-1);
    tracep->declBit(c+35,"b", false,-1);
    tracep->declBit(c+36,"s", false,-1);
    tracep->declBit(c+1,"cout", false,-1);
    tracep->declBit(c+36,"s1", false,-1);
    tracep->declBit(c+54,"c1", false,-1);
    tracep->declBit(c+1,"c2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("add2 ");
    tracep->declBit(c+1,"cin", false,-1);
    tracep->declBit(c+37,"a", false,-1);
    tracep->declBit(c+38,"b", false,-1);
    tracep->declBit(c+7,"s", false,-1);
    tracep->declBit(c+2,"cout", false,-1);
    tracep->declBit(c+8,"s1", false,-1);
    tracep->declBit(c+9,"c1", false,-1);
    tracep->declBit(c+39,"c2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("add3 ");
    tracep->declBit(c+2,"cin", false,-1);
    tracep->declBit(c+40,"a", false,-1);
    tracep->declBit(c+41,"b", false,-1);
    tracep->declBit(c+10,"s", false,-1);
    tracep->declBit(c+3,"cout", false,-1);
    tracep->declBit(c+11,"s1", false,-1);
    tracep->declBit(c+12,"c1", false,-1);
    tracep->declBit(c+42,"c2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("add4 ");
    tracep->declBit(c+3,"cin", false,-1);
    tracep->declBit(c+43,"a", false,-1);
    tracep->declBit(c+44,"b", false,-1);
    tracep->declBit(c+13,"s", false,-1);
    tracep->declBit(c+31,"cout", false,-1);
    tracep->declBit(c+14,"s1", false,-1);
    tracep->declBit(c+15,"c1", false,-1);
    tracep->declBit(c+45,"c2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sub1 ");
    tracep->declBit(c+54,"cin", false,-1);
    tracep->declBit(c+34,"a", false,-1);
    tracep->declBit(c+46,"b", false,-1);
    tracep->declBit(c+47,"s", false,-1);
    tracep->declBit(c+4,"cout", false,-1);
    tracep->declBit(c+47,"s1", false,-1);
    tracep->declBit(c+54,"c1", false,-1);
    tracep->declBit(c+4,"c2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sub2 ");
    tracep->declBit(c+4,"cin", false,-1);
    tracep->declBit(c+37,"a", false,-1);
    tracep->declBit(c+48,"b", false,-1);
    tracep->declBit(c+16,"s", false,-1);
    tracep->declBit(c+5,"cout", false,-1);
    tracep->declBit(c+17,"s1", false,-1);
    tracep->declBit(c+18,"c1", false,-1);
    tracep->declBit(c+49,"c2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sub3 ");
    tracep->declBit(c+5,"cin", false,-1);
    tracep->declBit(c+40,"a", false,-1);
    tracep->declBit(c+50,"b", false,-1);
    tracep->declBit(c+19,"s", false,-1);
    tracep->declBit(c+6,"cout", false,-1);
    tracep->declBit(c+20,"s1", false,-1);
    tracep->declBit(c+21,"c1", false,-1);
    tracep->declBit(c+51,"c2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sub4 ");
    tracep->declBit(c+6,"cin", false,-1);
    tracep->declBit(c+43,"a", false,-1);
    tracep->declBit(c+52,"b", false,-1);
    tracep->declBit(c+22,"s", false,-1);
    tracep->declBit(c+32,"cout", false,-1);
    tracep->declBit(c+23,"s1", false,-1);
    tracep->declBit(c+24,"c1", false,-1);
    tracep->declBit(c+53,"c2", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Valu___024root__trace_init_top(Valu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_init_top\n"); );
    // Body
    Valu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Valu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Valu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Valu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Valu___024root__trace_register(Valu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Valu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Valu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Valu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Valu___024root__trace_full_sub_0(Valu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Valu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_full_top_0\n"); );
    // Init
    Valu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu___024root*>(voidSelf);
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Valu___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Valu___024root__trace_full_sub_0(Valu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->alu__DOT__c1));
    bufp->fullBit(oldp+2,(vlSelf->alu__DOT__c2));
    bufp->fullBit(oldp+3,(vlSelf->alu__DOT__c3));
    bufp->fullBit(oldp+4,(vlSelf->alu__DOT__b1));
    bufp->fullBit(oldp+5,(vlSelf->alu__DOT__b2));
    bufp->fullBit(oldp+6,(vlSelf->alu__DOT__b3));
    bufp->fullBit(oldp+7,(((IData)(vlSelf->alu__DOT__add2__DOT__s1) 
                           ^ (IData)(vlSelf->alu__DOT__c1))));
    bufp->fullBit(oldp+8,(vlSelf->alu__DOT__add2__DOT__s1));
    bufp->fullBit(oldp+9,(((IData)(vlSelf->alu__DOT__add2__DOT__s1) 
                           & (IData)(vlSelf->alu__DOT__c1))));
    bufp->fullBit(oldp+10,(((IData)(vlSelf->alu__DOT__add3__DOT__s1) 
                            ^ (IData)(vlSelf->alu__DOT__c2))));
    bufp->fullBit(oldp+11,(vlSelf->alu__DOT__add3__DOT__s1));
    bufp->fullBit(oldp+12,(((IData)(vlSelf->alu__DOT__add3__DOT__s1) 
                            & (IData)(vlSelf->alu__DOT__c2))));
    bufp->fullBit(oldp+13,(((IData)(vlSelf->alu__DOT__add4__DOT__s1) 
                            ^ (IData)(vlSelf->alu__DOT__c3))));
    bufp->fullBit(oldp+14,(vlSelf->alu__DOT__add4__DOT__s1));
    bufp->fullBit(oldp+15,(((IData)(vlSelf->alu__DOT__add4__DOT__s1) 
                            & (IData)(vlSelf->alu__DOT__c3))));
    bufp->fullBit(oldp+16,(((IData)(vlSelf->alu__DOT__sub2__DOT__s1) 
                            ^ (IData)(vlSelf->alu__DOT__b1))));
    bufp->fullBit(oldp+17,(vlSelf->alu__DOT__sub2__DOT__s1));
    bufp->fullBit(oldp+18,(((IData)(vlSelf->alu__DOT__sub2__DOT__s1) 
                            & (IData)(vlSelf->alu__DOT__b1))));
    bufp->fullBit(oldp+19,(((IData)(vlSelf->alu__DOT__sub3__DOT__s1) 
                            ^ (IData)(vlSelf->alu__DOT__b2))));
    bufp->fullBit(oldp+20,(vlSelf->alu__DOT__sub3__DOT__s1));
    bufp->fullBit(oldp+21,(((IData)(vlSelf->alu__DOT__sub3__DOT__s1) 
                            & (IData)(vlSelf->alu__DOT__b2))));
    bufp->fullBit(oldp+22,(((IData)(vlSelf->alu__DOT__sub4__DOT__s1) 
                            ^ (IData)(vlSelf->alu__DOT__b3))));
    bufp->fullBit(oldp+23,(vlSelf->alu__DOT__sub4__DOT__s1));
    bufp->fullBit(oldp+24,(((IData)(vlSelf->alu__DOT__sub4__DOT__s1) 
                            & (IData)(vlSelf->alu__DOT__b3))));
    bufp->fullCData(oldp+25,(vlSelf->a),4);
    bufp->fullCData(oldp+26,(vlSelf->b),4);
    bufp->fullCData(oldp+27,(vlSelf->s),3);
    bufp->fullCData(oldp+28,(vlSelf->y),4);
    bufp->fullCData(oldp+29,(((((IData)(vlSelf->alu__DOT__add4__DOT__s1) 
                                ^ (IData)(vlSelf->alu__DOT__c3)) 
                               << 3U) | ((((IData)(vlSelf->alu__DOT__add3__DOT__s1) 
                                           ^ (IData)(vlSelf->alu__DOT__c2)) 
                                          << 2U) | 
                                         ((((IData)(vlSelf->alu__DOT__add2__DOT__s1) 
                                            ^ (IData)(vlSelf->alu__DOT__c1)) 
                                           << 1U) | 
                                          (1U & ((IData)(vlSelf->a) 
                                                 ^ (IData)(vlSelf->b))))))),4);
    bufp->fullCData(oldp+30,(((((IData)(vlSelf->alu__DOT__sub4__DOT__s1) 
                                ^ (IData)(vlSelf->alu__DOT__b3)) 
                               << 3U) | ((((IData)(vlSelf->alu__DOT__sub3__DOT__s1) 
                                           ^ (IData)(vlSelf->alu__DOT__b2)) 
                                          << 2U) | 
                                         ((((IData)(vlSelf->alu__DOT__sub2__DOT__s1) 
                                            ^ (IData)(vlSelf->alu__DOT__b1)) 
                                           << 1U) | 
                                          (1U & ((IData)(vlSelf->a) 
                                                 ^ 
                                                 ((IData)(1U) 
                                                  + 
                                                  (~ (IData)(vlSelf->b))))))))),4);
    bufp->fullBit(oldp+31,((1U & (((IData)(vlSelf->alu__DOT__add4__DOT__s1) 
                                   & (IData)(vlSelf->alu__DOT__c3)) 
                                  | (((IData)(vlSelf->a) 
                                      & (IData)(vlSelf->b)) 
                                     >> 3U)))));
    bufp->fullBit(oldp+32,((1U & (((IData)(vlSelf->alu__DOT__sub4__DOT__s1) 
                                   & (IData)(vlSelf->alu__DOT__b3)) 
                                  | (1U & (((IData)(vlSelf->a) 
                                            & ((IData)(1U) 
                                               + (~ (IData)(vlSelf->b)))) 
                                           >> 3U))))));
    bufp->fullCData(oldp+33,((0xfU & ((IData)(1U) + 
                                      (~ (IData)(vlSelf->b))))),4);
    bufp->fullBit(oldp+34,((1U & (IData)(vlSelf->a))));
    bufp->fullBit(oldp+35,((1U & (IData)(vlSelf->b))));
    bufp->fullBit(oldp+36,((1U & ((IData)(vlSelf->a) 
                                  ^ (IData)(vlSelf->b)))));
    bufp->fullBit(oldp+37,((1U & ((IData)(vlSelf->a) 
                                  >> 1U))));
    bufp->fullBit(oldp+38,((1U & ((IData)(vlSelf->b) 
                                  >> 1U))));
    bufp->fullBit(oldp+39,((1U & (((IData)(vlSelf->a) 
                                   & (IData)(vlSelf->b)) 
                                  >> 1U))));
    bufp->fullBit(oldp+40,((1U & ((IData)(vlSelf->a) 
                                  >> 2U))));
    bufp->fullBit(oldp+41,((1U & ((IData)(vlSelf->b) 
                                  >> 2U))));
    bufp->fullBit(oldp+42,((1U & (((IData)(vlSelf->a) 
                                   & (IData)(vlSelf->b)) 
                                  >> 2U))));
    bufp->fullBit(oldp+43,((1U & ((IData)(vlSelf->a) 
                                  >> 3U))));
    bufp->fullBit(oldp+44,((1U & ((IData)(vlSelf->b) 
                                  >> 3U))));
    bufp->fullBit(oldp+45,((1U & (((IData)(vlSelf->a) 
                                   & (IData)(vlSelf->b)) 
                                  >> 3U))));
    bufp->fullBit(oldp+46,((1U & ((IData)(1U) + (~ (IData)(vlSelf->b))))));
    bufp->fullBit(oldp+47,((1U & ((IData)(vlSelf->a) 
                                  ^ ((IData)(1U) + 
                                     (~ (IData)(vlSelf->b)))))));
    bufp->fullBit(oldp+48,((1U & (((IData)(1U) + (~ (IData)(vlSelf->b))) 
                                  >> 1U))));
    bufp->fullBit(oldp+49,((1U & (((IData)(vlSelf->a) 
                                   & ((IData)(1U) + 
                                      (~ (IData)(vlSelf->b)))) 
                                  >> 1U))));
    bufp->fullBit(oldp+50,((1U & (((IData)(1U) + (~ (IData)(vlSelf->b))) 
                                  >> 2U))));
    bufp->fullBit(oldp+51,((1U & (((IData)(vlSelf->a) 
                                   & ((IData)(1U) + 
                                      (~ (IData)(vlSelf->b)))) 
                                  >> 2U))));
    bufp->fullBit(oldp+52,((1U & (((IData)(1U) + (~ (IData)(vlSelf->b))) 
                                  >> 3U))));
    bufp->fullBit(oldp+53,((1U & (((IData)(vlSelf->a) 
                                   & ((IData)(1U) + 
                                      (~ (IData)(vlSelf->b)))) 
                                  >> 3U))));
    bufp->fullBit(oldp+54,(0U));
}
