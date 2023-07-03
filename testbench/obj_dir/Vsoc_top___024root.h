// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsoc_top.h for the primary calling header

#ifndef VERILATED_VSOC_TOP___024ROOT_H_
#define VERILATED_VSOC_TOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vsoc_top__Syms;
class Vsoc_top_VerilatedVcd;
class Vsoc_top_soc_top;


//----------

VL_MODULE(Vsoc_top___024root) {
  public:
    // CELLS
    Vsoc_top_soc_top* soc_top;

    // PORTS
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_i,0,0);
    VL_OUT8(halt_o,0,0);

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vsoc_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vsoc_top___024root);  ///< Copying not allowed
  public:
    Vsoc_top___024root(const char* name);
    ~Vsoc_top___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vsoc_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
