// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See mOdule.h for the primary calling header

#ifndef VERILATED_MODULE___024ROOT_H_
#define VERILATED_MODULE___024ROOT_H_  // guard

#include "verilated.h"

class mOdule__Syms;

class mOdule___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    mOdule__Syms* const vlSymsp;

    // CONSTRUCTORS
    mOdule___024root(mOdule__Syms* symsp, const char* v__name);
    ~mOdule___024root();
    VL_UNCOPYABLE(mOdule___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
