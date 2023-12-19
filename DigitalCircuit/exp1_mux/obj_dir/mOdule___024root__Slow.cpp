// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See mOdule.h for the primary calling header

#include "verilated.h"

#include "mOdule__Syms.h"
#include "mOdule___024root.h"

void mOdule___024root___ctor_var_reset(mOdule___024root* vlSelf);

mOdule___024root::mOdule___024root(mOdule__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    mOdule___024root___ctor_var_reset(this);
}

void mOdule___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

mOdule___024root::~mOdule___024root() {
}
