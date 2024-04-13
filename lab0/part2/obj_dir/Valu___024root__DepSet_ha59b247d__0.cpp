// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "verilated.h"

#include "Valu___024root.h"

VL_INLINE_OPT void Valu___024root___ico_sequent__TOP__0(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->alu__DOT__add4__DOT__s1 = (1U & (((IData)(vlSelf->a) 
                                              ^ (IData)(vlSelf->b)) 
                                             >> 3U));
    vlSelf->alu__DOT__sub4__DOT__s1 = (1U & (((IData)(vlSelf->a) 
                                              >> 3U) 
                                             ^ (1U 
                                                & (((IData)(1U) 
                                                    + 
                                                    (~ (IData)(vlSelf->b))) 
                                                   >> 3U))));
    vlSelf->alu__DOT__add3__DOT__s1 = (1U & (((IData)(vlSelf->a) 
                                              ^ (IData)(vlSelf->b)) 
                                             >> 2U));
    vlSelf->alu__DOT__sub3__DOT__s1 = (1U & (((IData)(vlSelf->a) 
                                              >> 2U) 
                                             ^ (3U 
                                                & (((IData)(1U) 
                                                    + 
                                                    (~ (IData)(vlSelf->b))) 
                                                   >> 2U))));
    vlSelf->alu__DOT__c1 = (1U & ((IData)(vlSelf->a) 
                                  & (IData)(vlSelf->b)));
    vlSelf->alu__DOT__add2__DOT__s1 = (1U & (((IData)(vlSelf->a) 
                                              ^ (IData)(vlSelf->b)) 
                                             >> 1U));
    vlSelf->alu__DOT__b1 = (1U & ((IData)(vlSelf->a) 
                                  & ((IData)(1U) + 
                                     (~ (IData)(vlSelf->b)))));
    vlSelf->alu__DOT__sub2__DOT__s1 = (1U & (((IData)(vlSelf->a) 
                                              >> 1U) 
                                             ^ (7U 
                                                & (((IData)(1U) 
                                                    + 
                                                    (~ (IData)(vlSelf->b))) 
                                                   >> 1U))));
    vlSelf->alu__DOT__c2 = (1U & (((IData)(vlSelf->alu__DOT__add2__DOT__s1) 
                                   & (IData)(vlSelf->alu__DOT__c1)) 
                                  | (((IData)(vlSelf->a) 
                                      & (IData)(vlSelf->b)) 
                                     >> 1U)));
    vlSelf->alu__DOT__b2 = (1U & (((IData)(vlSelf->alu__DOT__sub2__DOT__s1) 
                                   & (IData)(vlSelf->alu__DOT__b1)) 
                                  | (7U & (((IData)(vlSelf->a) 
                                            & ((IData)(1U) 
                                               + (~ (IData)(vlSelf->b)))) 
                                           >> 1U))));
    vlSelf->alu__DOT__c3 = (1U & (((IData)(vlSelf->alu__DOT__add3__DOT__s1) 
                                   & (IData)(vlSelf->alu__DOT__c2)) 
                                  | (((IData)(vlSelf->a) 
                                      & (IData)(vlSelf->b)) 
                                     >> 2U)));
    vlSelf->alu__DOT__b3 = (1U & (((IData)(vlSelf->alu__DOT__sub3__DOT__s1) 
                                   & (IData)(vlSelf->alu__DOT__b2)) 
                                  | (3U & (((IData)(vlSelf->a) 
                                            & ((IData)(1U) 
                                               + (~ (IData)(vlSelf->b)))) 
                                           >> 2U))));
    vlSelf->y = (0xfU & ((4U & (IData)(vlSelf->s)) ? 
                         ((2U & (IData)(vlSelf->s))
                           ? ((1U & (IData)(vlSelf->s))
                               ? (((IData)(vlSelf->a) 
                                   == (IData)(vlSelf->b))
                                   ? 1U : 0U) : (((IData)(vlSelf->a) 
                                                  > (IData)(vlSelf->b))
                                                  ? 1U
                                                  : 0U))
                           : ((1U & (IData)(vlSelf->s))
                               ? ((IData)(vlSelf->a) 
                                  ^ (IData)(vlSelf->b))
                               : ((IData)(vlSelf->a) 
                                  | (IData)(vlSelf->b))))
                          : ((2U & (IData)(vlSelf->s))
                              ? ((1U & (IData)(vlSelf->s))
                                  ? ((IData)(vlSelf->a) 
                                     & (IData)(vlSelf->b))
                                  : (~ (IData)(vlSelf->a)))
                              : ((1U & (IData)(vlSelf->s))
                                  ? ((((IData)(vlSelf->alu__DOT__sub4__DOT__s1) 
                                       ^ (IData)(vlSelf->alu__DOT__b3)) 
                                      << 3U) | ((((IData)(vlSelf->alu__DOT__sub3__DOT__s1) 
                                                  ^ (IData)(vlSelf->alu__DOT__b2)) 
                                                 << 2U) 
                                                | ((((IData)(vlSelf->alu__DOT__sub2__DOT__s1) 
                                                     ^ (IData)(vlSelf->alu__DOT__b1)) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->a) 
                                                         ^ 
                                                         ((IData)(1U) 
                                                          + 
                                                          (~ (IData)(vlSelf->b))))))))
                                  : ((((IData)(vlSelf->alu__DOT__add4__DOT__s1) 
                                       ^ (IData)(vlSelf->alu__DOT__c3)) 
                                      << 3U) | ((((IData)(vlSelf->alu__DOT__add3__DOT__s1) 
                                                  ^ (IData)(vlSelf->alu__DOT__c2)) 
                                                 << 2U) 
                                                | ((((IData)(vlSelf->alu__DOT__add2__DOT__s1) 
                                                     ^ (IData)(vlSelf->alu__DOT__c1)) 
                                                    << 1U) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->a) 
                                                         ^ (IData)(vlSelf->b))))))))));
}

void Valu___024root___eval_ico(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Valu___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Valu___024root___eval_act(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_act\n"); );
}

void Valu___024root___eval_nba(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_nba\n"); );
}

void Valu___024root___eval_triggers__ico(Valu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__ico(Valu___024root* vlSelf);
#endif  // VL_DEBUG
void Valu___024root___eval_triggers__act(Valu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__act(Valu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__nba(Valu___024root* vlSelf);
#endif  // VL_DEBUG

void Valu___024root___eval(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Valu___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Valu___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("alu.v", 2, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Valu___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Valu___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Valu___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("alu.v", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Valu___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Valu___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("alu.v", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Valu___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Valu___024root___eval_debug_assertions(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xf0U))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xf0U))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((vlSelf->s & 0xf8U))) {
        Verilated::overWidthError("s");}
}
#endif  // VL_DEBUG
