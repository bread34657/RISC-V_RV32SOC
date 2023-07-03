// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSOC_TOP__SYMS_H_
#define VERILATED_VSOC_TOP__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vsoc_top.h"

// INCLUDE MODULE CLASSES
#include "Vsoc_top___024root.h"
#include "Vsoc_top_soc_top.h"
#include "Vsoc_top_dpram__R200000_RB15.h"
#include "Vsoc_top_coretop.h"
#include "Vsoc_top_regfiles.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Vsoc_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsoc_top* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsoc_top___024root             TOP;
    Vsoc_top_soc_top               TOP__soc_top;
    Vsoc_top_coretop               TOP__soc_top__coretop0;
    Vsoc_top_regfiles              TOP__soc_top__coretop0__regfiles0;
    Vsoc_top_dpram__R200000_RB15   TOP__soc_top__dpram0;

    // CONSTRUCTORS
    Vsoc_top__Syms(VerilatedContext* contextp, const char* namep, Vsoc_top* modelp);
    ~Vsoc_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
