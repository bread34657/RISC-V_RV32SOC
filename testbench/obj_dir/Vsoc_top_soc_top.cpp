// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top.h for the primary calling header

#include "Vsoc_top_soc_top.h"
#include "Vsoc_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vsoc_top_soc_top___settle__TOP__soc_top__3(Vsoc_top_soc_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsoc_top_soc_top___settle__TOP__soc_top__3\n"); );
    // Body
    vlSelf->__PVT__host_wdata[0U] = vlSymsp->TOP__soc_top__coretop0.__PVT__memrom_ramdata;
    vlSelf->__Vcellinp__u_bus__host_wdata_i[0U] = vlSelf->__PVT__host_wdata
        [0U];
    if ((0U == (IData)(vlSelf->__PVT__u_bus__DOT__device_sel_req))) {
        vlSelf->u_bus__DOT____Vlvbound4 = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))
                                            ? vlSelf->__Vcellinp__u_bus__host_wdata_i
                                           [vlSelf->__PVT__u_bus__DOT__host_sel_req]
                                            : 0U);
        vlSelf->__Vcellout__u_bus__device_wdata_o[0U] 
            = vlSelf->u_bus__DOT____Vlvbound4;
    } else {
        vlSelf->__Vcellout__u_bus__device_wdata_o[0U] = 0U;
    }
    if ((1U == (IData)(vlSelf->__PVT__u_bus__DOT__device_sel_req))) {
        vlSelf->u_bus__DOT____Vlvbound4 = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))
                                            ? vlSelf->__Vcellinp__u_bus__host_wdata_i
                                           [vlSelf->__PVT__u_bus__DOT__host_sel_req]
                                            : 0U);
        vlSelf->__Vcellout__u_bus__device_wdata_o[1U] 
            = vlSelf->u_bus__DOT____Vlvbound4;
    } else {
        vlSelf->__Vcellout__u_bus__device_wdata_o[1U] = 0U;
    }
    if ((2U == (IData)(vlSelf->__PVT__u_bus__DOT__device_sel_req))) {
        vlSelf->u_bus__DOT____Vlvbound4 = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))
                                            ? vlSelf->__Vcellinp__u_bus__host_wdata_i
                                           [vlSelf->__PVT__u_bus__DOT__host_sel_req]
                                            : 0U);
        vlSelf->__Vcellout__u_bus__device_wdata_o[2U] 
            = vlSelf->u_bus__DOT____Vlvbound4;
    } else {
        vlSelf->__Vcellout__u_bus__device_wdata_o[2U] = 0U;
    }
    vlSelf->__PVT__device_wdata[0U] = vlSelf->__Vcellout__u_bus__device_wdata_o
        [0U];
    vlSelf->__PVT__device_wdata[1U] = vlSelf->__Vcellout__u_bus__device_wdata_o
        [1U];
    vlSelf->__PVT__device_wdata[2U] = vlSelf->__Vcellout__u_bus__device_wdata_o
        [2U];
}

