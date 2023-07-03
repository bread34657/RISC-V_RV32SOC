// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top.h for the primary calling header

#include "Vsoc_top_regfiles.h"
#include "Vsoc_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vsoc_top_regfiles___ctor_var_reset(Vsoc_top_regfiles* vlSelf);

Vsoc_top_regfiles::Vsoc_top_regfiles(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vsoc_top_regfiles___ctor_var_reset(this);
}

void Vsoc_top_regfiles::__Vconfigure(Vsoc_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vsoc_top_regfiles::~Vsoc_top_regfiles() {
}

void Vsoc_top_regfiles___ctor_var_reset(Vsoc_top_regfiles* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vsoc_top_regfiles___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rs1_addr_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rs2_addr_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rd_addr_i = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rd_data_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rd_we_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rs1_data_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rs2_data_o = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__PVT__x[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__i = VL_RAND_RESET_I(32);
}
