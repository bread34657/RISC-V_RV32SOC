// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsoc_top.h for the primary calling header

#ifndef VERILATED_VSOC_TOP_REGFILES_H_
#define VERILATED_VSOC_TOP_REGFILES_H_  // guard

#include "verilated_heavy.h"

//==========

class Vsoc_top__Syms;
class Vsoc_top_VerilatedVcd;


//----------

VL_MODULE(Vsoc_top_regfiles) {
  public:

    // PORTS
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__rs1_addr_i,4,0);
    VL_IN8(__PVT__rs2_addr_i,4,0);
    VL_IN8(__PVT__rd_addr_i,4,0);
    VL_IN8(__PVT__rd_we_i,0,0);
    VL_IN(__PVT__rd_data_i,31,0);
    VL_OUT(__PVT__rs1_data_o,31,0);
    VL_OUT(__PVT__rs2_data_o,31,0);

    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__we;
    IData/*31:0*/ __PVT__i;
    VlUnpacked<IData/*31:0*/, 32> __PVT__x;

    // INTERNAL VARIABLES
    Vsoc_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vsoc_top_regfiles);  ///< Copying not allowed
  public:
    Vsoc_top_regfiles(const char* name);
    ~Vsoc_top_regfiles();

    // INTERNAL METHODS
    void __Vconfigure(Vsoc_top__Syms* symsp, bool first);
    void readRegister(uint32_t raddr, uint32_t& val);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
