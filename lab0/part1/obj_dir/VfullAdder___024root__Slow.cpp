// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VfullAdder.h for the primary calling header

#include "verilated.h"

#include "VfullAdder__Syms.h"
#include "VfullAdder___024root.h"

void VfullAdder___024root___ctor_var_reset(VfullAdder___024root* vlSelf);

VfullAdder___024root::VfullAdder___024root(VfullAdder__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VfullAdder___024root___ctor_var_reset(this);
}

void VfullAdder___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VfullAdder___024root::~VfullAdder___024root() {
}
