// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See mOdule.h for the primary calling header

#include "verilated.h"

#include "mOdule__Syms.h"
#include "mOdule___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void mOdule___024root___dump_triggers__act(mOdule___024root* vlSelf);
#endif  // VL_DEBUG

void mOdule___024root___eval_triggers__act(mOdule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    mOdule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    mOdule___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = (((IData)(vlSelf->i_clk) 
                                       & (~ (IData)(vlSelf->__Vtrigrprev__TOP__i_clk))) 
                                      | ((IData)(vlSelf->i_rst) 
                                         & (~ (IData)(vlSelf->__Vtrigrprev__TOP__i_rst))));
    vlSelf->__Vtrigrprev__TOP__i_clk = vlSelf->i_clk;
    vlSelf->__Vtrigrprev__TOP__i_rst = vlSelf->i_rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        mOdule___024root___dump_triggers__act(vlSelf);
    }
#endif
}
