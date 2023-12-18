// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "mOdule__Syms.h"


VL_ATTR_COLD void mOdule___024root__trace_init_sub__TOP__0(mOdule___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    mOdule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    mOdule___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"i_clk", false,-1);
    tracep->declBit(c+2,"i_rst", false,-1);
    tracep->declBit(c+3,"i_a", false,-1);
    tracep->declBit(c+4,"i_b", false,-1);
    tracep->declBit(c+5,"o_f", false,-1);
    tracep->pushNamePrefix("test ");
    tracep->declBit(c+1,"i_clk", false,-1);
    tracep->declBit(c+2,"i_rst", false,-1);
    tracep->declBit(c+3,"i_a", false,-1);
    tracep->declBit(c+4,"i_b", false,-1);
    tracep->declBit(c+5,"o_f", false,-1);
    tracep->declBit(c+6,"ro_f", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void mOdule___024root__trace_init_top(mOdule___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    mOdule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    mOdule___024root__trace_init_top\n"); );
    // Body
    mOdule___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void mOdule___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void mOdule___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void mOdule___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void mOdule___024root__trace_register(mOdule___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    mOdule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    mOdule___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&mOdule___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&mOdule___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&mOdule___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void mOdule___024root__trace_full_sub_0(mOdule___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void mOdule___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    mOdule___024root__trace_full_top_0\n"); );
    // Init
    mOdule___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<mOdule___024root*>(voidSelf);
    mOdule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    mOdule___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void mOdule___024root__trace_full_sub_0(mOdule___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    mOdule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    mOdule___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->i_clk));
    bufp->fullBit(oldp+2,(vlSelf->i_rst));
    bufp->fullBit(oldp+3,(vlSelf->i_a));
    bufp->fullBit(oldp+4,(vlSelf->i_b));
    bufp->fullBit(oldp+5,(vlSelf->o_f));
    bufp->fullBit(oldp+6,(vlSelf->test__DOT__ro_f));
}
