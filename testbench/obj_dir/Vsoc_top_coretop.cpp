// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top.h for the primary calling header

#include "Vsoc_top_coretop.h"
#include "Vsoc_top__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vsoc_top_coretop___settle__TOP__soc_top__coretop0__2(Vsoc_top_coretop* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsoc_top_coretop___settle__TOP__soc_top__coretop0__2\n"); );
    // Body
    vlSelf->__PVT__mem0__DOT__rd_data = ((IData)(vlSelf->__PVT__exemem_memre)
                                          ? ((4U & (IData)(vlSelf->__PVT__exemem_opfunc3))
                                              ? ((2U 
                                                  & (IData)(vlSelf->__PVT__exemem_opfunc3))
                                                  ? vlSelf->__PVT__exemem_rddata
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->__PVT__exemem_opfunc3))
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->__PVT__exemem_memaddr))
                                                    ? 
                                                   (0xffffU 
                                                    & vlSymsp->TOP__soc_top.__PVT__host_rdata
                                                    [0U])
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->__PVT__exemem_memaddr))
                                                     ? 
                                                    (vlSymsp->TOP__soc_top.__PVT__host_rdata
                                                     [0U] 
                                                     >> 0x10U)
                                                     : 0U))
                                                   : 
                                                  ((2U 
                                                    & vlSelf->__PVT__exemem_memaddr)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->__PVT__exemem_memaddr)
                                                     ? 
                                                    (vlSymsp->TOP__soc_top.__PVT__host_rdata
                                                     [0U] 
                                                     >> 0x18U)
                                                     : 
                                                    (0xffU 
                                                     & (vlSymsp->TOP__soc_top.__PVT__host_rdata
                                                        [0U] 
                                                        >> 0x10U)))
                                                    : 
                                                   ((1U 
                                                     & vlSelf->__PVT__exemem_memaddr)
                                                     ? 
                                                    (0xffU 
                                                     & (vlSymsp->TOP__soc_top.__PVT__host_rdata
                                                        [0U] 
                                                        >> 8U))
                                                     : 
                                                    (0xffU 
                                                     & vlSymsp->TOP__soc_top.__PVT__host_rdata
                                                     [0U])))))
                                              : ((2U 
                                                  & (IData)(vlSelf->__PVT__exemem_opfunc3))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->__PVT__exemem_opfunc3))
                                                   ? vlSelf->__PVT__exemem_rddata
                                                   : 
                                                  vlSymsp->TOP__soc_top.__PVT__host_rdata
                                                  [0U])
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->__PVT__exemem_opfunc3))
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->__PVT__exemem_memaddr))
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (vlSymsp->TOP__soc_top.__PVT__host_rdata
                                                                    [0U] 
                                                                    >> 0xfU)))) 
                                                     << 0x10U) 
                                                    | (0xffffU 
                                                       & vlSymsp->TOP__soc_top.__PVT__host_rdata
                                                       [0U]))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & vlSelf->__PVT__exemem_memaddr))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSymsp->TOP__soc_top.__PVT__host_rdata
                                                                  [0U] 
                                                                  >> 0x1fU))) 
                                                      << 0x10U) 
                                                     | (vlSymsp->TOP__soc_top.__PVT__host_rdata
                                                        [0U] 
                                                        >> 0x10U))
                                                     : 0U))
                                                   : 
                                                  ((2U 
                                                    & vlSelf->__PVT__exemem_memaddr)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->__PVT__exemem_memaddr)
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSymsp->TOP__soc_top.__PVT__host_rdata
                                                                  [0U] 
                                                                  >> 0x1fU))) 
                                                      << 8U) 
                                                     | (vlSymsp->TOP__soc_top.__PVT__host_rdata
                                                        [0U] 
                                                        >> 0x18U))
                                                     : 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__soc_top.__PVT__host_rdata
                                                                     [0U] 
                                                                     >> 0x17U)))) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & (vlSymsp->TOP__soc_top.__PVT__host_rdata
                                                           [0U] 
                                                           >> 0x10U))))
                                                    : 
                                                   ((1U 
                                                     & vlSelf->__PVT__exemem_memaddr)
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__soc_top.__PVT__host_rdata
                                                                     [0U] 
                                                                     >> 0xfU)))) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & (vlSymsp->TOP__soc_top.__PVT__host_rdata
                                                           [0U] 
                                                           >> 8U)))
                                                     : 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (vlSymsp->TOP__soc_top.__PVT__host_rdata
                                                                     [0U] 
                                                                     >> 7U)))) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & vlSymsp->TOP__soc_top.__PVT__host_rdata
                                                        [0U])))))))
                                          : vlSelf->__PVT__exemem_rddata);
    if (vlSelf->__PVT__exemem_memwe) {
        vlSelf->__PVT__memrom_ramdata = ((0U == (IData)(vlSelf->__PVT__exemem_opfunc3))
                                          ? ((2U & vlSelf->__PVT__exemem_memaddr)
                                              ? ((1U 
                                                  & vlSelf->__PVT__exemem_memaddr)
                                                  ? 
                                                 ((vlSelf->__PVT__exemem_rddata 
                                                   << 0x18U) 
                                                  | (0xffffffU 
                                                     & vlSymsp->TOP__soc_top.__PVT__host_rdata
                                                     [0U]))
                                                  : 
                                                 ((0xff000000U 
                                                   & vlSymsp->TOP__soc_top.__PVT__host_rdata
                                                   [0U]) 
                                                  | ((0xff0000U 
                                                      & (vlSelf->__PVT__exemem_rddata 
                                                         << 0x10U)) 
                                                     | (0xffffU 
                                                        & vlSymsp->TOP__soc_top.__PVT__host_rdata
                                                        [0U]))))
                                              : ((1U 
                                                  & vlSelf->__PVT__exemem_memaddr)
                                                  ? 
                                                 ((0xffff0000U 
                                                   & vlSymsp->TOP__soc_top.__PVT__host_rdata
                                                   [0U]) 
                                                  | ((0xff00U 
                                                      & (vlSelf->__PVT__exemem_rddata 
                                                         << 8U)) 
                                                     | (0xffU 
                                                        & vlSymsp->TOP__soc_top.__PVT__host_rdata
                                                        [0U])))
                                                  : 
                                                 ((0xffffff00U 
                                                   & vlSymsp->TOP__soc_top.__PVT__host_rdata
                                                   [0U]) 
                                                  | (0xffU 
                                                     & vlSelf->__PVT__exemem_rddata))))
                                          : ((1U == (IData)(vlSelf->__PVT__exemem_opfunc3))
                                              ? ((0U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->__PVT__exemem_memaddr))
                                                  ? 
                                                 ((0xffff0000U 
                                                   & vlSymsp->TOP__soc_top.__PVT__host_rdata
                                                   [0U]) 
                                                  | (0xffffU 
                                                     & vlSelf->__PVT__exemem_rddata))
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & vlSelf->__PVT__exemem_memaddr))
                                                   ? 
                                                  ((vlSelf->__PVT__exemem_rddata 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSymsp->TOP__soc_top.__PVT__host_rdata
                                                      [0U]))
                                                   : 0U))
                                              : ((2U 
                                                  == (IData)(vlSelf->__PVT__exemem_opfunc3))
                                                  ? vlSelf->__PVT__exemem_rddata
                                                  : 0U)));
    }
}

extern const VlUnpacked<CData/*2:0*/, 512> Vsoc_top__ConstPool__TABLE_32da7452_0;