VL_INLINE_OPT void Vsoc_top_soc_top___sequent__TOP__soc_top__4(Vsoc_top_soc_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsoc_top_soc_top___sequent__TOP__soc_top__4\n"); );
    // Variables
    CData/*0:0*/ u_bus__DOT____Vlvbound12;
    CData/*2:0*/ __Vdly__console0__DOT__sim_finish;
    CData/*0:0*/ __Vdlyvset__clint0__DOT__mtimecmp_reg__v0;
    CData/*0:0*/ __Vdlyvset__clint0__DOT__mtimecmp_reg__v2;
    CData/*0:0*/ __Vdlyvset__clint0__DOT__mtimecmp_reg__v3;
    CData/*0:0*/ __Vdlyvset__clint0__DOT__mtime_reg__v0;
    CData/*0:0*/ __Vdlyvset__clint0__DOT__mtime_reg__v2;
    CData/*0:0*/ __Vdlyvset__clint0__DOT__mtime_reg__v3;
    CData/*0:0*/ __Vdlyvset__clint0__DOT__mtime_reg__v4;
    IData/*31:0*/ __Vdlyvval__clint0__DOT__mtimecmp_reg__v2;
    IData/*31:0*/ __Vdlyvval__clint0__DOT__mtimecmp_reg__v3;
    IData/*31:0*/ __Vdlyvval__clint0__DOT__mtime_reg__v2;
    IData/*31:0*/ __Vdlyvval__clint0__DOT__mtime_reg__v3;
    IData/*31:0*/ __Vdlyvval__clint0__DOT__mtime_reg__v4;
    IData/*31:0*/ __Vdlyvval__clint0__DOT__mtime_reg__v5;
    // Body
    vlSelf->__PVT__host_we[0U] = vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_memwe;
    vlSelf->__PVT__host_req[0U] = ((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_memre) 
                                   | (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_memwe));
    vlSelf->__PVT__host_addr[0U] = vlSymsp->TOP__soc_top__coretop0.__PVT__memrom_ramaddr;
    __Vdly__console0__DOT__sim_finish = vlSelf->__PVT__console0__DOT__sim_finish;
    __Vdlyvset__clint0__DOT__mtimecmp_reg__v0 = 0U;
    __Vdlyvset__clint0__DOT__mtimecmp_reg__v2 = 0U;
    __Vdlyvset__clint0__DOT__mtimecmp_reg__v3 = 0U;
    __Vdlyvset__clint0__DOT__mtime_reg__v0 = 0U;
    __Vdlyvset__clint0__DOT__mtime_reg__v2 = 0U;
    __Vdlyvset__clint0__DOT__mtime_reg__v3 = 0U;
    __Vdlyvset__clint0__DOT__mtime_reg__v4 = 0U;
    vlSelf->__Vcellinp__u_bus__host_we_i[0U] = vlSelf->__PVT__host_we
        [0U];
    vlSelf->__Vcellinp__u_bus__host_req_i[0U] = vlSelf->__PVT__host_req
        [0U];
    vlSelf->__Vcellinp__u_bus__host_addr_i[0U] = vlSelf->__PVT__host_addr
        [0U];
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__clint0__DOT__msip = 0U;
    } else if (vlSelf->__PVT__device_we[2U]) {
        if ((0U == (0xffffU & vlSelf->__PVT__device_addr
                    [2U]))) {
            vlSelf->__PVT__clint0__DOT__msip = vlSelf->__PVT__device_wdata
                [2U];
        }
    }
    if (vlSymsp->TOP.rst_i) {
        __Vdly__console0__DOT__sim_finish = 0U;
    } else if ((vlSelf->__PVT__device_req[1U] & vlSelf->__PVT__device_we
                [1U])) {
        if (VL_UNLIKELY((4U == (0xffU & vlSelf->__PVT__device_addr
                                [1U])))) {
            VL_FWRITEF(vlSelf->__PVT__console0__DOT__log_fd,"%c",
                       8,(0xffU & vlSelf->__PVT__device_wdata
                          [1U]));
            VL_WRITEF("%c",8,(0xffU & vlSelf->__PVT__device_wdata
                              [1U]));
            if (vlSelf->__PVT__console0__DOT__log_fd) { VL_FFLUSH_I(vlSelf->__PVT__console0__DOT__log_fd); }
        } else if ((8U == (0xffU & vlSelf->__PVT__device_addr
                           [1U]))) {
            if ((vlSelf->__PVT__device_wdata[1U] & 
                 (0U == (IData)(vlSelf->__PVT__console0__DOT__sim_finish)))) {
                __Vdly__console0__DOT__sim_finish = 1U;
            }
        }
    }
    if ((0U != (IData)(vlSelf->__PVT__console0__DOT__sim_finish))) {
        __Vdly__console0__DOT__sim_finish = (7U & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__console0__DOT__sim_finish)));
    }
    vlSelf->__PVT__halt_from_console = (2U <= (IData)(vlSelf->__PVT__console0__DOT__sim_finish));
    if (vlSymsp->TOP.rst_i) {
        __Vdlyvset__clint0__DOT__mtimecmp_reg__v0 = 1U;
    } else if (vlSelf->__PVT__device_we[2U]) {
        if ((0U != (0xffffU & vlSelf->__PVT__device_addr
                    [2U]))) {
            if ((0xbff8U != (0xffffU & vlSelf->__PVT__device_addr
                             [2U]))) {
                if ((0xbffcU != (0xffffU & vlSelf->__PVT__device_addr
                                 [2U]))) {
                    if ((0x4000U == (0xffffU & vlSelf->__PVT__device_addr
                                     [2U]))) {
                        __Vdlyvval__clint0__DOT__mtimecmp_reg__v2 
                            = vlSelf->__PVT__device_wdata
                            [2U];
                        __Vdlyvset__clint0__DOT__mtimecmp_reg__v2 = 1U;
                    } else if ((0x4004U == (0xffffU 
                                            & vlSelf->__PVT__device_addr
                                            [2U]))) {
                        __Vdlyvval__clint0__DOT__mtimecmp_reg__v3 
                            = vlSelf->__PVT__device_wdata
                            [2U];
                        __Vdlyvset__clint0__DOT__mtimecmp_reg__v3 = 1U;
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP.rst_i) {
        __Vdlyvset__clint0__DOT__mtime_reg__v0 = 1U;
    } else if (vlSelf->__PVT__device_we[2U]) {
        if ((0U != (0xffffU & vlSelf->__PVT__device_addr
                    [2U]))) {
            if ((0xbff8U == (0xffffU & vlSelf->__PVT__device_addr
                             [2U]))) {
                __Vdlyvval__clint0__DOT__mtime_reg__v2 
                    = vlSelf->__PVT__device_wdata[2U];
                __Vdlyvset__clint0__DOT__mtime_reg__v2 = 1U;
            } else if ((0xbffcU == (0xffffU & vlSelf->__PVT__device_addr
                                    [2U]))) {
                __Vdlyvval__clint0__DOT__mtime_reg__v3 
                    = vlSelf->__PVT__device_wdata[2U];
                __Vdlyvset__clint0__DOT__mtime_reg__v3 = 1U;
            }
        }
    } else {
        __Vdlyvval__clint0__DOT__mtime_reg__v4 = ((IData)(1U) 
                                                  + 
                                                  vlSelf->__PVT__clint0__DOT__mtime_reg
                                                  [0U]);
        __Vdlyvset__clint0__DOT__mtime_reg__v4 = 1U;
        __Vdlyvval__clint0__DOT__mtime_reg__v5 = (vlSelf->__PVT__clint0__DOT__mtime_reg
                                                  [1U] 
                                                  + (IData)(vlSelf->__PVT__clint0__DOT__carry));
    }
    vlSelf->__PVT__u_bus__DOT__host_sel_req = 0U;
    if (vlSelf->__Vcellinp__u_bus__host_req_i[0U]) {
        vlSelf->__PVT__u_bus__DOT__host_sel_req = 0U;
    }
    vlSelf->__PVT__console0__DOT__sim_finish = __Vdly__console0__DOT__sim_finish;
    if (__Vdlyvset__clint0__DOT__mtimecmp_reg__v0) {
        vlSelf->__PVT__clint0__DOT__mtimecmp_reg[0U] = 0U;
        vlSelf->__PVT__clint0__DOT__mtimecmp_reg[1U] = 0U;
    }
    if (__Vdlyvset__clint0__DOT__mtimecmp_reg__v2) {
        vlSelf->__PVT__clint0__DOT__mtimecmp_reg[0U] 
            = __Vdlyvval__clint0__DOT__mtimecmp_reg__v2;
    }
    if (__Vdlyvset__clint0__DOT__mtimecmp_reg__v3) {
        vlSelf->__PVT__clint0__DOT__mtimecmp_reg[1U] 
            = __Vdlyvval__clint0__DOT__mtimecmp_reg__v3;
    }
    if (__Vdlyvset__clint0__DOT__mtime_reg__v0) {
        vlSelf->__PVT__clint0__DOT__mtime_reg[0U] = 0U;
        vlSelf->__PVT__clint0__DOT__mtime_reg[1U] = 0U;
    }
    if (__Vdlyvset__clint0__DOT__mtime_reg__v2) {
        vlSelf->__PVT__clint0__DOT__mtime_reg[0U] = __Vdlyvval__clint0__DOT__mtime_reg__v2;
    }
    if (__Vdlyvset__clint0__DOT__mtime_reg__v3) {
        vlSelf->__PVT__clint0__DOT__mtime_reg[1U] = __Vdlyvval__clint0__DOT__mtime_reg__v3;
    }
    if (__Vdlyvset__clint0__DOT__mtime_reg__v4) {
        vlSelf->__PVT__clint0__DOT__mtime_reg[0U] = __Vdlyvval__clint0__DOT__mtime_reg__v4;
        vlSelf->__PVT__clint0__DOT__mtime_reg[1U] = __Vdlyvval__clint0__DOT__mtime_reg__v5;
    }
    vlSelf->__Vcellout__u_bus__host_gnt_o[0U] = 0U;
    u_bus__DOT____Vlvbound12 = ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req)) 
                                & vlSelf->__Vcellinp__u_bus__host_req_i
                                [vlSelf->__PVT__u_bus__DOT__host_sel_req]);
    if ((0U >= (IData)(vlSelf->__PVT__u_bus__DOT__host_sel_req))) {
        vlSelf->__Vcellout__u_bus__host_gnt_o[vlSelf->__PVT__u_bus__DOT__host_sel_req] 
            = u_bus__DOT____Vlvbound12;
    }
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
    vlSelf->__PVT__clint0__DOT__mtimecmp = (((QData)((IData)(
                                                             vlSelf->__PVT__clint0__DOT__mtimecmp_reg
                                                             [1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->__PVT__clint0__DOT__mtimecmp_reg
                                                              [0U])));
    vlSelf->__PVT__clint0__DOT__carry = (0xffffffffU 
                                         == vlSelf->__PVT__clint0__DOT__mtime_reg
                                         [0U]);
    vlSelf->__PVT__host_gnt[0U] = vlSelf->__Vcellout__u_bus__host_gnt_o
        [0U];
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
    vlSelf->__PVT__clint_timer_irq = (((((QData)((IData)(
                                                         vlSelf->__PVT__clint0__DOT__mtime_reg
                                                         [1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->__PVT__clint0__DOT__mtime_reg
                                                          [0U]))) 
                                       >= vlSelf->__PVT__clint0__DOT__mtimecmp) 
                                      & (0U != vlSelf->__PVT__clint0__DOT__mtimecmp));
}

VL_INLINE_OPT void Vsoc_top_soc_top___sequent__TOP__soc_top__5(Vsoc_top_soc_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsoc_top_soc_top___sequent__TOP__soc_top__5\n"); );
    // Body
    vlSelf->__PVT__device_req[0U] = vlSelf->__Vcellout__u_bus__device_req_o
        [0U];
    vlSelf->__PVT__device_req[1U] = vlSelf->__Vcellout__u_bus__device_req_o
        [1U];
    vlSelf->__PVT__device_req[2U] = vlSelf->__Vcellout__u_bus__device_req_o
        [2U];
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
}

VL_INLINE_OPT void Vsoc_top_soc_top___combo__TOP__soc_top__7(Vsoc_top_soc_top* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vsoc_top_soc_top___combo__TOP__soc_top__7\n"); );
    // Body
    vlSelf->__PVT__u_bus__DOT__device_sel_resp = ((IData)(vlSymsp->TOP.rst_i)
                                                   ? 0U
                                                   : (IData)(vlSelf->__PVT__u_bus__DOT__device_sel_req));
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
