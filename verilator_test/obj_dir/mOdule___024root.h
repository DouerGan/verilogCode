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
    VL_IN8(i_clk,0,0);
    VL_IN8(i_rst,0,0);
    VL_IN8(i_a,0,0);
    VL_IN8(i_b,0,0);
    VL_OUT8(o_f,0,0);
    CData/*0:0*/ test__DOT__ro_f;
    CData/*0:0*/ __Vtrigrprev__TOP__i_clk;
    CData/*0:0*/ __Vtrigrprev__TOP__i_rst;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

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
