// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See mOdule.h for the primary calling header

#include "verilated.h"

#include "mOdule___024root.h"

void mOdule___024root___eval_act(mOdule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    mOdule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    mOdule___024root___eval_act\n"); );
}

VL_INLINE_OPT void mOdule___024root___nba_sequent__TOP__0(mOdule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    mOdule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    mOdule___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->test__DOT__ro_f = ((IData)(vlSelf->i_rst) 
                               | ((IData)(vlSelf->i_a) 
                                  ^ (IData)(vlSelf->i_b)));
    vlSelf->o_f = vlSelf->test__DOT__ro_f;
}

void mOdule___024root___eval_nba(mOdule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    mOdule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    mOdule___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        mOdule___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void mOdule___024root___eval_triggers__act(mOdule___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void mOdule___024root___dump_triggers__act(mOdule___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void mOdule___024root___dump_triggers__nba(mOdule___024root* vlSelf);
#endif  // VL_DEBUG

void mOdule___024root___eval(mOdule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    mOdule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    mOdule___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            mOdule___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    mOdule___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("test.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                mOdule___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                mOdule___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("test.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            mOdule___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void mOdule___024root___eval_debug_assertions(mOdule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    mOdule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    mOdule___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->i_clk & 0xfeU))) {
        Verilated::overWidthError("i_clk");}
    if (VL_UNLIKELY((vlSelf->i_rst & 0xfeU))) {
        Verilated::overWidthError("i_rst");}
    if (VL_UNLIKELY((vlSelf->i_a & 0xfeU))) {
        Verilated::overWidthError("i_a");}
    if (VL_UNLIKELY((vlSelf->i_b & 0xfeU))) {
        Verilated::overWidthError("i_b");}
}
#endif  // VL_DEBUG
