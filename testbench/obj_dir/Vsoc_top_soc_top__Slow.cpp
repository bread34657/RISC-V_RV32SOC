// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top.h for the primary calling header

#include "Vsoc_top_soc_top.h"
#include "Vsoc_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vsoc_top_soc_top___ctor_var_reset(Vsoc_top_soc_top* vlSelf);

Vsoc_top_soc_top::Vsoc_top_soc_top(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vsoc_top_soc_top___ctor_var_reset(this);
}

void Vsoc_top_soc_top::__Vconfigure(Vsoc_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vsoc_top_soc_top::~Vsoc_top_soc_top() {
}

void Vsoc_top_soc_top___final_TOP__soc_top(Vsoc_top_soc_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsoc_top_soc_top___final_TOP__soc_top\n"); );
    // Body
    VL_FCLOSE_I(vlSelf->__PVT__console0__DOT__log_fd); vlSelf->__PVT__console0__DOT__log_fd = 0;
}

void Vsoc_top_soc_top___settle__TOP__soc_top__1(Vsoc_top_soc_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsoc_top_soc_top___settle__TOP__soc_top__1\n"); );
    // Variables
    CData/*0:0*/ u_bus__DOT____Vlvbound12;
    // Body
    vlSelf->__PVT__cfg_device_addr_base[0U] = 0U;
    vlSelf->__PVT__cfg_device_addr_mask[0U] = 0xffe00000U;
    vlSelf->__PVT__cfg_device_addr_base[1U] = 0x200000U;
    vlSelf->__PVT__cfg_device_addr_mask[1U] = 0xfff00000U;
    vlSelf->__PVT__cfg_device_addr_base[2U] = 0x2000000U;
    vlSelf->__PVT__cfg_device_addr_mask[2U] = 0xffff0000U;
    vlSelf->__PVT__clint0__DOT__carry = (0xffffffffU 
                                         == vlSelf->__PVT__clint0__DOT__mtime_reg
                                         [0U]);
    vlSelf->__PVT__host_we[0U] = vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_memwe;
    vlSelf->__PVT__clint0__DOT__mtimecmp = (((QData)((IData)(
                                                             vlSelf->__PVT__clint0__DOT__mtimecmp_reg
                                                             [1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->__PVT__clint0__DOT__mtimecmp_reg
                                                              [0U])));
    vlSelf->__PVT__host_req[0U] = ((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_memre) 
                                   | (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_memwe));
    vlSelf->__Vcellinp__u_bus__cfg_device_addr_base[0U] 
        = vlSelf->__PVT__cfg_device_addr_base[0U];
    vlSelf->__Vcellinp__u_bus__cfg_device_addr_base[1U] 
        = vlSelf->__PVT__cfg_device_addr_base[1U];
    vlSelf->__Vcellinp__u_bus__cfg_device_addr_base[2U] 
        = vlSelf->__PVT__cfg_device_addr_base[2U];
    vlSelf->__Vcellinp__u_bus__cfg_device_addr_base[0U] 
        = vlSelf->__PVT__cfg_device_addr_base[0U];
    vlSelf->__Vcellinp__u_bus__cfg_device_addr_base[1U] 
        = vlSelf->__PVT__cfg_device_addr_base[1U];
    vlSelf->__Vcellinp__u_bus__cfg_device_addr_base[2U] 
        = vlSelf->__PVT__cfg_device_addr_base[2U];
    vlSelf->__Vcellinp__u_bus__cfg_device_addr_mask[0U] 
        = vlSelf->__PVT__cfg_device_addr_mask[0U];
    vlSelf->__Vcellinp__u_bus__cfg_device_addr_mask[1U] 
        = vlSelf->__PVT__cfg_device_addr_mask[1U];
    vlSelf->__Vcellinp__u_bus__cfg_device_addr_mask[2U] 
        = vlSelf->__PVT__cfg_device_addr_mask[2U];
    vlSelf->__Vcellinp__u_bus__cfg_device_addr_mask[0U] 
        = vlSelf->__PVT__cfg_device_addr_mask[0U];
    vlSelf->__Vcellinp__u_bus__cfg_device_addr_mask[1U] 
        = vlSelf->__PVT__cfg_device_addr_mask[1U];
    vlSelf->__Vcellinp__u_bus__cfg_device_addr_mask[2U] 
        = vlSelf->__PVT__cfg_device_addr_mask[2U];
    vlSelf->__Vcellinp__u_bus__host_we_i[0U] = vlSelf->__PVT__host_we
        [0U];
    vlSelf->__PVT__clint_timer_irq = (((((QData)((IData)(
                                                         vlSelf->__PVT__clint0__DOT__mtime_reg
                                                         [1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->__PVT__clint0__DOT__mtime_reg
                                                          [0U]))) 
                                       >= vlSelf->__PVT__clint0__DOT__mtimecmp) 
                                      & (0U != vlSelf->__PVT__clint0__DOT__mtimecmp));
    vlSelf->__Vcellinp__u_bus__host_req_i[0U] = vlSelf->__PVT__host_req
        [0U];
    vlSelf->__PVT__u_bus__DOT__host_sel_req = 0U;
    if (vlSelf->__Vcellinp__u_bus__host_req_i[0U]) {
        vlSelf->__PVT__u_bus__DOT__host_sel_req = 0U;
    }
    vlSelf->__Vcellout__u_bus__host_gnt_o[0U] = 0U;
    u_bus__DOT____Vlvbound12 = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req)) 
                                & vlSelf->__Vcellinp__u_bus__host_req_i
                                [vlSelf->__PVT__u_bus__DOT__host_sel_req]);
    if ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))) {
        vlSelf->__Vcellout__u_bus__host_gnt_o[vlSelf->__PVT__u_bus__DOT__host_sel_req] 
            = u_bus__DOT____Vlvbound12;
    }
    vlSelf->__PVT__host_gnt[0U] = vlSelf->__Vcellout__u_bus__host_gnt_o
        [0U];
}

