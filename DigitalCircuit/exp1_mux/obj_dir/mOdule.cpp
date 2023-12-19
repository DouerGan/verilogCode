// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "mOdule.h"
#include "mOdule__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

mOdule::mOdule(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new mOdule__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , s{vlSymsp->TOP.s}
    , y{vlSymsp->TOP.y}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

mOdule::mOdule(const char* _vcname__)
    : mOdule(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

mOdule::~mOdule() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void mOdule___024root___eval_debug_assertions(mOdule___024root* vlSelf);
#endif  // VL_DEBUG
void mOdule___024root___eval_static(mOdule___024root* vlSelf);
void mOdule___024root___eval_initial(mOdule___024root* vlSelf);
void mOdule___024root___eval_settle(mOdule___024root* vlSelf);
void mOdule___024root___eval(mOdule___024root* vlSelf);

void mOdule::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate mOdule::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    mOdule___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        mOdule___024root___eval_static(&(vlSymsp->TOP));
        mOdule___024root___eval_initial(&(vlSymsp->TOP));
        mOdule___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    mOdule___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool mOdule::eventsPending() { return false; }

uint64_t mOdule::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* mOdule::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void mOdule___024root___eval_final(mOdule___024root* vlSelf);

VL_ATTR_COLD void mOdule::final() {
    mOdule___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* mOdule::hierName() const { return vlSymsp->name(); }
const char* mOdule::modelName() const { return "mOdule"; }
unsigned mOdule::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> mOdule::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void mOdule___024root__trace_init_top(mOdule___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    mOdule___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<mOdule___024root*>(voidSelf);
    mOdule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    mOdule___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void mOdule___024root__trace_register(mOdule___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void mOdule::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'mOdule::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    mOdule___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
