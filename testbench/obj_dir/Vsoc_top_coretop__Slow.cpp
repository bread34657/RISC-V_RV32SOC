// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsoc_top.h for the primary calling header

#include "Vsoc_top_coretop.h"
#include "Vsoc_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vsoc_top_coretop___ctor_var_reset(Vsoc_top_coretop* vlSelf);

Vsoc_top_coretop::Vsoc_top_coretop(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vsoc_top_coretop___ctor_var_reset(this);
}

void Vsoc_top_coretop::__Vconfigure(Vsoc_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vsoc_top_coretop::~Vsoc_top_coretop() {
}

extern const VlUnpacked<CData/*2:0*/, 512> Vsoc_top__ConstPool__TABLE_32da7452_0;

void Vsoc_top_coretop___settle__TOP__soc_top__coretop0__1(Vsoc_top_coretop* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsoc_top_coretop___settle__TOP__soc_top__coretop0__1\n"); );
    // Variables
    SData/*8:0*/ __Vtableidx1;
    // Body
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
    vlSelf->__PVT__decode0__DOT__immI = (((- (IData)(
                                                     (vlSelf->__PVT__ifid_inst 
                                                      >> 0x1fU))) 
                                          << 0xcU) 
                                         | (vlSelf->__PVT__ifid_inst 
                                            >> 0x14U));
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
    vlSelf->__PVT__pipectrl_flushexe = ((IData)(vlSelf->__PVT__csrflie0__DOT__trap_taken) 
                                        | (IData)(vlSelf->__PVT__exemem_system_ret));
    vlSelf->__PVT__pipectrl_flushmem = ((IData)(vlSelf->__PVT__csrflie0__DOT__trap_taken) 
                                        | (IData)(vlSelf->__PVT__exemem_system_ret));
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
    vlSelf->__PVT__pipectrl_stallif = ((IData)(vlSelf->__PVT__idpipectrl_loadusehazard) 
                                       | (IData)(vlSelf->__PVT__exepipe_stall));
    vlSelf->__PVT__pipectrl_flushif = (((IData)(vlSelf->__PVT__exepipe_je) 
                                        | (IData)(vlSelf->__PVT__csrflie0__DOT__trap_taken)) 
                                       | (IData)(vlSelf->__PVT__exemem_system_ret));
    vlSelf->__PVT__pipectrl_flushid = ((((IData)(vlSelf->__PVT__idpipectrl_loadusehazard) 
                                         | (IData)(vlSelf->__PVT__exepipe_je)) 
                                        | (IData)(vlSelf->__PVT__csrflie0__DOT__trap_taken)) 
                                       | (IData)(vlSelf->__PVT__exemem_system_ret));
}

void Vsoc_top_coretop___ctor_var_reset(Vsoc_top_coretop* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vsoc_top_coretop___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__rst_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__clk_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rom_data_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rom_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ram_data_i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ram_addr_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ram_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ram_we_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ram_req_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__timer_irq_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__software_irq_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__external_irq_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipectrl_stallif = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipectrl_flushif = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipectrl_flushid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipectrl_flushexe = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipectrl_flushmem = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc_wire = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ifid_inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ifid_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csrid_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__idexe_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__idexe_imm = VL_RAND_RESET_I(32);
    vlSelf->__PVT__idexe_rdaddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__idexe_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__idexe_optype = VL_RAND_RESET_I(3);
    vlSelf->__PVT__idexe_opfunc3 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__idexe_shiftsel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__idexe_addsubsel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__idexe_typesel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__idexe_memwe = VL_RAND_RESET_I(1);
    vlSelf->__PVT__idexe_memre = VL_RAND_RESET_I(1);
    vlSelf->__PVT__idexe_csrwe = VL_RAND_RESET_I(1);
    vlSelf->__PVT__idexe_system_ret = VL_RAND_RESET_I(1);
    vlSelf->__PVT__idexe_exception = VL_RAND_RESET_I(32);
    vlSelf->__PVT__idexe_exceptionpc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__idfwd_rs1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__idfwd_rs2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__idfwd_addr1 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__idfwd_addr2 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__idfwd_csraddr = VL_RAND_RESET_I(12);
    vlSelf->__PVT__idfwd_csrdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__idpipectrl_loadusehazard = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fwdexe_rs1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__fwdexe_rs2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__fwdexe_csrdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exemem_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exemem_rdaddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__exemem_rddata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exemem_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exemem_memaddr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exemem_memre = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exemem_memwe = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exemem_opfunc3 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__exemem_csraddr = VL_RAND_RESET_I(12);
    vlSelf->__PVT__exemem_csrdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exemem_csrwe = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exemem_system_ret = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exemem_exception = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exemem_exceptionpc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exepipe_jumpaddr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exepipe_je = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exepipe_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memwb_rdaddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__memwb_rddata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__memwb_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memwb_csraddr = VL_RAND_RESET_I(12);
    vlSelf->__PVT__memwb_csrdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__memwb_csrwe = VL_RAND_RESET_I(1);
    vlSelf->__PVT__memrom_ramaddr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__memrom_ramdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__wbreg_rdaddr = VL_RAND_RESET_I(5);
    vlSelf->__PVT__wbreg_rddata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__wbreg_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wbcsr_csraddr = VL_RAND_RESET_I(12);
    vlSelf->__PVT__wbcsr_csrdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__wbcsr_csrwe = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csrflie0__DOT__mstatus = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csrflie0__DOT__mip = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csrflie0__DOT__mie = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csrflie0__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csrflie0__DOT__mcounteren = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csrflie0__DOT__mscratch = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csrflie0__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csrflie0__DOT__mcause = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csrflie0__DOT__mtval = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csrflie0__DOT__mcycle = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__csrflie0__DOT__interrupt_cause = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csrflie0__DOT__trap_entry = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csrflie0__DOT__trap_taken = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode0__DOT__opfunc3 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__decode0__DOT__optype = VL_RAND_RESET_I(3);
    vlSelf->__PVT__decode0__DOT__immI = VL_RAND_RESET_I(32);
    vlSelf->__PVT__decode0__DOT__Rtype = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode0__DOT__Mtype = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode0__DOT__CSRtype = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode0__DOT__MRETtype = VL_RAND_RESET_I(1);
    vlSelf->__PVT__decode0__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe0__DOT__op1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe0__DOT__op2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe0__DOT__op_result = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe0__DOT__mtypea = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe0__DOT__mtypeb = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe0__DOT__csr_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe0__DOT__csr_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe0__DOT__divresult = VL_RAND_RESET_I(32);
    vlSelf->__PVT__exe0__DOT__mulresult = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__exe0__DOT__mulstart = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe0__DOT__divstart = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe0__DOT__mulisdone = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe0__DOT__divisdone = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exe0__DOT__mul0__DOT__reg32 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, vlSelf->__PVT__exe0__DOT__mul0__DOT__result);
    vlSelf->__PVT__exe0__DOT__mul0__DOT__cnt = VL_RAND_RESET_I(6);
    vlSelf->__PVT__exe0__DOT__mul0__DOT__S = VL_RAND_RESET_I(3);
    vlSelf->__PVT__exe0__DOT__mul0__DOT__S_nxt = VL_RAND_RESET_I(3);
    vlSelf->__PVT__exe0__DOT__mul0__DOT__mul_add = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->__PVT__exe0__DOT__mul0__DOT__result_tmp);
    vlSelf->__PVT__exe0__DOT__div0__DOT__reg32 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, vlSelf->__PVT__exe0__DOT__div0__DOT__result);
    vlSelf->__PVT__exe0__DOT__div0__DOT__cnt = VL_RAND_RESET_I(6);
    vlSelf->__PVT__exe0__DOT__div0__DOT__S = VL_RAND_RESET_I(3);
    vlSelf->__PVT__exe0__DOT__div0__DOT__S_next = VL_RAND_RESET_I(3);
    vlSelf->__PVT__exe0__DOT__div0__DOT__div_sub = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->__PVT__exe0__DOT__div0__DOT__result_tmp);
    vlSelf->__PVT__mem0__DOT__rd_data = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__wbreg_rddata = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__wbreg_rdaddr = VL_RAND_RESET_I(5);
}
