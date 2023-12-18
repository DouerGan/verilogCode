// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See mOdule.h for the primary calling header

#include "verilated.h"

#include "mOdule___024root.h"

VL_ATTR_COLD void mOdule___024root___eval_static(mOdule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    mOdule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    mOdule___024root___eval_static\n"); );
}

VL_ATTR_COLD void mOdule___024root___eval_initial__TOP(mOdule___024root* vlSelf);

VL_ATTR_COLD void mOdule___024root___eval_initial(mOdule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    mOdule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    mOdule___024root___eval_initial\n"); );
    // Body
    mOdule___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void mOdule___024root___eval_initial__TOP(mOdule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    mOdule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    mOdule___024root___eval_initial__TOP\n"); );
    // Body
    VL_WRITEF("Hello verilator world\n");
    VL_FINISH_MT("hello.v", 4, "");
}

VL_ATTR_COLD void mOdule___024root___eval_final(mOdule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    mOdule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    mOdule___024root___eval_final\n"); );
}

VL_ATTR_COLD void mOdule___024root___eval_settle(mOdule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    mOdule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    mOdule___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void mOdule___024root___dump_triggers__act(mOdule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    mOdule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    mOdule___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void mOdule___024root___dump_triggers__nba(mOdule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    mOdule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    mOdule___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void mOdule___024root___ctor_var_reset(mOdule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    mOdule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    mOdule___024root___ctor_var_reset\n"); );
}
