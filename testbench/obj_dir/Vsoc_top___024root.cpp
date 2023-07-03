// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top.h for the primary calling header

#include "Vsoc_top___024root.h"
#include "Vsoc_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vsoc_top___024root___settle__TOP__1(Vsoc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___settle__TOP__1\n"); );
    // Body
    vlSelf->halt_o = vlSymsp->TOP__soc_top.__PVT__halt_from_console;
}

void Vsoc_top_coretop___sequent__TOP__soc_top__coretop0__3(Vsoc_top_coretop* vlSelf);
void Vsoc_top_regfiles___sequent__TOP__soc_top__coretop0__regfiles0__2(Vsoc_top_regfiles* vlSelf);
void Vsoc_top_soc_top___sequent__TOP__soc_top__4(Vsoc_top_soc_top* vlSelf);
void Vsoc_top_dpram__R200000_RB15___sequent__TOP__soc_top__dpram0__1(Vsoc_top_dpram__R200000_RB15* vlSelf);
void Vsoc_top_coretop___sequent__TOP__soc_top__coretop0__4(Vsoc_top_coretop* vlSelf);
void Vsoc_top_soc_top___sequent__TOP__soc_top__5(Vsoc_top_soc_top* vlSelf);
void Vsoc_top_regfiles___settle__TOP__soc_top__coretop0__regfiles0__1(Vsoc_top_regfiles* vlSelf);
void Vsoc_top_soc_top___combo__TOP__soc_top__7(Vsoc_top_soc_top* vlSelf);
void Vsoc_top_coretop___settle__TOP__soc_top__coretop0__2(Vsoc_top_coretop* vlSelf);
void Vsoc_top_soc_top___settle__TOP__soc_top__3(Vsoc_top_soc_top* vlSelf);

void Vsoc_top___024root___eval(Vsoc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vsoc_top_coretop___sequent__TOP__soc_top__coretop0__3((&vlSymsp->TOP__soc_top__coretop0));
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vsoc_top_regfiles___sequent__TOP__soc_top__coretop0__regfiles0__2((&vlSymsp->TOP__soc_top__coretop0__regfiles0));
        Vsoc_top_soc_top___sequent__TOP__soc_top__4((&vlSymsp->TOP__soc_top));
        Vsoc_top_dpram__R200000_RB15___sequent__TOP__soc_top__dpram0__1((&vlSymsp->TOP__soc_top__dpram0));
        Vsoc_top_coretop___sequent__TOP__soc_top__coretop0__4((&vlSymsp->TOP__soc_top__coretop0));
        Vsoc_top___024root___settle__TOP__1(vlSelf);
        Vsoc_top_soc_top___sequent__TOP__soc_top__5((&vlSymsp->TOP__soc_top));
        Vsoc_top_regfiles___settle__TOP__soc_top__coretop0__regfiles0__1((&vlSymsp->TOP__soc_top__coretop0__regfiles0));
    }
    Vsoc_top_soc_top___combo__TOP__soc_top__7((&vlSymsp->TOP__soc_top));
    vlSelf->__Vm_traceActivity[2U] = 1U;
    Vsoc_top_coretop___settle__TOP__soc_top__coretop0__2((&vlSymsp->TOP__soc_top__coretop0));
    Vsoc_top_soc_top___settle__TOP__soc_top__3((&vlSymsp->TOP__soc_top));
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

QData Vsoc_top___024root___change_request_1(Vsoc_top___024root* vlSelf);

VL_INLINE_OPT QData Vsoc_top___024root___change_request(Vsoc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___change_request\n"); );
    // Body
    return (Vsoc_top___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vsoc_top___024root___change_request_1(Vsoc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vsoc_top___024root___eval_debug_assertions(Vsoc_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsoc_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_i & 0xfeU))) {
        Verilated::overWidthError("rst_i");}
}
#endif  // VL_DEBUG
