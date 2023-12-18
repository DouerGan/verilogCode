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

VL_ATTR_COLD void mOdule___024root___eval_initial(mOdule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    mOdule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    mOdule___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__i_clk = vlSelf->i_clk;
    vlSelf->__Vtrigrprev__TOP__i_rst = vlSelf->i_rst;
}

VL_ATTR_COLD void mOdule___024root___eval_final(mOdule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    mOdule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    mOdule___024root___eval_final\n"); );
}

VL_ATTR_COLD void mOdule___024root___eval_triggers__stl(mOdule___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void mOdule___024root___dump_triggers__stl(mOdule___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void mOdule___024root___eval_stl(mOdule___024root* vlSelf);

VL_ATTR_COLD void mOdule___024root___eval_settle(mOdule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    mOdule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    mOdule___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        mOdule___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                mOdule___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("test.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            mOdule___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void mOdule___024root___dump_triggers__stl(mOdule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    mOdule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    mOdule___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void mOdule___024root___stl_sequent__TOP__0(mOdule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    mOdule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    mOdule___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->o_f = vlSelf->test__DOT__ro_f;
}

VL_ATTR_COLD void mOdule___024root___eval_stl(mOdule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    mOdule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    mOdule___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        mOdule___024root___stl_sequent__TOP__0(vlSelf);
    }
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
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge i_clk or posedge i_rst)\n");
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
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge i_clk or posedge i_rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void mOdule___024root___ctor_var_reset(mOdule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    mOdule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    mOdule___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->i_clk = VL_RAND_RESET_I(1);
    vlSelf->i_rst = VL_RAND_RESET_I(1);
    vlSelf->i_a = VL_RAND_RESET_I(1);
    vlSelf->i_b = VL_RAND_RESET_I(1);
    vlSelf->o_f = VL_RAND_RESET_I(1);
    vlSelf->test__DOT__ro_f = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__i_clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__i_rst = VL_RAND_RESET_I(1);
}