VL_INLINE_OPT void Vsoc_top_coretop___sequent__TOP__soc_top__coretop0__3(Vsoc_top_coretop* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsoc_top_coretop___sequent__TOP__soc_top__coretop0__3\n"); );
    // Variables
    CData/*2:0*/ __Vdly__idexe_opfunc3;
    CData/*4:0*/ __Vdly__idexe_rdaddr;
    CData/*0:0*/ __Vdly__idexe_we;
    CData/*0:0*/ __Vdly__idexe_memwe;
    CData/*0:0*/ __Vdly__idexe_memre;
    CData/*0:0*/ __Vdly__idexe_system_ret;
    CData/*4:0*/ __Vdly__exemem_rdaddr;
    CData/*0:0*/ __Vdly__exemem_we;
    CData/*0:0*/ __Vdly__exemem_csrwe;
    CData/*0:0*/ __Vdly__exemem_system_ret;
    CData/*5:0*/ __Vdly__exe0__DOT__mul0__DOT__cnt;
    CData/*5:0*/ __Vdly__exe0__DOT__div0__DOT__cnt;
    CData/*0:0*/ __Vdly__memwb_we;
    CData/*4:0*/ __Vdly__memwb_rdaddr;
    CData/*0:0*/ __Vdly__memwb_csrwe;
    CData/*0:0*/ __Vdly__wbcsr_csrwe;
    SData/*8:0*/ __Vtableidx1;
    SData/*11:0*/ __Vdly__memwb_csraddr;
    SData/*11:0*/ __Vdly__wbcsr_csraddr;
    IData/*31:0*/ __Vdly__pc_wire;
    IData/*31:0*/ __Vdly__ifid_pc;
    IData/*31:0*/ __Vdly__csrflie0__DOT__mie;
    IData/*31:0*/ __Vdly__csrflie0__DOT__mstatus;
    IData/*31:0*/ __Vdly__idexe_imm;
    IData/*31:0*/ __Vdly__exemem_csrdata;
    IData/*31:0*/ __Vdly__exemem_pc;
    IData/*31:0*/ __Vdly__exemem_exception;
    IData/*31:0*/ __Vdly__exemem_exceptionpc;
    VlWide<3>/*64:0*/ __Vdly__exe0__DOT__mul0__DOT__result;
    VlWide<3>/*64:0*/ __Vdly__exe0__DOT__div0__DOT__result;
    IData/*31:0*/ __Vdly__memwb_rddata;
    IData/*31:0*/ __Vdly__memwb_csrdata;
    IData/*31:0*/ __Vdly__wbcsr_csrdata;
    VlWide<3>/*95:0*/ __Vtemp6;
    VlWide<3>/*95:0*/ __Vtemp9;
    VlWide<3>/*95:0*/ __Vtemp10;
    VlWide<3>/*95:0*/ __Vtemp14;
    QData/*63:0*/ __Vdly__csrflie0__DOT__mcycle;
    // Body
    __Vdly__ifid_pc = vlSelf->__PVT__ifid_pc;
    __Vdly__exemem_exceptionpc = vlSelf->__PVT__exemem_exceptionpc;
    __Vdly__idexe_system_ret = vlSelf->__PVT__idexe_system_ret;
    __Vdly__exemem_system_ret = vlSelf->__PVT__exemem_system_ret;
    __Vdly__exe0__DOT__div0__DOT__cnt = vlSelf->__PVT__exe0__DOT__div0__DOT__cnt;
    __Vdly__exe0__DOT__mul0__DOT__cnt = vlSelf->__PVT__exe0__DOT__mul0__DOT__cnt;
    __Vdly__exemem_pc = vlSelf->__PVT__exemem_pc;
    __Vdly__pc_wire = vlSelf->__PVT__pc_wire;
    __Vdly__exe0__DOT__mul0__DOT__result[0U] = vlSelf->__PVT__exe0__DOT__mul0__DOT__result[0U];
    __Vdly__exe0__DOT__mul0__DOT__result[1U] = vlSelf->__PVT__exe0__DOT__mul0__DOT__result[1U];
    __Vdly__exe0__DOT__mul0__DOT__result[2U] = vlSelf->__PVT__exe0__DOT__mul0__DOT__result[2U];
    __Vdly__exe0__DOT__div0__DOT__result[0U] = vlSelf->__PVT__exe0__DOT__div0__DOT__result[0U];
    __Vdly__exe0__DOT__div0__DOT__result[1U] = vlSelf->__PVT__exe0__DOT__div0__DOT__result[1U];
    __Vdly__exe0__DOT__div0__DOT__result[2U] = vlSelf->__PVT__exe0__DOT__div0__DOT__result[2U];
    __Vdly__csrflie0__DOT__mcycle = vlSelf->__PVT__csrflie0__DOT__mcycle;
    __Vdly__exemem_csrwe = vlSelf->__PVT__exemem_csrwe;
    __Vdly__exemem_csrdata = vlSelf->__PVT__exemem_csrdata;
    __Vdly__exemem_exception = vlSelf->__PVT__exemem_exception;
    __Vdly__memwb_csrwe = vlSelf->__PVT__memwb_csrwe;
    __Vdly__memwb_csrdata = vlSelf->__PVT__memwb_csrdata;
    __Vdly__memwb_csraddr = vlSelf->__PVT__memwb_csraddr;
    __Vdly__wbcsr_csrwe = vlSelf->__PVT__wbcsr_csrwe;
    __Vdly__wbcsr_csrdata = vlSelf->__PVT__wbcsr_csrdata;
    __Vdly__wbcsr_csraddr = vlSelf->__PVT__wbcsr_csraddr;
    __Vdly__csrflie0__DOT__mie = vlSelf->__PVT__csrflie0__DOT__mie;
    __Vdly__idexe_imm = vlSelf->__PVT__idexe_imm;
    __Vdly__csrflie0__DOT__mstatus = vlSelf->__PVT__csrflie0__DOT__mstatus;
    __Vdly__idexe_memwe = vlSelf->__PVT__idexe_memwe;
    __Vdly__idexe_rdaddr = vlSelf->__PVT__idexe_rdaddr;
    __Vdly__idexe_memre = vlSelf->__PVT__idexe_memre;
    __Vdly__idexe_we = vlSelf->__PVT__idexe_we;
    __Vdly__idexe_opfunc3 = vlSelf->__PVT__idexe_opfunc3;
    __Vdly__memwb_rddata = vlSelf->__PVT__memwb_rddata;
    __Vdly__exemem_we = vlSelf->__PVT__exemem_we;
    __Vdly__exemem_rdaddr = vlSelf->__PVT__exemem_rdaddr;
    vlSelf->__Vdly__wbreg_rddata = vlSelf->__PVT__wbreg_rddata;
    __Vdly__memwb_rdaddr = vlSelf->__PVT__memwb_rdaddr;
    __Vdly__memwb_we = vlSelf->__PVT__memwb_we;
    vlSelf->__Vdly__wbreg_rdaddr = vlSelf->__PVT__wbreg_rdaddr;
    __Vdly__ifid_pc = ((IData)(vlSymsp->TOP.rst_i) ? 0U
                        : ((IData)(vlSelf->__PVT__pipectrl_flushif)
                            ? vlSelf->__PVT__pc_wire
                            : ((IData)(vlSelf->__PVT__pipectrl_stallif)
                                ? vlSelf->__PVT__ifid_pc
                                : vlSelf->__PVT__pc_wire)));
    __Vdly__exemem_exceptionpc = (((IData)(vlSymsp->TOP.rst_i) 
                                   | (IData)(vlSelf->__PVT__pipectrl_flushexe))
                                   ? 0U : ((IData)(vlSelf->__PVT__exepipe_stall)
                                            ? vlSelf->__PVT__exemem_exceptionpc
                                            : vlSelf->__PVT__idexe_exceptionpc));
    vlSelf->__PVT__idexe_exceptionpc = (((IData)(vlSymsp->TOP.rst_i) 
                                         | (IData)(vlSelf->__PVT__pipectrl_flushid))
                                         ? 0U : ((IData)(vlSelf->__PVT__exepipe_stall)
                                                  ? vlSelf->__PVT__idexe_exceptionpc
                                                  : vlSelf->__PVT__ifid_pc));
    __Vdly__idexe_system_ret = ((~ ((IData)(vlSymsp->TOP.rst_i) 
                                    | (IData)(vlSelf->__PVT__pipectrl_flushid))) 
                                & ((IData)(vlSelf->__PVT__exepipe_stall)
                                    ? (IData)(vlSelf->__PVT__idexe_system_ret)
                                    : (IData)(vlSelf->__PVT__decode0__DOT__MRETtype)));
    vlSelf->__PVT__exe0__DOT__mulresult = ((3U == (IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__S))
                                            ? (((QData)((IData)(
                                                                vlSelf->__PVT__exe0__DOT__mul0__DOT__result[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__exe0__DOT__mul0__DOT__result[0U])))
                                            : vlSelf->__PVT__exe0__DOT__mulresult);
    __Vdly__exemem_system_ret = ((~ ((IData)(vlSymsp->TOP.rst_i) 
                                     | (IData)(vlSelf->__PVT__pipectrl_flushexe))) 
                                 & ((IData)(vlSelf->__PVT__exepipe_stall)
                                     ? (IData)(vlSelf->__PVT__exemem_system_ret)
                                     : (IData)(vlSelf->__PVT__idexe_system_ret)));
    vlSelf->__PVT__exe0__DOT__mulisdone = (3U == (IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__S));
    vlSelf->__PVT__exe0__DOT__divisdone = (3U == (IData)(vlSelf->__PVT__exe0__DOT__div0__DOT__S));
    if (((0U == (IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__S)) 
         & (IData)(vlSelf->__PVT__exe0__DOT__mulstart))) {
        if ((1U & (~ ((~ (IData)((0U != vlSelf->__PVT__exe0__DOT__mtypea))) 
                      | (~ (IData)((0U != vlSelf->__PVT__exe0__DOT__mtypeb))))))) {
            vlSelf->__PVT__exe0__DOT__mul0__DOT__reg32 
                = vlSelf->__PVT__exe0__DOT__mtypea;
        }
    }
    if (((0U == (IData)(vlSelf->__PVT__exe0__DOT__div0__DOT__S)) 
         & (IData)(vlSelf->__PVT__exe0__DOT__divstart))) {
        if ((0U != vlSelf->__PVT__exe0__DOT__mtypeb)) {
            vlSelf->__PVT__exe0__DOT__div0__DOT__reg32 
                = vlSelf->__PVT__exe0__DOT__mtypeb;
        }
    }
    if (((0U == (IData)(vlSelf->__PVT__exe0__DOT__div0__DOT__S)) 
         & (IData)(vlSelf->__PVT__exe0__DOT__divstart))) {
        if ((0U != vlSelf->__PVT__exe0__DOT__mtypeb)) {
            __Vdly__exe0__DOT__div0__DOT__cnt = 0x20U;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__exe0__DOT__div0__DOT__S))) {
        __Vdly__exe0__DOT__div0__DOT__cnt = (0x3fU 
                                             & ((IData)(vlSelf->__PVT__exe0__DOT__div0__DOT__cnt) 
                                                - (IData)(1U)));
    }
    if (((0U == (IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__S)) 
         & (IData)(vlSelf->__PVT__exe0__DOT__mulstart))) {
        if ((1U & (~ ((~ (IData)((0U != vlSelf->__PVT__exe0__DOT__mtypea))) 
                      | (~ (IData)((0U != vlSelf->__PVT__exe0__DOT__mtypeb))))))) {
            __Vdly__exe0__DOT__mul0__DOT__cnt = 0x1fU;
        }
    } else if ((1U == (IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__S))) {
        __Vdly__exe0__DOT__mul0__DOT__cnt = (0x3fU 
                                             & ((IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__cnt) 
                                                - (IData)(1U)));
    }
    __Vdly__exemem_pc = (((IData)(vlSymsp->TOP.rst_i) 
                          | (IData)(vlSelf->__PVT__pipectrl_flushexe))
                          ? 0U : ((IData)(vlSelf->__PVT__exepipe_stall)
                                   ? vlSelf->__PVT__exemem_pc
                                   : vlSelf->__PVT__idexe_pc));
    __Vdly__pc_wire = ((IData)(vlSymsp->TOP.rst_i) ? 0U
                        : (((IData)(vlSelf->__PVT__idpipectrl_loadusehazard) 
                            | (IData)(vlSelf->__PVT__exepipe_stall))
                            ? vlSelf->__PVT__pc_wire
                            : ((IData)(vlSelf->__PVT__csrflie0__DOT__trap_taken)
                                ? vlSelf->__PVT__csrflie0__DOT__trap_entry
                                : ((IData)(vlSelf->__PVT__exemem_system_ret)
                                    ? vlSelf->__PVT__csrflie0__DOT__mepc
                                    : ((IData)(vlSelf->__PVT__exepipe_je)
                                        ? vlSelf->__PVT__exepipe_jumpaddr
                                        : ((IData)(4U) 
                                           + vlSelf->__PVT__pc_wire))))));
    if (((0U == (IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__S)) 
         & (IData)(vlSelf->__PVT__exe0__DOT__mulstart))) {
        VL_EXTEND_WI(65,32, __Vtemp6, vlSelf->__PVT__exe0__DOT__mtypeb);
        if ((1U & ((~ (IData)((0U != vlSelf->__PVT__exe0__DOT__mtypea))) 
                   | (~ (IData)((0U != vlSelf->__PVT__exe0__DOT__mtypeb)))))) {
            __Vdly__exe0__DOT__mul0__DOT__result[0U] = 0U;
            __Vdly__exe0__DOT__mul0__DOT__result[1U] = 0U;
            __Vdly__exe0__DOT__mul0__DOT__result[2U] = 0U;
        } else {
            __Vdly__exe0__DOT__mul0__DOT__result[0U] 
                = __Vtemp6[0U];
            __Vdly__exe0__DOT__mul0__DOT__result[1U] 
                = __Vtemp6[1U];
            __Vdly__exe0__DOT__mul0__DOT__result[2U] 
                = __Vtemp6[2U];
        }
    } else if ((1U == (IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__S))) {
        VL_EXTEND_WQ(65,64, __Vtemp9, (((QData)((IData)(
                                                        vlSelf->__PVT__exe0__DOT__mul0__DOT__result_tmp[2U])) 
                                        << 0x3fU) | 
                                       (((QData)((IData)(
                                                         vlSelf->__PVT__exe0__DOT__mul0__DOT__result_tmp[1U])) 
                                         << 0x1fU) 
                                        | ((QData)((IData)(
                                                           vlSelf->__PVT__exe0__DOT__mul0__DOT__result_tmp[0U])) 
                                           >> 1U))));
        VL_EXTEND_WQ(65,64, __Vtemp10, (((QData)((IData)(
                                                         vlSelf->__PVT__exe0__DOT__mul0__DOT__result[2U])) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            vlSelf->__PVT__exe0__DOT__mul0__DOT__result[1U])) 
                                            << 0x1fU) 
                                           | ((QData)((IData)(
                                                              vlSelf->__PVT__exe0__DOT__mul0__DOT__result[0U])) 
                                              >> 1U))));
        if (vlSelf->__PVT__exe0__DOT__mul0__DOT__mul_add) {
            __Vdly__exe0__DOT__mul0__DOT__result[0U] 
                = __Vtemp9[0U];
            __Vdly__exe0__DOT__mul0__DOT__result[1U] 
                = __Vtemp9[1U];
            __Vdly__exe0__DOT__mul0__DOT__result[2U] 
                = __Vtemp9[2U];
        } else {
            __Vdly__exe0__DOT__mul0__DOT__result[0U] 
                = __Vtemp10[0U];
            __Vdly__exe0__DOT__mul0__DOT__result[1U] 
                = __Vtemp10[1U];
            __Vdly__exe0__DOT__mul0__DOT__result[2U] 
                = __Vtemp10[2U];
        }
    }
    vlSelf->__PVT__csrflie0__DOT__mcounteren = ((IData)(vlSymsp->TOP.rst_i)
                                                 ? 0U
                                                 : 
                                                (((IData)(vlSelf->__PVT__wbcsr_csrwe) 
                                                  & (0x306U 
                                                     == (IData)(vlSelf->__PVT__wbcsr_csraddr)))
                                                  ? vlSelf->__PVT__wbcsr_csrdata
                                                  : vlSelf->__PVT__csrflie0__DOT__mcounteren));
    if (((0U == (IData)(vlSelf->__PVT__exe0__DOT__div0__DOT__S)) 
         & (IData)(vlSelf->__PVT__exe0__DOT__divstart))) {
        VL_EXTEND_WI(65,32, __Vtemp14, vlSelf->__PVT__exe0__DOT__mtypea);
        if ((0U == vlSelf->__PVT__exe0__DOT__mtypeb)) {
            __Vdly__exe0__DOT__div0__DOT__result[0U] = 0xffffffffU;
            __Vdly__exe0__DOT__div0__DOT__result[1U] 
                = (vlSelf->__PVT__exe0__DOT__mtypea 
                   << 1U);
            __Vdly__exe0__DOT__div0__DOT__result[2U] 
                = (vlSelf->__PVT__exe0__DOT__mtypea 
                   >> 0x1fU);
        } else {
            __Vdly__exe0__DOT__div0__DOT__result[0U] 
                = __Vtemp14[0U];
            __Vdly__exe0__DOT__div0__DOT__result[1U] 
                = __Vtemp14[1U];
            __Vdly__exe0__DOT__div0__DOT__result[2U] 
                = __Vtemp14[2U];
        }
    } else if ((1U == (IData)(vlSelf->__PVT__exe0__DOT__div0__DOT__S))) {
        if (vlSelf->__PVT__exe0__DOT__div0__DOT__div_sub) {
            __Vdly__exe0__DOT__div0__DOT__result[0U] 
                = (1U | ((IData)((((QData)((IData)(
                                                   vlSelf->__PVT__exe0__DOT__div0__DOT__result_tmp[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->__PVT__exe0__DOT__div0__DOT__result_tmp[0U])))) 
                         << 1U));
            __Vdly__exe0__DOT__div0__DOT__result[1U] 
                = (((IData)((((QData)((IData)(vlSelf->__PVT__exe0__DOT__div0__DOT__result_tmp[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->__PVT__exe0__DOT__div0__DOT__result_tmp[0U])))) 
                    >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                            vlSelf->__PVT__exe0__DOT__div0__DOT__result_tmp[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->__PVT__exe0__DOT__div0__DOT__result_tmp[0U]))) 
                                          >> 0x20U)) 
                                 << 1U));
            __Vdly__exe0__DOT__div0__DOT__result[2U] 
                = ((IData)(((((QData)((IData)(vlSelf->__PVT__exe0__DOT__div0__DOT__result_tmp[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->__PVT__exe0__DOT__div0__DOT__result_tmp[0U]))) 
                            >> 0x20U)) >> 0x1fU);
        } else {
            __Vdly__exe0__DOT__div0__DOT__result[0U] 
                = ((IData)((((QData)((IData)(vlSelf->__PVT__exe0__DOT__div0__DOT__result[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->__PVT__exe0__DOT__div0__DOT__result[0U])))) 
                   << 1U);
            __Vdly__exe0__DOT__div0__DOT__result[1U] 
                = (((IData)((((QData)((IData)(vlSelf->__PVT__exe0__DOT__div0__DOT__result[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->__PVT__exe0__DOT__div0__DOT__result[0U])))) 
                    >> 0x1fU) | ((IData)(((((QData)((IData)(
                                                            vlSelf->__PVT__exe0__DOT__div0__DOT__result[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->__PVT__exe0__DOT__div0__DOT__result[0U]))) 
                                          >> 0x20U)) 
                                 << 1U));
            __Vdly__exe0__DOT__div0__DOT__result[2U] 
                = ((IData)(((((QData)((IData)(vlSelf->__PVT__exe0__DOT__div0__DOT__result[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->__PVT__exe0__DOT__div0__DOT__result[0U]))) 
                            >> 0x20U)) >> 0x1fU);
        }
    }
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__csrflie0__DOT__mscratch = 0U;
        vlSelf->__PVT__csrflie0__DOT__mtval = 0U;
    } else {
        vlSelf->__PVT__csrflie0__DOT__mscratch = (((IData)(vlSelf->__PVT__wbcsr_csrwe) 
                                                   & (0x340U 
                                                      == (IData)(vlSelf->__PVT__wbcsr_csraddr)))
                                                   ? vlSelf->__PVT__wbcsr_csrdata
                                                   : vlSelf->__PVT__csrflie0__DOT__mscratch);
        vlSelf->__PVT__csrflie0__DOT__mtval = (((IData)(vlSelf->__PVT__wbcsr_csrwe) 
                                                & (0x343U 
                                                   == (IData)(vlSelf->__PVT__wbcsr_csraddr)))
                                                ? vlSelf->__PVT__wbcsr_csrdata
                                                : vlSelf->__PVT__csrflie0__DOT__mtval);
    }
    if (vlSymsp->TOP.rst_i) {
        __Vdly__csrflie0__DOT__mcycle = 0ULL;
    } else if (vlSelf->__PVT__wbcsr_csrwe) {
        if ((0xb00U == (IData)(vlSelf->__PVT__wbcsr_csraddr))) {
            __Vdly__csrflie0__DOT__mcycle = ((0xffffffff00000000ULL 
                                              & __Vdly__csrflie0__DOT__mcycle) 
                                             | (IData)((IData)(vlSelf->__PVT__wbcsr_csrdata)));
        } else if ((0xb80U == (IData)(vlSelf->__PVT__wbcsr_csraddr))) {
            __Vdly__csrflie0__DOT__mcycle = ((0xffffffffULL 
                                              & __Vdly__csrflie0__DOT__mcycle) 
                                             | ((QData)((IData)(vlSelf->__PVT__wbcsr_csrdata)) 
                                                << 0x20U));
        } else {
            __Vdly__csrflie0__DOT__mcycle = vlSelf->__PVT__csrflie0__DOT__mcycle;
        }
    } else {
        __Vdly__csrflie0__DOT__mcycle = (1ULL + vlSelf->__PVT__csrflie0__DOT__mcycle);
    }
    __Vdly__exemem_csrwe = ((~ ((IData)(vlSymsp->TOP.rst_i) 
                                | (IData)(vlSelf->__PVT__pipectrl_flushexe))) 
                            & ((IData)(vlSelf->__PVT__exepipe_stall)
                                ? (IData)(vlSelf->__PVT__exemem_csrwe)
                                : (IData)(vlSelf->__PVT__exe0__DOT__csr_we)));
    if (((IData)(vlSymsp->TOP.rst_i) | (IData)(vlSelf->__PVT__pipectrl_flushexe))) {
        __Vdly__exemem_csrdata = 0U;
        __Vdly__exemem_exception = 0U;
    } else {
        __Vdly__exemem_csrdata = ((IData)(vlSelf->__PVT__exepipe_stall)
                                   ? vlSelf->__PVT__exemem_csrdata
                                   : vlSelf->__PVT__exe0__DOT__csr_data);
        __Vdly__exemem_exception = ((IData)(vlSelf->__PVT__exepipe_stall)
                                     ? vlSelf->__PVT__exemem_exception
                                     : vlSelf->__PVT__idexe_exception);
    }
    vlSelf->__PVT__idfwd_csrdata = (((IData)(vlSymsp->TOP.rst_i) 
                                     | (IData)(vlSelf->__PVT__pipectrl_flushid))
                                     ? 0U : ((IData)(vlSelf->__PVT__exepipe_stall)
                                              ? vlSelf->__PVT__idfwd_csrdata
                                              : vlSelf->__PVT__csrid_data));
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__csrflie0__DOT__mtvec = 0U;
        vlSelf->__PVT__csrflie0__DOT__mcause = 0U;
    } else {
        vlSelf->__PVT__csrflie0__DOT__mtvec = (((IData)(vlSelf->__PVT__wbcsr_csrwe) 
                                                & (0x305U 
                                                   == (IData)(vlSelf->__PVT__wbcsr_csraddr)))
                                                ? vlSelf->__PVT__wbcsr_csrdata
                                                : vlSelf->__PVT__csrflie0__DOT__mtvec);
        vlSelf->__PVT__csrflie0__DOT__mcause = ((IData)(vlSelf->__PVT__csrflie0__DOT__trap_taken)
                                                 ? vlSelf->__PVT__csrflie0__DOT__interrupt_cause
                                                 : 
                                                (((IData)(vlSelf->__PVT__wbcsr_csrwe) 
                                                  & (0x342U 
                                                     == (IData)(vlSelf->__PVT__wbcsr_csraddr)))
                                                  ? vlSelf->__PVT__wbcsr_csrdata
                                                  : vlSelf->__PVT__csrflie0__DOT__mcause));
    }
    __Vdly__memwb_csrwe = ((~ ((IData)(vlSymsp->TOP.rst_i) 
                               | (IData)(vlSelf->__PVT__pipectrl_flushmem))) 
                           & ((IData)(vlSelf->__PVT__exepipe_stall)
                               ? (IData)(vlSelf->__PVT__memwb_csrwe)
                               : (IData)(vlSelf->__PVT__exemem_csrwe)));
    if (((IData)(vlSymsp->TOP.rst_i) | (IData)(vlSelf->__PVT__pipectrl_flushmem))) {
        __Vdly__memwb_csrdata = 0U;
        __Vdly__memwb_csraddr = 0U;
    } else {
        __Vdly__memwb_csrdata = ((IData)(vlSelf->__PVT__exepipe_stall)
                                  ? vlSelf->__PVT__memwb_csrdata
                                  : vlSelf->__PVT__exemem_csrdata);
        __Vdly__memwb_csraddr = ((IData)(vlSelf->__PVT__exepipe_stall)
                                  ? (IData)(vlSelf->__PVT__memwb_csraddr)
                                  : (IData)(vlSelf->__PVT__exemem_csraddr));
    }
    vlSelf->__PVT__exemem_csraddr = (((IData)(vlSymsp->TOP.rst_i) 
                                      | (IData)(vlSelf->__PVT__pipectrl_flushexe))
                                      ? 0U : ((IData)(vlSelf->__PVT__exepipe_stall)
                                               ? (IData)(vlSelf->__PVT__exemem_csraddr)
                                               : (IData)(vlSelf->__PVT__idfwd_csraddr)));
    __Vdly__wbcsr_csrwe = ((~ (IData)(vlSymsp->TOP.rst_i)) 
                           & ((IData)(vlSelf->__PVT__exepipe_stall)
                               ? (IData)(vlSelf->__PVT__wbcsr_csrwe)
                               : (IData)(vlSelf->__PVT__memwb_csrwe)));
    if (vlSymsp->TOP.rst_i) {
        __Vdly__wbcsr_csrdata = 0U;
        __Vdly__wbcsr_csraddr = 0U;
    } else {
        __Vdly__wbcsr_csrdata = ((IData)(vlSelf->__PVT__exepipe_stall)
                                  ? vlSelf->__PVT__wbcsr_csrdata
                                  : vlSelf->__PVT__memwb_csrdata);
        __Vdly__wbcsr_csraddr = ((IData)(vlSelf->__PVT__exepipe_stall)
                                  ? (IData)(vlSelf->__PVT__wbcsr_csraddr)
                                  : (IData)(vlSelf->__PVT__memwb_csraddr));
    }
    vlSelf->__PVT__idexe_csrwe = ((~ ((IData)(vlSymsp->TOP.rst_i) 
                                      | (IData)(vlSelf->__PVT__pipectrl_flushid))) 
                                  & ((IData)(vlSelf->__PVT__exepipe_stall)
                                      ? (IData)(vlSelf->__PVT__idexe_csrwe)
                                      : (IData)(vlSelf->__PVT__decode0__DOT__CSRtype)));
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__csrflie0__DOT__mepc = 0U;
        __Vdly__csrflie0__DOT__mie = 0U;
    } else {
        vlSelf->__PVT__csrflie0__DOT__mepc = ((0U != vlSelf->__PVT__exemem_exception)
                                               ? vlSelf->__PVT__exemem_exceptionpc
                                               : (((IData)(vlSelf->__PVT__csrflie0__DOT__trap_taken) 
                                                   & (0U 
                                                      == vlSelf->__PVT__exemem_exception))
                                                   ? vlSelf->__PVT__exemem_pc
                                                   : 
                                                  (((IData)(vlSelf->__PVT__wbcsr_csrwe) 
                                                    & (0x341U 
                                                       == (IData)(vlSelf->__PVT__wbcsr_csraddr)))
                                                    ? vlSelf->__PVT__wbcsr_csrdata
                                                    : vlSelf->__PVT__csrflie0__DOT__mepc)));
        __Vdly__csrflie0__DOT__mie = (((IData)(vlSelf->__PVT__wbcsr_csrwe) 
                                       & (0x304U == (IData)(vlSelf->__PVT__wbcsr_csraddr)))
                                       ? (0x888U & vlSelf->__PVT__wbcsr_csrdata)
                                       : vlSelf->__PVT__csrflie0__DOT__mie);
    }
    __Vdly__idexe_imm = (((IData)(vlSymsp->TOP.rst_i) 
                          | (IData)(vlSelf->__PVT__pipectrl_flushid))
                          ? 0U : ((IData)(vlSelf->__PVT__exepipe_stall)
                                   ? vlSelf->__PVT__idexe_imm
                                   : vlSelf->__PVT__decode0__DOT__imm));
    if (vlSymsp->TOP.rst_i) {
        __Vdly__csrflie0__DOT__mstatus = 0x1808U;
    } else if (vlSelf->__PVT__csrflie0__DOT__trap_taken) {
        __Vdly__csrflie0__DOT__mstatus = (0xfffffff7U 
                                          & __Vdly__csrflie0__DOT__mstatus);
        __Vdly__csrflie0__DOT__mstatus = ((0xffffff7fU 
                                           & __Vdly__csrflie0__DOT__mstatus) 
                                          | (0x80U 
                                             & (vlSelf->__PVT__csrflie0__DOT__mstatus 
                                                << 4U)));
    } else if (vlSelf->__PVT__exemem_system_ret) {
        __Vdly__csrflie0__DOT__mstatus = ((0xfffffff7U 
                                           & __Vdly__csrflie0__DOT__mstatus) 
                                          | (8U & (vlSelf->__PVT__csrflie0__DOT__mstatus 
                                                   >> 4U)));
        __Vdly__csrflie0__DOT__mstatus = (0x80U | __Vdly__csrflie0__DOT__mstatus);
    } else {
        __Vdly__csrflie0__DOT__mstatus = (((IData)(vlSelf->__PVT__wbcsr_csrwe) 
                                           & (0x300U 
                                              == (IData)(vlSelf->__PVT__wbcsr_csraddr)))
                                           ? vlSelf->__PVT__wbcsr_csrdata
                                           : vlSelf->__PVT__csrflie0__DOT__mstatus);
    }
    vlSelf->__PVT__idexe_pc = (((IData)(vlSymsp->TOP.rst_i) 
                                | (IData)(vlSelf->__PVT__pipectrl_flushid))
                                ? ((IData)(vlSelf->__PVT__pipectrl_flushid)
                                    ? vlSelf->__PVT__ifid_pc
                                    : 0U) : ((IData)(vlSelf->__PVT__exepipe_stall)
                                              ? vlSelf->__PVT__idexe_pc
                                              : vlSelf->__PVT__ifid_pc));
    __Vdly__idexe_memwe = ((~ ((IData)(vlSymsp->TOP.rst_i) 
                               | (IData)(vlSelf->__PVT__pipectrl_flushid))) 
                           & ((IData)(vlSelf->__PVT__exepipe_stall)
                               ? (IData)(vlSelf->__PVT__idexe_memwe)
                               : (0x23U == (0x7fU & vlSelf->__PVT__ifid_inst))));
    vlSelf->__PVT__idexe_shiftsel = (1U & ((~ ((IData)(vlSymsp->TOP.rst_i) 
                                               | (IData)(vlSelf->__PVT__pipectrl_flushid))) 
                                           & ((IData)(vlSelf->__PVT__exepipe_stall)
                                               ? (IData)(vlSelf->__PVT__idexe_shiftsel)
                                               : ((0x20U 
                                                   == 
                                                   (vlSelf->__PVT__ifid_inst 
                                                    >> 0x19U))
                                                   ? 1U
                                                   : 0U))));
    vlSelf->__PVT__exe0__DOT__divresult = ((3U == (IData)(vlSelf->__PVT__exe0__DOT__div0__DOT__S))
                                            ? (((5U 
                                                 == (IData)(vlSelf->__PVT__idexe_optype)) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__idexe_opfunc3) 
                                                    >> 1U)))
                                                ? vlSelf->__PVT__exe0__DOT__div0__DOT__result[0U]
                                                : (
                                                   (vlSelf->__PVT__exe0__DOT__div0__DOT__result[2U] 
                                                    << 0x1fU) 
                                                   | (vlSelf->__PVT__exe0__DOT__div0__DOT__result[1U] 
                                                      >> 1U)))
                                            : vlSelf->__PVT__exe0__DOT__divresult);
    __Vdly__idexe_rdaddr = (((IData)(vlSymsp->TOP.rst_i) 
                             | (IData)(vlSelf->__PVT__pipectrl_flushid))
                             ? 0U : (0x1fU & ((IData)(vlSelf->__PVT__exepipe_stall)
                                               ? (IData)(vlSelf->__PVT__idexe_rdaddr)
                                               : (vlSelf->__PVT__ifid_inst 
                                                  >> 7U))));
    __Vdly__idexe_memre = ((~ ((IData)(vlSymsp->TOP.rst_i) 
                               | (IData)(vlSelf->__PVT__pipectrl_flushid))) 
                           & ((IData)(vlSelf->__PVT__exepipe_stall)
                               ? (IData)(vlSelf->__PVT__idexe_memre)
                               : (3U == (0x7fU & vlSelf->__PVT__ifid_inst))));
    vlSelf->__PVT__idfwd_csraddr = (((IData)(vlSymsp->TOP.rst_i) 
                                     | (IData)(vlSelf->__PVT__pipectrl_flushid))
                                     ? 0U : (0xfffU 
                                             & ((IData)(vlSelf->__PVT__exepipe_stall)
                                                 ? (IData)(vlSelf->__PVT__idfwd_csraddr)
                                                 : 
                                                (vlSelf->__PVT__ifid_inst 
                                                 >> 0x14U))));
    __Vdly__idexe_we = (((IData)(vlSymsp->TOP.rst_i) 
                         | (IData)(vlSelf->__PVT__pipectrl_flushid)) 
                        | ((IData)(vlSelf->__PVT__exepipe_stall)
                            ? (IData)(vlSelf->__PVT__idexe_we)
                            : (((((((((0x13U == (0x7fU 
                                                 & vlSelf->__PVT__ifid_inst)) 
                                      | (IData)(vlSelf->__PVT__decode0__DOT__Rtype)) 
                                     | (3U == (0x7fU 
                                               & vlSelf->__PVT__ifid_inst))) 
                                    | (0x37U == (0x7fU 
                                                 & vlSelf->__PVT__ifid_inst))) 
                                   | (0x17U == (0x7fU 
                                                & vlSelf->__PVT__ifid_inst))) 
                                  | (0x6fU == (0x7fU 
                                               & vlSelf->__PVT__ifid_inst))) 
                                 | (0x67U == (0x7fU 
                                              & vlSelf->__PVT__ifid_inst))) 
                                | (IData)(vlSelf->__PVT__decode0__DOT__Mtype)) 
                               | (IData)(vlSelf->__PVT__decode0__DOT__CSRtype))));
    vlSelf->__PVT__idexe_exception = (((IData)(vlSymsp->TOP.rst_i) 
                                       | (IData)(vlSelf->__PVT__pipectrl_flushid))
                                       ? 0U : ((IData)(vlSelf->__PVT__exepipe_stall)
                                                ? vlSelf->__PVT__idexe_exception
                                                : (
                                                   (((0x73U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->__PVT__ifid_inst)) 
                                                     & (0U 
                                                        == (IData)(vlSelf->__PVT__decode0__DOT__opfunc3))) 
                                                    & (0U 
                                                       == 
                                                       (vlSelf->__PVT__ifid_inst 
                                                        >> 0x14U)))
                                                    ? 0xbU
                                                    : 0U)));
    vlSelf->__PVT__idexe_addsubsel = ((~ ((IData)(vlSymsp->TOP.rst_i) 
                                          | (IData)(vlSelf->__PVT__pipectrl_flushid))) 
                                      & ((IData)(vlSelf->__PVT__exepipe_stall)
                                          ? (IData)(vlSelf->__PVT__idexe_addsubsel)
                                          : (((0x33U 
                                               == (0x7fU 
                                                   & vlSelf->__PVT__ifid_inst)) 
                                              & (0x20U 
                                                 == 
                                                 (vlSelf->__PVT__ifid_inst 
                                                  >> 0x19U))) 
                                             & (0U 
                                                == (IData)(vlSelf->__PVT__decode0__DOT__opfunc3)))));
    __Vdly__idexe_opfunc3 = (((IData)(vlSymsp->TOP.rst_i) 
                              | (IData)(vlSelf->__PVT__pipectrl_flushid))
                              ? 0U : ((IData)(vlSelf->__PVT__exepipe_stall)
                                       ? (IData)(vlSelf->__PVT__idexe_opfunc3)
                                       : (IData)(vlSelf->__PVT__decode0__DOT__opfunc3)));
    vlSelf->__PVT__idexe_typesel = (1U & ((~ ((IData)(vlSymsp->TOP.rst_i) 
                                              | (IData)(vlSelf->__PVT__pipectrl_flushid))) 
                                          & ((IData)(vlSelf->__PVT__exepipe_stall)
                                              ? (IData)(vlSelf->__PVT__idexe_typesel)
                                              : (((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->__PVT__ifid_inst)) 
                                                  | (0x37U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->__PVT__ifid_inst)))
                                                  ? 1U
                                                  : 0U))));
    if (((IData)(vlSymsp->TOP.rst_i) | (IData)(vlSelf->__PVT__pipectrl_flushid))) {
        vlSelf->__PVT__idexe_optype = 1U;
        vlSelf->__PVT__idfwd_addr2 = 0U;
        vlSelf->__PVT__idfwd_addr1 = 0U;
    } else {
        vlSelf->__PVT__idexe_optype = ((IData)(vlSelf->__PVT__exepipe_stall)
                                        ? (IData)(vlSelf->__PVT__idexe_optype)
                                        : (IData)(vlSelf->__PVT__decode0__DOT__optype));
        vlSelf->__PVT__idfwd_addr2 = (0x1fU & ((IData)(vlSelf->__PVT__exepipe_stall)
                                                ? (IData)(vlSelf->__PVT__idfwd_addr2)
                                                : (vlSelf->__PVT__ifid_inst 
                                                   >> 0x14U)));
        vlSelf->__PVT__idfwd_addr1 = (0x1fU & ((IData)(vlSelf->__PVT__exepipe_stall)
                                                ? (IData)(vlSelf->__PVT__idfwd_addr1)
                                                : (vlSelf->__PVT__ifid_inst 
                                                   >> 0xfU)));
    }
    __Vdly__memwb_rddata = (((IData)(vlSymsp->TOP.rst_i) 
                             | (IData)(vlSelf->__PVT__pipectrl_flushmem))
                             ? 0U : ((IData)(vlSelf->__PVT__exepipe_stall)
                                      ? vlSelf->__PVT__memwb_rddata
                                      : vlSelf->__PVT__mem0__DOT__rd_data));
    __Vdly__exemem_we = ((~ ((IData)(vlSymsp->TOP.rst_i) 
                             | (IData)(vlSelf->__PVT__pipectrl_flushexe))) 
                         & ((IData)(vlSelf->__PVT__exepipe_stall)
                             ? (IData)(vlSelf->__PVT__exemem_we)
                             : (IData)(vlSelf->__PVT__idexe_we)));
    __Vdly__exemem_rdaddr = (((IData)(vlSymsp->TOP.rst_i) 
                              | (IData)(vlSelf->__PVT__pipectrl_flushexe))
                              ? 0U : ((IData)(vlSelf->__PVT__exepipe_stall)
                                       ? (IData)(vlSelf->__PVT__exemem_rdaddr)
                                       : (IData)(vlSelf->__PVT__idexe_rdaddr)));
    vlSelf->__PVT__idfwd_rs2 = (((IData)(vlSymsp->TOP.rst_i) 
                                 | (IData)(vlSelf->__PVT__pipectrl_flushid))
                                 ? 0U : ((IData)(vlSelf->__PVT__exepipe_stall)
                                          ? vlSelf->__PVT__idfwd_rs2
                                          : (((IData)(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__we) 
                                              & ((0x1fU 
                                                  & (vlSelf->__PVT__ifid_inst 
                                                     >> 0x14U)) 
                                                 == (IData)(vlSelf->__PVT__wbreg_rdaddr)))
                                              ? vlSelf->__PVT__wbreg_rddata
                                              : vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x
                                             [(0x1fU 
                                               & (vlSelf->__PVT__ifid_inst 
                                                  >> 0x14U))])));
    vlSelf->__Vdly__wbreg_rddata = ((IData)(vlSymsp->TOP.rst_i)
                                     ? 0U : ((IData)(vlSelf->__PVT__exepipe_stall)
                                              ? vlSelf->__PVT__wbreg_rddata
                                              : vlSelf->__PVT__memwb_rddata));
    __Vdly__memwb_rdaddr = (((IData)(vlSymsp->TOP.rst_i) 
                             | (IData)(vlSelf->__PVT__pipectrl_flushmem))
                             ? 0U : ((IData)(vlSelf->__PVT__exepipe_stall)
                                      ? (IData)(vlSelf->__PVT__memwb_rdaddr)
                                      : (IData)(vlSelf->__PVT__exemem_rdaddr)));
    __Vdly__memwb_we = ((~ ((IData)(vlSymsp->TOP.rst_i) 
                            | (IData)(vlSelf->__PVT__pipectrl_flushmem))) 
                        & ((IData)(vlSelf->__PVT__exepipe_stall)
                            ? (IData)(vlSelf->__PVT__memwb_we)
                            : (IData)(vlSelf->__PVT__exemem_we)));
    vlSelf->__PVT__wbreg_we = ((~ (IData)(vlSymsp->TOP.rst_i)) 
                               & ((IData)(vlSelf->__PVT__exepipe_stall)
                                   ? (IData)(vlSelf->__PVT__wbreg_we)
                                   : (IData)(vlSelf->__PVT__memwb_we)));
    vlSelf->__Vdly__wbreg_rdaddr = ((IData)(vlSymsp->TOP.rst_i)
                                     ? 0U : ((IData)(vlSelf->__PVT__exepipe_stall)
                                              ? (IData)(vlSelf->__PVT__wbreg_rdaddr)
                                              : (IData)(vlSelf->__PVT__memwb_rdaddr)));
    vlSelf->__PVT__idfwd_rs1 = (((IData)(vlSymsp->TOP.rst_i) 
                                 | (IData)(vlSelf->__PVT__pipectrl_flushid))
                                 ? 0U : ((IData)(vlSelf->__PVT__exepipe_stall)
                                          ? vlSelf->__PVT__idfwd_rs1
                                          : (((IData)(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__we) 
                                              & ((0x1fU 
                                                  & (vlSelf->__PVT__ifid_inst 
                                                     >> 0xfU)) 
                                                 == (IData)(vlSelf->__PVT__wbreg_rdaddr)))
                                              ? vlSelf->__PVT__wbreg_rddata
                                              : vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x
                                             [(0x1fU 
                                               & (vlSelf->__PVT__ifid_inst 
                                                  >> 0xfU))])));
    vlSelf->__PVT__exemem_rddata = (((IData)(vlSymsp->TOP.rst_i) 
                                     | (IData)(vlSelf->__PVT__pipectrl_flushexe))
                                     ? 0U : ((IData)(vlSelf->__PVT__exepipe_stall)
                                              ? vlSelf->__PVT__exemem_rddata
                                              : vlSelf->__PVT__exe0__DOT__op_result));
    if (vlSymsp->TOP.rst_i) {
        vlSelf->__PVT__ifid_inst = 0x13U;
        vlSelf->__PVT__csrflie0__DOT__mip = 0U;
    } else {
        vlSelf->__PVT__ifid_inst = ((IData)(vlSelf->__PVT__pipectrl_flushif)
                                     ? 0x13U : ((IData)(vlSelf->__PVT__pipectrl_stallif)
                                                 ? vlSelf->__PVT__ifid_inst
                                                 : 
                                                ((vlSymsp->TOP__soc_top__dpram0.__PVT__mem
                                                  [
                                                  (0x1ffffcU 
                                                   & vlSelf->__PVT__pc_wire)] 
                                                  << 0x18U) 
                                                 | ((vlSymsp->TOP__soc_top__dpram0.__PVT__mem
                                                     [
                                                     (0x1fffffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (0x1ffffcU 
                                                          & vlSelf->__PVT__pc_wire)))] 
                                                     << 0x10U) 
                                                    | ((vlSymsp->TOP__soc_top__dpram0.__PVT__mem
                                                        [
                                                        (0x1fffffU 
                                                         & ((IData)(2U) 
                                                            + 
                                                            (0x1ffffcU 
                                                             & vlSelf->__PVT__pc_wire)))] 
                                                        << 8U) 
                                                       | vlSymsp->TOP__soc_top__dpram0.__PVT__mem
                                                       [
                                                       (0x1fffffU 
                                                        & ((IData)(3U) 
                                                           + 
                                                           (0x1ffffcU 
                                                            & vlSelf->__PVT__pc_wire)))])))));
        vlSelf->__PVT__csrflie0__DOT__mip = ((((IData)(vlSymsp->TOP__soc_top.__PVT__clint_timer_irq) 
                                               << 7U) 
                                              | ((IData)(
                                                         (0U 
                                                          != vlSymsp->TOP__soc_top.__PVT__clint0__DOT__msip)) 
                                                 << 3U)) 
                                             & vlSelf->__PVT__csrflie0__DOT__mie);
    }
    if (((IData)(vlSymsp->TOP.rst_i) | (IData)(vlSelf->__PVT__pipectrl_flushexe))) {
        vlSelf->__PVT__exemem_opfunc3 = 0U;
        vlSelf->__PVT__exemem_memaddr = 0U;
    } else {
        vlSelf->__PVT__exemem_opfunc3 = ((IData)(vlSelf->__PVT__exepipe_stall)
                                          ? (IData)(vlSelf->__PVT__exemem_opfunc3)
                                          : (IData)(vlSelf->__PVT__idexe_opfunc3));
        vlSelf->__PVT__exemem_memaddr = ((IData)(vlSelf->__PVT__exepipe_stall)
                                          ? vlSelf->__PVT__exemem_memaddr
                                          : (((IData)(vlSelf->__PVT__idexe_memre) 
                                              | (IData)(vlSelf->__PVT__idexe_memwe))
                                              ? (vlSelf->__PVT__fwdexe_rs1 
                                                 + vlSelf->__PVT__idexe_imm)
                                              : 0U));
    }
    vlSelf->__PVT__exemem_memre = ((~ ((IData)(vlSymsp->TOP.rst_i) 
                                       | (IData)(vlSelf->__PVT__pipectrl_flushexe))) 
                                   & ((IData)(vlSelf->__PVT__exepipe_stall)
                                       ? (IData)(vlSelf->__PVT__exemem_memre)
                                       : (IData)(vlSelf->__PVT__idexe_memre)));
    vlSelf->__PVT__exemem_memwe = ((~ ((IData)(vlSymsp->TOP.rst_i) 
                                       | (IData)(vlSelf->__PVT__pipectrl_flushexe))) 
                                   & ((IData)(vlSelf->__PVT__exepipe_stall)
                                       ? (IData)(vlSelf->__PVT__exemem_memwe)
                                       : (IData)(vlSelf->__PVT__idexe_memwe)));
    vlSelf->__PVT__idexe_system_ret = __Vdly__idexe_system_ret;
    vlSelf->__PVT__exe0__DOT__div0__DOT__cnt = __Vdly__exe0__DOT__div0__DOT__cnt;
    vlSelf->__PVT__exe0__DOT__mul0__DOT__cnt = __Vdly__exe0__DOT__mul0__DOT__cnt;
    vlSelf->__PVT__exe0__DOT__mul0__DOT__result[0U] 
        = __Vdly__exe0__DOT__mul0__DOT__result[0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__result[1U] 
        = __Vdly__exe0__DOT__mul0__DOT__result[1U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__result[2U] 
        = __Vdly__exe0__DOT__mul0__DOT__result[2U];
    vlSelf->__PVT__csrflie0__DOT__mcycle = __Vdly__csrflie0__DOT__mcycle;
    vlSelf->__PVT__exemem_csrwe = __Vdly__exemem_csrwe;
    vlSelf->__PVT__exemem_csrdata = __Vdly__exemem_csrdata;
    vlSelf->__PVT__memwb_csrwe = __Vdly__memwb_csrwe;
    vlSelf->__PVT__memwb_csrdata = __Vdly__memwb_csrdata;
    vlSelf->__PVT__memwb_csraddr = __Vdly__memwb_csraddr;
    vlSelf->__PVT__exemem_exceptionpc = __Vdly__exemem_exceptionpc;
    vlSelf->__PVT__exemem_pc = __Vdly__exemem_pc;
    vlSelf->__PVT__exemem_exception = __Vdly__exemem_exception;
    vlSelf->__PVT__exemem_system_ret = __Vdly__exemem_system_ret;
    vlSelf->__PVT__csrflie0__DOT__mstatus = __Vdly__csrflie0__DOT__mstatus;
    vlSelf->__PVT__wbcsr_csrwe = __Vdly__wbcsr_csrwe;
    vlSelf->__PVT__wbcsr_csraddr = __Vdly__wbcsr_csraddr;
    vlSelf->__PVT__wbcsr_csrdata = __Vdly__wbcsr_csrdata;
    vlSelf->__PVT__ifid_pc = __Vdly__ifid_pc;
    vlSelf->__PVT__exe0__DOT__div0__DOT__result[0U] 
        = __Vdly__exe0__DOT__div0__DOT__result[0U];
    vlSelf->__PVT__exe0__DOT__div0__DOT__result[1U] 
        = __Vdly__exe0__DOT__div0__DOT__result[1U];
    vlSelf->__PVT__exe0__DOT__div0__DOT__result[2U] 
        = __Vdly__exe0__DOT__div0__DOT__result[2U];
    vlSelf->__PVT__idexe_we = __Vdly__idexe_we;
    vlSelf->__PVT__idexe_rdaddr = __Vdly__idexe_rdaddr;
    vlSelf->__PVT__memwb_rddata = __Vdly__memwb_rddata;
    vlSelf->__PVT__exemem_rdaddr = __Vdly__exemem_rdaddr;
    vlSelf->__PVT__exemem_we = __Vdly__exemem_we;
    vlSelf->__PVT__memwb_we = __Vdly__memwb_we;
    vlSelf->__PVT__memwb_rdaddr = __Vdly__memwb_rdaddr;
    vlSelf->__PVT__pc_wire = __Vdly__pc_wire;
    vlSelf->__PVT__csrflie0__DOT__mie = __Vdly__csrflie0__DOT__mie;
    vlSelf->__PVT__idexe_opfunc3 = __Vdly__idexe_opfunc3;
    vlSelf->__PVT__idexe_imm = __Vdly__idexe_imm;
    vlSelf->__PVT__idexe_memre = __Vdly__idexe_memre;
    vlSelf->__PVT__idexe_memwe = __Vdly__idexe_memwe;
    vlSelf->__PVT__exe0__DOT__mul0__DOT__mul_add = 
        (1U & vlSelf->__PVT__exe0__DOT__mul0__DOT__result[0U]);
    vlSelf->__PVT__exe0__DOT__mul0__DOT__result_tmp[0U] 
        = vlSelf->__PVT__exe0__DOT__mul0__DOT__result[0U];
    vlSelf->__PVT__exe0__DOT__mul0__DOT__result_tmp[1U] 
        = (IData)((0x1ffffffffULL & ((QData)((IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__reg32)) 
                                     + (QData)((IData)(
                                                       vlSelf->__PVT__exe0__DOT__mul0__DOT__result[1U])))));
    vlSelf->__PVT__exe0__DOT__mul0__DOT__result_tmp[2U] 
        = (IData)(((0x1ffffffffULL & ((QData)((IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__reg32)) 
                                      + (QData)((IData)(
                                                        vlSelf->__PVT__exe0__DOT__mul0__DOT__result[1U])))) 
                   >> 0x20U));
    vlSelf->__PVT__exe0__DOT__mul0__DOT__S = ((1U & 
                                               ((IData)(vlSymsp->TOP.rst_i) 
                                                | (~ (IData)(vlSelf->__PVT__exe0__DOT__mulstart))))
                                               ? 0U
                                               : (IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__S_nxt));
    vlSelf->__PVT__exe0__DOT__div0__DOT__div_sub = 
        (vlSelf->__PVT__exe0__DOT__div0__DOT__result[1U] 
         >= vlSelf->__PVT__exe0__DOT__div0__DOT__reg32);
    vlSelf->__PVT__exe0__DOT__div0__DOT__result_tmp[0U] 
        = vlSelf->__PVT__exe0__DOT__div0__DOT__result[0U];
    vlSelf->__PVT__exe0__DOT__div0__DOT__result_tmp[1U] 
        = (IData)((0x1ffffffffULL & ((QData)((IData)(
                                                     vlSelf->__PVT__exe0__DOT__div0__DOT__result[1U])) 
                                     - (QData)((IData)(vlSelf->__PVT__exe0__DOT__div0__DOT__reg32)))));
    vlSelf->__PVT__exe0__DOT__div0__DOT__result_tmp[2U] 
        = (IData)(((0x1ffffffffULL & ((QData)((IData)(
                                                      vlSelf->__PVT__exe0__DOT__div0__DOT__result[1U])) 
                                      - (QData)((IData)(vlSelf->__PVT__exe0__DOT__div0__DOT__reg32)))) 
                   >> 0x20U));
    vlSelf->__PVT__exe0__DOT__div0__DOT__S = ((1U & 
                                               ((IData)(vlSymsp->TOP.rst_i) 
                                                | (~ (IData)(vlSelf->__PVT__exe0__DOT__divstart))))
                                               ? 0U
                                               : (IData)(vlSelf->__PVT__exe0__DOT__div0__DOT__S_next));
    vlSelf->__PVT__fwdexe_csrdata = (((IData)(vlSelf->__PVT__exemem_csrwe) 
                                      & ((IData)(vlSelf->__PVT__idfwd_csraddr) 
                                         == (IData)(vlSelf->__PVT__exemem_csraddr)))
                                      ? vlSelf->__PVT__exemem_csrdata
                                      : (((IData)(vlSelf->__PVT__memwb_csrwe) 
                                          & ((IData)(vlSelf->__PVT__idfwd_csraddr) 
                                             == (IData)(vlSelf->__PVT__memwb_csraddr)))
                                          ? vlSelf->__PVT__memwb_csrdata
                                          : (((IData)(vlSelf->__PVT__wbcsr_csrwe) 
                                              & ((IData)(vlSelf->__PVT__idfwd_csraddr) 
                                                 == (IData)(vlSelf->__PVT__wbcsr_csraddr)))
                                              ? vlSelf->__PVT__wbcsr_csrdata
                                              : vlSelf->__PVT__idfwd_csrdata)));
    vlSelf->__PVT__decode0__DOT__immI = (((- (IData)(
                                                     (vlSelf->__PVT__ifid_inst 
                                                      >> 0x1fU))) 
                                          << 0xcU) 
                                         | (vlSelf->__PVT__ifid_inst 
                                            >> 0x14U));
    vlSelf->__PVT__decode0__DOT__Rtype = ((0x33U == 
                                           (0x7fU & vlSelf->__PVT__ifid_inst)) 
                                          & (1U != 
                                             (vlSelf->__PVT__ifid_inst 
                                              >> 0x19U)));
    vlSelf->__PVT__decode0__DOT__Mtype = ((0x33U == 
                                           (0x7fU & vlSelf->__PVT__ifid_inst)) 
                                          & (1U == 
                                             (vlSelf->__PVT__ifid_inst 
                                              >> 0x19U)));
    vlSelf->__PVT__decode0__DOT__opfunc3 = (((0x37U 
                                              == (0x7fU 
                                                  & vlSelf->__PVT__ifid_inst)) 
                                             | (0x17U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->__PVT__ifid_inst)))
                                             ? 0U : 
                                            (7U & (vlSelf->__PVT__ifid_inst 
                                                   >> 0xcU)));
    vlSelf->__PVT__csrid_data = ((((IData)(vlSelf->__PVT__wbcsr_csraddr) 
                                   == (vlSelf->__PVT__ifid_inst 
                                       >> 0x14U)) & (IData)(vlSelf->__PVT__wbcsr_csrwe))
                                  ? vlSelf->__PVT__wbcsr_csrdata
                                  : ((vlSelf->__PVT__ifid_inst 
                                      >> 0x1fU) ? (
                                                   (0x40000000U 
                                                    & vlSelf->__PVT__ifid_inst)
                                                    ? 
                                                   ((0x20000000U 
                                                     & vlSelf->__PVT__ifid_inst)
                                                     ? 
                                                    ((0x10000000U 
                                                      & vlSelf->__PVT__ifid_inst)
                                                      ? 
                                                     ((0x8000000U 
                                                       & vlSelf->__PVT__ifid_inst)
                                                       ? 0U
                                                       : 
                                                      ((0x4000000U 
                                                        & vlSelf->__PVT__ifid_inst)
                                                        ? 0U
                                                        : 
                                                       ((0x2000000U 
                                                         & vlSelf->__PVT__ifid_inst)
                                                         ? 0U
                                                         : 
                                                        ((0x1000000U 
                                                          & vlSelf->__PVT__ifid_inst)
                                                          ? 
                                                         ((0x800000U 
                                                           & vlSelf->__PVT__ifid_inst)
                                                           ? 0U
                                                           : 
                                                          ((0x400000U 
                                                            & vlSelf->__PVT__ifid_inst)
                                                            ? 
                                                           ((0x200000U 
                                                             & vlSelf->__PVT__ifid_inst)
                                                             ? 0U
                                                             : 
                                                            ((0x100000U 
                                                              & vlSelf->__PVT__ifid_inst)
                                                              ? 0U
                                                              : 0U))
                                                            : 
                                                           ((0x200000U 
                                                             & vlSelf->__PVT__ifid_inst)
                                                             ? 0U
                                                             : 
                                                            ((0x100000U 
                                                              & vlSelf->__PVT__ifid_inst)
                                                              ? 0U
                                                              : 0U))))
                                                          : 0U))))
                                                      : 0U)
                                                     : 
                                                    ((0x10000000U 
                                                      & vlSelf->__PVT__ifid_inst)
                                                      ? 0U
                                                      : 
                                                     ((0x8000000U 
                                                       & vlSelf->__PVT__ifid_inst)
                                                       ? 
                                                      ((0x4000000U 
                                                        & vlSelf->__PVT__ifid_inst)
                                                        ? 0U
                                                        : 
                                                       ((0x2000000U 
                                                         & vlSelf->__PVT__ifid_inst)
                                                         ? 0U
                                                         : 
                                                        ((0x1000000U 
                                                          & vlSelf->__PVT__ifid_inst)
                                                          ? 0U
                                                          : 
                                                         ((0x800000U 
                                                           & vlSelf->__PVT__ifid_inst)
                                                           ? 0U
                                                           : 
                                                          ((0x400000U 
                                                            & vlSelf->__PVT__ifid_inst)
                                                            ? 0U
                                                            : 
                                                           ((0x200000U 
                                                             & vlSelf->__PVT__ifid_inst)
                                                             ? 0U
                                                             : 
                                                            ((0x100000U 
                                                              & vlSelf->__PVT__ifid_inst)
                                                              ? 0U
                                                              : (IData)(
                                                                        (vlSelf->__PVT__csrflie0__DOT__mcycle 
                                                                         >> 0x20U)))))))))
                                                       : 
                                                      ((0x4000000U 
                                                        & vlSelf->__PVT__ifid_inst)
                                                        ? 0U
                                                        : 
                                                       ((0x2000000U 
                                                         & vlSelf->__PVT__ifid_inst)
                                                         ? 0U
                                                         : 
                                                        ((0x1000000U 
                                                          & vlSelf->__PVT__ifid_inst)
                                                          ? 0U
                                                          : 
                                                         ((0x800000U 
                                                           & vlSelf->__PVT__ifid_inst)
                                                           ? 0U
                                                           : 
                                                          ((0x400000U 
                                                            & vlSelf->__PVT__ifid_inst)
                                                            ? 0U
                                                            : 
                                                           ((0x200000U 
                                                             & vlSelf->__PVT__ifid_inst)
                                                             ? 0U
                                                             : 
                                                            ((0x100000U 
                                                              & vlSelf->__PVT__ifid_inst)
                                                              ? 0U
                                                              : (IData)(vlSelf->__PVT__csrflie0__DOT__mcycle)))))))))))
                                                    : 
                                                   ((0x20000000U 
                                                     & vlSelf->__PVT__ifid_inst)
                                                     ? 
                                                    ((0x10000000U 
                                                      & vlSelf->__PVT__ifid_inst)
                                                      ? 
                                                     ((0x8000000U 
                                                       & vlSelf->__PVT__ifid_inst)
                                                       ? 
                                                      ((0x4000000U 
                                                        & vlSelf->__PVT__ifid_inst)
                                                        ? 0U
                                                        : 
                                                       ((0x2000000U 
                                                         & vlSelf->__PVT__ifid_inst)
                                                         ? 0U
                                                         : 
                                                        ((0x1000000U 
                                                          & vlSelf->__PVT__ifid_inst)
                                                          ? 0U
                                                          : 
                                                         ((0x800000U 
                                                           & vlSelf->__PVT__ifid_inst)
                                                           ? 0U
                                                           : 
                                                          ((0x400000U 
                                                            & vlSelf->__PVT__ifid_inst)
                                                            ? 0U
                                                            : 
                                                           ((0x200000U 
                                                             & vlSelf->__PVT__ifid_inst)
                                                             ? 0U
                                                             : 
                                                            ((0x100000U 
                                                              & vlSelf->__PVT__ifid_inst)
                                                              ? 0U
                                                              : (IData)(
                                                                        (vlSelf->__PVT__csrflie0__DOT__mcycle 
                                                                         >> 0x20U)))))))))
                                                       : 
                                                      ((0x4000000U 
                                                        & vlSelf->__PVT__ifid_inst)
                                                        ? 0U
                                                        : 
                                                       ((0x2000000U 
                                                         & vlSelf->__PVT__ifid_inst)
                                                         ? 0U
                                                         : 
                                                        ((0x1000000U 
                                                          & vlSelf->__PVT__ifid_inst)
                                                          ? 0U
                                                          : 
                                                         ((0x800000U 
                                                           & vlSelf->__PVT__ifid_inst)
                                                           ? 0U
                                                           : 
                                                          ((0x400000U 
                                                            & vlSelf->__PVT__ifid_inst)
                                                            ? 0U
                                                            : 
                                                           ((0x200000U 
                                                             & vlSelf->__PVT__ifid_inst)
                                                             ? 0U
                                                             : 
                                                            ((0x100000U 
                                                              & vlSelf->__PVT__ifid_inst)
                                                              ? 0U
                                                              : (IData)(vlSelf->__PVT__csrflie0__DOT__mcycle)))))))))
                                                      : 0U)
                                                     : 0U))
                                      : ((0x40000000U 
                                          & vlSelf->__PVT__ifid_inst)
                                          ? 0U : ((0x20000000U 
                                                   & vlSelf->__PVT__ifid_inst)
                                                   ? 
                                                  ((0x10000000U 
                                                    & vlSelf->__PVT__ifid_inst)
                                                    ? 
                                                   ((0x8000000U 
                                                     & vlSelf->__PVT__ifid_inst)
                                                     ? 0U
                                                     : 
                                                    ((0x4000000U 
                                                      & vlSelf->__PVT__ifid_inst)
                                                      ? 
                                                     ((0x2000000U 
                                                       & vlSelf->__PVT__ifid_inst)
                                                       ? 0U
                                                       : 
                                                      ((0x1000000U 
                                                        & vlSelf->__PVT__ifid_inst)
                                                        ? 0U
                                                        : 
                                                       ((0x800000U 
                                                         & vlSelf->__PVT__ifid_inst)
                                                         ? 0U
                                                         : 
                                                        ((0x400000U 
                                                          & vlSelf->__PVT__ifid_inst)
                                                          ? 
                                                         ((0x200000U 
                                                           & vlSelf->__PVT__ifid_inst)
                                                           ? 0U
                                                           : 
                                                          ((0x100000U 
                                                            & vlSelf->__PVT__ifid_inst)
                                                            ? 0U
                                                            : vlSelf->__PVT__csrflie0__DOT__mip))
                                                          : 
                                                         ((0x200000U 
                                                           & vlSelf->__PVT__ifid_inst)
                                                           ? 
                                                          ((0x100000U 
                                                            & vlSelf->__PVT__ifid_inst)
                                                            ? vlSelf->__PVT__csrflie0__DOT__mtval
                                                            : vlSelf->__PVT__csrflie0__DOT__mcause)
                                                           : 
                                                          ((0x100000U 
                                                            & vlSelf->__PVT__ifid_inst)
                                                            ? vlSelf->__PVT__csrflie0__DOT__mepc
                                                            : vlSelf->__PVT__csrflie0__DOT__mscratch))))))
                                                      : 
                                                     ((0x2000000U 
                                                       & vlSelf->__PVT__ifid_inst)
                                                       ? 0U
                                                       : 
                                                      ((0x1000000U 
                                                        & vlSelf->__PVT__ifid_inst)
                                                        ? 0U
                                                        : 
                                                       ((0x800000U 
                                                         & vlSelf->__PVT__ifid_inst)
                                                         ? 0U
                                                         : 
                                                        ((0x400000U 
                                                          & vlSelf->__PVT__ifid_inst)
                                                          ? 
                                                         ((0x200000U 
                                                           & vlSelf->__PVT__ifid_inst)
                                                           ? 0U
                                                           : 
                                                          ((0x100000U 
                                                            & vlSelf->__PVT__ifid_inst)
                                                            ? vlSelf->__PVT__csrflie0__DOT__mtvec
                                                            : vlSelf->__PVT__csrflie0__DOT__mie))
                                                          : 
                                                         ((0x200000U 
                                                           & vlSelf->__PVT__ifid_inst)
                                                           ? 0U
                                                           : 
                                                          ((0x100000U 
                                                            & vlSelf->__PVT__ifid_inst)
                                                            ? 0x40001100U
                                                            : vlSelf->__PVT__csrflie0__DOT__mstatus))))))))
                                                    : 0U)
                                                   : 0U))));
    if (vlSelf->__PVT__exemem_memre) {
        vlSelf->__PVT__memrom_ramaddr = vlSelf->__PVT__exemem_memaddr;
        if ((4U & (IData)(vlSelf->__PVT__exemem_opfunc3))) {
            if ((2U & (IData)(vlSelf->__PVT__exemem_opfunc3))) {
                vlSelf->__PVT__memrom_ramaddr = 0U;
            }
        } else if ((2U & (IData)(vlSelf->__PVT__exemem_opfunc3))) {
            if ((1U & (IData)(vlSelf->__PVT__exemem_opfunc3))) {
                vlSelf->__PVT__memrom_ramaddr = 0U;
            }
        }
    } else {
        vlSelf->__PVT__memrom_ramaddr = 0U;
    }
    if (vlSelf->__PVT__exemem_memwe) {
        vlSelf->__PVT__memrom_ramaddr = vlSelf->__PVT__exemem_memaddr;
        if ((0U != (IData)(vlSelf->__PVT__exemem_opfunc3))) {
            if ((1U != (IData)(vlSelf->__PVT__exemem_opfunc3))) {
                if ((2U != (IData)(vlSelf->__PVT__exemem_opfunc3))) {
                    vlSelf->__PVT__memrom_ramaddr = 0U;
                }
            }
        }
    }
    vlSelf->__PVT__exe0__DOT__mulstart = ((5U == (IData)(vlSelf->__PVT__idexe_optype)) 
                                          & (~ ((IData)(vlSelf->__PVT__idexe_opfunc3) 
                                                >> 2U)));
    vlSelf->__PVT__exe0__DOT__divstart = ((5U == (IData)(vlSelf->__PVT__idexe_optype)) 
                                          & ((IData)(vlSelf->__PVT__idexe_opfunc3) 
                                             >> 2U));
    __Vtableidx1 = (((0x67U == (0x7fU & vlSelf->__PVT__ifid_inst)) 
                     << 8U) | (((0x6fU == (0x7fU & vlSelf->__PVT__ifid_inst)) 
                                << 7U) | (((IData)(vlSelf->__PVT__decode0__DOT__Mtype) 
                                           << 6U) | 
                                          (((0x17U 
                                             == (0x7fU 
                                                 & vlSelf->__PVT__ifid_inst)) 
                                            << 5U) 
                                           | (((0x37U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->__PVT__ifid_inst)) 
                                               << 4U) 
                                              | (((0x23U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->__PVT__ifid_inst)) 
                                                  << 3U) 
                                                 | (((0x63U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->__PVT__ifid_inst)) 
                                                     << 2U) 
                                                    | (((0x13U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->__PVT__ifid_inst)) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__PVT__decode0__DOT__Rtype)))))))));
    vlSelf->__PVT__decode0__DOT__optype = Vsoc_top__ConstPool__TABLE_32da7452_0
        [__Vtableidx1];
    vlSelf->__PVT__decode0__DOT__MRETtype = (((0x73U 
                                               == (0x7fU 
                                                   & vlSelf->__PVT__ifid_inst)) 
                                              & (0U 
                                                 == (IData)(vlSelf->__PVT__decode0__DOT__opfunc3))) 
                                             & (0x302U 
                                                == 
                                                (vlSelf->__PVT__ifid_inst 
                                                 >> 0x14U)));
    vlSelf->__PVT__decode0__DOT__CSRtype = ((0x73U 
                                             == (0x7fU 
                                                 & vlSelf->__PVT__ifid_inst)) 
                                            & (0U != (IData)(vlSelf->__PVT__decode0__DOT__opfunc3)));
    vlSelf->__PVT__exepipe_stall = 0U;
    if ((1U & (~ (((0U == (IData)(vlSelf->__PVT__idexe_optype)) 
                   | (1U == (IData)(vlSelf->__PVT__idexe_optype))) 
                  | (4U == (IData)(vlSelf->__PVT__idexe_optype)))))) {
        if ((2U != (IData)(vlSelf->__PVT__idexe_optype))) {
            if ((3U != (IData)(vlSelf->__PVT__idexe_optype))) {
                if ((5U == (IData)(vlSelf->__PVT__idexe_optype))) {
                    vlSelf->__PVT__exepipe_stall = 
                        (((~ (IData)(vlSelf->__PVT__exe0__DOT__mulisdone)) 
                          & (IData)(vlSelf->__PVT__exe0__DOT__mulstart)) 
                         | ((~ (IData)(vlSelf->__PVT__exe0__DOT__divisdone)) 
                            & (IData)(vlSelf->__PVT__exe0__DOT__divstart)));
                }
            }
        }
    }
    vlSelf->__PVT__decode0__DOT__imm = ((((((((((- (IData)(
                                                           (0x13U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->__PVT__ifid_inst)))) 
                                                & vlSelf->__PVT__decode0__DOT__immI) 
                                               | ((- (IData)(
                                                             (3U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->__PVT__ifid_inst)))) 
                                                  & (((- (IData)(
                                                                 (vlSelf->__PVT__ifid_inst 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelf->__PVT__ifid_inst 
                                                        >> 0x14U)))) 
                                              | ((- (IData)(
                                                            (0x23U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->__PVT__ifid_inst)))) 
                                                 & (((- (IData)(
                                                                (vlSelf->__PVT__ifid_inst 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0xfe0U 
                                                        & (vlSelf->__PVT__ifid_inst 
                                                           >> 0x14U)) 
                                                       | (0x1fU 
                                                          & (vlSelf->__PVT__ifid_inst 
                                                             >> 7U)))))) 
                                             | (0xfffff000U 
                                                & ((- (IData)(
                                                              (0x37U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->__PVT__ifid_inst)))) 
                                                   & vlSelf->__PVT__ifid_inst))) 
                                            | (0xfffff000U 
                                               & ((- (IData)(
                                                             (0x17U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->__PVT__ifid_inst)))) 
                                                  & vlSelf->__PVT__ifid_inst))) 
                                           | ((- (IData)(
                                                         (0x6fU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->__PVT__ifid_inst)))) 
                                              & (((- (IData)(
                                                             (vlSelf->__PVT__ifid_inst 
                                                              >> 0x1fU))) 
                                                  << 0x14U) 
                                                 | ((0xff000U 
                                                     & vlSelf->__PVT__ifid_inst) 
                                                    | ((0x800U 
                                                        & (vlSelf->__PVT__ifid_inst 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->__PVT__ifid_inst 
                                                             >> 0x14U))))))) 
                                          | ((- (IData)(
                                                        (0x67U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->__PVT__ifid_inst)))) 
                                             & vlSelf->__PVT__decode0__DOT__immI)) 
                                         | ((- (IData)(
                                                       (0x63U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->__PVT__ifid_inst)))) 
                                            & (((- (IData)(
                                                           (vlSelf->__PVT__ifid_inst 
                                                            >> 0x1fU))) 
                                                << 0xcU) 
                                               | ((0x800U 
                                                   & (vlSelf->__PVT__ifid_inst 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSelf->__PVT__ifid_inst 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSelf->__PVT__ifid_inst 
                                                           >> 7U))))))) 
                                        | (0x1fU & 
                                           ((- (IData)((IData)(vlSelf->__PVT__decode0__DOT__CSRtype))) 
                                            & (vlSelf->__PVT__ifid_inst 
                                               >> 0xfU))));
    vlSelf->__PVT__idpipectrl_loadusehazard = (((((0x1fU 
                                                   & (vlSelf->__PVT__ifid_inst 
                                                      >> 0xfU)) 
                                                  == (IData)(vlSelf->__PVT__idexe_rdaddr)) 
                                                 & (((((((((IData)(vlSelf->__PVT__decode0__DOT__Rtype) 
                                                           | (0x23U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->__PVT__ifid_inst))) 
                                                          | (0x63U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->__PVT__ifid_inst))) 
                                                         | (0x13U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->__PVT__ifid_inst))) 
                                                        | (3U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->__PVT__ifid_inst))) 
                                                       | (0x67U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->__PVT__ifid_inst))) 
                                                      | (IData)(vlSelf->__PVT__decode0__DOT__CSRtype)) 
                                                     | (IData)(vlSelf->__PVT__decode0__DOT__MRETtype)) 
                                                    | (IData)(vlSelf->__PVT__decode0__DOT__Mtype))) 
                                                | (((0x1fU 
                                                     & (vlSelf->__PVT__ifid_inst 
                                                        >> 0x14U)) 
                                                    == (IData)(vlSelf->__PVT__idexe_rdaddr)) 
                                                   & ((((IData)(vlSelf->__PVT__decode0__DOT__Rtype) 
                                                        | (0x23U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->__PVT__ifid_inst))) 
                                                       | (0x63U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->__PVT__ifid_inst))) 
                                                      | (IData)(vlSelf->__PVT__decode0__DOT__Mtype)))) 
                                               & (IData)(vlSelf->__PVT__idexe_memre));
    vlSelf->__PVT__pipectrl_stallif = ((IData)(vlSelf->__PVT__idpipectrl_loadusehazard) 
                                       | (IData)(vlSelf->__PVT__exepipe_stall));
}

