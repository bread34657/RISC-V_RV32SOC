// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsoc_top.h for the primary calling header

#ifndef VERILATED_VSOC_TOP_DPRAM__R200000_RB15_H_
#define VERILATED_VSOC_TOP_DPRAM__R200000_RB15_H_  // guard

#include "verilated_heavy.h"

//==========

class Vsoc_top__Syms;
class Vsoc_top_VerilatedVcd;


//----------

VL_MODULE(Vsoc_top_dpram__R200000_RB15) {
  public:

    // PORTS
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__ram_we_i,0,0);
    VL_IN8(__PVT__ram_req_i,0,0);
    VL_IN(__PVT__addr_i,31,0);
    VL_IN(__PVT__ram_addr_i,31,0);
    VL_IN(__PVT__ram_data_i,31,0);
    VL_OUT(__PVT__ram_data_o,31,0);
    VL_OUT(__PVT__inst_o,31,0);

    // LOCAL SIGNALS
    VlUnpacked<CData/*7:0*/, 2097152> __PVT__mem;

    // INTERNAL VARIABLES
    Vsoc_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vsoc_top_dpram__R200000_RB15);  ///< Copying not allowed
  public:
    Vsoc_top_dpram__R200000_RB15(const char* name);
    ~Vsoc_top_dpram__R200000_RB15();

    // INTERNAL METHODS
    void __Vconfigure(Vsoc_top__Syms* symsp, bool first);
    void readByte(uint32_t byte_addr, uint32_t& val);
    void writeByte(uint32_t byte_addr, uint32_t val);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
