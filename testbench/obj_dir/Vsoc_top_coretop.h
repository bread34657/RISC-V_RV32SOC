// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsoc_top.h for the primary calling header

#ifndef VERILATED_VSOC_TOP_CORETOP_H_
#define VERILATED_VSOC_TOP_CORETOP_H_  // guard

#include "verilated_heavy.h"

//==========

class Vsoc_top__Syms;
class Vsoc_top_VerilatedVcd;
class Vsoc_top_regfiles;


//----------

VL_MODULE(Vsoc_top_coretop) {
  public:
    // CELLS
    Vsoc_top_regfiles* regfiles0;

    // PORTS
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_OUT8(__PVT__ram_we_o,0,0);
    VL_OUT8(__PVT__ram_req_o,0,0);
    VL_IN8(__PVT__timer_irq_i,0,0);
    VL_IN8(__PVT__software_irq_i,0,0);
    VL_IN8(__PVT__external_irq_i,0,0);
    VL_IN(__PVT__rom_data_i,31,0);
    VL_OUT(__PVT__rom_addr_o,31,0);
    VL_IN(__PVT__ram_data_i,31,0);
    VL_OUT(__PVT__ram_addr_o,31,0);
    VL_OUT(__PVT__ram_wdata_o,31,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__pipectrl_stallif;
        CData/*0:0*/ __PVT__pipectrl_flushif;
        CData/*0:0*/ __PVT__pipectrl_flushid;
        CData/*0:0*/ __PVT__pipectrl_flushexe;
        CData/*0:0*/ __PVT__pipectrl_flushmem;
        CData/*4:0*/ __PVT__idexe_rdaddr;
        CData/*0:0*/ __PVT__idexe_we;
        CData/*2:0*/ __PVT__idexe_optype;
        CData/*2:0*/ __PVT__idexe_opfunc3;
        CData/*0:0*/ __PVT__idexe_shiftsel;
        CData/*0:0*/ __PVT__idexe_addsubsel;
        CData/*0:0*/ __PVT__idexe_typesel;
        CData/*0:0*/ __PVT__idexe_memwe;
        CData/*0:0*/ __PVT__idexe_memre;
        CData/*0:0*/ __PVT__idexe_csrwe;
        CData/*0:0*/ __PVT__idexe_system_ret;
        CData/*4:0*/ __PVT__idfwd_addr1;
        CData/*4:0*/ __PVT__idfwd_addr2;
        CData/*0:0*/ __PVT__idpipectrl_loadusehazard;
        CData/*4:0*/ __PVT__exemem_rdaddr;
        CData/*0:0*/ __PVT__exemem_we;
        CData/*0:0*/ __PVT__exemem_memre;
        CData/*0:0*/ __PVT__exemem_memwe;
        CData/*2:0*/ __PVT__exemem_opfunc3;
        CData/*0:0*/ __PVT__exemem_csrwe;
        CData/*0:0*/ __PVT__exemem_system_ret;
        CData/*0:0*/ __PVT__exepipe_je;
        CData/*0:0*/ __PVT__exepipe_stall;
        CData/*4:0*/ __PVT__memwb_rdaddr;
        CData/*0:0*/ __PVT__memwb_we;
        CData/*0:0*/ __PVT__memwb_csrwe;
        CData/*4:0*/ __PVT__wbreg_rdaddr;
        CData/*0:0*/ __PVT__wbreg_we;
        CData/*0:0*/ __PVT__wbcsr_csrwe;
        CData/*0:0*/ __PVT__csrflie0__DOT__trap_taken;
        CData/*2:0*/ __PVT__decode0__DOT__opfunc3;
        CData/*2:0*/ __PVT__decode0__DOT__optype;
        CData/*0:0*/ __PVT__decode0__DOT__Rtype;
        CData/*0:0*/ __PVT__decode0__DOT__Mtype;
        CData/*0:0*/ __PVT__decode0__DOT__CSRtype;
        CData/*0:0*/ __PVT__decode0__DOT__MRETtype;
        CData/*0:0*/ __PVT__exe0__DOT__csr_we;
        CData/*0:0*/ __PVT__exe0__DOT__mulstart;
        CData/*0:0*/ __PVT__exe0__DOT__divstart;
        CData/*0:0*/ __PVT__exe0__DOT__mulisdone;
        CData/*0:0*/ __PVT__exe0__DOT__divisdone;
        CData/*5:0*/ __PVT__exe0__DOT__mul0__DOT__cnt;
        CData/*2:0*/ __PVT__exe0__DOT__mul0__DOT__S;
        CData/*2:0*/ __PVT__exe0__DOT__mul0__DOT__S_nxt;
        CData/*0:0*/ __PVT__exe0__DOT__mul0__DOT__mul_add;
        CData/*5:0*/ __PVT__exe0__DOT__div0__DOT__cnt;
        CData/*2:0*/ __PVT__exe0__DOT__div0__DOT__S;
        CData/*2:0*/ __PVT__exe0__DOT__div0__DOT__S_next;
        CData/*0:0*/ __PVT__exe0__DOT__div0__DOT__div_sub;
        SData/*11:0*/ __PVT__idfwd_csraddr;
        SData/*11:0*/ __PVT__exemem_csraddr;
        SData/*11:0*/ __PVT__memwb_csraddr;
        SData/*11:0*/ __PVT__wbcsr_csraddr;
        IData/*31:0*/ __PVT__pc_wire;
        IData/*31:0*/ __PVT__ifid_inst;
        IData/*31:0*/ __PVT__ifid_pc;
        IData/*31:0*/ __PVT__csrid_data;
        IData/*31:0*/ __PVT__idexe_pc;
        IData/*31:0*/ __PVT__idexe_imm;
    };
    struct {
        IData/*31:0*/ __PVT__idexe_exception;
        IData/*31:0*/ __PVT__idexe_exceptionpc;
        IData/*31:0*/ __PVT__idfwd_rs1;
        IData/*31:0*/ __PVT__idfwd_rs2;
        IData/*31:0*/ __PVT__idfwd_csrdata;
        IData/*31:0*/ __PVT__fwdexe_rs1;
        IData/*31:0*/ __PVT__fwdexe_rs2;
        IData/*31:0*/ __PVT__fwdexe_csrdata;
        IData/*31:0*/ __PVT__exemem_pc;
        IData/*31:0*/ __PVT__exemem_rddata;
        IData/*31:0*/ __PVT__exemem_memaddr;
        IData/*31:0*/ __PVT__exemem_csrdata;
        IData/*31:0*/ __PVT__exemem_exception;
        IData/*31:0*/ __PVT__exemem_exceptionpc;
        IData/*31:0*/ __PVT__exepipe_jumpaddr;
        IData/*31:0*/ __PVT__memwb_rddata;
        IData/*31:0*/ __PVT__memwb_csrdata;
        IData/*31:0*/ __PVT__memrom_ramaddr;
        IData/*31:0*/ __PVT__memrom_ramdata;
        IData/*31:0*/ __PVT__wbreg_rddata;
        IData/*31:0*/ __PVT__wbcsr_csrdata;
        IData/*31:0*/ __PVT__csrflie0__DOT__mstatus;
        IData/*31:0*/ __PVT__csrflie0__DOT__mip;
        IData/*31:0*/ __PVT__csrflie0__DOT__mie;
        IData/*31:0*/ __PVT__csrflie0__DOT__mtvec;
        IData/*31:0*/ __PVT__csrflie0__DOT__mcounteren;
        IData/*31:0*/ __PVT__csrflie0__DOT__mscratch;
        IData/*31:0*/ __PVT__csrflie0__DOT__mepc;
        IData/*31:0*/ __PVT__csrflie0__DOT__mcause;
        IData/*31:0*/ __PVT__csrflie0__DOT__mtval;
        IData/*31:0*/ __PVT__csrflie0__DOT__interrupt_cause;
        IData/*31:0*/ __PVT__csrflie0__DOT__trap_entry;
        IData/*31:0*/ __PVT__decode0__DOT__immI;
        IData/*31:0*/ __PVT__decode0__DOT__imm;
        IData/*31:0*/ __PVT__exe0__DOT__op1;
        IData/*31:0*/ __PVT__exe0__DOT__op2;
        IData/*31:0*/ __PVT__exe0__DOT__op_result;
        IData/*31:0*/ __PVT__exe0__DOT__mtypea;
        IData/*31:0*/ __PVT__exe0__DOT__mtypeb;
        IData/*31:0*/ __PVT__exe0__DOT__csr_data;
        IData/*31:0*/ __PVT__exe0__DOT__divresult;
        IData/*31:0*/ __PVT__exe0__DOT__mul0__DOT__reg32;
        VlWide<3>/*64:0*/ __PVT__exe0__DOT__mul0__DOT__result;
        VlWide<3>/*64:0*/ __PVT__exe0__DOT__mul0__DOT__result_tmp;
        IData/*31:0*/ __PVT__exe0__DOT__div0__DOT__reg32;
        VlWide<3>/*64:0*/ __PVT__exe0__DOT__div0__DOT__result;
        VlWide<3>/*64:0*/ __PVT__exe0__DOT__div0__DOT__result_tmp;
        IData/*31:0*/ __PVT__mem0__DOT__rd_data;
        QData/*63:0*/ __PVT__csrflie0__DOT__mcycle;
        QData/*63:0*/ __PVT__exe0__DOT__mulresult;
    };

    // LOCAL VARIABLES
    CData/*4:0*/ __Vdly__wbreg_rdaddr;
    IData/*31:0*/ __Vdly__wbreg_rddata;

    // INTERNAL VARIABLES
    Vsoc_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vsoc_top_coretop);  ///< Copying not allowed
  public:
    Vsoc_top_coretop(const char* name);
    ~Vsoc_top_coretop();

    // INTERNAL METHODS
    void __Vconfigure(Vsoc_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