VL_INLINE_OPT void Vsoc_top_coretop___sequent__TOP__soc_top__coretop0__4(Vsoc_top_coretop* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsoc_top_coretop___sequent__TOP__soc_top__coretop0__4\n"); );
    // Body
    vlSelf->__PVT__wbreg_rddata = vlSelf->__Vdly__wbreg_rddata;
    vlSelf->__PVT__wbreg_rdaddr = vlSelf->__Vdly__wbreg_rdaddr;
    vlSelf->__PVT__csrflie0__DOT__interrupt_cause = 0U;
    if (((vlSelf->__PVT__csrflie0__DOT__mstatus >> 3U) 
         & (0U == vlSelf->__PVT__exemem_exception))) {
        vlSelf->__PVT__csrflie0__DOT__interrupt_cause 
            = (((IData)(vlSymsp->TOP__soc_top.__PVT__clint_timer_irq) 
                & (vlSelf->__PVT__csrflie0__DOT__mie 
                   >> 7U)) ? 0x80000007U : (((0U != vlSymsp->TOP__soc_top.__PVT__clint0__DOT__msip) 
                                             & (vlSelf->__PVT__csrflie0__DOT__mie 
                                                >> 3U))
                                             ? 0x80000003U
                                             : 0U));
    } else if ((0U != vlSelf->__PVT__exemem_exception)) {
        vlSelf->__PVT__csrflie0__DOT__interrupt_cause 
            = vlSelf->__PVT__exemem_exception;
    }
    vlSelf->__PVT__csrflie0__DOT__trap_entry = 0U;
    if (((vlSelf->__PVT__csrflie0__DOT__mstatus >> 3U) 
         & (0U == vlSelf->__PVT__exemem_exception))) {
        vlSelf->__PVT__csrflie0__DOT__trap_entry = 
            (((IData)(vlSymsp->TOP__soc_top.__PVT__clint_timer_irq) 
              & (vlSelf->__PVT__csrflie0__DOT__mie 
                 >> 7U)) ? ((0U == (3U & vlSelf->__PVT__csrflie0__DOT__mtvec))
                             ? (0xfffffffcU & vlSelf->__PVT__csrflie0__DOT__mtvec)
                             : ((IData)(0x1cU) + (0xfffffffcU 
                                                  & vlSelf->__PVT__csrflie0__DOT__mtvec)))
              : (((0U != vlSymsp->TOP__soc_top.__PVT__clint0__DOT__msip) 
                  & (vlSelf->__PVT__csrflie0__DOT__mie 
                     >> 3U)) ? ((0U == (3U & vlSelf->__PVT__csrflie0__DOT__mtvec))
                                 ? (0xfffffffcU & vlSelf->__PVT__csrflie0__DOT__mtvec)
                                 : ((IData)(0xcU) + 
                                    (0xfffffffcU & vlSelf->__PVT__csrflie0__DOT__mtvec)))
                  : 0U));
    } else if ((0U != vlSelf->__PVT__exemem_exception)) {
        vlSelf->__PVT__csrflie0__DOT__trap_entry = 
            (0xfffffffcU & vlSelf->__PVT__csrflie0__DOT__mtvec);
    }
    vlSelf->__PVT__csrflie0__DOT__trap_taken = 0U;
    if (((vlSelf->__PVT__csrflie0__DOT__mstatus >> 3U) 
         & (0U == vlSelf->__PVT__exemem_exception))) {
        vlSelf->__PVT__csrflie0__DOT__trap_taken = 
            (((IData)(vlSymsp->TOP__soc_top.__PVT__clint_timer_irq) 
              & (vlSelf->__PVT__csrflie0__DOT__mie 
                 >> 7U)) | ((0U != vlSymsp->TOP__soc_top.__PVT__clint0__DOT__msip) 
                            & (vlSelf->__PVT__csrflie0__DOT__mie 
                               >> 3U)));
    } else if ((0U != vlSelf->__PVT__exemem_exception)) {
        vlSelf->__PVT__csrflie0__DOT__trap_taken = 1U;
    }
    vlSelf->__PVT__fwdexe_rs2 = ((((IData)(vlSelf->__PVT__exemem_we) 
                                   & (0U != (IData)(vlSelf->__PVT__exemem_rdaddr))) 
                                  & ((IData)(vlSelf->__PVT__idfwd_addr2) 
                                     == (IData)(vlSelf->__PVT__exemem_rdaddr)))
                                  ? vlSelf->__PVT__exemem_rddata
                                  : ((((IData)(vlSelf->__PVT__memwb_we) 
                                       & (0U != (IData)(vlSelf->__PVT__memwb_rdaddr))) 
                                      & ((IData)(vlSelf->__PVT__idfwd_addr2) 
                                         == (IData)(vlSelf->__PVT__memwb_rdaddr)))
                                      ? vlSelf->__PVT__memwb_rddata
                                      : ((((IData)(vlSelf->__PVT__wbreg_we) 
                                           & (0U != (IData)(vlSelf->__PVT__wbreg_rdaddr))) 
                                          & ((IData)(vlSelf->__PVT__idfwd_addr2) 
                                             == (IData)(vlSelf->__PVT__wbreg_rdaddr)))
                                          ? vlSelf->__PVT__wbreg_rddata
                                          : vlSelf->__PVT__idfwd_rs2)));
    vlSelf->__PVT__fwdexe_rs1 = ((((IData)(vlSelf->__PVT__exemem_we) 
                                   & (0U != (IData)(vlSelf->__PVT__exemem_rdaddr))) 
                                  & ((IData)(vlSelf->__PVT__idfwd_addr1) 
                                     == (IData)(vlSelf->__PVT__exemem_rdaddr)))
                                  ? vlSelf->__PVT__exemem_rddata
                                  : ((((IData)(vlSelf->__PVT__memwb_we) 
                                       & (0U != (IData)(vlSelf->__PVT__memwb_rdaddr))) 
                                      & ((IData)(vlSelf->__PVT__idfwd_addr1) 
                                         == (IData)(vlSelf->__PVT__memwb_rdaddr)))
                                      ? vlSelf->__PVT__memwb_rddata
                                      : ((((IData)(vlSelf->__PVT__wbreg_we) 
                                           & (0U != (IData)(vlSelf->__PVT__wbreg_rdaddr))) 
                                          & ((IData)(vlSelf->__PVT__idfwd_addr1) 
                                             == (IData)(vlSelf->__PVT__wbreg_rdaddr)))
                                          ? vlSelf->__PVT__wbreg_rddata
                                          : vlSelf->__PVT__idfwd_rs1)));
    vlSelf->__PVT__pipectrl_flushexe = ((IData)(vlSelf->__PVT__csrflie0__DOT__trap_taken) 
                                        | (IData)(vlSelf->__PVT__exemem_system_ret));
    vlSelf->__PVT__pipectrl_flushmem = ((IData)(vlSelf->__PVT__csrflie0__DOT__trap_taken) 
                                        | (IData)(vlSelf->__PVT__exemem_system_ret));
    vlSelf->__PVT__exe0__DOT__mtypeb = 0U;
    if ((1U & (~ (((0U == (IData)(vlSelf->__PVT__idexe_optype)) 
                   | (1U == (IData)(vlSelf->__PVT__idexe_optype))) 
                  | (4U == (IData)(vlSelf->__PVT__idexe_optype)))))) {
        if ((2U != (IData)(vlSelf->__PVT__idexe_optype))) {
            if ((3U != (IData)(vlSelf->__PVT__idexe_optype))) {
                if ((5U == (IData)(vlSelf->__PVT__idexe_optype))) {
                    vlSelf->__PVT__exe0__DOT__mtypeb 
                        = ((4U & (IData)(vlSelf->__PVT__idexe_opfunc3))
                            ? ((2U & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                ? ((1U & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                    ? vlSelf->__PVT__fwdexe_rs2
                                    : ((vlSelf->__PVT__fwdexe_rs2 
                                        >> 0x1fU) ? 
                                       (- vlSelf->__PVT__fwdexe_rs2)
                                        : vlSelf->__PVT__fwdexe_rs2))
                                : ((1U & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                    ? vlSelf->__PVT__fwdexe_rs2
                                    : ((vlSelf->__PVT__fwdexe_rs2 
                                        >> 0x1fU) ? 
                                       (- vlSelf->__PVT__fwdexe_rs2)
                                        : vlSelf->__PVT__fwdexe_rs2)))
                            : ((2U & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                ? vlSelf->__PVT__fwdexe_rs2
                                : ((1U & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                    ? ((vlSelf->__PVT__fwdexe_rs2 
                                        >> 0x1fU) ? 
                                       ((IData)(1U) 
                                        + (~ vlSelf->__PVT__fwdexe_rs2))
                                        : vlSelf->__PVT__fwdexe_rs2)
                                    : vlSelf->__PVT__fwdexe_rs2)));
                }
            }
        }
    }
    vlSelf->__PVT__exe0__DOT__op2 = (((1U == (IData)(vlSelf->__PVT__idexe_optype)) 
                                      | (4U == (IData)(vlSelf->__PVT__idexe_optype)))
                                      ? vlSelf->__PVT__idexe_imm
                                      : vlSelf->__PVT__fwdexe_rs2);
    vlSelf->__PVT__exepipe_jumpaddr = 0U;
    if ((1U & (~ (((0U == (IData)(vlSelf->__PVT__idexe_optype)) 
                   | (1U == (IData)(vlSelf->__PVT__idexe_optype))) 
                  | (4U == (IData)(vlSelf->__PVT__idexe_optype)))))) {
        if ((2U == (IData)(vlSelf->__PVT__idexe_optype))) {
            vlSelf->__PVT__exepipe_jumpaddr = (vlSelf->__PVT__idexe_pc 
                                               + vlSelf->__PVT__idexe_imm);
        } else if ((3U != (IData)(vlSelf->__PVT__idexe_optype))) {
            if ((5U != (IData)(vlSelf->__PVT__idexe_optype))) {
                if ((6U == (IData)(vlSelf->__PVT__idexe_optype))) {
                    vlSelf->__PVT__exepipe_jumpaddr 
                        = ((IData)(vlSelf->__PVT__idexe_typesel)
                            ? (vlSelf->__PVT__idexe_pc 
                               + vlSelf->__PVT__idexe_imm)
                            : (0xfffffffeU & (vlSelf->__PVT__fwdexe_rs1 
                                              + vlSelf->__PVT__idexe_imm)));
                } else if ((1U & (~ (IData)(vlSelf->__PVT__idexe_csrwe)))) {
                    vlSelf->__PVT__exepipe_jumpaddr = 0U;
                }
            }
        }
    }
    vlSelf->__PVT__exe0__DOT__mtypea = 0U;
    if ((1U & (~ (((0U == (IData)(vlSelf->__PVT__idexe_optype)) 
                   | (1U == (IData)(vlSelf->__PVT__idexe_optype))) 
                  | (4U == (IData)(vlSelf->__PVT__idexe_optype)))))) {
        if ((2U != (IData)(vlSelf->__PVT__idexe_optype))) {
            if ((3U != (IData)(vlSelf->__PVT__idexe_optype))) {
                if ((5U == (IData)(vlSelf->__PVT__idexe_optype))) {
                    vlSelf->__PVT__exe0__DOT__mtypea 
                        = ((4U & (IData)(vlSelf->__PVT__idexe_opfunc3))
                            ? ((2U & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                ? ((1U & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                    ? vlSelf->__PVT__fwdexe_rs1
                                    : ((vlSelf->__PVT__fwdexe_rs1 
                                        >> 0x1fU) ? 
                                       (- vlSelf->__PVT__fwdexe_rs1)
                                        : vlSelf->__PVT__fwdexe_rs1))
                                : ((1U & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                    ? vlSelf->__PVT__fwdexe_rs1
                                    : ((vlSelf->__PVT__fwdexe_rs1 
                                        >> 0x1fU) ? 
                                       (- vlSelf->__PVT__fwdexe_rs1)
                                        : vlSelf->__PVT__fwdexe_rs1)))
                            : ((2U & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                ? ((1U & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                    ? vlSelf->__PVT__fwdexe_rs1
                                    : ((vlSelf->__PVT__fwdexe_rs1 
                                        >> 0x1fU) ? 
                                       ((IData)(1U) 
                                        + (~ vlSelf->__PVT__fwdexe_rs1))
                                        : vlSelf->__PVT__fwdexe_rs1))
                                : ((1U & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                    ? ((vlSelf->__PVT__fwdexe_rs1 
                                        >> 0x1fU) ? 
                                       ((IData)(1U) 
                                        + (~ vlSelf->__PVT__fwdexe_rs1))
                                        : vlSelf->__PVT__fwdexe_rs1)
                                    : vlSelf->__PVT__fwdexe_rs1)));
                }
            }
        }
    }
    vlSelf->__PVT__exe0__DOT__op1 = ((4U == (IData)(vlSelf->__PVT__idexe_optype))
                                      ? ((IData)(vlSelf->__PVT__idexe_typesel)
                                          ? 0U : vlSelf->__PVT__idexe_pc)
                                      : vlSelf->__PVT__fwdexe_rs1);
    vlSelf->__PVT__exe0__DOT__mul0__DOT__S_nxt = ((0U 
                                                   == (IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__S))
                                                   ? 
                                                  ((1U 
                                                    & ((~ (IData)(
                                                                  (0U 
                                                                   != vlSelf->__PVT__exe0__DOT__mtypea))) 
                                                       | (~ (IData)(
                                                                    (0U 
                                                                     != vlSelf->__PVT__exe0__DOT__mtypeb)))))
                                                    ? 3U
                                                    : 1U)
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__S))
                                                    ? 
                                                   ((0U 
                                                     != (IData)(vlSelf->__PVT__exe0__DOT__mul0__DOT__cnt))
                                                     ? 1U
                                                     : 3U)
                                                    : 0U));
    vlSelf->__PVT__exe0__DOT__div0__DOT__S_next = (
                                                   (0U 
                                                    == (IData)(vlSelf->__PVT__exe0__DOT__div0__DOT__S))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__exe0__DOT__divstart)
                                                     ? 
                                                    (((0U 
                                                       == vlSelf->__PVT__exe0__DOT__mtypea) 
                                                      | (0U 
                                                         == vlSelf->__PVT__exe0__DOT__mtypeb))
                                                      ? 3U
                                                      : 1U)
                                                     : 0U)
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->__PVT__exe0__DOT__div0__DOT__S))
                                                     ? 
                                                    ((0U 
                                                      != (IData)(vlSelf->__PVT__exe0__DOT__div0__DOT__cnt))
                                                      ? 1U
                                                      : 3U)
                                                     : 0U));
    vlSelf->__PVT__exe0__DOT__csr_we = 0U;
    if ((1U & (~ (((0U == (IData)(vlSelf->__PVT__idexe_optype)) 
                   | (1U == (IData)(vlSelf->__PVT__idexe_optype))) 
                  | (4U == (IData)(vlSelf->__PVT__idexe_optype)))))) {
        if ((2U != (IData)(vlSelf->__PVT__idexe_optype))) {
            if ((3U != (IData)(vlSelf->__PVT__idexe_optype))) {
                if ((5U != (IData)(vlSelf->__PVT__idexe_optype))) {
                    if ((6U != (IData)(vlSelf->__PVT__idexe_optype))) {
                        if (vlSelf->__PVT__idexe_csrwe) {
                            vlSelf->__PVT__exe0__DOT__csr_we 
                                = (1U & ((4U & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                          ? ((2U & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                              ? ((1U 
                                                  & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                  ? 
                                                 ((0U 
                                                   == vlSelf->__PVT__idexe_imm)
                                                   ? 0U
                                                   : 1U)
                                                  : 
                                                 ((0U 
                                                   == vlSelf->__PVT__idexe_imm)
                                                   ? 0U
                                                   : 1U))
                                              : (IData)(vlSelf->__PVT__idexe_opfunc3))
                                          : ((2U & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                              ? ((1U 
                                                  & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                  ? 
                                                 ((0U 
                                                   == vlSelf->__PVT__exe0__DOT__op1)
                                                   ? 0U
                                                   : 1U)
                                                  : 
                                                 ((0U 
                                                   == vlSelf->__PVT__exe0__DOT__op1)
                                                   ? 0U
                                                   : 1U))
                                              : (IData)(vlSelf->__PVT__idexe_opfunc3))));
                        }
                    }
                }
            }
        }
    }
    vlSelf->__PVT__exe0__DOT__csr_data = 0U;
    if ((1U & (~ (((0U == (IData)(vlSelf->__PVT__idexe_optype)) 
                   | (1U == (IData)(vlSelf->__PVT__idexe_optype))) 
                  | (4U == (IData)(vlSelf->__PVT__idexe_optype)))))) {
        if ((2U != (IData)(vlSelf->__PVT__idexe_optype))) {
            if ((3U != (IData)(vlSelf->__PVT__idexe_optype))) {
                if ((5U != (IData)(vlSelf->__PVT__idexe_optype))) {
                    if ((6U != (IData)(vlSelf->__PVT__idexe_optype))) {
                        if (vlSelf->__PVT__idexe_csrwe) {
                            vlSelf->__PVT__exe0__DOT__csr_data 
                                = ((4U & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                    ? ((2U & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                        ? ((1U & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                            ? (vlSelf->__PVT__fwdexe_csrdata 
                                               & (~ vlSelf->__PVT__idexe_imm))
                                            : (vlSelf->__PVT__fwdexe_csrdata 
                                               | vlSelf->__PVT__idexe_imm))
                                        : ((1U & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                            ? vlSelf->__PVT__idexe_imm
                                            : 0U)) : 
                                   ((2U & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                     ? ((1U & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                         ? (vlSelf->__PVT__fwdexe_csrdata 
                                            & (~ vlSelf->__PVT__exe0__DOT__op1))
                                         : (vlSelf->__PVT__fwdexe_csrdata 
                                            | vlSelf->__PVT__exe0__DOT__op1))
                                     : ((1U & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                         ? vlSelf->__PVT__exe0__DOT__op1
                                         : 0U)));
                        }
                    }
                }
            }
        }
    }
    vlSelf->__PVT__exe0__DOT__op_result = 0U;
    if ((((0U == (IData)(vlSelf->__PVT__idexe_optype)) 
          | (1U == (IData)(vlSelf->__PVT__idexe_optype))) 
         | (4U == (IData)(vlSelf->__PVT__idexe_optype)))) {
        vlSelf->__PVT__exe0__DOT__op_result = ((4U 
                                                & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                     ? 
                                                    (vlSelf->__PVT__exe0__DOT__op1 
                                                     & vlSelf->__PVT__exe0__DOT__op2)
                                                     : 
                                                    (vlSelf->__PVT__exe0__DOT__op1 
                                                     | vlSelf->__PVT__exe0__DOT__op2))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__idexe_shiftsel)
                                                      ? 
                                                     VL_SHIFTRS_III(32,32,5, vlSelf->__PVT__exe0__DOT__op1, 
                                                                    (0x1fU 
                                                                     & vlSelf->__PVT__exe0__DOT__op2))
                                                      : 
                                                     (vlSelf->__PVT__exe0__DOT__op1 
                                                      >> 
                                                      (0x1fU 
                                                       & vlSelf->__PVT__exe0__DOT__op2)))
                                                     : 
                                                    (vlSelf->__PVT__exe0__DOT__op1 
                                                     ^ vlSelf->__PVT__exe0__DOT__op2)))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                     ? 
                                                    ((vlSelf->__PVT__exe0__DOT__op1 
                                                      < vlSelf->__PVT__exe0__DOT__op2)
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    (VL_LTS_III(1,32,32, vlSelf->__PVT__exe0__DOT__op1, vlSelf->__PVT__exe0__DOT__op2)
                                                      ? 1U
                                                      : 0U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                     ? 
                                                    (vlSelf->__PVT__exe0__DOT__op1 
                                                     << 
                                                     (0x1fU 
                                                      & vlSelf->__PVT__exe0__DOT__op2))
                                                     : 
                                                    ((IData)(vlSelf->__PVT__idexe_addsubsel)
                                                      ? 
                                                     ((IData)(1U) 
                                                      + 
                                                      (vlSelf->__PVT__exe0__DOT__op1 
                                                       + 
                                                       (~ vlSelf->__PVT__exe0__DOT__op2)))
                                                      : 
                                                     (vlSelf->__PVT__exe0__DOT__op1 
                                                      + vlSelf->__PVT__exe0__DOT__op2)))));
    } else if ((2U != (IData)(vlSelf->__PVT__idexe_optype))) {
        vlSelf->__PVT__exe0__DOT__op_result = ((3U 
                                                == (IData)(vlSelf->__PVT__idexe_optype))
                                                ? vlSelf->__PVT__exe0__DOT__op2
                                                : (
                                                   (5U 
                                                    == (IData)(vlSelf->__PVT__idexe_optype))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                       ? 
                                                      (vlSelf->__PVT__exe0__DOT__divresult 
                                                       & (- (IData)((IData)(vlSelf->__PVT__exe0__DOT__divisdone))))
                                                       : 
                                                      ((0U 
                                                        != vlSelf->__PVT__fwdexe_rs2)
                                                        ? 
                                                       ((vlSelf->__PVT__fwdexe_rs1 
                                                         >> 0x1fU)
                                                         ? 
                                                        ((- vlSelf->__PVT__exe0__DOT__divresult) 
                                                         & (- (IData)((IData)(vlSelf->__PVT__exe0__DOT__divisdone))))
                                                         : 
                                                        (vlSelf->__PVT__exe0__DOT__divresult 
                                                         & (- (IData)((IData)(vlSelf->__PVT__exe0__DOT__divisdone)))))
                                                        : 
                                                       (vlSelf->__PVT__exe0__DOT__divresult 
                                                        & (- (IData)((IData)(vlSelf->__PVT__exe0__DOT__divisdone))))))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                       ? 
                                                      (vlSelf->__PVT__exe0__DOT__divresult 
                                                       & (- (IData)((IData)(vlSelf->__PVT__exe0__DOT__divisdone))))
                                                       : 
                                                      ((0U 
                                                        != vlSelf->__PVT__fwdexe_rs2)
                                                        ? 
                                                       (((vlSelf->__PVT__fwdexe_rs1 
                                                          ^ vlSelf->__PVT__fwdexe_rs2) 
                                                         >> 0x1fU)
                                                         ? 
                                                        ((- vlSelf->__PVT__exe0__DOT__divresult) 
                                                         & (- (IData)((IData)(vlSelf->__PVT__exe0__DOT__divisdone))))
                                                         : 
                                                        (vlSelf->__PVT__exe0__DOT__divresult 
                                                         & (- (IData)((IData)(vlSelf->__PVT__exe0__DOT__divisdone)))))
                                                        : 
                                                       (vlSelf->__PVT__exe0__DOT__divresult 
                                                        & (- (IData)((IData)(vlSelf->__PVT__exe0__DOT__divisdone)))))))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                       ? 
                                                      ((IData)(
                                                               (vlSelf->__PVT__exe0__DOT__mulresult 
                                                                >> 0x20U)) 
                                                       & (- (IData)((IData)(vlSelf->__PVT__exe0__DOT__mulisdone))))
                                                       : 
                                                      ((vlSelf->__PVT__fwdexe_rs1 
                                                        >> 0x1fU)
                                                        ? 
                                                       ((IData)(
                                                                ((1ULL 
                                                                  + 
                                                                  (~ vlSelf->__PVT__exe0__DOT__mulresult)) 
                                                                 >> 0x20U)) 
                                                        & (- (IData)((IData)(vlSelf->__PVT__exe0__DOT__mulisdone))))
                                                        : 
                                                       ((IData)(
                                                                (vlSelf->__PVT__exe0__DOT__mulresult 
                                                                 >> 0x20U)) 
                                                        & (- (IData)((IData)(vlSelf->__PVT__exe0__DOT__mulisdone))))))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                       ? 
                                                      (((vlSelf->__PVT__fwdexe_rs1 
                                                         ^ vlSelf->__PVT__fwdexe_rs2) 
                                                        >> 0x1fU)
                                                        ? 
                                                       ((IData)(
                                                                ((1ULL 
                                                                  + 
                                                                  (~ vlSelf->__PVT__exe0__DOT__mulresult)) 
                                                                 >> 0x20U)) 
                                                        & (- (IData)((IData)(vlSelf->__PVT__exe0__DOT__mulisdone))))
                                                        : 
                                                       ((IData)(
                                                                (vlSelf->__PVT__exe0__DOT__mulresult 
                                                                 >> 0x20U)) 
                                                        & (- (IData)((IData)(vlSelf->__PVT__exe0__DOT__mulisdone)))))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__exe0__DOT__mulresult) 
                                                       & (- (IData)((IData)(vlSelf->__PVT__exe0__DOT__mulisdone)))))))
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->__PVT__idexe_optype))
                                                     ? 
                                                    ((IData)(4U) 
                                                     + vlSelf->__PVT__idexe_pc)
                                                     : 
                                                    ((IData)(vlSelf->__PVT__idexe_csrwe)
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                        ? vlSelf->__PVT__fwdexe_csrdata
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                         ? vlSelf->__PVT__fwdexe_csrdata
                                                         : 0U))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                        ? vlSelf->__PVT__fwdexe_csrdata
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                         ? vlSelf->__PVT__fwdexe_csrdata
                                                         : 0U)))
                                                      : 0U))));
    }
    vlSelf->__PVT__exepipe_je = 0U;
    if ((1U & (~ (((0U == (IData)(vlSelf->__PVT__idexe_optype)) 
                   | (1U == (IData)(vlSelf->__PVT__idexe_optype))) 
                  | (4U == (IData)(vlSelf->__PVT__idexe_optype)))))) {
        if ((2U == (IData)(vlSelf->__PVT__idexe_optype))) {
            vlSelf->__PVT__exepipe_je = (1U & ((4U 
                                                & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                     ? 
                                                    ((vlSelf->__PVT__exe0__DOT__op1 
                                                      >= vlSelf->__PVT__exe0__DOT__op2)
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    ((vlSelf->__PVT__exe0__DOT__op1 
                                                      < vlSelf->__PVT__exe0__DOT__op2)
                                                      ? 1U
                                                      : 0U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                     ? 
                                                    (VL_GTES_III(1,32,32, vlSelf->__PVT__exe0__DOT__op1, vlSelf->__PVT__exe0__DOT__op2)
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    (VL_LTS_III(1,32,32, vlSelf->__PVT__exe0__DOT__op1, vlSelf->__PVT__exe0__DOT__op2)
                                                      ? 1U
                                                      : 0U)))
                                                : (
                                                   (~ 
                                                    ((IData)(vlSelf->__PVT__idexe_opfunc3) 
                                                     >> 1U)) 
                                                   & ((1U 
                                                       & (IData)(vlSelf->__PVT__idexe_opfunc3))
                                                       ? 
                                                      ((vlSelf->__PVT__exe0__DOT__op1 
                                                        != vlSelf->__PVT__exe0__DOT__op2)
                                                        ? 1U
                                                        : 0U)
                                                       : 
                                                      ((vlSelf->__PVT__exe0__DOT__op1 
                                                        == vlSelf->__PVT__exe0__DOT__op2)
                                                        ? 1U
                                                        : 0U)))));
        } else if ((3U != (IData)(vlSelf->__PVT__idexe_optype))) {
            if ((5U != (IData)(vlSelf->__PVT__idexe_optype))) {
                if ((6U == (IData)(vlSelf->__PVT__idexe_optype))) {
                    vlSelf->__PVT__exepipe_je = 1U;
                } else if ((1U & (~ (IData)(vlSelf->__PVT__idexe_csrwe)))) {
                    vlSelf->__PVT__exepipe_je = 0U;
                }
            }
        }
    }
    vlSelf->__PVT__pipectrl_flushif = (((IData)(vlSelf->__PVT__exepipe_je) 
                                        | (IData)(vlSelf->__PVT__csrflie0__DOT__trap_taken)) 
                                       | (IData)(vlSelf->__PVT__exemem_system_ret));
    vlSelf->__PVT__pipectrl_flushid = ((((IData)(vlSelf->__PVT__idpipectrl_loadusehazard) 
                                         | (IData)(vlSelf->__PVT__exepipe_je)) 
                                        | (IData)(vlSelf->__PVT__csrflie0__DOT__trap_taken)) 
                                       | (IData)(vlSelf->__PVT__exemem_system_ret));
}
