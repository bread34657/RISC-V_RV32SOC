// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsoc_top.h for the primary calling header

#ifndef VERILATED_VSOC_TOP_SOC_TOP_H_
#define VERILATED_VSOC_TOP_SOC_TOP_H_  // guard

#include "verilated_heavy.h"

//==========

class Vsoc_top__Syms;
class Vsoc_top_VerilatedVcd;
class Vsoc_top_dpram__R200000_RB15;
class Vsoc_top_coretop;


//----------

VL_MODULE(Vsoc_top_soc_top) {
  public:
    // CELLS
    Vsoc_top_dpram__R200000_RB15* dpram0;
    Vsoc_top_coretop* coretop0;

    // PORTS
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_i,0,0);
    VL_OUT8(halt_o,0,0);

    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__halt_from_console;
    CData/*0:0*/ __PVT__clint_timer_irq;
    CData/*0:0*/ __PVT__u_bus__DOT__host_sel_req;
    CData/*1:0*/ __PVT__u_bus__DOT__device_sel_req;
    CData/*1:0*/ __PVT__u_bus__DOT__device_sel_resp;
    CData/*2:0*/ __PVT__console0__DOT__sim_finish;
    CData/*0:0*/ __PVT__clint0__DOT__carry;
    IData/*31:0*/ __PVT__console0__DOT__log_fd;
    IData/*31:0*/ __PVT__clint0__DOT__msip;
    QData/*63:0*/ __PVT__clint0__DOT__mtimecmp;
    VlUnpacked<CData/*0:0*/, 1> __PVT__host_req;
    VlUnpacked<CData/*0:0*/, 1> __PVT__host_gnt;
    VlUnpacked<IData/*31:0*/, 1> __PVT__host_addr;
    VlUnpacked<IData/*31:0*/, 1> __PVT__host_wdata;
    VlUnpacked<IData/*31:0*/, 1> __PVT__host_rdata;
    VlUnpacked<CData/*0:0*/, 1> __PVT__host_we;
    VlUnpacked<CData/*0:0*/, 3> __PVT__device_req;
    VlUnpacked<IData/*31:0*/, 3> __PVT__device_addr;
    VlUnpacked<IData/*31:0*/, 3> __PVT__device_wdata;
    VlUnpacked<IData/*31:0*/, 3> __PVT__device_rdata;
    VlUnpacked<CData/*0:0*/, 3> __PVT__device_we;
    VlUnpacked<IData/*31:0*/, 3> __PVT__cfg_device_addr_base;
    VlUnpacked<IData/*31:0*/, 3> __PVT__cfg_device_addr_mask;
    VlUnpacked<IData/*31:0*/, 2> __PVT__clint0__DOT__mtime_reg;
    VlUnpacked<IData/*31:0*/, 2> __PVT__clint0__DOT__mtimecmp_reg;

    // LOCAL VARIABLES
    CData/*0:0*/ u_bus__DOT____Vlvbound1;
    CData/*0:0*/ u_bus__DOT____Vlvbound2;
    IData/*31:0*/ __Vcellout__clint0__data_o;
    IData/*31:0*/ u_bus__DOT____Vlvbound3;
    IData/*31:0*/ u_bus__DOT____Vlvbound4;
    IData/*31:0*/ u_bus__DOT____Vlvbound10;
    VlUnpacked<IData/*31:0*/, 3> __Vcellinp__u_bus__cfg_device_addr_mask;
    VlUnpacked<IData/*31:0*/, 3> __Vcellinp__u_bus__cfg_device_addr_base;
    VlUnpacked<IData/*31:0*/, 3> __Vcellout__u_bus__device_wdata_o;
    VlUnpacked<CData/*0:0*/, 3> __Vcellout__u_bus__device_we_o;
    VlUnpacked<IData/*31:0*/, 3> __Vcellout__u_bus__device_addr_o;
    VlUnpacked<CData/*0:0*/, 3> __Vcellout__u_bus__device_req_o;
    VlUnpacked<IData/*31:0*/, 3> __Vcellinp__u_bus__device_rdata_i;
    VlUnpacked<CData/*0:0*/, 1> __Vcellout__u_bus__host_gnt_o;
    VlUnpacked<IData/*31:0*/, 1> __Vcellout__u_bus__host_rdata_o;
    VlUnpacked<IData/*31:0*/, 1> __Vcellinp__u_bus__host_wdata_i;
    VlUnpacked<CData/*0:0*/, 1> __Vcellinp__u_bus__host_we_i;
    VlUnpacked<IData/*31:0*/, 1> __Vcellinp__u_bus__host_addr_i;
    VlUnpacked<CData/*0:0*/, 1> __Vcellinp__u_bus__host_req_i;

    // INTERNAL VARIABLES
    Vsoc_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vsoc_top_soc_top);  ///< Copying not allowed
  public:
    Vsoc_top_soc_top(const char* name);
    ~Vsoc_top_soc_top();

    // INTERNAL METHODS
    void __Vconfigure(Vsoc_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
