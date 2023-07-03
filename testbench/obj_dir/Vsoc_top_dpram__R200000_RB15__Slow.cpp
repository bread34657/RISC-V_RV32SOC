// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top.h for the primary calling header

#include "Vsoc_top_dpram__R200000_RB15.h"
#include "Vsoc_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vsoc_top_dpram__R200000_RB15___ctor_var_reset(Vsoc_top_dpram__R200000_RB15* vlSelf);

Vsoc_top_dpram__R200000_RB15::Vsoc_top_dpram__R200000_RB15(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vsoc_top_dpram__R200000_RB15___ctor_var_reset(this);
}

void Vsoc_top_dpram__R200000_RB15::__Vconfigure(Vsoc_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vsoc_top_dpram__R200000_RB15::~Vsoc_top_dpram__R200000_RB15() {
}

void Vsoc_top_dpram__R200000_RB15___ctor_var_reset(Vsoc_top_dpram__R200000_RB15* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsoc_top_dpram__R200000_RB15___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__addr_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ram_addr_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ram_data_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ram_we_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ram_req_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ram_data_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_o = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2097152; ++__Vi0) {
        vlSelf->__PVT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
}
