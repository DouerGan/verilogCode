// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_MODULE__SYMS_H_
#define VERILATED_MODULE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "mOdule.h"

// INCLUDE MODULE CLASSES
#include "mOdule___024root.h"

// SYMS CLASS (contains all model state)
class mOdule__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    mOdule* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    mOdule___024root               TOP;

    // CONSTRUCTORS
    mOdule__Syms(VerilatedContext* contextp, const char* namep, mOdule* modelp);
    ~mOdule__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