void Vsoc_top_soc_top___settle__TOP__soc_top__2(Vsoc_top_soc_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsoc_top_soc_top___settle__TOP__soc_top__2\n"); );
    // Body
    vlSelf->__PVT__host_addr[0U] = vlSymsp->TOP__soc_top__coretop0.__PVT__memrom_ramaddr;
    vlSelf->__Vcellinp__u_bus__host_addr_i[0U] = vlSelf->__PVT__host_addr
        [0U];
    vlSelf->__PVT__u_bus__DOT__device_sel_req = 0U;
    if (((((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))
            ? vlSelf->__Vcellinp__u_bus__host_addr_i
           [vlSelf->__PVT__u_bus__DOT__host_sel_req]
            : 0U) & vlSelf->__Vcellinp__u_bus__cfg_device_addr_mask
          [0U]) == vlSelf->__Vcellinp__u_bus__cfg_device_addr_base
         [0U])) {
        vlSelf->__PVT__u_bus__DOT__device_sel_req = 0U;
    }
    if (((((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))
            ? vlSelf->__Vcellinp__u_bus__host_addr_i
           [vlSelf->__PVT__u_bus__DOT__host_sel_req]
            : 0U) & vlSelf->__Vcellinp__u_bus__cfg_device_addr_mask
          [1U]) == vlSelf->__Vcellinp__u_bus__cfg_device_addr_base
         [1U])) {
        vlSelf->__PVT__u_bus__DOT__device_sel_req = 1U;
    }
    if (((((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))
            ? vlSelf->__Vcellinp__u_bus__host_addr_i
           [vlSelf->__PVT__u_bus__DOT__host_sel_req]
            : 0U) & vlSelf->__Vcellinp__u_bus__cfg_device_addr_mask
          [2U]) == vlSelf->__Vcellinp__u_bus__cfg_device_addr_base
         [2U])) {
        vlSelf->__PVT__u_bus__DOT__device_sel_req = 2U;
    }
    if ((0U == (IData)(vlSelf->__PVT__u_bus__DOT__device_sel_req))) {
        vlSelf->u_bus__DOT____Vlvbound2 = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req)) 
                                           & vlSelf->__Vcellinp__u_bus__host_we_i
                                           [vlSelf->__PVT__u_bus__DOT__host_sel_req]);
        vlSelf->__Vcellout__u_bus__device_we_o[0U] 
            = vlSelf->u_bus__DOT____Vlvbound2;
    } else {
        vlSelf->__Vcellout__u_bus__device_we_o[0U] = 0U;
    }
    if ((1U == (IData)(vlSelf->__PVT__u_bus__DOT__device_sel_req))) {
        vlSelf->u_bus__DOT____Vlvbound2 = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req)) 
                                           & vlSelf->__Vcellinp__u_bus__host_we_i
                                           [vlSelf->__PVT__u_bus__DOT__host_sel_req]);
        vlSelf->__Vcellout__u_bus__device_we_o[1U] 
            = vlSelf->u_bus__DOT____Vlvbound2;
    } else {
        vlSelf->__Vcellout__u_bus__device_we_o[1U] = 0U;
    }
    if ((2U == (IData)(vlSelf->__PVT__u_bus__DOT__device_sel_req))) {
        vlSelf->u_bus__DOT____Vlvbound2 = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req)) 
                                           & vlSelf->__Vcellinp__u_bus__host_we_i
                                           [vlSelf->__PVT__u_bus__DOT__host_sel_req]);
        vlSelf->__Vcellout__u_bus__device_we_o[2U] 
            = vlSelf->u_bus__DOT____Vlvbound2;
    } else {
        vlSelf->__Vcellout__u_bus__device_we_o[2U] = 0U;
    }
    vlSelf->__PVT__u_bus__DOT__device_sel_resp = ((IData)(vlSymsp->TOP.rst_i)
                                                   ? 0U
                                                   : (IData)(vlSelf->__PVT__u_bus__DOT__device_sel_req));
    if ((0U == (IData)(vlSelf->__PVT__u_bus__DOT__device_sel_req))) {
        vlSelf->u_bus__DOT____Vlvbound3 = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))
                                            ? vlSelf->__Vcellinp__u_bus__host_addr_i
                                           [vlSelf->__PVT__u_bus__DOT__host_sel_req]
                                            : 0U);
        vlSelf->__Vcellout__u_bus__device_addr_o[0U] 
            = vlSelf->u_bus__DOT____Vlvbound3;
    } else {
        vlSelf->__Vcellout__u_bus__device_addr_o[0U] = 0U;
    }
    if ((1U == (IData)(vlSelf->__PVT__u_bus__DOT__device_sel_req))) {
        vlSelf->u_bus__DOT____Vlvbound3 = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))
                                            ? vlSelf->__Vcellinp__u_bus__host_addr_i
                                           [vlSelf->__PVT__u_bus__DOT__host_sel_req]
                                            : 0U);
        vlSelf->__Vcellout__u_bus__device_addr_o[1U] 
            = vlSelf->u_bus__DOT____Vlvbound3;
    } else {
        vlSelf->__Vcellout__u_bus__device_addr_o[1U] = 0U;
    }
    if ((2U == (IData)(vlSelf->__PVT__u_bus__DOT__device_sel_req))) {
        vlSelf->u_bus__DOT____Vlvbound3 = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))
                                            ? vlSelf->__Vcellinp__u_bus__host_addr_i
                                           [vlSelf->__PVT__u_bus__DOT__host_sel_req]
                                            : 0U);
        vlSelf->__Vcellout__u_bus__device_addr_o[2U] 
            = vlSelf->u_bus__DOT____Vlvbound3;
    } else {
        vlSelf->__Vcellout__u_bus__device_addr_o[2U] = 0U;
    }
    if ((0U == (IData)(vlSelf->__PVT__u_bus__DOT__device_sel_req))) {
        vlSelf->u_bus__DOT____Vlvbound1 = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req)) 
                                           & vlSelf->__Vcellinp__u_bus__host_req_i
                                           [vlSelf->__PVT__u_bus__DOT__host_sel_req]);
        vlSelf->__Vcellout__u_bus__device_req_o[0U] 
            = vlSelf->u_bus__DOT____Vlvbound1;
    } else {
        vlSelf->__Vcellout__u_bus__device_req_o[0U] = 0U;
    }
    if ((1U == (IData)(vlSelf->__PVT__u_bus__DOT__device_sel_req))) {
        vlSelf->u_bus__DOT____Vlvbound1 = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req)) 
                                           & vlSelf->__Vcellinp__u_bus__host_req_i
                                           [vlSelf->__PVT__u_bus__DOT__host_sel_req]);
        vlSelf->__Vcellout__u_bus__device_req_o[1U] 
            = vlSelf->u_bus__DOT____Vlvbound1;
    } else {
        vlSelf->__Vcellout__u_bus__device_req_o[1U] = 0U;
    }
    if ((2U == (IData)(vlSelf->__PVT__u_bus__DOT__device_sel_req))) {
        vlSelf->u_bus__DOT____Vlvbound1 = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req)) 
                                           & vlSelf->__Vcellinp__u_bus__host_req_i
                                           [vlSelf->__PVT__u_bus__DOT__host_sel_req]);
        vlSelf->__Vcellout__u_bus__device_req_o[2U] 
            = vlSelf->u_bus__DOT____Vlvbound1;
    } else {
        vlSelf->__Vcellout__u_bus__device_req_o[2U] = 0U;
    }
    vlSelf->__PVT__device_we[0U] = vlSelf->__Vcellout__u_bus__device_we_o
        [0U];
    vlSelf->__PVT__device_we[1U] = vlSelf->__Vcellout__u_bus__device_we_o
        [1U];
    vlSelf->__PVT__device_we[2U] = vlSelf->__Vcellout__u_bus__device_we_o
        [2U];
    vlSelf->__PVT__device_addr[0U] = vlSelf->__Vcellout__u_bus__device_addr_o
        [0U];
    vlSelf->__PVT__device_addr[1U] = vlSelf->__Vcellout__u_bus__device_addr_o
        [1U];
    vlSelf->__PVT__device_addr[2U] = vlSelf->__Vcellout__u_bus__device_addr_o
        [2U];
    vlSelf->__PVT__device_req[0U] = vlSelf->__Vcellout__u_bus__device_req_o
        [0U];
    vlSelf->__PVT__device_req[1U] = vlSelf->__Vcellout__u_bus__device_req_o
        [1U];
    vlSelf->__PVT__device_req[2U] = vlSelf->__Vcellout__u_bus__device_req_o
        [2U];
    vlSelf->__PVT__device_rdata[0U] = (vlSelf->__PVT__device_req
                                       [0U] ? ((vlSymsp->TOP__soc_top__dpram0.__PVT__mem
                                                [(0x1ffffcU 
                                                  & vlSelf->__PVT__device_addr
                                                  [0U])] 
                                                << 0x18U) 
                                               | ((vlSymsp->TOP__soc_top__dpram0.__PVT__mem
                                                   [
                                                   (0x1fffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (0x1ffffcU 
                                                        & vlSelf->__PVT__device_addr
                                                        [0U])))] 
                                                   << 0x10U) 
                                                  | ((vlSymsp->TOP__soc_top__dpram0.__PVT__mem
                                                      [
                                                      (0x1fffffU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          (0x1ffffcU 
                                                           & vlSelf->__PVT__device_addr
                                                           [0U])))] 
                                                      << 8U) 
                                                     | vlSymsp->TOP__soc_top__dpram0.__PVT__mem
                                                     [
                                                     (0x1fffffU 
                                                      & ((IData)(3U) 
                                                         + 
                                                         (0x1ffffcU 
                                                          & vlSelf->__PVT__device_addr
                                                          [0U])))])))
                                        : 0U);
    if (vlSelf->__PVT__device_req[2U]) {
        if ((0U == (0xffffU & vlSelf->__PVT__device_addr
                    [2U]))) {
            vlSelf->__Vcellout__clint0__data_o = vlSelf->__PVT__clint0__DOT__msip;
        } else if ((0x4000U == (0xffffU & vlSelf->__PVT__device_addr
                                [2U]))) {
            vlSelf->__Vcellout__clint0__data_o = vlSelf->__PVT__clint0__DOT__mtimecmp_reg
                [0U];
        } else if ((0x4004U == (0xffffU & vlSelf->__PVT__device_addr
                                [2U]))) {
            vlSelf->__Vcellout__clint0__data_o = vlSelf->__PVT__clint0__DOT__mtimecmp_reg
                [1U];
        } else if ((0xbff8U == (0xffffU & vlSelf->__PVT__device_addr
                                [2U]))) {
            vlSelf->__Vcellout__clint0__data_o = vlSelf->__PVT__clint0__DOT__mtime_reg
                [0U];
        } else if ((0xbffcU == (0xffffU & vlSelf->__PVT__device_addr
                                [2U]))) {
            vlSelf->__Vcellout__clint0__data_o = vlSelf->__PVT__clint0__DOT__mtime_reg
                [1U];
        }
    } else {
        vlSelf->__Vcellout__clint0__data_o = 0U;
    }
    vlSelf->__PVT__device_rdata[2U] = vlSelf->__Vcellout__clint0__data_o;
    vlSelf->__Vcellinp__u_bus__device_rdata_i[0U] = 
        vlSelf->__PVT__device_rdata[0U];
    vlSelf->__Vcellinp__u_bus__device_rdata_i[1U] = 
        vlSelf->__PVT__device_rdata[1U];
    vlSelf->__Vcellinp__u_bus__device_rdata_i[2U] = 
        vlSelf->__PVT__device_rdata[2U];
    if (((~ (IData)(vlSymsp->TOP.rst_i)) & (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))) {
        vlSelf->__Vcellout__u_bus__host_rdata_o[0U] = 0U;
    } else {
        vlSelf->u_bus__DOT____Vlvbound10 = ((2U >= (IData)(vlSelf->__PVT__u_bus__DOT__device_sel_resp))
                                             ? vlSelf->__Vcellinp__u_bus__device_rdata_i
                                            [vlSelf->__PVT__u_bus__DOT__device_sel_resp]
                                             : 0U);
        vlSelf->__Vcellout__u_bus__host_rdata_o[0U] 
            = vlSelf->u_bus__DOT____Vlvbound10;
    }
    vlSelf->__PVT__host_rdata[0U] = vlSelf->__Vcellout__u_bus__host_rdata_o
        [0U];
}

