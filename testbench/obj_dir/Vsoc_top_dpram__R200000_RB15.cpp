// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top.h for the primary calling header

#include "Vsoc_top_dpram__R200000_RB15.h"
#include "Vsoc_top__Syms.h"

#include "verilated_dpi.h"

//==========

void Vsoc_top_dpram__R200000_RB15::readByte(uint32_t byte_addr, uint32_t& val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsoc_top_dpram__R200000_RB15::readByte\n"); );
    // Body
    val = this->__PVT__mem[(0x1fffffU & byte_addr)];
}

void Vsoc_top_dpram__R200000_RB15::writeByte(uint32_t byte_addr, uint32_t val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsoc_top_dpram__R200000_RB15::writeByte\n"); );
    // Body
    this->__PVT__mem[(0x1fffffU & byte_addr)] = val;
}

VL_INLINE_OPT void Vsoc_top_dpram__R200000_RB15___sequent__TOP__soc_top__dpram0__1(Vsoc_top_dpram__R200000_RB15* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsoc_top_dpram__R200000_RB15___sequent__TOP__soc_top__dpram0__1\n"); );
    // Variables
    CData/*7:0*/ __Vdlyvval__mem__v0;
    CData/*0:0*/ __Vdlyvset__mem__v0;
    CData/*7:0*/ __Vdlyvval__mem__v1;
    CData/*7:0*/ __Vdlyvval__mem__v2;
    CData/*7:0*/ __Vdlyvval__mem__v3;
    IData/*20:0*/ __Vdlyvdim0__mem__v0;
    IData/*20:0*/ __Vdlyvdim0__mem__v1;
    IData/*20:0*/ __Vdlyvdim0__mem__v2;
    IData/*20:0*/ __Vdlyvdim0__mem__v3;
    // Body
    __Vdlyvset__mem__v0 = 0U;
    if ((vlSymsp->TOP__soc_top.__PVT__device_we[0U] 
         & vlSymsp->TOP__soc_top.__PVT__device_req[0U])) {
        __Vdlyvval__mem__v0 = (vlSymsp->TOP__soc_top.__PVT__device_wdata
                               [0U] >> 0x18U);
        __Vdlyvset__mem__v0 = 1U;
        __Vdlyvdim0__mem__v0 = (0x1ffffcU & vlSymsp->TOP__soc_top.__PVT__device_addr
                                [0U]);
        __Vdlyvval__mem__v1 = (0xffU & (vlSymsp->TOP__soc_top.__PVT__device_wdata
                                        [0U] >> 0x10U));
        __Vdlyvdim0__mem__v1 = (0x1fffffU & ((IData)(1U) 
                                             + (0x1ffffcU 
                                                & vlSymsp->TOP__soc_top.__PVT__device_addr
                                                [0U])));
        __Vdlyvval__mem__v2 = (0xffU & (vlSymsp->TOP__soc_top.__PVT__device_wdata
                                        [0U] >> 8U));
        __Vdlyvdim0__mem__v2 = (0x1fffffU & ((IData)(2U) 
                                             + (0x1ffffcU 
                                                & vlSymsp->TOP__soc_top.__PVT__device_addr
                                                [0U])));
        __Vdlyvval__mem__v3 = (0xffU & vlSymsp->TOP__soc_top.__PVT__device_wdata
                               [0U]);
        __Vdlyvdim0__mem__v3 = (0x1fffffU & ((IData)(3U) 
                                             + (0x1ffffcU 
                                                & vlSymsp->TOP__soc_top.__PVT__device_addr
                                                [0U])));
    }
    if (__Vdlyvset__mem__v0) {
        vlSelf->__PVT__mem[__Vdlyvdim0__mem__v0] = __Vdlyvval__mem__v0;
        vlSelf->__PVT__mem[__Vdlyvdim0__mem__v1] = __Vdlyvval__mem__v1;
        vlSelf->__PVT__mem[__Vdlyvdim0__mem__v2] = __Vdlyvval__mem__v2;
        vlSelf->__PVT__mem[__Vdlyvdim0__mem__v3] = __Vdlyvval__mem__v3;
    }
}
