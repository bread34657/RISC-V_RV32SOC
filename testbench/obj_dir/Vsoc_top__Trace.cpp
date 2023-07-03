// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsoc_top__Syms.h"


void Vsoc_top___024root__traceChgSub0(Vsoc_top___024root* vlSelf, VerilatedVcd* tracep);

void Vsoc_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vsoc_top___024root* const __restrict vlSelf = static_cast<Vsoc_top___024root*>(voidSelf);
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vsoc_top___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vsoc_top___024root__traceChgSub0(Vsoc_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp3;
    VlWide<3>/*95:0*/ __Vtemp4;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlSymsp->TOP__soc_top.__PVT__cfg_device_addr_base[0]),32);
            tracep->chgIData(oldp+1,(vlSymsp->TOP__soc_top.__PVT__cfg_device_addr_base[1]),32);
            tracep->chgIData(oldp+2,(vlSymsp->TOP__soc_top.__PVT__cfg_device_addr_base[2]),32);
            tracep->chgIData(oldp+3,(vlSymsp->TOP__soc_top.__PVT__cfg_device_addr_mask[0]),32);
            tracep->chgIData(oldp+4,(vlSymsp->TOP__soc_top.__PVT__cfg_device_addr_mask[1]),32);
            tracep->chgIData(oldp+5,(vlSymsp->TOP__soc_top.__PVT__cfg_device_addr_mask[2]),32);
            tracep->chgIData(oldp+6,(vlSymsp->TOP__soc_top.__Vcellinp__u_bus__cfg_device_addr_base[0]),32);
            tracep->chgIData(oldp+7,(vlSymsp->TOP__soc_top.__Vcellinp__u_bus__cfg_device_addr_base[1]),32);
            tracep->chgIData(oldp+8,(vlSymsp->TOP__soc_top.__Vcellinp__u_bus__cfg_device_addr_base[2]),32);
            tracep->chgIData(oldp+9,(vlSymsp->TOP__soc_top.__Vcellinp__u_bus__cfg_device_addr_mask[0]),32);
            tracep->chgIData(oldp+10,(vlSymsp->TOP__soc_top.__Vcellinp__u_bus__cfg_device_addr_mask[1]),32);
            tracep->chgIData(oldp+11,(vlSymsp->TOP__soc_top.__Vcellinp__u_bus__cfg_device_addr_mask[2]),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+12,(vlSymsp->TOP__soc_top.__PVT__halt_from_console));
            tracep->chgBit(oldp+13,(vlSymsp->TOP__soc_top.__PVT__host_req[0]));
            tracep->chgBit(oldp+14,(vlSymsp->TOP__soc_top.__PVT__host_gnt[0]));
            tracep->chgIData(oldp+15,(vlSymsp->TOP__soc_top.__PVT__host_addr[0]),32);
            tracep->chgBit(oldp+16,(vlSymsp->TOP__soc_top.__PVT__host_we[0]));
            tracep->chgBit(oldp+17,(vlSymsp->TOP__soc_top.__PVT__device_req[0]));
            tracep->chgBit(oldp+18,(vlSymsp->TOP__soc_top.__PVT__device_req[1]));
            tracep->chgBit(oldp+19,(vlSymsp->TOP__soc_top.__PVT__device_req[2]));
            tracep->chgIData(oldp+20,(vlSymsp->TOP__soc_top.__PVT__device_addr[0]),32);
            tracep->chgIData(oldp+21,(vlSymsp->TOP__soc_top.__PVT__device_addr[1]),32);
            tracep->chgIData(oldp+22,(vlSymsp->TOP__soc_top.__PVT__device_addr[2]),32);
            tracep->chgIData(oldp+23,(vlSymsp->TOP__soc_top.__PVT__device_rdata[0]),32);
            tracep->chgIData(oldp+24,(vlSymsp->TOP__soc_top.__PVT__device_rdata[1]),32);
            tracep->chgIData(oldp+25,(vlSymsp->TOP__soc_top.__PVT__device_rdata[2]),32);
            tracep->chgBit(oldp+26,(vlSymsp->TOP__soc_top.__PVT__device_we[0]));
            tracep->chgBit(oldp+27,(vlSymsp->TOP__soc_top.__PVT__device_we[1]));
            tracep->chgBit(oldp+28,(vlSymsp->TOP__soc_top.__PVT__device_we[2]));
            tracep->chgIData(oldp+29,(vlSymsp->TOP__soc_top__coretop0.__PVT__pc_wire),32);
            tracep->chgBit(oldp+30,((0U != vlSymsp->TOP__soc_top.__PVT__clint0__DOT__msip)));
            tracep->chgBit(oldp+31,(vlSymsp->TOP__soc_top.__PVT__clint_timer_irq));
            tracep->chgBit(oldp+32,(vlSymsp->TOP__soc_top.__Vcellinp__u_bus__host_req_i[0]));
            tracep->chgIData(oldp+33,(vlSymsp->TOP__soc_top.__Vcellinp__u_bus__host_addr_i[0]),32);
            tracep->chgBit(oldp+34,(vlSymsp->TOP__soc_top.__Vcellinp__u_bus__host_we_i[0]));
            tracep->chgBit(oldp+35,(vlSymsp->TOP__soc_top.__Vcellout__u_bus__host_gnt_o[0]));
            tracep->chgIData(oldp+36,(vlSymsp->TOP__soc_top.__Vcellinp__u_bus__device_rdata_i[0]),32);
            tracep->chgIData(oldp+37,(vlSymsp->TOP__soc_top.__Vcellinp__u_bus__device_rdata_i[1]),32);
            tracep->chgIData(oldp+38,(vlSymsp->TOP__soc_top.__Vcellinp__u_bus__device_rdata_i[2]),32);
            tracep->chgBit(oldp+39,(vlSymsp->TOP__soc_top.__Vcellout__u_bus__device_req_o[0]));
            tracep->chgBit(oldp+40,(vlSymsp->TOP__soc_top.__Vcellout__u_bus__device_req_o[1]));
            tracep->chgBit(oldp+41,(vlSymsp->TOP__soc_top.__Vcellout__u_bus__device_req_o[2]));
            tracep->chgIData(oldp+42,(vlSymsp->TOP__soc_top.__Vcellout__u_bus__device_addr_o[0]),32);
            tracep->chgIData(oldp+43,(vlSymsp->TOP__soc_top.__Vcellout__u_bus__device_addr_o[1]),32);
            tracep->chgIData(oldp+44,(vlSymsp->TOP__soc_top.__Vcellout__u_bus__device_addr_o[2]),32);
            tracep->chgBit(oldp+45,(vlSymsp->TOP__soc_top.__Vcellout__u_bus__device_we_o[0]));
            tracep->chgBit(oldp+46,(vlSymsp->TOP__soc_top.__Vcellout__u_bus__device_we_o[1]));
            tracep->chgBit(oldp+47,(vlSymsp->TOP__soc_top.__Vcellout__u_bus__device_we_o[2]));
            tracep->chgBit(oldp+48,(vlSymsp->TOP__soc_top.__PVT__u_bus__DOT__host_sel_req));
            tracep->chgCData(oldp+49,(vlSymsp->TOP__soc_top.__PVT__u_bus__DOT__device_sel_req),2);
            tracep->chgBit(oldp+50,(vlSymsp->TOP__soc_top.__PVT__device_req
                                    [1U]));
            tracep->chgBit(oldp+51,(vlSymsp->TOP__soc_top.__PVT__device_we
                                    [1U]));
            tracep->chgIData(oldp+52,(vlSymsp->TOP__soc_top.__PVT__device_addr
                                      [1U]),32);
            tracep->chgCData(oldp+53,((0xffU & vlSymsp->TOP__soc_top.__PVT__device_addr
                                       [1U])),8);
            tracep->chgCData(oldp+54,(vlSymsp->TOP__soc_top.__PVT__console0__DOT__sim_finish),3);
            tracep->chgIData(oldp+55,(vlSymsp->TOP__soc_top.__PVT__console0__DOT__log_fd),32);
            tracep->chgBit(oldp+56,(vlSymsp->TOP__soc_top.__PVT__device_req
                                    [2U]));
            tracep->chgBit(oldp+57,(vlSymsp->TOP__soc_top.__PVT__device_we
                                    [2U]));
            tracep->chgIData(oldp+58,(vlSymsp->TOP__soc_top.__PVT__device_addr
                                      [2U]),32);
            tracep->chgIData(oldp+59,(vlSymsp->TOP__soc_top.__Vcellout__clint0__data_o),32);
            tracep->chgSData(oldp+60,((0xffffU & vlSymsp->TOP__soc_top.__PVT__device_addr
                                       [2U])),16);
            tracep->chgIData(oldp+61,(vlSymsp->TOP__soc_top.__PVT__clint0__DOT__mtime_reg[0]),32);
            tracep->chgIData(oldp+62,(vlSymsp->TOP__soc_top.__PVT__clint0__DOT__mtime_reg[1]),32);
            tracep->chgIData(oldp+63,(vlSymsp->TOP__soc_top.__PVT__clint0__DOT__mtimecmp_reg[0]),32);
            tracep->chgIData(oldp+64,(vlSymsp->TOP__soc_top.__PVT__clint0__DOT__mtimecmp_reg[1]),32);
            tracep->chgIData(oldp+65,(vlSymsp->TOP__soc_top.__PVT__clint0__DOT__msip),32);
            tracep->chgQData(oldp+66,((((QData)((IData)(
                                                        vlSymsp->TOP__soc_top.__PVT__clint0__DOT__mtime_reg
                                                        [1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSymsp->TOP__soc_top.__PVT__clint0__DOT__mtime_reg
                                                                    [0U])))),64);
            tracep->chgQData(oldp+68,(vlSymsp->TOP__soc_top.__PVT__clint0__DOT__mtimecmp),64);
            tracep->chgBit(oldp+70,((0U == (0xffffU 
                                            & vlSymsp->TOP__soc_top.__PVT__device_addr
                                            [2U]))));
            tracep->chgBit(oldp+71,((0xbff8U == (0xffffU 
                                                 & vlSymsp->TOP__soc_top.__PVT__device_addr
                                                 [2U]))));
            tracep->chgBit(oldp+72,((0xbffcU == (0xffffU 
                                                 & vlSymsp->TOP__soc_top.__PVT__device_addr
                                                 [2U]))));
            tracep->chgBit(oldp+73,((0x4000U == (0xffffU 
                                                 & vlSymsp->TOP__soc_top.__PVT__device_addr
                                                 [2U]))));
            tracep->chgBit(oldp+74,((0x4004U == (0xffffU 
                                                 & vlSymsp->TOP__soc_top.__PVT__device_addr
                                                 [2U]))));
            tracep->chgBit(oldp+75,((0xffffffffU == 
                                     vlSymsp->TOP__soc_top.__PVT__clint0__DOT__mtime_reg
                                     [0U])));
            tracep->chgIData(oldp+76,(vlSymsp->TOP__soc_top.__PVT__device_addr
                                      [0U]),32);
            tracep->chgBit(oldp+77,(vlSymsp->TOP__soc_top.__PVT__device_we
                                    [0U]));
            tracep->chgBit(oldp+78,(vlSymsp->TOP__soc_top.__PVT__device_req
                                    [0U]));
            tracep->chgIData(oldp+79,((0x1ffffcU & vlSymsp->TOP__soc_top__coretop0.__PVT__pc_wire)),21);
            tracep->chgIData(oldp+80,((0x1ffffcU & 
                                       vlSymsp->TOP__soc_top.__PVT__device_addr
                                       [0U])),21);
            tracep->chgIData(oldp+81,(vlSymsp->TOP__soc_top__coretop0.__PVT__memrom_ramaddr),32);
            tracep->chgBit(oldp+82,(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_memwe));
            tracep->chgBit(oldp+83,(((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_memre) 
                                     | (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_memwe))));
            tracep->chgIData(oldp+84,(vlSymsp->TOP__soc_top__coretop0.__PVT__exepipe_jumpaddr),32);
            tracep->chgBit(oldp+85,(vlSymsp->TOP__soc_top__coretop0.__PVT__exepipe_je));
            tracep->chgIData(oldp+86,(vlSymsp->TOP__soc_top__coretop0.__PVT__csrflie0__DOT__trap_entry),32);
            tracep->chgBit(oldp+87,(vlSymsp->TOP__soc_top__coretop0.__PVT__csrflie0__DOT__trap_taken));
            tracep->chgIData(oldp+88,(vlSymsp->TOP__soc_top__coretop0.__PVT__csrflie0__DOT__mepc),32);
            tracep->chgBit(oldp+89,(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_system_ret));
            tracep->chgBit(oldp+90,(((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idpipectrl_loadusehazard) 
                                     | (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exepipe_stall))));
            tracep->chgBit(oldp+91,(vlSymsp->TOP__soc_top__coretop0.__PVT__pipectrl_stallif));
            tracep->chgBit(oldp+92,(vlSymsp->TOP__soc_top__coretop0.__PVT__exepipe_stall));
            tracep->chgBit(oldp+93,(vlSymsp->TOP__soc_top__coretop0.__PVT__pipectrl_flushif));
            tracep->chgBit(oldp+94,(vlSymsp->TOP__soc_top__coretop0.__PVT__pipectrl_flushid));
            tracep->chgBit(oldp+95,(vlSymsp->TOP__soc_top__coretop0.__PVT__pipectrl_flushexe));
            tracep->chgBit(oldp+96,(vlSymsp->TOP__soc_top__coretop0.__PVT__pipectrl_flushmem));
            tracep->chgIData(oldp+97,(vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst),32);
            tracep->chgIData(oldp+98,(vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_pc),32);
            tracep->chgIData(oldp+99,((((IData)(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__we) 
                                        & ((0x1fU & 
                                            (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                             >> 0xfU)) 
                                           == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__wbreg_rdaddr)))
                                        ? vlSymsp->TOP__soc_top__coretop0.__PVT__wbreg_rddata
                                        : vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x
                                       [(0x1fU & (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                                  >> 0xfU))])),32);
            tracep->chgIData(oldp+100,((((IData)(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__we) 
                                         & ((0x1fU 
                                             & (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                                >> 0x14U)) 
                                            == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__wbreg_rdaddr)))
                                         ? vlSymsp->TOP__soc_top__coretop0.__PVT__wbreg_rddata
                                         : vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x
                                        [(0x1fU & (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                                   >> 0x14U))])),32);
            tracep->chgCData(oldp+101,((0x1fU & (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+102,((0x1fU & (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                                 >> 0x14U))),5);
            tracep->chgSData(oldp+103,((vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                        >> 0x14U)),12);
            tracep->chgIData(oldp+104,(vlSymsp->TOP__soc_top__coretop0.__PVT__csrid_data),32);
            tracep->chgIData(oldp+105,(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_pc),32);
            tracep->chgIData(oldp+106,(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_imm),32);
            tracep->chgCData(oldp+107,(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_rdaddr),5);
            tracep->chgBit(oldp+108,(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_we));
            tracep->chgCData(oldp+109,(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_optype),3);
            tracep->chgCData(oldp+110,(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_opfunc3),3);
            tracep->chgBit(oldp+111,(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_shiftsel));
            tracep->chgBit(oldp+112,(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_addsubsel));
            tracep->chgBit(oldp+113,(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_typesel));
            tracep->chgBit(oldp+114,(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_memwe));
            tracep->chgBit(oldp+115,(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_memre));
            tracep->chgBit(oldp+116,(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_csrwe));
            tracep->chgBit(oldp+117,(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_system_ret));
            tracep->chgIData(oldp+118,(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_exception),32);
            tracep->chgIData(oldp+119,(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_exceptionpc),32);
            tracep->chgIData(oldp+120,(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_rs1),32);
            tracep->chgIData(oldp+121,(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_rs2),32);
            tracep->chgCData(oldp+122,(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_addr1),5);
            tracep->chgCData(oldp+123,(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_addr2),5);
            tracep->chgSData(oldp+124,(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_csraddr),12);
            tracep->chgIData(oldp+125,(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_csrdata),32);
            tracep->chgBit(oldp+126,(vlSymsp->TOP__soc_top__coretop0.__PVT__idpipectrl_loadusehazard));
            tracep->chgIData(oldp+127,(vlSymsp->TOP__soc_top__coretop0.__PVT__fwdexe_rs1),32);
            tracep->chgIData(oldp+128,(vlSymsp->TOP__soc_top__coretop0.__PVT__fwdexe_rs2),32);
            tracep->chgIData(oldp+129,(vlSymsp->TOP__soc_top__coretop0.__PVT__fwdexe_csrdata),32);
            tracep->chgIData(oldp+130,(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_pc),32);
            tracep->chgCData(oldp+131,(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_rdaddr),5);
            tracep->chgIData(oldp+132,(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_rddata),32);
            tracep->chgBit(oldp+133,(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_we));
            tracep->chgIData(oldp+134,(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_memaddr),32);
            tracep->chgBit(oldp+135,(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_memre));
            tracep->chgCData(oldp+136,(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_opfunc3),3);
            tracep->chgSData(oldp+137,(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_csraddr),12);
            tracep->chgIData(oldp+138,(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_csrdata),32);
            tracep->chgBit(oldp+139,(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_csrwe));
            tracep->chgIData(oldp+140,(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_exception),32);
            tracep->chgIData(oldp+141,(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_exceptionpc),32);
            tracep->chgCData(oldp+142,(vlSymsp->TOP__soc_top__coretop0.__PVT__memwb_rdaddr),5);
            tracep->chgIData(oldp+143,(vlSymsp->TOP__soc_top__coretop0.__PVT__memwb_rddata),32);
            tracep->chgBit(oldp+144,(vlSymsp->TOP__soc_top__coretop0.__PVT__memwb_we));
            tracep->chgSData(oldp+145,(vlSymsp->TOP__soc_top__coretop0.__PVT__memwb_csraddr),12);
            tracep->chgIData(oldp+146,(vlSymsp->TOP__soc_top__coretop0.__PVT__memwb_csrdata),32);
            tracep->chgBit(oldp+147,(vlSymsp->TOP__soc_top__coretop0.__PVT__memwb_csrwe));
            tracep->chgCData(oldp+148,(vlSymsp->TOP__soc_top__coretop0.__PVT__wbreg_rdaddr),5);
            tracep->chgIData(oldp+149,(vlSymsp->TOP__soc_top__coretop0.__PVT__wbreg_rddata),32);
            tracep->chgBit(oldp+150,(vlSymsp->TOP__soc_top__coretop0.__PVT__wbreg_we));
            tracep->chgSData(oldp+151,(vlSymsp->TOP__soc_top__coretop0.__PVT__wbcsr_csraddr),12);
            tracep->chgIData(oldp+152,(vlSymsp->TOP__soc_top__coretop0.__PVT__wbcsr_csrdata),32);
            tracep->chgBit(oldp+153,(vlSymsp->TOP__soc_top__coretop0.__PVT__wbcsr_csrwe));
            tracep->chgIData(oldp+154,(vlSymsp->TOP__soc_top__coretop0.__PVT__csrflie0__DOT__mstatus),32);
            tracep->chgIData(oldp+155,(vlSymsp->TOP__soc_top__coretop0.__PVT__csrflie0__DOT__mip),32);
            tracep->chgIData(oldp+156,(vlSymsp->TOP__soc_top__coretop0.__PVT__csrflie0__DOT__mie),32);
            tracep->chgIData(oldp+157,(vlSymsp->TOP__soc_top__coretop0.__PVT__csrflie0__DOT__mtvec),32);
            tracep->chgIData(oldp+158,(vlSymsp->TOP__soc_top__coretop0.__PVT__csrflie0__DOT__mcounteren),32);
            tracep->chgIData(oldp+159,(vlSymsp->TOP__soc_top__coretop0.__PVT__csrflie0__DOT__mscratch),32);
            tracep->chgIData(oldp+160,(vlSymsp->TOP__soc_top__coretop0.__PVT__csrflie0__DOT__mcause),32);
            tracep->chgIData(oldp+161,(vlSymsp->TOP__soc_top__coretop0.__PVT__csrflie0__DOT__mtval),32);
            tracep->chgQData(oldp+162,(vlSymsp->TOP__soc_top__coretop0.__PVT__csrflie0__DOT__mcycle),64);
            tracep->chgIData(oldp+164,(vlSymsp->TOP__soc_top__coretop0.__PVT__csrflie0__DOT__interrupt_cause),32);
            tracep->chgIData(oldp+165,((0xfffffffcU 
                                        & vlSymsp->TOP__soc_top__coretop0.__PVT__csrflie0__DOT__mtvec)),32);
            tracep->chgCData(oldp+166,((0x7fU & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst)),7);
            tracep->chgCData(oldp+167,(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__opfunc3),3);
            tracep->chgCData(oldp+168,((vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+169,((0x1fU & (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+170,(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__optype),3);
            tracep->chgBit(oldp+171,((3U == (0x7fU 
                                             & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))));
            tracep->chgBit(oldp+172,((0x23U == (0x7fU 
                                                & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))));
            tracep->chgBit(oldp+173,((((((((((0x13U 
                                              == (0x7fU 
                                                  & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst)) 
                                             | (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__Rtype)) 
                                            | (3U == 
                                               (0x7fU 
                                                & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))) 
                                           | (0x37U 
                                              == (0x7fU 
                                                  & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))) 
                                          | (0x17U 
                                             == (0x7fU 
                                                 & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))) 
                                         | (0x6fU == 
                                            (0x7fU 
                                             & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))) 
                                        | (0x67U == 
                                           (0x7fU & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))) 
                                       | (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__Mtype)) 
                                      | (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__CSRtype))));
            tracep->chgBit(oldp+174,(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__CSRtype));
            tracep->chgIData(oldp+175,(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__immI),32);
            tracep->chgIData(oldp+176,((((- (IData)(
                                                    (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                                     >> 0x1fU))) 
                                         << 0xcU) | 
                                        (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                         >> 0x14U))),32);
            tracep->chgIData(oldp+177,((((- (IData)(
                                                    (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                                     >> 0x1fU))) 
                                         << 0xcU) | 
                                        ((0xfe0U & 
                                          (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                           >> 0x14U)) 
                                         | (0x1fU & 
                                            (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                             >> 7U))))),32);
            tracep->chgIData(oldp+178,((0xfffff000U 
                                        & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst)),32);
            tracep->chgIData(oldp+179,((((- (IData)(
                                                    (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                                     >> 0x1fU))) 
                                         << 0x14U) 
                                        | ((0xff000U 
                                            & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst) 
                                           | ((0x800U 
                                               & (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                                  >> 9U)) 
                                              | (0x7feU 
                                                 & (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                                    >> 0x14U)))))),32);
            tracep->chgIData(oldp+180,((((- (IData)(
                                                    (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                                     >> 0x1fU))) 
                                         << 0xcU) | 
                                        ((0x800U & 
                                          (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                           << 4U)) 
                                         | ((0x7e0U 
                                             & (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                                >> 0x14U)) 
                                            | (0x1eU 
                                               & (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                                  >> 7U)))))),32);
            tracep->chgIData(oldp+181,((0x1fU & (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                                 >> 0xfU))),32);
            tracep->chgBit(oldp+182,((0x13U == (0x7fU 
                                                & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))));
            tracep->chgBit(oldp+183,(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__Rtype));
            tracep->chgBit(oldp+184,(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__Mtype));
            tracep->chgBit(oldp+185,((0x37U == (0x7fU 
                                                & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))));
            tracep->chgBit(oldp+186,((0x17U == (0x7fU 
                                                & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))));
            tracep->chgBit(oldp+187,((0x6fU == (0x7fU 
                                                & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))));
            tracep->chgBit(oldp+188,((0x67U == (0x7fU 
                                                & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))));
            tracep->chgBit(oldp+189,((0x63U == (0x7fU 
                                                & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))));
            tracep->chgBit(oldp+190,(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__MRETtype));
            tracep->chgBit(oldp+191,((((0x73U == (0x7fU 
                                                  & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst)) 
                                       & (0U == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__opfunc3))) 
                                      & (0U == (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                                >> 0x14U)))));
            tracep->chgBit(oldp+192,(((0x20U == (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                                 >> 0x19U))
                                       ? 1U : 0U)));
            tracep->chgBit(oldp+193,((((0x33U == (0x7fU 
                                                  & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst)) 
                                       & (0x20U == 
                                          (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                           >> 0x19U))) 
                                      & (0U == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__opfunc3)))));
            tracep->chgBit(oldp+194,((((0x6fU == (0x7fU 
                                                  & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst)) 
                                       | (0x37U == 
                                          (0x7fU & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst)))
                                       ? 1U : 0U)));
            tracep->chgBit(oldp+195,((((0x1fU & (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                                 >> 0xfU)) 
                                       == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_rdaddr)) 
                                      & (((((((((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__Rtype) 
                                                | (0x23U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))) 
                                               | (0x63U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))) 
                                              | (0x13U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))) 
                                             | (3U 
                                                == 
                                                (0x7fU 
                                                 & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))) 
                                            | (0x67U 
                                               == (0x7fU 
                                                   & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))) 
                                           | (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__CSRtype)) 
                                          | (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__MRETtype)) 
                                         | (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__Mtype)))));
            tracep->chgBit(oldp+196,((((0x1fU & (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                                 >> 0x14U)) 
                                       == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_rdaddr)) 
                                      & ((((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__Rtype) 
                                           | (0x23U 
                                              == (0x7fU 
                                                  & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))) 
                                          | (0x63U 
                                             == (0x7fU 
                                                 & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))) 
                                         | (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__Mtype)))));
            tracep->chgIData(oldp+197,(((((0x73U == 
                                           (0x7fU & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst)) 
                                          & (0U == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__opfunc3))) 
                                         & (0U == (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                                   >> 0x14U)))
                                         ? 0xbU : 0U)),32);
            tracep->chgIData(oldp+198,(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__imm),32);
            tracep->chgIData(oldp+199,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__op1),32);
            tracep->chgIData(oldp+200,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__op2),32);
            tracep->chgIData(oldp+201,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__op_result),32);
            tracep->chgIData(oldp+202,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mtypea),32);
            tracep->chgIData(oldp+203,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mtypeb),32);
            tracep->chgIData(oldp+204,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__csr_data),32);
            tracep->chgBit(oldp+205,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__csr_we));
            tracep->chgIData(oldp+206,((((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_memre) 
                                         | (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_memwe))
                                         ? (vlSymsp->TOP__soc_top__coretop0.__PVT__fwdexe_rs1 
                                            + vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_imm)
                                         : 0U)),32);
            tracep->chgIData(oldp+207,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__divresult),32);
            tracep->chgQData(oldp+208,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mulresult),64);
            tracep->chgQData(oldp+210,((1ULL + (~ vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mulresult))),64);
            tracep->chgBit(oldp+212,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mulstart));
            tracep->chgBit(oldp+213,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__divstart));
            tracep->chgBit(oldp+214,(((5U == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_optype)) 
                                      & (~ ((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_opfunc3) 
                                            >> 1U)))));
            tracep->chgBit(oldp+215,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mulisdone));
            tracep->chgBit(oldp+216,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__divisdone));
            tracep->chgBit(oldp+217,((1U & (~ (IData)(
                                                      (0U 
                                                       != vlSymsp->TOP__soc_top__coretop0.__PVT__fwdexe_rs2))))));
            tracep->chgBit(oldp+218,((1U & (~ (IData)(
                                                      (0U 
                                                       != vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mtypea))))));
            tracep->chgBit(oldp+219,((1U & (~ (IData)(
                                                      (0U 
                                                       != vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mtypeb))))));
            tracep->chgBit(oldp+220,((1U & (~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mul0__DOT__cnt)))))));
            tracep->chgIData(oldp+221,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mul0__DOT__reg32),32);
            tracep->chgWData(oldp+222,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mul0__DOT__result),65);
            tracep->chgCData(oldp+225,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mul0__DOT__cnt),6);
            tracep->chgCData(oldp+226,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mul0__DOT__S),3);
            tracep->chgCData(oldp+227,(((0U == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mul0__DOT__S))
                                         ? ((1U & (
                                                   (~ (IData)(
                                                              (0U 
                                                               != vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mtypea))) 
                                                   | (~ (IData)(
                                                                (0U 
                                                                 != vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mtypeb)))))
                                             ? 3U : 1U)
                                         : ((1U == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mul0__DOT__S))
                                             ? ((0U 
                                                 != (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mul0__DOT__cnt))
                                                 ? 1U
                                                 : 3U)
                                             : 0U))),3);
            tracep->chgBit(oldp+228,((1U & vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mul0__DOT__result[0U])));
            tracep->chgIData(oldp+229,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mul0__DOT__result[1U]),32);
            tracep->chgQData(oldp+230,((0x1ffffffffULL 
                                        & ((QData)((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mul0__DOT__reg32)) 
                                           + (QData)((IData)(
                                                             vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mul0__DOT__result[1U]))))),33);
            __Vtemp3[0U] = vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mul0__DOT__result[0U];
            __Vtemp3[1U] = (IData)((0x1ffffffffULL 
                                    & ((QData)((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mul0__DOT__reg32)) 
                                       + (QData)((IData)(
                                                         vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mul0__DOT__result[1U])))));
            __Vtemp3[2U] = (IData)(((0x1ffffffffULL 
                                     & ((QData)((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mul0__DOT__reg32)) 
                                        + (QData)((IData)(
                                                          vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mul0__DOT__result[1U])))) 
                                    >> 0x20U));
            tracep->chgWData(oldp+232,(__Vtemp3),65);
            tracep->chgBit(oldp+235,((0U == vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mtypea)));
            tracep->chgBit(oldp+236,((0U == vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mtypeb)));
            tracep->chgBit(oldp+237,((1U & (~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__cnt)))))));
            tracep->chgIData(oldp+238,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__reg32),32);
            tracep->chgWData(oldp+239,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__result),65);
            tracep->chgCData(oldp+242,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__cnt),6);
            tracep->chgIData(oldp+243,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__result[0U]),32);
            tracep->chgIData(oldp+244,(((vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__result[2U] 
                                         << 0x1fU) 
                                        | (vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__result[1U] 
                                           >> 1U))),32);
            tracep->chgCData(oldp+245,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__S),3);
            tracep->chgCData(oldp+246,(((0U == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__S))
                                         ? ((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__divstart)
                                             ? (((0U 
                                                  == vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mtypea) 
                                                 | (0U 
                                                    == vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mtypeb))
                                                 ? 3U
                                                 : 1U)
                                             : 0U) : 
                                        ((1U == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__S))
                                          ? ((0U != (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__cnt))
                                              ? 1U : 3U)
                                          : 0U))),3);
            tracep->chgBit(oldp+247,((vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__result[1U] 
                                      >= vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__reg32)));
            tracep->chgQData(oldp+248,((0x1ffffffffULL 
                                        & ((QData)((IData)(
                                                           vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__result[1U])) 
                                           - (QData)((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__reg32))))),33);
            __Vtemp4[0U] = vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__result[0U];
            __Vtemp4[1U] = (IData)((0x1ffffffffULL 
                                    & ((QData)((IData)(
                                                       vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__result[1U])) 
                                       - (QData)((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__reg32)))));
            __Vtemp4[2U] = (IData)(((0x1ffffffffULL 
                                     & ((QData)((IData)(
                                                        vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__result[1U])) 
                                        - (QData)((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__reg32)))) 
                                    >> 0x20U));
            tracep->chgWData(oldp+250,(__Vtemp4),65);
            tracep->chgCData(oldp+253,((3U & vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_memaddr)),2);
            tracep->chgBit(oldp+254,(((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_addr1) 
                                      == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_rdaddr))));
            tracep->chgBit(oldp+255,(((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_addr2) 
                                      == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_rdaddr))));
            tracep->chgBit(oldp+256,(((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_csraddr) 
                                      == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_csraddr))));
            tracep->chgBit(oldp+257,((0U != (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_rdaddr))));
            tracep->chgBit(oldp+258,(((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_addr1) 
                                      == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__memwb_rdaddr))));
            tracep->chgBit(oldp+259,(((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_addr2) 
                                      == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__memwb_rdaddr))));
            tracep->chgBit(oldp+260,(((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_csraddr) 
                                      == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__memwb_csraddr))));
            tracep->chgBit(oldp+261,((0U != (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__memwb_rdaddr))));
            tracep->chgBit(oldp+262,(((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_addr1) 
                                      == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__wbreg_rdaddr))));
            tracep->chgBit(oldp+263,(((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_addr2) 
                                      == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__wbreg_rdaddr))));
            tracep->chgBit(oldp+264,(((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_csraddr) 
                                      == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__wbcsr_csraddr))));
            tracep->chgBit(oldp+265,((0U != (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__wbreg_rdaddr))));
            tracep->chgBit(oldp+266,((((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_we) 
                                       & (0U != (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_rdaddr))) 
                                      & ((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_addr1) 
                                         == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_rdaddr)))));
            tracep->chgBit(oldp+267,((((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_we) 
                                       & (0U != (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_rdaddr))) 
                                      & ((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_addr2) 
                                         == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_rdaddr)))));
            tracep->chgBit(oldp+268,(((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_csrwe) 
                                      & ((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_csraddr) 
                                         == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_csraddr)))));
            tracep->chgBit(oldp+269,((((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__memwb_we) 
                                       & (0U != (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__memwb_rdaddr))) 
                                      & ((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_addr1) 
                                         == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__memwb_rdaddr)))));
            tracep->chgBit(oldp+270,((((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__memwb_we) 
                                       & (0U != (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__memwb_rdaddr))) 
                                      & ((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_addr2) 
                                         == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__memwb_rdaddr)))));
            tracep->chgBit(oldp+271,(((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__memwb_csrwe) 
                                      & ((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_csraddr) 
                                         == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__memwb_csraddr)))));
            tracep->chgBit(oldp+272,((((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__wbreg_we) 
                                       & (0U != (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__wbreg_rdaddr))) 
                                      & ((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_addr1) 
                                         == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__wbreg_rdaddr)))));
            tracep->chgBit(oldp+273,((((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__wbreg_we) 
                                       & (0U != (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__wbreg_rdaddr))) 
                                      & ((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_addr2) 
                                         == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__wbreg_rdaddr)))));
            tracep->chgBit(oldp+274,(((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__wbcsr_csrwe) 
                                      & ((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_csraddr) 
                                         == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__wbcsr_csraddr)))));
            tracep->chgIData(oldp+275,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[0]),32);
            tracep->chgIData(oldp+276,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[1]),32);
            tracep->chgIData(oldp+277,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[2]),32);
            tracep->chgIData(oldp+278,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[3]),32);
            tracep->chgIData(oldp+279,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[4]),32);
            tracep->chgIData(oldp+280,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[5]),32);
            tracep->chgIData(oldp+281,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[6]),32);
            tracep->chgIData(oldp+282,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[7]),32);
            tracep->chgIData(oldp+283,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[8]),32);
            tracep->chgIData(oldp+284,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[9]),32);
            tracep->chgIData(oldp+285,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[10]),32);
            tracep->chgIData(oldp+286,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[11]),32);
            tracep->chgIData(oldp+287,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[12]),32);
            tracep->chgIData(oldp+288,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[13]),32);
            tracep->chgIData(oldp+289,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[14]),32);
            tracep->chgIData(oldp+290,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[15]),32);
            tracep->chgIData(oldp+291,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[16]),32);
            tracep->chgIData(oldp+292,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[17]),32);
            tracep->chgIData(oldp+293,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[18]),32);
            tracep->chgIData(oldp+294,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[19]),32);
            tracep->chgIData(oldp+295,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[20]),32);
            tracep->chgIData(oldp+296,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[21]),32);
            tracep->chgIData(oldp+297,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[22]),32);
            tracep->chgIData(oldp+298,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[23]),32);
            tracep->chgIData(oldp+299,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[24]),32);
            tracep->chgIData(oldp+300,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[25]),32);
            tracep->chgIData(oldp+301,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[26]),32);
            tracep->chgIData(oldp+302,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[27]),32);
            tracep->chgIData(oldp+303,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[28]),32);
            tracep->chgIData(oldp+304,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[29]),32);
            tracep->chgIData(oldp+305,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[30]),32);
            tracep->chgIData(oldp+306,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[31]),32);
            tracep->chgBit(oldp+307,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__we));
            tracep->chgIData(oldp+308,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__i),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+309,(vlSymsp->TOP__soc_top.__PVT__host_wdata[0]),32);
            tracep->chgIData(oldp+310,(vlSymsp->TOP__soc_top.__PVT__host_rdata[0]),32);
            tracep->chgIData(oldp+311,(vlSymsp->TOP__soc_top.__PVT__device_wdata[0]),32);
            tracep->chgIData(oldp+312,(vlSymsp->TOP__soc_top.__PVT__device_wdata[1]),32);
            tracep->chgIData(oldp+313,(vlSymsp->TOP__soc_top.__PVT__device_wdata[2]),32);
            tracep->chgIData(oldp+314,(vlSymsp->TOP__soc_top.__Vcellinp__u_bus__host_wdata_i[0]),32);
            tracep->chgIData(oldp+315,(vlSymsp->TOP__soc_top.__Vcellout__u_bus__host_rdata_o[0]),32);
            tracep->chgIData(oldp+316,(vlSymsp->TOP__soc_top.__Vcellout__u_bus__device_wdata_o[0]),32);
            tracep->chgIData(oldp+317,(vlSymsp->TOP__soc_top.__Vcellout__u_bus__device_wdata_o[1]),32);
            tracep->chgIData(oldp+318,(vlSymsp->TOP__soc_top.__Vcellout__u_bus__device_wdata_o[2]),32);
            tracep->chgCData(oldp+319,(vlSymsp->TOP__soc_top.__PVT__u_bus__DOT__device_sel_resp),2);
            tracep->chgIData(oldp+320,(vlSymsp->TOP__soc_top.__PVT__device_wdata
                                       [1U]),32);
            tracep->chgIData(oldp+321,(vlSymsp->TOP__soc_top.__PVT__device_wdata
                                       [2U]),32);
            tracep->chgIData(oldp+322,(vlSymsp->TOP__soc_top.__PVT__device_wdata
                                       [0U]),32);
            tracep->chgIData(oldp+323,(vlSymsp->TOP__soc_top.__PVT__host_rdata
                                       [0U]),32);
            tracep->chgIData(oldp+324,(vlSymsp->TOP__soc_top__coretop0.__PVT__memrom_ramdata),32);
            tracep->chgIData(oldp+325,(vlSymsp->TOP__soc_top__coretop0.__PVT__mem0__DOT__rd_data),32);
        }
        tracep->chgBit(oldp+326,(vlSelf->clk_i));
        tracep->chgBit(oldp+327,(vlSelf->rst_i));
        tracep->chgBit(oldp+328,(vlSelf->halt_o));
        tracep->chgIData(oldp+329,(((vlSymsp->TOP__soc_top__dpram0.__PVT__mem
                                     [(0x1ffffcU & vlSymsp->TOP__soc_top__coretop0.__PVT__pc_wire)] 
                                     << 0x18U) | ((
                                                   vlSymsp->TOP__soc_top__dpram0.__PVT__mem
                                                   [
                                                   (0x1fffffU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (0x1ffffcU 
                                                        & vlSymsp->TOP__soc_top__coretop0.__PVT__pc_wire)))] 
                                                   << 0x10U) 
                                                  | ((vlSymsp->TOP__soc_top__dpram0.__PVT__mem
                                                      [
                                                      (0x1fffffU 
                                                       & ((IData)(2U) 
                                                          + 
                                                          (0x1ffffcU 
                                                           & vlSymsp->TOP__soc_top__coretop0.__PVT__pc_wire)))] 
                                                      << 8U) 
                                                     | vlSymsp->TOP__soc_top__dpram0.__PVT__mem
                                                     [
                                                     (0x1fffffU 
                                                      & ((IData)(3U) 
                                                         + 
                                                         (0x1ffffcU 
                                                          & vlSymsp->TOP__soc_top__coretop0.__PVT__pc_wire)))])))),32);
        tracep->chgBit(oldp+330,(((~ (IData)(vlSelf->rst_i)) 
                                  & (IData)(vlSymsp->TOP__soc_top.__PVT__u_bus__DOT__host_sel_req))));
        tracep->chgIData(oldp+331,((vlSymsp->TOP__soc_top.__PVT__device_req
                                    [0U] ? ((vlSymsp->TOP__soc_top__dpram0.__PVT__mem
                                             [(0x1ffffcU 
                                               & vlSymsp->TOP__soc_top.__PVT__device_addr
                                               [0U])] 
                                             << 0x18U) 
                                            | ((vlSymsp->TOP__soc_top__dpram0.__PVT__mem
                                                [(0x1fffffU 
                                                  & ((IData)(1U) 
                                                     + 
                                                     (0x1ffffcU 
                                                      & vlSymsp->TOP__soc_top.__PVT__device_addr
                                                      [0U])))] 
                                                << 0x10U) 
                                               | ((vlSymsp->TOP__soc_top__dpram0.__PVT__mem
                                                   [
                                                   (0x1fffffU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       (0x1ffffcU 
                                                        & vlSymsp->TOP__soc_top.__PVT__device_addr
                                                        [0U])))] 
                                                   << 8U) 
                                                  | vlSymsp->TOP__soc_top__dpram0.__PVT__mem
                                                  [
                                                  (0x1fffffU 
                                                   & ((IData)(3U) 
                                                      + 
                                                      (0x1ffffcU 
                                                       & vlSymsp->TOP__soc_top.__PVT__device_addr
                                                       [0U])))])))
                                     : 0U)),32);
    }
}

void Vsoc_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vsoc_top___024root* const __restrict vlSelf = static_cast<Vsoc_top___024root*>(voidSelf);
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
