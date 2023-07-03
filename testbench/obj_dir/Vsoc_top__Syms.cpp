// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vsoc_top__Syms.h"
#include "Vsoc_top.h"
#include "Vsoc_top___024root.h"
#include "Vsoc_top_soc_top.h"
#include "Vsoc_top_dpram__R200000_RB15.h"
#include "Vsoc_top_coretop.h"
#include "Vsoc_top_regfiles.h"

// FUNCTIONS
Vsoc_top__Syms::~Vsoc_top__Syms()
{
}

Vsoc_top__Syms::Vsoc_top__Syms(VerilatedContext* contextp, const char* namep,Vsoc_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp(modelp)
    // Setup module instances
    , TOP(namep)
    , TOP__soc_top(Verilated::catName(namep, "soc_top"))
    , TOP__soc_top__coretop0(Verilated::catName(namep, "soc_top.coretop0"))
    , TOP__soc_top__coretop0__regfiles0(Verilated::catName(namep, "soc_top.coretop0.regfiles0"))
    , TOP__soc_top__dpram0(Verilated::catName(namep, "soc_top.dpram0"))
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.soc_top = &TOP__soc_top;
    TOP__soc_top.coretop0 = &TOP__soc_top__coretop0;
    TOP__soc_top__coretop0.regfiles0 = &TOP__soc_top__coretop0__regfiles0;
    TOP__soc_top.dpram0 = &TOP__soc_top__dpram0;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
    TOP__soc_top.__Vconfigure(this, true);
    TOP__soc_top__coretop0.__Vconfigure(this, true);
    TOP__soc_top__coretop0__regfiles0.__Vconfigure(this, true);
    TOP__soc_top__dpram0.__Vconfigure(this, true);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
    }
}