void Vsoc_top_soc_top___initial__TOP__soc_top__6(Vsoc_top_soc_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsoc_top_soc_top___initial__TOP__soc_top__6\n"); );
    // Body
    vlSelf->__PVT__console0__DOT__sim_finish = 0U;
    vlSelf->__PVT__console0__DOT__log_fd = VL_FOPEN_NN(
                                                       std::string("./log/console.log")
                                                       , 
                                                       std::string("w"));
}

void Vsoc_top_soc_top___ctor_var_reset(Vsoc_top_soc_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsoc_top_soc_top___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_i = VL_RAND_RESET_I(1);
    vlSelf->halt_o = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__host_req[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__host_gnt[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__host_addr[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__host_wdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__host_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__host_we[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__PVT__device_req[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__PVT__device_addr[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__PVT__device_wdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__PVT__device_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__PVT__device_we[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__PVT__cfg_device_addr_base[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__PVT__cfg_device_addr_mask[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__halt_from_console = VL_RAND_RESET_I(1);
    vlSelf->__PVT__clint_timer_irq = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vcellinp__u_bus__cfg_device_addr_mask[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vcellinp__u_bus__cfg_device_addr_base[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vcellout__u_bus__device_wdata_o[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vcellout__u_bus__device_we_o[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vcellout__u_bus__device_addr_o[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vcellout__u_bus__device_req_o[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vcellinp__u_bus__device_rdata_i[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__Vcellout__u_bus__host_gnt_o[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__Vcellout__u_bus__host_rdata_o[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__Vcellinp__u_bus__host_wdata_i[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__Vcellinp__u_bus__host_we_i[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__Vcellinp__u_bus__host_addr_i[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__Vcellinp__u_bus__host_req_i[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__Vcellout__clint0__data_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_bus__DOT__host_sel_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_bus__DOT__device_sel_req = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_bus__DOT__device_sel_resp = VL_RAND_RESET_I(2);
    vlSelf->u_bus__DOT____Vlvbound1 = VL_RAND_RESET_I(1);
    vlSelf->u_bus__DOT____Vlvbound2 = VL_RAND_RESET_I(1);
    vlSelf->u_bus__DOT____Vlvbound3 = VL_RAND_RESET_I(32);
    vlSelf->u_bus__DOT____Vlvbound4 = VL_RAND_RESET_I(32);
    vlSelf->u_bus__DOT____Vlvbound10 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__console0__DOT__sim_finish = VL_RAND_RESET_I(3);
    vlSelf->__PVT__console0__DOT__log_fd = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__clint0__DOT__mtime_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__clint0__DOT__mtimecmp_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__clint0__DOT__msip = VL_RAND_RESET_I(32);
    vlSelf->__PVT__clint0__DOT__mtimecmp = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__clint0__DOT__carry = VL_RAND_RESET_I(1);
}
