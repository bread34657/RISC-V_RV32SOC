// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top.h for the primary calling header

#include "Vsoc_top___024root.h"
#include "Vsoc_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vsoc_top___024root___ctor_var_reset(Vsoc_top___024root* vlSelf);

Vsoc_top___024root::Vsoc_top___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vsoc_top___024root___ctor_var_reset(this);
}

void Vsoc_top___024root::__Vconfigure(Vsoc_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vsoc_top___024root::~Vsoc_top___024root() {
}

void Vsoc_top_soc_top___initial__TOP__soc_top__6(Vsoc_top_soc_top* vlSelf) VL_ATTR_COLD;

void Vsoc_top___024root___eval_initial(Vsoc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    Vsoc_top_soc_top___initial__TOP__soc_top__6((&vlSymsp->TOP__soc_top));
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vsoc_top_soc_top___settle__TOP__soc_top__1(Vsoc_top_soc_top* vlSelf) VL_ATTR_COLD;
void Vsoc_top___024root___settle__TOP__1(Vsoc_top___024root* vlSelf);
void Vsoc_top_coretop___settle__TOP__soc_top__coretop0__1(Vsoc_top_coretop* vlSelf) VL_ATTR_COLD;
void Vsoc_top_regfiles___settle__TOP__soc_top__coretop0__regfiles0__1(Vsoc_top_regfiles* vlSelf);
void Vsoc_top_soc_top___settle__TOP__soc_top__2(Vsoc_top_soc_top* vlSelf) VL_ATTR_COLD;
void Vsoc_top_coretop___settle__TOP__soc_top__coretop0__2(Vsoc_top_coretop* vlSelf);
void Vsoc_top_soc_top___settle__TOP__soc_top__3(Vsoc_top_soc_top* vlSelf);

void Vsoc_top___024root___eval_settle(Vsoc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_settle\n"); );
    // Body
    Vsoc_top_soc_top___settle__TOP__soc_top__1((&vlSymsp->TOP__soc_top));
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vsoc_top___024root___settle__TOP__1(vlSelf);
    Vsoc_top_coretop___settle__TOP__soc_top__coretop0__1((&vlSymsp->TOP__soc_top__coretop0));
    Vsoc_top_regfiles___settle__TOP__soc_top__coretop0__regfiles0__1((&vlSymsp->TOP__soc_top__coretop0__regfiles0));
    Vsoc_top_soc_top___settle__TOP__soc_top__2((&vlSymsp->TOP__soc_top));
    Vsoc_top_coretop___settle__TOP__soc_top__coretop0__2((&vlSymsp->TOP__soc_top__coretop0));
    Vsoc_top_soc_top___settle__TOP__soc_top__3((&vlSymsp->TOP__soc_top));
}

void Vsoc_top_soc_top___final_TOP__soc_top(Vsoc_top_soc_top* vlSelf) VL_ATTR_COLD;

void Vsoc_top___024root___final(Vsoc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___final\n"); );
    // Body
    Vsoc_top_soc_top___final_TOP__soc_top((&vlSymsp->TOP__soc_top));
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vsoc_top___024root___ctor_var_reset(Vsoc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_i = VL_RAND_RESET_I(1);
    vlSelf->halt_o = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
