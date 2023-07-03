// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsoc_top__Syms.h"


void Vsoc_top___024root__traceInitSub0(Vsoc_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vsoc_top___024root__traceInitTop(Vsoc_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vsoc_top___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vsoc_top___024root__traceInitSub0(Vsoc_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+327,"clk_i", false,-1);
        tracep->declBit(c+328,"rst_i", false,-1);
        tracep->declBit(c+329,"halt_o", false,-1);
        tracep->declBit(c+327,"soc_top clk_i", false,-1);
        tracep->declBit(c+328,"soc_top rst_i", false,-1);
        tracep->declBit(c+13,"soc_top halt_o", false,-1);
        tracep->declBus(c+333,"soc_top NrDevices", false,-1, 31,0);
        tracep->declBus(c+334,"soc_top NrHosts", false,-1, 31,0);
        tracep->declBus(c+335,"soc_top MemSize", false,-1, 31,0);
        tracep->declBus(c+336,"soc_top MemAddrWidth", false,-1, 31,0);
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+14+i*1,"soc_top host_req", true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+15+i*1,"soc_top host_gnt", true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+16+i*1,"soc_top host_addr", true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+310+i*1,"soc_top host_wdata", true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+311+i*1,"soc_top host_rdata", true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+17+i*1,"soc_top host_we", true,(i+0));}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBit(c+18+i*1,"soc_top device_req", true,(i+0));}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+21+i*1,"soc_top device_addr", true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+312+i*1,"soc_top device_wdata", true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+24+i*1,"soc_top device_rdata", true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBit(c+27+i*1,"soc_top device_we", true,(i+0));}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+1+i*1,"soc_top cfg_device_addr_base", true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+4+i*1,"soc_top cfg_device_addr_mask", true,(i+0), 31,0);}}
        tracep->declBus(c+30,"soc_top pcrom_pc", false,-1, 31,0);
        tracep->declBus(c+330,"soc_top rompc_inst", false,-1, 31,0);
        tracep->declBit(c+13,"soc_top halt_from_console", false,-1);
        tracep->declBit(c+31,"soc_top clint_software_irq", false,-1);
        tracep->declBit(c+32,"soc_top clint_timer_irq", false,-1);
        tracep->declBit(c+337,"soc_top external_irq", false,-1);
        tracep->declBus(c+338,"soc_top u_bus NrDevices", false,-1, 31,0);
        tracep->declBus(c+339,"soc_top u_bus NrHosts", false,-1, 31,0);
        tracep->declBus(c+340,"soc_top u_bus DataWidth", false,-1, 31,0);
        tracep->declBus(c+340,"soc_top u_bus AddrressWidth", false,-1, 31,0);
        tracep->declBit(c+328,"soc_top u_bus rst_i", false,-1);
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+33+i*1,"soc_top u_bus host_req_i", true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+34+i*1,"soc_top u_bus host_addr_i", true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+35+i*1,"soc_top u_bus host_we_i", true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+315+i*1,"soc_top u_bus host_wdata_i", true,(i+0), 31,0);}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBit(c+36+i*1,"soc_top u_bus host_gnt_o", true,(i+0));}}
        {int i; for (i=0; i<1; i++) {
                tracep->declBus(c+316+i*1,"soc_top u_bus host_rdata_o", true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+37+i*1,"soc_top u_bus device_rdata_i", true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBit(c+40+i*1,"soc_top u_bus device_req_o", true,(i+0));}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+43+i*1,"soc_top u_bus device_addr_o", true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBit(c+46+i*1,"soc_top u_bus device_we_o", true,(i+0));}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+317+i*1,"soc_top u_bus device_wdata_o", true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+7+i*1,"soc_top u_bus cfg_device_addr_base", true,(i+0), 31,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+10+i*1,"soc_top u_bus cfg_device_addr_mask", true,(i+0), 31,0);}}
        tracep->declBus(c+339,"soc_top u_bus NumBitsHostSel", false,-1, 31,0);
        tracep->declBus(c+341,"soc_top u_bus NumBitsDeviceSel", false,-1, 31,0);
        tracep->declBus(c+49,"soc_top u_bus host_sel_req", false,-1, 0,0);
        tracep->declBus(c+331,"soc_top u_bus host_sel_resp", false,-1, 0,0);
        tracep->declBus(c+50,"soc_top u_bus device_sel_req", false,-1, 1,0);
        tracep->declBus(c+320,"soc_top u_bus device_sel_resp", false,-1, 1,0);
        tracep->declBus(c+342,"soc_top u_bus unnamedblk1 host", false,-1, 31,0);
        tracep->declBus(c+343,"soc_top u_bus unnamedblk2 device", false,-1, 31,0);
        tracep->declBus(c+343,"soc_top u_bus unnamedblk3 device", false,-1, 31,0);
        tracep->declBus(c+344,"soc_top u_bus unnamedblk4 host", false,-1, 31,0);
        tracep->declBit(c+345,"soc_top console0 FlushOnChar", false,-1);
        tracep->declBit(c+327,"soc_top console0 clk_i", false,-1);
        tracep->declBit(c+328,"soc_top console0 rst_i", false,-1);
        tracep->declBit(c+51,"soc_top console0 req_i", false,-1);
        tracep->declBit(c+52,"soc_top console0 we_i", false,-1);
        tracep->declBus(c+53,"soc_top console0 addr_i", false,-1, 31,0);
        tracep->declBus(c+321,"soc_top console0 wdata_i", false,-1, 31,0);
        tracep->declBit(c+13,"soc_top console0 halt_o", false,-1);
        tracep->declBus(c+346,"soc_top console0 CHAR_OUT_ADDR", false,-1, 7,0);
        tracep->declBus(c+347,"soc_top console0 SIM_CTRL_ADDR", false,-1, 7,0);
        tracep->declBus(c+54,"soc_top console0 ctrl_addr", false,-1, 7,0);
        tracep->declBus(c+55,"soc_top console0 sim_finish", false,-1, 2,0);
        tracep->declBus(c+56,"soc_top console0 log_fd", false,-1, 31,0);
        tracep->declBit(c+327,"soc_top clint0 clk_i", false,-1);
        tracep->declBit(c+328,"soc_top clint0 rst_i", false,-1);
        tracep->declBit(c+57,"soc_top clint0 req_i", false,-1);
        tracep->declBit(c+58,"soc_top clint0 we_i", false,-1);
        tracep->declBus(c+59,"soc_top clint0 addr_i", false,-1, 31,0);
        tracep->declBus(c+322,"soc_top clint0 data_i", false,-1, 31,0);
        tracep->declBus(c+60,"soc_top clint0 data_o", false,-1, 31,0);
        tracep->declBit(c+32,"soc_top clint0 timer_irq_o", false,-1);
        tracep->declBit(c+31,"soc_top clint0 software_irq_o", false,-1);
        tracep->declBus(c+348,"soc_top clint0 MSIP_BASE", false,-1, 15,0);
        tracep->declBus(c+349,"soc_top clint0 MTIMECMP_BASE", false,-1, 15,0);
        tracep->declBus(c+350,"soc_top clint0 MTIME_ADDR", false,-1, 15,0);
        tracep->declBus(c+61,"soc_top clint0 addr", false,-1, 15,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+62+i*1,"soc_top clint0 mtime_reg", true,(i+0), 31,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+64+i*1,"soc_top clint0 mtimecmp_reg", true,(i+0), 31,0);}}
        tracep->declBus(c+66,"soc_top clint0 msip", false,-1, 31,0);
        tracep->declQuad(c+67,"soc_top clint0 mtime", false,-1, 63,0);
        tracep->declQuad(c+69,"soc_top clint0 mtimecmp", false,-1, 63,0);
        tracep->declBit(c+71,"soc_top clint0 is_msip_addr", false,-1);
        tracep->declBit(c+72,"soc_top clint0 is_mtime_addr0", false,-1);
        tracep->declBit(c+73,"soc_top clint0 is_mtime_addr1", false,-1);
        tracep->declBit(c+74,"soc_top clint0 is_mtimecmp_addr0", false,-1);
        tracep->declBit(c+75,"soc_top clint0 is_mtimecmp_addr1", false,-1);
        tracep->declBit(c+76,"soc_top clint0 carry", false,-1);
        tracep->declBus(c+351,"soc_top dpram0 RAM_SIZE", false,-1, 31,0);
        tracep->declBus(c+352,"soc_top dpram0 RAM_ADDR_WIDTH", false,-1, 31,0);
        tracep->declBit(c+327,"soc_top dpram0 clk_i", false,-1);
        tracep->declBus(c+30,"soc_top dpram0 addr_i", false,-1, 31,0);
        tracep->declBus(c+77,"soc_top dpram0 ram_addr_i", false,-1, 31,0);
        tracep->declBus(c+323,"soc_top dpram0 ram_data_i", false,-1, 31,0);
        tracep->declBit(c+78,"soc_top dpram0 ram_we_i", false,-1);
        tracep->declBit(c+79,"soc_top dpram0 ram_req_i", false,-1);
        tracep->declBus(c+332,"soc_top dpram0 ram_data_o", false,-1, 31,0);
        tracep->declBus(c+330,"soc_top dpram0 inst_o", false,-1, 31,0);
        tracep->declBus(c+80,"soc_top dpram0 addr4", false,-1, 20,0);
        tracep->declBus(c+81,"soc_top dpram0 ramaddr4", false,-1, 20,0);
        tracep->declBit(c+328,"soc_top coretop0 rst_i", false,-1);
        tracep->declBit(c+327,"soc_top coretop0 clk_i", false,-1);
        tracep->declBus(c+330,"soc_top coretop0 rom_data_i", false,-1, 31,0);
        tracep->declBus(c+30,"soc_top coretop0 rom_addr_o", false,-1, 31,0);
        tracep->declBus(c+324,"soc_top coretop0 ram_data_i", false,-1, 31,0);
        tracep->declBus(c+82,"soc_top coretop0 ram_addr_o", false,-1, 31,0);
        tracep->declBus(c+325,"soc_top coretop0 ram_wdata_o", false,-1, 31,0);
        tracep->declBit(c+83,"soc_top coretop0 ram_we_o", false,-1);
        tracep->declBit(c+84,"soc_top coretop0 ram_req_o", false,-1);
        tracep->declBit(c+32,"soc_top coretop0 timer_irq_i", false,-1);
        tracep->declBit(c+31,"soc_top coretop0 software_irq_i", false,-1);
        tracep->declBit(c+337,"soc_top coretop0 external_irq_i", false,-1);
        tracep->declBus(c+85,"soc_top coretop0 pipectrlpc_jumpaddr", false,-1, 31,0);
        tracep->declBit(c+86,"soc_top coretop0 pipectrlpc_je", false,-1);
        tracep->declBus(c+87,"soc_top coretop0 pipectrlpc_trapentry", false,-1, 31,0);
        tracep->declBit(c+88,"soc_top coretop0 pipectrlpc_traptaken", false,-1);
        tracep->declBus(c+89,"soc_top coretop0 pipectrlpc_retaddr", false,-1, 31,0);
        tracep->declBit(c+90,"soc_top coretop0 pipectrlpc_ret", false,-1);
        tracep->declBit(c+91,"soc_top coretop0 pipectrl_stallpc", false,-1);
        tracep->declBit(c+92,"soc_top coretop0 pipectrl_stallif", false,-1);
        tracep->declBit(c+93,"soc_top coretop0 pipectrl_stallid", false,-1);
        tracep->declBit(c+93,"soc_top coretop0 pipectrl_stallexe", false,-1);
        tracep->declBit(c+93,"soc_top coretop0 pipectrl_stallmem", false,-1);
        tracep->declBit(c+93,"soc_top coretop0 pipectrl_stallwb", false,-1);
        tracep->declBit(c+94,"soc_top coretop0 pipectrl_flushif", false,-1);
        tracep->declBit(c+95,"soc_top coretop0 pipectrl_flushid", false,-1);
        tracep->declBit(c+96,"soc_top coretop0 pipectrl_flushexe", false,-1);
        tracep->declBit(c+97,"soc_top coretop0 pipectrl_flushmem", false,-1);
        tracep->declBus(c+30,"soc_top coretop0 pc_wire", false,-1, 31,0);
        tracep->declBus(c+330,"soc_top coretop0 romif_inst", false,-1, 31,0);
        tracep->declBus(c+324,"soc_top coretop0 rommem_ramdata", false,-1, 31,0);
        tracep->declBus(c+98,"soc_top coretop0 ifid_inst", false,-1, 31,0);
        tracep->declBus(c+99,"soc_top coretop0 ifid_pc", false,-1, 31,0);
        tracep->declBus(c+100,"soc_top coretop0 regid_data1", false,-1, 31,0);
        tracep->declBus(c+101,"soc_top coretop0 regid_data2", false,-1, 31,0);
        tracep->declBus(c+102,"soc_top coretop0 idreg_addr1", false,-1, 4,0);
        tracep->declBus(c+103,"soc_top coretop0 idreg_addr2", false,-1, 4,0);
        tracep->declBus(c+104,"soc_top coretop0 idcsr_addr", false,-1, 11,0);
        tracep->declBus(c+105,"soc_top coretop0 csrid_data", false,-1, 31,0);
        tracep->declBus(c+106,"soc_top coretop0 idexe_pc", false,-1, 31,0);
        tracep->declBus(c+107,"soc_top coretop0 idexe_imm", false,-1, 31,0);
        tracep->declBus(c+108,"soc_top coretop0 idexe_rdaddr", false,-1, 4,0);
        tracep->declBit(c+109,"soc_top coretop0 idexe_we", false,-1);
        tracep->declBus(c+110,"soc_top coretop0 idexe_optype", false,-1, 2,0);
        tracep->declBus(c+111,"soc_top coretop0 idexe_opfunc3", false,-1, 2,0);
        tracep->declBit(c+112,"soc_top coretop0 idexe_shiftsel", false,-1);
        tracep->declBit(c+113,"soc_top coretop0 idexe_addsubsel", false,-1);
        tracep->declBit(c+114,"soc_top coretop0 idexe_typesel", false,-1);
        tracep->declBit(c+115,"soc_top coretop0 idexe_memwe", false,-1);
        tracep->declBit(c+116,"soc_top coretop0 idexe_memre", false,-1);
        tracep->declBit(c+117,"soc_top coretop0 idexe_csrwe", false,-1);
        tracep->declBit(c+118,"soc_top coretop0 idexe_system_ret", false,-1);
        tracep->declBus(c+119,"soc_top coretop0 idexe_exception", false,-1, 31,0);
        tracep->declBus(c+120,"soc_top coretop0 idexe_exceptionpc", false,-1, 31,0);
        tracep->declBus(c+121,"soc_top coretop0 idfwd_rs1", false,-1, 31,0);
        tracep->declBus(c+122,"soc_top coretop0 idfwd_rs2", false,-1, 31,0);
        tracep->declBus(c+123,"soc_top coretop0 idfwd_addr1", false,-1, 4,0);
        tracep->declBus(c+124,"soc_top coretop0 idfwd_addr2", false,-1, 4,0);
        tracep->declBus(c+125,"soc_top coretop0 idfwd_csraddr", false,-1, 11,0);
        tracep->declBus(c+126,"soc_top coretop0 idfwd_csrdata", false,-1, 31,0);
        tracep->declBit(c+127,"soc_top coretop0 idpipectrl_loadusehazard", false,-1);
        tracep->declBus(c+128,"soc_top coretop0 fwdexe_rs1", false,-1, 31,0);
        tracep->declBus(c+129,"soc_top coretop0 fwdexe_rs2", false,-1, 31,0);
        tracep->declBus(c+130,"soc_top coretop0 fwdexe_csrdata", false,-1, 31,0);
        tracep->declBus(c+131,"soc_top coretop0 exemem_pc", false,-1, 31,0);
        tracep->declBus(c+132,"soc_top coretop0 exemem_rdaddr", false,-1, 4,0);
        tracep->declBus(c+133,"soc_top coretop0 exemem_rddata", false,-1, 31,0);
        tracep->declBit(c+134,"soc_top coretop0 exemem_we", false,-1);
        tracep->declBus(c+135,"soc_top coretop0 exemem_memaddr", false,-1, 31,0);
        tracep->declBit(c+136,"soc_top coretop0 exemem_memre", false,-1);
        tracep->declBit(c+83,"soc_top coretop0 exemem_memwe", false,-1);
        tracep->declBus(c+137,"soc_top coretop0 exemem_opfunc3", false,-1, 2,0);
        tracep->declBus(c+138,"soc_top coretop0 exemem_csraddr", false,-1, 11,0);
        tracep->declBus(c+139,"soc_top coretop0 exemem_csrdata", false,-1, 31,0);
        tracep->declBit(c+140,"soc_top coretop0 exemem_csrwe", false,-1);
        tracep->declBit(c+90,"soc_top coretop0 exemem_system_ret", false,-1);
        tracep->declBus(c+141,"soc_top coretop0 exemem_exception", false,-1, 31,0);
        tracep->declBus(c+142,"soc_top coretop0 exemem_exceptionpc", false,-1, 31,0);
        tracep->declBus(c+85,"soc_top coretop0 exepipe_jumpaddr", false,-1, 31,0);
        tracep->declBit(c+86,"soc_top coretop0 exepipe_je", false,-1);
        tracep->declBit(c+93,"soc_top coretop0 exepipe_stall", false,-1);
        tracep->declBus(c+143,"soc_top coretop0 memwb_rdaddr", false,-1, 4,0);
        tracep->declBus(c+144,"soc_top coretop0 memwb_rddata", false,-1, 31,0);
        tracep->declBit(c+145,"soc_top coretop0 memwb_we", false,-1);
        tracep->declBus(c+146,"soc_top coretop0 memwb_csraddr", false,-1, 11,0);
        tracep->declBus(c+147,"soc_top coretop0 memwb_csrdata", false,-1, 31,0);
        tracep->declBit(c+148,"soc_top coretop0 memwb_csrwe", false,-1);
        tracep->declBus(c+131,"soc_top coretop0 memcsr_pc", false,-1, 31,0);
        tracep->declBit(c+90,"soc_top coretop0 memcsr_system_ret", false,-1);
        tracep->declBus(c+141,"soc_top coretop0 memcsr_exception", false,-1, 31,0);
        tracep->declBus(c+142,"soc_top coretop0 memcsr_exceptionpc", false,-1, 31,0);
        tracep->declBus(c+82,"soc_top coretop0 memrom_ramaddr", false,-1, 31,0);
        tracep->declBus(c+325,"soc_top coretop0 memrom_ramdata", false,-1, 31,0);
        tracep->declBit(c+83,"soc_top coretop0 memrom_memwe", false,-1);
        tracep->declBit(c+136,"soc_top coretop0 memrom_memre", false,-1);
        tracep->declBus(c+149,"soc_top coretop0 wbreg_rdaddr", false,-1, 4,0);
        tracep->declBus(c+150,"soc_top coretop0 wbreg_rddata", false,-1, 31,0);
        tracep->declBit(c+151,"soc_top coretop0 wbreg_we", false,-1);
        tracep->declBus(c+152,"soc_top coretop0 wbcsr_csraddr", false,-1, 11,0);
        tracep->declBus(c+153,"soc_top coretop0 wbcsr_csrdata", false,-1, 31,0);
        tracep->declBit(c+154,"soc_top coretop0 wbcsr_csrwe", false,-1);
        tracep->declBit(c+31,"soc_top coretop0 clint_software_irq", false,-1);
        tracep->declBit(c+32,"soc_top coretop0 clint_timer_irq", false,-1);
        tracep->declBit(c+337,"soc_top coretop0 clint_external_irq", false,-1);
        tracep->declBus(c+87,"soc_top coretop0 csrpipe_entry", false,-1, 31,0);
        tracep->declBit(c+88,"soc_top coretop0 csrpipe_taken", false,-1);
        tracep->declBus(c+89,"soc_top coretop0 csrpipe_retaddr", false,-1, 31,0);
        tracep->declBit(c+90,"soc_top coretop0 csrpipe_ret", false,-1);
        tracep->declBit(c+127,"soc_top coretop0 pipectrl0 loaduse_hazard_i", false,-1);
        tracep->declBus(c+85,"soc_top coretop0 pipectrl0 jump_addr_i", false,-1, 31,0);
        tracep->declBit(c+86,"soc_top coretop0 pipectrl0 je_i", false,-1);
        tracep->declBit(c+93,"soc_top coretop0 pipectrl0 mtype_stall_i", false,-1);
        tracep->declBit(c+88,"soc_top coretop0 pipectrl0 trap_taken_i", false,-1);
        tracep->declBus(c+87,"soc_top coretop0 pipectrl0 trap_entry_i", false,-1, 31,0);
        tracep->declBit(c+90,"soc_top coretop0 pipectrl0 system_ret_i", false,-1);
        tracep->declBus(c+89,"soc_top coretop0 pipectrl0 system_retaddr_i", false,-1, 31,0);
        tracep->declBit(c+91,"soc_top coretop0 pipectrl0 stallpc_o", false,-1);
        tracep->declBit(c+86,"soc_top coretop0 pipectrl0 je_o", false,-1);
        tracep->declBus(c+85,"soc_top coretop0 pipectrl0 jump_addr_o", false,-1, 31,0);
        tracep->declBit(c+88,"soc_top coretop0 pipectrl0 trap_taken_o", false,-1);
        tracep->declBus(c+87,"soc_top coretop0 pipectrl0 trap_entry_o", false,-1, 31,0);
        tracep->declBit(c+90,"soc_top coretop0 pipectrl0 system_ret_o", false,-1);
        tracep->declBus(c+89,"soc_top coretop0 pipectrl0 system_retaddr_o", false,-1, 31,0);
        tracep->declBit(c+92,"soc_top coretop0 pipectrl0 stallif_o", false,-1);
        tracep->declBit(c+94,"soc_top coretop0 pipectrl0 flushif_o", false,-1);
        tracep->declBit(c+95,"soc_top coretop0 pipectrl0 flushid_o", false,-1);
        tracep->declBit(c+93,"soc_top coretop0 pipectrl0 stallid_o", false,-1);
        tracep->declBit(c+93,"soc_top coretop0 pipectrl0 stallexe_o", false,-1);
        tracep->declBit(c+96,"soc_top coretop0 pipectrl0 flushexe_o", false,-1);
        tracep->declBit(c+93,"soc_top coretop0 pipectrl0 stallmem_o", false,-1);
        tracep->declBit(c+97,"soc_top coretop0 pipectrl0 flushmem_o", false,-1);
        tracep->declBit(c+93,"soc_top coretop0 pipectrl0 stallwb_o", false,-1);
        tracep->declBit(c+327,"soc_top coretop0 program_counter0 clk_i", false,-1);
        tracep->declBit(c+328,"soc_top coretop0 program_counter0 rst_i", false,-1);
        tracep->declBit(c+91,"soc_top coretop0 program_counter0 stall_i", false,-1);
        tracep->declBus(c+85,"soc_top coretop0 program_counter0 jump_addr_i", false,-1, 31,0);
        tracep->declBit(c+86,"soc_top coretop0 program_counter0 je_i", false,-1);
        tracep->declBus(c+87,"soc_top coretop0 program_counter0 trap_entry_i", false,-1, 31,0);
        tracep->declBit(c+88,"soc_top coretop0 program_counter0 trap_taken_i", false,-1);
        tracep->declBus(c+89,"soc_top coretop0 program_counter0 system_retaddr_i", false,-1, 31,0);
        tracep->declBit(c+90,"soc_top coretop0 program_counter0 system_ret_i", false,-1);
        tracep->declBus(c+30,"soc_top coretop0 program_counter0 pc_o", false,-1, 31,0);
        tracep->declBit(c+327,"soc_top coretop0 inst_fetch0 clk_i", false,-1);
        tracep->declBit(c+328,"soc_top coretop0 inst_fetch0 rst_i", false,-1);
        tracep->declBit(c+92,"soc_top coretop0 inst_fetch0 stall_i", false,-1);
        tracep->declBit(c+94,"soc_top coretop0 inst_fetch0 flush_i", false,-1);
        tracep->declBus(c+330,"soc_top coretop0 inst_fetch0 inst_i", false,-1, 31,0);
        tracep->declBus(c+30,"soc_top coretop0 inst_fetch0 pc_i", false,-1, 31,0);
        tracep->declBus(c+99,"soc_top coretop0 inst_fetch0 pc_o", false,-1, 31,0);
        tracep->declBus(c+98,"soc_top coretop0 inst_fetch0 inst_o", false,-1, 31,0);
        tracep->declBit(c+327,"soc_top coretop0 csrflie0 clk_i", false,-1);
        tracep->declBit(c+328,"soc_top coretop0 csrflie0 rst_i", false,-1);
        tracep->declBit(c+32,"soc_top coretop0 csrflie0 timer_irq_i", false,-1);
        tracep->declBit(c+31,"soc_top coretop0 csrflie0 software_irq_i", false,-1);
        tracep->declBit(c+337,"soc_top coretop0 csrflie0 external_irq_i", false,-1);
        tracep->declBus(c+104,"soc_top coretop0 csrflie0 csr_raddr_i", false,-1, 11,0);
        tracep->declBus(c+131,"soc_top coretop0 csrflie0 mempc_i", false,-1, 31,0);
        tracep->declBit(c+90,"soc_top coretop0 csrflie0 system_ret_i", false,-1);
        tracep->declBus(c+141,"soc_top coretop0 csrflie0 exception_i", false,-1, 31,0);
        tracep->declBus(c+142,"soc_top coretop0 csrflie0 exceptionpc_i", false,-1, 31,0);
        tracep->declBit(c+154,"soc_top coretop0 csrflie0 csr_we_i", false,-1);
        tracep->declBus(c+152,"soc_top coretop0 csrflie0 csr_waddr_i", false,-1, 11,0);
        tracep->declBus(c+153,"soc_top coretop0 csrflie0 csr_wdata_i", false,-1, 31,0);
        tracep->declBus(c+105,"soc_top coretop0 csrflie0 csr_rdata_o", false,-1, 31,0);
        tracep->declBus(c+87,"soc_top coretop0 csrflie0 trap_entry_o", false,-1, 31,0);
        tracep->declBit(c+88,"soc_top coretop0 csrflie0 trap_taken_o", false,-1);
        tracep->declBus(c+89,"soc_top coretop0 csrflie0 system_retaddr_o", false,-1, 31,0);
        tracep->declBit(c+90,"soc_top coretop0 csrflie0 system_ret_o", false,-1);
        tracep->declBus(c+353,"soc_top coretop0 csrflie0 mvendorid", false,-1, 31,0);
        tracep->declBus(c+353,"soc_top coretop0 csrflie0 marchid", false,-1, 31,0);
        tracep->declBus(c+353,"soc_top coretop0 csrflie0 mimpid", false,-1, 31,0);
        tracep->declBus(c+353,"soc_top coretop0 csrflie0 mhartid", false,-1, 31,0);
        tracep->declBus(c+354,"soc_top coretop0 csrflie0 misa", false,-1, 31,0);
        tracep->declBus(c+355,"soc_top coretop0 csrflie0 mxl", false,-1, 1,0);
        tracep->declBus(c+356,"soc_top coretop0 csrflie0 mextensions", false,-1, 25,0);
        tracep->declBus(c+155,"soc_top coretop0 csrflie0 mstatus", false,-1, 31,0);
        tracep->declBus(c+156,"soc_top coretop0 csrflie0 mip", false,-1, 31,0);
        tracep->declBus(c+157,"soc_top coretop0 csrflie0 mie", false,-1, 31,0);
        tracep->declBus(c+158,"soc_top coretop0 csrflie0 mtvec", false,-1, 31,0);
        tracep->declBus(c+159,"soc_top coretop0 csrflie0 mcounteren", false,-1, 31,0);
        tracep->declBus(c+160,"soc_top coretop0 csrflie0 mscratch", false,-1, 31,0);
        tracep->declBus(c+89,"soc_top coretop0 csrflie0 mepc", false,-1, 31,0);
        tracep->declBus(c+161,"soc_top coretop0 csrflie0 mcause", false,-1, 31,0);
        tracep->declBus(c+162,"soc_top coretop0 csrflie0 mtval", false,-1, 31,0);
        tracep->declQuad(c+163,"soc_top coretop0 csrflie0 mcycle", false,-1, 63,0);
        tracep->declBus(c+165,"soc_top coretop0 csrflie0 interrupt_cause", false,-1, 31,0);
        tracep->declBus(c+87,"soc_top coretop0 csrflie0 trap_entry", false,-1, 31,0);
        tracep->declBit(c+88,"soc_top coretop0 csrflie0 trap_taken", false,-1);
        tracep->declBus(c+166,"soc_top coretop0 csrflie0 mtvec_base", false,-1, 31,0);
        tracep->declBit(c+327,"soc_top coretop0 decode0 clk_i", false,-1);
        tracep->declBit(c+328,"soc_top coretop0 decode0 rst_i", false,-1);
        tracep->declBus(c+99,"soc_top coretop0 decode0 pc_i", false,-1, 31,0);
        tracep->declBus(c+98,"soc_top coretop0 decode0 inst_i", false,-1, 31,0);
        tracep->declBus(c+100,"soc_top coretop0 decode0 reg_data1_i", false,-1, 31,0);
        tracep->declBus(c+101,"soc_top coretop0 decode0 reg_data2_i", false,-1, 31,0);
        tracep->declBus(c+105,"soc_top coretop0 decode0 csr_data_i", false,-1, 31,0);
        tracep->declBit(c+95,"soc_top coretop0 decode0 flush_i", false,-1);
        tracep->declBit(c+93,"soc_top coretop0 decode0 stall_i", false,-1);
        tracep->declBus(c+102,"soc_top coretop0 decode0 rs1_addr_o", false,-1, 4,0);
        tracep->declBus(c+103,"soc_top coretop0 decode0 rs2_addr_o", false,-1, 4,0);
        tracep->declBus(c+104,"soc_top coretop0 decode0 csr_addr_o", false,-1, 11,0);
        tracep->declBus(c+106,"soc_top coretop0 decode0 pc_o", false,-1, 31,0);
        tracep->declBus(c+107,"soc_top coretop0 decode0 imm_o", false,-1, 31,0);
        tracep->declBus(c+108,"soc_top coretop0 decode0 rd_addr_o", false,-1, 4,0);
        tracep->declBit(c+109,"soc_top coretop0 decode0 rd_we_o", false,-1);
        tracep->declBus(c+111,"soc_top coretop0 decode0 opfunc3_o", false,-1, 2,0);
        tracep->declBus(c+110,"soc_top coretop0 decode0 optype_o", false,-1, 2,0);
        tracep->declBit(c+112,"soc_top coretop0 decode0 shiftsel_o", false,-1);
        tracep->declBit(c+113,"soc_top coretop0 decode0 addsubsel_o", false,-1);
        tracep->declBit(c+114,"soc_top coretop0 decode0 typesel_o", false,-1);
        tracep->declBit(c+116,"soc_top coretop0 decode0 mem_re_o", false,-1);
        tracep->declBit(c+115,"soc_top coretop0 decode0 mem_we_o", false,-1);
        tracep->declBit(c+117,"soc_top coretop0 decode0 csr_we_o", false,-1);
        tracep->declBit(c+118,"soc_top coretop0 decode0 system_ret_o", false,-1);
        tracep->declBus(c+119,"soc_top coretop0 decode0 exception_o", false,-1, 31,0);
        tracep->declBus(c+120,"soc_top coretop0 decode0 exceptionpc_o", false,-1, 31,0);
        tracep->declBus(c+121,"soc_top coretop0 decode0 rs1_o", false,-1, 31,0);
        tracep->declBus(c+122,"soc_top coretop0 decode0 rs2_o", false,-1, 31,0);
        tracep->declBus(c+123,"soc_top coretop0 decode0 fwd_raddr1_o", false,-1, 4,0);
        tracep->declBus(c+124,"soc_top coretop0 decode0 fwd_raddr2_o", false,-1, 4,0);
        tracep->declBus(c+125,"soc_top coretop0 decode0 fwd_csr_addr_o", false,-1, 11,0);
        tracep->declBus(c+126,"soc_top coretop0 decode0 fwd_csr_data_o", false,-1, 31,0);
        tracep->declBit(c+127,"soc_top coretop0 decode0 loaduse_hazard_o", false,-1);
        tracep->declBus(c+98,"soc_top coretop0 decode0 rv32inst", false,-1, 31,0);
        tracep->declBus(c+167,"soc_top coretop0 decode0 opcode", false,-1, 6,0);
        tracep->declBus(c+168,"soc_top coretop0 decode0 opfunc3", false,-1, 2,0);
        tracep->declBus(c+169,"soc_top coretop0 decode0 opfunc7", false,-1, 6,0);
        tracep->declBus(c+170,"soc_top coretop0 decode0 rd_addr", false,-1, 4,0);
        tracep->declBus(c+171,"soc_top coretop0 decode0 optype", false,-1, 2,0);
        tracep->declBit(c+172,"soc_top coretop0 decode0 mem_re", false,-1);
        tracep->declBit(c+173,"soc_top coretop0 decode0 mem_we", false,-1);
        tracep->declBit(c+174,"soc_top coretop0 decode0 reg_we", false,-1);
        tracep->declBit(c+175,"soc_top coretop0 decode0 csr_we", false,-1);
        tracep->declBus(c+176,"soc_top coretop0 decode0 immI", false,-1, 31,0);
        tracep->declBus(c+177,"soc_top coretop0 decode0 immL", false,-1, 31,0);
        tracep->declBus(c+178,"soc_top coretop0 decode0 immS", false,-1, 31,0);
        tracep->declBus(c+179,"soc_top coretop0 decode0 immU", false,-1, 31,0);
        tracep->declBus(c+180,"soc_top coretop0 decode0 immJ", false,-1, 31,0);
        tracep->declBus(c+181,"soc_top coretop0 decode0 immB", false,-1, 31,0);
        tracep->declBus(c+182,"soc_top coretop0 decode0 immCSR", false,-1, 31,0);
        tracep->declBit(c+183,"soc_top coretop0 decode0 Itype", false,-1);
        tracep->declBit(c+184,"soc_top coretop0 decode0 Rtype", false,-1);
        tracep->declBit(c+185,"soc_top coretop0 decode0 Mtype", false,-1);
        tracep->declBit(c+172,"soc_top coretop0 decode0 Ltype", false,-1);
        tracep->declBit(c+173,"soc_top coretop0 decode0 Stype", false,-1);
        tracep->declBit(c+186,"soc_top coretop0 decode0 LUItype", false,-1);
        tracep->declBit(c+187,"soc_top coretop0 decode0 AUPICtype", false,-1);
        tracep->declBit(c+188,"soc_top coretop0 decode0 JALtype", false,-1);
        tracep->declBit(c+189,"soc_top coretop0 decode0 JALRtype", false,-1);
        tracep->declBit(c+190,"soc_top coretop0 decode0 Btype", false,-1);
        tracep->declBit(c+175,"soc_top coretop0 decode0 CSRtype", false,-1);
        tracep->declBit(c+191,"soc_top coretop0 decode0 MRETtype", false,-1);
        tracep->declBit(c+192,"soc_top coretop0 decode0 ECALLtype", false,-1);
        tracep->declBit(c+193,"soc_top coretop0 decode0 shiftsel", false,-1);
        tracep->declBit(c+194,"soc_top coretop0 decode0 addsubsel", false,-1);
        tracep->declBit(c+195,"soc_top coretop0 decode0 typesel", false,-1);
        tracep->declBit(c+196,"soc_top coretop0 decode0 raddr1_thesame", false,-1);
        tracep->declBit(c+197,"soc_top coretop0 decode0 raddr2_thesame", false,-1);
        tracep->declBus(c+198,"soc_top coretop0 decode0 exception", false,-1, 31,0);
        tracep->declBus(c+199,"soc_top coretop0 decode0 imm", false,-1, 31,0);
        tracep->declBit(c+328,"soc_top coretop0 exe0 rst_i", false,-1);
        tracep->declBit(c+327,"soc_top coretop0 exe0 clk_i", false,-1);
        tracep->declBit(c+93,"soc_top coretop0 exe0 stall_i", false,-1);
        tracep->declBit(c+96,"soc_top coretop0 exe0 flush_i", false,-1);
        tracep->declBus(c+106,"soc_top coretop0 exe0 pc_i", false,-1, 31,0);
        tracep->declBus(c+107,"soc_top coretop0 exe0 imm_i", false,-1, 31,0);
        tracep->declBus(c+108,"soc_top coretop0 exe0 rd_addr_i", false,-1, 4,0);
        tracep->declBit(c+109,"soc_top coretop0 exe0 rd_we_i", false,-1);
        tracep->declBus(c+111,"soc_top coretop0 exe0 opfunc3_i", false,-1, 2,0);
        tracep->declBus(c+110,"soc_top coretop0 exe0 optype_i", false,-1, 2,0);
        tracep->declBit(c+112,"soc_top coretop0 exe0 shiftsel_i", false,-1);
        tracep->declBit(c+113,"soc_top coretop0 exe0 addsubsel_i", false,-1);
        tracep->declBit(c+114,"soc_top coretop0 exe0 typesel_i", false,-1);
        tracep->declBit(c+116,"soc_top coretop0 exe0 mem_re_i", false,-1);
        tracep->declBit(c+115,"soc_top coretop0 exe0 mem_we_i", false,-1);
        tracep->declBus(c+125,"soc_top coretop0 exe0 csr_addr_i", false,-1, 11,0);
        tracep->declBit(c+117,"soc_top coretop0 exe0 csr_we_i", false,-1);
        tracep->declBit(c+118,"soc_top coretop0 exe0 system_ret_i", false,-1);
        tracep->declBus(c+119,"soc_top coretop0 exe0 exception_i", false,-1, 31,0);
        tracep->declBus(c+120,"soc_top coretop0 exe0 exceptionpc_i", false,-1, 31,0);
        tracep->declBus(c+128,"soc_top coretop0 exe0 rs1_i", false,-1, 31,0);
        tracep->declBus(c+129,"soc_top coretop0 exe0 rs2_i", false,-1, 31,0);
        tracep->declBus(c+130,"soc_top coretop0 exe0 csr_data_i", false,-1, 31,0);
        tracep->declBus(c+131,"soc_top coretop0 exe0 pc_o", false,-1, 31,0);
        tracep->declBus(c+132,"soc_top coretop0 exe0 rd_addr_o", false,-1, 4,0);
        tracep->declBus(c+133,"soc_top coretop0 exe0 rd_data_o", false,-1, 31,0);
        tracep->declBit(c+134,"soc_top coretop0 exe0 rd_we_o", false,-1);
        tracep->declBus(c+135,"soc_top coretop0 exe0 mem_addr_o", false,-1, 31,0);
        tracep->declBit(c+136,"soc_top coretop0 exe0 mem_re_o", false,-1);
        tracep->declBit(c+83,"soc_top coretop0 exe0 mem_we_o", false,-1);
        tracep->declBus(c+137,"soc_top coretop0 exe0 opfunc3_o", false,-1, 2,0);
        tracep->declBus(c+139,"soc_top coretop0 exe0 csr_data_o", false,-1, 31,0);
        tracep->declBus(c+138,"soc_top coretop0 exe0 csr_addr_o", false,-1, 11,0);
        tracep->declBit(c+140,"soc_top coretop0 exe0 csr_we_o", false,-1);
        tracep->declBit(c+90,"soc_top coretop0 exe0 system_ret_o", false,-1);
        tracep->declBus(c+141,"soc_top coretop0 exe0 exception_o", false,-1, 31,0);
        tracep->declBus(c+142,"soc_top coretop0 exe0 exceptionpc_o", false,-1, 31,0);
        tracep->declBus(c+85,"soc_top coretop0 exe0 jump_addr_o", false,-1, 31,0);
        tracep->declBit(c+86,"soc_top coretop0 exe0 je_o", false,-1);
        tracep->declBit(c+93,"soc_top coretop0 exe0 mtype_stall_o", false,-1);
        tracep->declBus(c+200,"soc_top coretop0 exe0 op1", false,-1, 31,0);
        tracep->declBus(c+201,"soc_top coretop0 exe0 op2", false,-1, 31,0);
        tracep->declBus(c+202,"soc_top coretop0 exe0 op_result", false,-1, 31,0);
        tracep->declBus(c+203,"soc_top coretop0 exe0 mtypea", false,-1, 31,0);
        tracep->declBus(c+204,"soc_top coretop0 exe0 mtypeb", false,-1, 31,0);
        tracep->declBus(c+205,"soc_top coretop0 exe0 csr_data", false,-1, 31,0);
        tracep->declBit(c+206,"soc_top coretop0 exe0 csr_we", false,-1);
        tracep->declBus(c+207,"soc_top coretop0 exe0 mem_addr", false,-1, 31,0);
        tracep->declBus(c+208,"soc_top coretop0 exe0 divresult", false,-1, 31,0);
        tracep->declQuad(c+209,"soc_top coretop0 exe0 mulresult", false,-1, 63,0);
        tracep->declQuad(c+211,"soc_top coretop0 exe0 invertresult", false,-1, 63,0);
        tracep->declBit(c+213,"soc_top coretop0 exe0 mulstart", false,-1);
        tracep->declBit(c+214,"soc_top coretop0 exe0 divstart", false,-1);
        tracep->declBit(c+215,"soc_top coretop0 exe0 is_q_operation", false,-1);
        tracep->declBit(c+216,"soc_top coretop0 exe0 mulisdone", false,-1);
        tracep->declBit(c+217,"soc_top coretop0 exe0 divisdone", false,-1);
        tracep->declBit(c+218,"soc_top coretop0 exe0 is_b_zero", false,-1);
        tracep->declBit(c+327,"soc_top coretop0 exe0 mul0 clk_i", false,-1);
        tracep->declBit(c+328,"soc_top coretop0 exe0 mul0 rst_i", false,-1);
        tracep->declBit(c+213,"soc_top coretop0 exe0 mul0 start_i", false,-1);
        tracep->declBus(c+203,"soc_top coretop0 exe0 mul0 a_i", false,-1, 31,0);
        tracep->declBus(c+204,"soc_top coretop0 exe0 mul0 b_i", false,-1, 31,0);
        tracep->declQuad(c+209,"soc_top coretop0 exe0 mul0 mulresult_o", false,-1, 63,0);
        tracep->declBit(c+216,"soc_top coretop0 exe0 mul0 isdone_o", false,-1);
        tracep->declBit(c+219,"soc_top coretop0 exe0 mul0 is_a_zero", false,-1);
        tracep->declBit(c+220,"soc_top coretop0 exe0 mul0 is_b_zero", false,-1);
        tracep->declBus(c+203,"soc_top coretop0 exe0 mul0 op_a", false,-1, 31,0);
        tracep->declBus(c+204,"soc_top coretop0 exe0 mul0 op_b", false,-1, 31,0);
        tracep->declBit(c+221,"soc_top coretop0 exe0 mul0 is_calc_done", false,-1);
        tracep->declBus(c+222,"soc_top coretop0 exe0 mul0 reg32", false,-1, 31,0);
        tracep->declArray(c+223,"soc_top coretop0 exe0 mul0 result", false,-1, 64,0);
        tracep->declBus(c+226,"soc_top coretop0 exe0 mul0 cnt", false,-1, 5,0);
        tracep->declBus(c+357,"soc_top coretop0 exe0 mul0 S_IDLE", false,-1, 2,0);
        tracep->declBus(c+358,"soc_top coretop0 exe0 mul0 S_CALC", false,-1, 2,0);
        tracep->declBus(c+359,"soc_top coretop0 exe0 mul0 S_DONE", false,-1, 2,0);
        tracep->declBus(c+227,"soc_top coretop0 exe0 mul0 S", false,-1, 2,0);
        tracep->declBus(c+228,"soc_top coretop0 exe0 mul0 S_nxt", false,-1, 2,0);
        tracep->declBit(c+229,"soc_top coretop0 exe0 mul0 mul_add", false,-1);
        tracep->declBus(c+222,"soc_top coretop0 exe0 mul0 adder_opa", false,-1, 31,0);
        tracep->declBus(c+230,"soc_top coretop0 exe0 mul0 adder_opb", false,-1, 31,0);
        tracep->declQuad(c+231,"soc_top coretop0 exe0 mul0 adder_tmp", false,-1, 32,0);
        tracep->declArray(c+233,"soc_top coretop0 exe0 mul0 result_tmp", false,-1, 64,0);
        tracep->declBit(c+327,"soc_top coretop0 exe0 div0 clk_i", false,-1);
        tracep->declBit(c+328,"soc_top coretop0 exe0 div0 rst_i", false,-1);
        tracep->declBus(c+203,"soc_top coretop0 exe0 div0 a_i", false,-1, 31,0);
        tracep->declBus(c+204,"soc_top coretop0 exe0 div0 b_i", false,-1, 31,0);
        tracep->declBit(c+214,"soc_top coretop0 exe0 div0 start_i", false,-1);
        tracep->declBit(c+215,"soc_top coretop0 exe0 div0 is_q_i", false,-1);
        tracep->declBus(c+208,"soc_top coretop0 exe0 div0 divresult_o", false,-1, 31,0);
        tracep->declBit(c+217,"soc_top coretop0 exe0 div0 isdone_o", false,-1);
        tracep->declBit(c+236,"soc_top coretop0 exe0 div0 is_a_zero", false,-1);
        tracep->declBit(c+237,"soc_top coretop0 exe0 div0 is_b_zero", false,-1);
        tracep->declBus(c+203,"soc_top coretop0 exe0 div0 op_a", false,-1, 31,0);
        tracep->declBus(c+204,"soc_top coretop0 exe0 div0 op_b", false,-1, 31,0);
        tracep->declBit(c+238,"soc_top coretop0 exe0 div0 is_calc_done", false,-1);
        tracep->declBus(c+239,"soc_top coretop0 exe0 div0 reg32", false,-1, 31,0);
        tracep->declArray(c+240,"soc_top coretop0 exe0 div0 result", false,-1, 64,0);
        tracep->declBus(c+243,"soc_top coretop0 exe0 div0 cnt", false,-1, 5,0);
        tracep->declBus(c+244,"soc_top coretop0 exe0 div0 quotient", false,-1, 31,0);
        tracep->declBus(c+245,"soc_top coretop0 exe0 div0 remainder", false,-1, 31,0);
        tracep->declBus(c+357,"soc_top coretop0 exe0 div0 S_IDLE", false,-1, 2,0);
        tracep->declBus(c+358,"soc_top coretop0 exe0 div0 S_CALC", false,-1, 2,0);
        tracep->declBus(c+359,"soc_top coretop0 exe0 div0 S_DONE", false,-1, 2,0);
        tracep->declBus(c+246,"soc_top coretop0 exe0 div0 S", false,-1, 2,0);
        tracep->declBus(c+247,"soc_top coretop0 exe0 div0 S_next", false,-1, 2,0);
        tracep->declBit(c+248,"soc_top coretop0 exe0 div0 div_sub", false,-1);
        tracep->declQuad(c+249,"soc_top coretop0 exe0 div0 sub_tmp", false,-1, 32,0);
        tracep->declArray(c+251,"soc_top coretop0 exe0 div0 result_tmp", false,-1, 64,0);
        tracep->declBit(c+328,"soc_top coretop0 mem0 rst_i", false,-1);
        tracep->declBit(c+327,"soc_top coretop0 mem0 clk_i", false,-1);
        tracep->declBit(c+93,"soc_top coretop0 mem0 stall_i", false,-1);
        tracep->declBit(c+97,"soc_top coretop0 mem0 flush_i", false,-1);
        tracep->declBus(c+131,"soc_top coretop0 mem0 pc_i", false,-1, 31,0);
        tracep->declBus(c+132,"soc_top coretop0 mem0 rd_addr_i", false,-1, 4,0);
        tracep->declBus(c+133,"soc_top coretop0 mem0 rd_data_i", false,-1, 31,0);
        tracep->declBit(c+134,"soc_top coretop0 mem0 rd_we_i", false,-1);
        tracep->declBus(c+135,"soc_top coretop0 mem0 mem_addr_i", false,-1, 31,0);
        tracep->declBit(c+136,"soc_top coretop0 mem0 mem_re_i", false,-1);
        tracep->declBit(c+83,"soc_top coretop0 mem0 mem_we_i", false,-1);
        tracep->declBus(c+137,"soc_top coretop0 mem0 opfunc3_i", false,-1, 2,0);
        tracep->declBus(c+138,"soc_top coretop0 mem0 csr_addr_i", false,-1, 11,0);
        tracep->declBus(c+139,"soc_top coretop0 mem0 csr_data_i", false,-1, 31,0);
        tracep->declBit(c+140,"soc_top coretop0 mem0 csr_we_i", false,-1);
        tracep->declBit(c+90,"soc_top coretop0 mem0 system_ret_i", false,-1);
        tracep->declBus(c+141,"soc_top coretop0 mem0 exception_i", false,-1, 31,0);
        tracep->declBus(c+142,"soc_top coretop0 mem0 exceptionpc_i", false,-1, 31,0);
        tracep->declBus(c+324,"soc_top coretop0 mem0 ram_data_i", false,-1, 31,0);
        tracep->declBus(c+82,"soc_top coretop0 mem0 ram_addr_o", false,-1, 31,0);
        tracep->declBus(c+325,"soc_top coretop0 mem0 ram_data_o", false,-1, 31,0);
        tracep->declBit(c+83,"soc_top coretop0 mem0 ram_we_o", false,-1);
        tracep->declBit(c+136,"soc_top coretop0 mem0 ram_re_o", false,-1);
        tracep->declBus(c+143,"soc_top coretop0 mem0 rd_addr_o", false,-1, 4,0);
        tracep->declBus(c+144,"soc_top coretop0 mem0 rd_data_o", false,-1, 31,0);
        tracep->declBit(c+145,"soc_top coretop0 mem0 rd_we_o", false,-1);
        tracep->declBus(c+146,"soc_top coretop0 mem0 csr_addr_o", false,-1, 11,0);
        tracep->declBus(c+147,"soc_top coretop0 mem0 csr_data_o", false,-1, 31,0);
        tracep->declBit(c+148,"soc_top coretop0 mem0 csr_we_o", false,-1);
        tracep->declBus(c+131,"soc_top coretop0 mem0 pc_o", false,-1, 31,0);
        tracep->declBit(c+90,"soc_top coretop0 mem0 system_ret_o", false,-1);
        tracep->declBus(c+141,"soc_top coretop0 mem0 exception_o", false,-1, 31,0);
        tracep->declBus(c+142,"soc_top coretop0 mem0 exceptionpc_o", false,-1, 31,0);
        tracep->declBus(c+254,"soc_top coretop0 mem0 ram_addr_offset", false,-1, 1,0);
        tracep->declBus(c+326,"soc_top coretop0 mem0 rd_data", false,-1, 31,0);
        tracep->declBit(c+328,"soc_top coretop0 writeback0 rst_i", false,-1);
        tracep->declBit(c+327,"soc_top coretop0 writeback0 clk_i", false,-1);
        tracep->declBit(c+93,"soc_top coretop0 writeback0 stall_i", false,-1);
        tracep->declBus(c+143,"soc_top coretop0 writeback0 rd_addr_i", false,-1, 4,0);
        tracep->declBus(c+144,"soc_top coretop0 writeback0 rd_data_i", false,-1, 31,0);
        tracep->declBit(c+145,"soc_top coretop0 writeback0 rd_we_i", false,-1);
        tracep->declBus(c+146,"soc_top coretop0 writeback0 csr_addr_i", false,-1, 11,0);
        tracep->declBus(c+147,"soc_top coretop0 writeback0 csr_data_i", false,-1, 31,0);
        tracep->declBit(c+148,"soc_top coretop0 writeback0 csr_we_i", false,-1);
        tracep->declBus(c+149,"soc_top coretop0 writeback0 rd_addr_o", false,-1, 4,0);
        tracep->declBus(c+150,"soc_top coretop0 writeback0 rd_data_o", false,-1, 31,0);
        tracep->declBit(c+151,"soc_top coretop0 writeback0 rd_we_o", false,-1);
        tracep->declBus(c+152,"soc_top coretop0 writeback0 csr_addr_o", false,-1, 11,0);
        tracep->declBus(c+153,"soc_top coretop0 writeback0 csr_data_o", false,-1, 31,0);
        tracep->declBit(c+154,"soc_top coretop0 writeback0 csr_we_o", false,-1);
        tracep->declBus(c+123,"soc_top coretop0 forwarding0 rs1_addr_i", false,-1, 4,0);
        tracep->declBus(c+124,"soc_top coretop0 forwarding0 rs2_addr_i", false,-1, 4,0);
        tracep->declBus(c+121,"soc_top coretop0 forwarding0 rs1_data_i", false,-1, 31,0);
        tracep->declBus(c+122,"soc_top coretop0 forwarding0 rs2_data_i", false,-1, 31,0);
        tracep->declBus(c+125,"soc_top coretop0 forwarding0 csr_addr_i", false,-1, 11,0);
        tracep->declBus(c+126,"soc_top coretop0 forwarding0 csr_data_i", false,-1, 31,0);
        tracep->declBus(c+132,"soc_top coretop0 forwarding0 exe_rdaddr_i", false,-1, 4,0);
        tracep->declBus(c+133,"soc_top coretop0 forwarding0 exe_rddata_i", false,-1, 31,0);
        tracep->declBit(c+134,"soc_top coretop0 forwarding0 exe_rdwe", false,-1);
        tracep->declBus(c+138,"soc_top coretop0 forwarding0 exe_csraddr_i", false,-1, 11,0);
        tracep->declBus(c+139,"soc_top coretop0 forwarding0 exe_csrdata_i", false,-1, 31,0);
        tracep->declBit(c+140,"soc_top coretop0 forwarding0 exe_csrwe_i", false,-1);
        tracep->declBus(c+143,"soc_top coretop0 forwarding0 mem_rdaddr_i", false,-1, 4,0);
        tracep->declBus(c+144,"soc_top coretop0 forwarding0 mem_rddata_i", false,-1, 31,0);
        tracep->declBit(c+145,"soc_top coretop0 forwarding0 mem_rdwe", false,-1);
        tracep->declBus(c+146,"soc_top coretop0 forwarding0 mem_csraddr_i", false,-1, 11,0);
        tracep->declBus(c+147,"soc_top coretop0 forwarding0 mem_csrdata_i", false,-1, 31,0);
        tracep->declBit(c+148,"soc_top coretop0 forwarding0 mem_csrwe_i", false,-1);
        tracep->declBus(c+149,"soc_top coretop0 forwarding0 wb_rdaddr_i", false,-1, 4,0);
        tracep->declBus(c+150,"soc_top coretop0 forwarding0 wb_rddata_i", false,-1, 31,0);
        tracep->declBit(c+151,"soc_top coretop0 forwarding0 wb_rdwe", false,-1);
        tracep->declBus(c+152,"soc_top coretop0 forwarding0 wb_csraddr_i", false,-1, 11,0);
        tracep->declBus(c+153,"soc_top coretop0 forwarding0 wb_csrdata_i", false,-1, 31,0);
        tracep->declBit(c+154,"soc_top coretop0 forwarding0 wb_csrwe_i", false,-1);
        tracep->declBus(c+128,"soc_top coretop0 forwarding0 rs1_data_o", false,-1, 31,0);
        tracep->declBus(c+129,"soc_top coretop0 forwarding0 rs2_data_o", false,-1, 31,0);
        tracep->declBus(c+130,"soc_top coretop0 forwarding0 csr_data_o", false,-1, 31,0);
        tracep->declBit(c+255,"soc_top coretop0 forwarding0 exeid_addr1_same", false,-1);
        tracep->declBit(c+256,"soc_top coretop0 forwarding0 exeid_addr2_same", false,-1);
        tracep->declBit(c+257,"soc_top coretop0 forwarding0 exeid_csr_same", false,-1);
        tracep->declBit(c+258,"soc_top coretop0 forwarding0 exe_addr_not0", false,-1);
        tracep->declBit(c+259,"soc_top coretop0 forwarding0 memid_addr1_same", false,-1);
        tracep->declBit(c+260,"soc_top coretop0 forwarding0 memid_addr2_same", false,-1);
        tracep->declBit(c+261,"soc_top coretop0 forwarding0 memid_csr_same", false,-1);
        tracep->declBit(c+262,"soc_top coretop0 forwarding0 mem_addr_not0", false,-1);
        tracep->declBit(c+263,"soc_top coretop0 forwarding0 wbid_addr1_same", false,-1);
        tracep->declBit(c+264,"soc_top coretop0 forwarding0 wbid_addr2_same", false,-1);
        tracep->declBit(c+265,"soc_top coretop0 forwarding0 wbid_csr_same", false,-1);
        tracep->declBit(c+266,"soc_top coretop0 forwarding0 wb_addr_not0", false,-1);
        tracep->declBit(c+267,"soc_top coretop0 forwarding0 exedata1_forward", false,-1);
        tracep->declBit(c+268,"soc_top coretop0 forwarding0 exedata2_forward", false,-1);
        tracep->declBit(c+269,"soc_top coretop0 forwarding0 execsr_forward", false,-1);
        tracep->declBit(c+270,"soc_top coretop0 forwarding0 memdata1_forward", false,-1);
        tracep->declBit(c+271,"soc_top coretop0 forwarding0 memdata2_forward", false,-1);
        tracep->declBit(c+272,"soc_top coretop0 forwarding0 memcsr_forward", false,-1);
        tracep->declBit(c+273,"soc_top coretop0 forwarding0 wbdata1_forward", false,-1);
        tracep->declBit(c+274,"soc_top coretop0 forwarding0 wbdata2_forward", false,-1);
        tracep->declBit(c+275,"soc_top coretop0 forwarding0 wbcsr_forward", false,-1);
        tracep->declBit(c+328,"soc_top coretop0 regfiles0 rst_i", false,-1);
        tracep->declBit(c+327,"soc_top coretop0 regfiles0 clk_i", false,-1);
        tracep->declBus(c+102,"soc_top coretop0 regfiles0 rs1_addr_i", false,-1, 4,0);
        tracep->declBus(c+103,"soc_top coretop0 regfiles0 rs2_addr_i", false,-1, 4,0);
        tracep->declBus(c+149,"soc_top coretop0 regfiles0 rd_addr_i", false,-1, 4,0);
        tracep->declBus(c+150,"soc_top coretop0 regfiles0 rd_data_i", false,-1, 31,0);
        tracep->declBit(c+151,"soc_top coretop0 regfiles0 rd_we_i", false,-1);
        tracep->declBus(c+100,"soc_top coretop0 regfiles0 rs1_data_o", false,-1, 31,0);
        tracep->declBus(c+101,"soc_top coretop0 regfiles0 rs2_data_o", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+276+i*1,"soc_top coretop0 regfiles0 x", true,(i+0), 31,0);}}
        tracep->declBit(c+308,"soc_top coretop0 regfiles0 we", false,-1);
        tracep->declBus(c+309,"soc_top coretop0 regfiles0 i", false,-1, 31,0);
    }
}

void Vsoc_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vsoc_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vsoc_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vsoc_top___024root__traceRegister(Vsoc_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vsoc_top___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vsoc_top___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vsoc_top___024root__traceCleanup, vlSelf);
    }
}

void Vsoc_top___024root__traceFullSub0(Vsoc_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vsoc_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vsoc_top___024root* const __restrict vlSelf = static_cast<Vsoc_top___024root*>(voidSelf);
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vsoc_top___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vsoc_top___024root__traceFullSub0(Vsoc_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp1;
    VlWide<3>/*95:0*/ __Vtemp2;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSymsp->TOP__soc_top.__PVT__cfg_device_addr_base[0]),32);
        tracep->fullIData(oldp+2,(vlSymsp->TOP__soc_top.__PVT__cfg_device_addr_base[1]),32);
        tracep->fullIData(oldp+3,(vlSymsp->TOP__soc_top.__PVT__cfg_device_addr_base[2]),32);
        tracep->fullIData(oldp+4,(vlSymsp->TOP__soc_top.__PVT__cfg_device_addr_mask[0]),32);
        tracep->fullIData(oldp+5,(vlSymsp->TOP__soc_top.__PVT__cfg_device_addr_mask[1]),32);
        tracep->fullIData(oldp+6,(vlSymsp->TOP__soc_top.__PVT__cfg_device_addr_mask[2]),32);
        tracep->fullIData(oldp+7,(vlSymsp->TOP__soc_top.__Vcellinp__u_bus__cfg_device_addr_base[0]),32);
        tracep->fullIData(oldp+8,(vlSymsp->TOP__soc_top.__Vcellinp__u_bus__cfg_device_addr_base[1]),32);
        tracep->fullIData(oldp+9,(vlSymsp->TOP__soc_top.__Vcellinp__u_bus__cfg_device_addr_base[2]),32);
        tracep->fullIData(oldp+10,(vlSymsp->TOP__soc_top.__Vcellinp__u_bus__cfg_device_addr_mask[0]),32);
        tracep->fullIData(oldp+11,(vlSymsp->TOP__soc_top.__Vcellinp__u_bus__cfg_device_addr_mask[1]),32);
        tracep->fullIData(oldp+12,(vlSymsp->TOP__soc_top.__Vcellinp__u_bus__cfg_device_addr_mask[2]),32);
        tracep->fullBit(oldp+13,(vlSymsp->TOP__soc_top.__PVT__halt_from_console));
        tracep->fullBit(oldp+14,(vlSymsp->TOP__soc_top.__PVT__host_req[0]));
        tracep->fullBit(oldp+15,(vlSymsp->TOP__soc_top.__PVT__host_gnt[0]));
        tracep->fullIData(oldp+16,(vlSymsp->TOP__soc_top.__PVT__host_addr[0]),32);
        tracep->fullBit(oldp+17,(vlSymsp->TOP__soc_top.__PVT__host_we[0]));
        tracep->fullBit(oldp+18,(vlSymsp->TOP__soc_top.__PVT__device_req[0]));
        tracep->fullBit(oldp+19,(vlSymsp->TOP__soc_top.__PVT__device_req[1]));
        tracep->fullBit(oldp+20,(vlSymsp->TOP__soc_top.__PVT__device_req[2]));
        tracep->fullIData(oldp+21,(vlSymsp->TOP__soc_top.__PVT__device_addr[0]),32);
        tracep->fullIData(oldp+22,(vlSymsp->TOP__soc_top.__PVT__device_addr[1]),32);
        tracep->fullIData(oldp+23,(vlSymsp->TOP__soc_top.__PVT__device_addr[2]),32);
        tracep->fullIData(oldp+24,(vlSymsp->TOP__soc_top.__PVT__device_rdata[0]),32);
        tracep->fullIData(oldp+25,(vlSymsp->TOP__soc_top.__PVT__device_rdata[1]),32);
        tracep->fullIData(oldp+26,(vlSymsp->TOP__soc_top.__PVT__device_rdata[2]),32);
        tracep->fullBit(oldp+27,(vlSymsp->TOP__soc_top.__PVT__device_we[0]));
        tracep->fullBit(oldp+28,(vlSymsp->TOP__soc_top.__PVT__device_we[1]));
        tracep->fullBit(oldp+29,(vlSymsp->TOP__soc_top.__PVT__device_we[2]));
        tracep->fullIData(oldp+30,(vlSymsp->TOP__soc_top__coretop0.__PVT__pc_wire),32);
        tracep->fullBit(oldp+31,((0U != vlSymsp->TOP__soc_top.__PVT__clint0__DOT__msip)));
        tracep->fullBit(oldp+32,(vlSymsp->TOP__soc_top.__PVT__clint_timer_irq));
        tracep->fullBit(oldp+33,(vlSymsp->TOP__soc_top.__Vcellinp__u_bus__host_req_i[0]));
        tracep->fullIData(oldp+34,(vlSymsp->TOP__soc_top.__Vcellinp__u_bus__host_addr_i[0]),32);
        tracep->fullBit(oldp+35,(vlSymsp->TOP__soc_top.__Vcellinp__u_bus__host_we_i[0]));
        tracep->fullBit(oldp+36,(vlSymsp->TOP__soc_top.__Vcellout__u_bus__host_gnt_o[0]));
        tracep->fullIData(oldp+37,(vlSymsp->TOP__soc_top.__Vcellinp__u_bus__device_rdata_i[0]),32);
        tracep->fullIData(oldp+38,(vlSymsp->TOP__soc_top.__Vcellinp__u_bus__device_rdata_i[1]),32);
        tracep->fullIData(oldp+39,(vlSymsp->TOP__soc_top.__Vcellinp__u_bus__device_rdata_i[2]),32);
        tracep->fullBit(oldp+40,(vlSymsp->TOP__soc_top.__Vcellout__u_bus__device_req_o[0]));
        tracep->fullBit(oldp+41,(vlSymsp->TOP__soc_top.__Vcellout__u_bus__device_req_o[1]));
        tracep->fullBit(oldp+42,(vlSymsp->TOP__soc_top.__Vcellout__u_bus__device_req_o[2]));
        tracep->fullIData(oldp+43,(vlSymsp->TOP__soc_top.__Vcellout__u_bus__device_addr_o[0]),32);
        tracep->fullIData(oldp+44,(vlSymsp->TOP__soc_top.__Vcellout__u_bus__device_addr_o[1]),32);
        tracep->fullIData(oldp+45,(vlSymsp->TOP__soc_top.__Vcellout__u_bus__device_addr_o[2]),32);
        tracep->fullBit(oldp+46,(vlSymsp->TOP__soc_top.__Vcellout__u_bus__device_we_o[0]));
        tracep->fullBit(oldp+47,(vlSymsp->TOP__soc_top.__Vcellout__u_bus__device_we_o[1]));
        tracep->fullBit(oldp+48,(vlSymsp->TOP__soc_top.__Vcellout__u_bus__device_we_o[2]));
        tracep->fullBit(oldp+49,(vlSymsp->TOP__soc_top.__PVT__u_bus__DOT__host_sel_req));
        tracep->fullCData(oldp+50,(vlSymsp->TOP__soc_top.__PVT__u_bus__DOT__device_sel_req),2);
        tracep->fullBit(oldp+51,(vlSymsp->TOP__soc_top.__PVT__device_req
                                 [1U]));
        tracep->fullBit(oldp+52,(vlSymsp->TOP__soc_top.__PVT__device_we
                                 [1U]));
        tracep->fullIData(oldp+53,(vlSymsp->TOP__soc_top.__PVT__device_addr
                                   [1U]),32);
        tracep->fullCData(oldp+54,((0xffU & vlSymsp->TOP__soc_top.__PVT__device_addr
                                    [1U])),8);
        tracep->fullCData(oldp+55,(vlSymsp->TOP__soc_top.__PVT__console0__DOT__sim_finish),3);
        tracep->fullIData(oldp+56,(vlSymsp->TOP__soc_top.__PVT__console0__DOT__log_fd),32);
        tracep->fullBit(oldp+57,(vlSymsp->TOP__soc_top.__PVT__device_req
                                 [2U]));
        tracep->fullBit(oldp+58,(vlSymsp->TOP__soc_top.__PVT__device_we
                                 [2U]));
        tracep->fullIData(oldp+59,(vlSymsp->TOP__soc_top.__PVT__device_addr
                                   [2U]),32);
        tracep->fullIData(oldp+60,(vlSymsp->TOP__soc_top.__Vcellout__clint0__data_o),32);
        tracep->fullSData(oldp+61,((0xffffU & vlSymsp->TOP__soc_top.__PVT__device_addr
                                    [2U])),16);
        tracep->fullIData(oldp+62,(vlSymsp->TOP__soc_top.__PVT__clint0__DOT__mtime_reg[0]),32);
        tracep->fullIData(oldp+63,(vlSymsp->TOP__soc_top.__PVT__clint0__DOT__mtime_reg[1]),32);
        tracep->fullIData(oldp+64,(vlSymsp->TOP__soc_top.__PVT__clint0__DOT__mtimecmp_reg[0]),32);
        tracep->fullIData(oldp+65,(vlSymsp->TOP__soc_top.__PVT__clint0__DOT__mtimecmp_reg[1]),32);
        tracep->fullIData(oldp+66,(vlSymsp->TOP__soc_top.__PVT__clint0__DOT__msip),32);
        tracep->fullQData(oldp+67,((((QData)((IData)(
                                                     vlSymsp->TOP__soc_top.__PVT__clint0__DOT__mtime_reg
                                                     [1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSymsp->TOP__soc_top.__PVT__clint0__DOT__mtime_reg
                                                                 [0U])))),64);
        tracep->fullQData(oldp+69,(vlSymsp->TOP__soc_top.__PVT__clint0__DOT__mtimecmp),64);
        tracep->fullBit(oldp+71,((0U == (0xffffU & 
                                         vlSymsp->TOP__soc_top.__PVT__device_addr
                                         [2U]))));
        tracep->fullBit(oldp+72,((0xbff8U == (0xffffU 
                                              & vlSymsp->TOP__soc_top.__PVT__device_addr
                                              [2U]))));
        tracep->fullBit(oldp+73,((0xbffcU == (0xffffU 
                                              & vlSymsp->TOP__soc_top.__PVT__device_addr
                                              [2U]))));
        tracep->fullBit(oldp+74,((0x4000U == (0xffffU 
                                              & vlSymsp->TOP__soc_top.__PVT__device_addr
                                              [2U]))));
        tracep->fullBit(oldp+75,((0x4004U == (0xffffU 
                                              & vlSymsp->TOP__soc_top.__PVT__device_addr
                                              [2U]))));
        tracep->fullBit(oldp+76,((0xffffffffU == vlSymsp->TOP__soc_top.__PVT__clint0__DOT__mtime_reg
                                  [0U])));
        tracep->fullIData(oldp+77,(vlSymsp->TOP__soc_top.__PVT__device_addr
                                   [0U]),32);
        tracep->fullBit(oldp+78,(vlSymsp->TOP__soc_top.__PVT__device_we
                                 [0U]));
        tracep->fullBit(oldp+79,(vlSymsp->TOP__soc_top.__PVT__device_req
                                 [0U]));
        tracep->fullIData(oldp+80,((0x1ffffcU & vlSymsp->TOP__soc_top__coretop0.__PVT__pc_wire)),21);
        tracep->fullIData(oldp+81,((0x1ffffcU & vlSymsp->TOP__soc_top.__PVT__device_addr
                                    [0U])),21);
        tracep->fullIData(oldp+82,(vlSymsp->TOP__soc_top__coretop0.__PVT__memrom_ramaddr),32);
        tracep->fullBit(oldp+83,(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_memwe));
        tracep->fullBit(oldp+84,(((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_memre) 
                                  | (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_memwe))));
        tracep->fullIData(oldp+85,(vlSymsp->TOP__soc_top__coretop0.__PVT__exepipe_jumpaddr),32);
        tracep->fullBit(oldp+86,(vlSymsp->TOP__soc_top__coretop0.__PVT__exepipe_je));
        tracep->fullIData(oldp+87,(vlSymsp->TOP__soc_top__coretop0.__PVT__csrflie0__DOT__trap_entry),32);
        tracep->fullBit(oldp+88,(vlSymsp->TOP__soc_top__coretop0.__PVT__csrflie0__DOT__trap_taken));
        tracep->fullIData(oldp+89,(vlSymsp->TOP__soc_top__coretop0.__PVT__csrflie0__DOT__mepc),32);
        tracep->fullBit(oldp+90,(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_system_ret));
        tracep->fullBit(oldp+91,(((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idpipectrl_loadusehazard) 
                                  | (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exepipe_stall))));
        tracep->fullBit(oldp+92,(vlSymsp->TOP__soc_top__coretop0.__PVT__pipectrl_stallif));
        tracep->fullBit(oldp+93,(vlSymsp->TOP__soc_top__coretop0.__PVT__exepipe_stall));
        tracep->fullBit(oldp+94,(vlSymsp->TOP__soc_top__coretop0.__PVT__pipectrl_flushif));
        tracep->fullBit(oldp+95,(vlSymsp->TOP__soc_top__coretop0.__PVT__pipectrl_flushid));
        tracep->fullBit(oldp+96,(vlSymsp->TOP__soc_top__coretop0.__PVT__pipectrl_flushexe));
        tracep->fullBit(oldp+97,(vlSymsp->TOP__soc_top__coretop0.__PVT__pipectrl_flushmem));
        tracep->fullIData(oldp+98,(vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst),32);
        tracep->fullIData(oldp+99,(vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_pc),32);
        tracep->fullIData(oldp+100,((((IData)(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__we) 
                                      & ((0x1fU & (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                                   >> 0xfU)) 
                                         == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__wbreg_rdaddr)))
                                      ? vlSymsp->TOP__soc_top__coretop0.__PVT__wbreg_rddata
                                      : vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x
                                     [(0x1fU & (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                                >> 0xfU))])),32);
        tracep->fullIData(oldp+101,((((IData)(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__we) 
                                      & ((0x1fU & (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                                   >> 0x14U)) 
                                         == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__wbreg_rdaddr)))
                                      ? vlSymsp->TOP__soc_top__coretop0.__PVT__wbreg_rddata
                                      : vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x
                                     [(0x1fU & (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                                >> 0x14U))])),32);
        tracep->fullCData(oldp+102,((0x1fU & (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+103,((0x1fU & (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                              >> 0x14U))),5);
        tracep->fullSData(oldp+104,((vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                     >> 0x14U)),12);
        tracep->fullIData(oldp+105,(vlSymsp->TOP__soc_top__coretop0.__PVT__csrid_data),32);
        tracep->fullIData(oldp+106,(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_pc),32);
        tracep->fullIData(oldp+107,(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_imm),32);
        tracep->fullCData(oldp+108,(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_rdaddr),5);
        tracep->fullBit(oldp+109,(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_we));
        tracep->fullCData(oldp+110,(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_optype),3);
        tracep->fullCData(oldp+111,(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_opfunc3),3);
        tracep->fullBit(oldp+112,(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_shiftsel));
        tracep->fullBit(oldp+113,(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_addsubsel));
        tracep->fullBit(oldp+114,(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_typesel));
        tracep->fullBit(oldp+115,(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_memwe));
        tracep->fullBit(oldp+116,(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_memre));
        tracep->fullBit(oldp+117,(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_csrwe));
        tracep->fullBit(oldp+118,(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_system_ret));
        tracep->fullIData(oldp+119,(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_exception),32);
        tracep->fullIData(oldp+120,(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_exceptionpc),32);
        tracep->fullIData(oldp+121,(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_rs1),32);
        tracep->fullIData(oldp+122,(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_rs2),32);
        tracep->fullCData(oldp+123,(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_addr1),5);
        tracep->fullCData(oldp+124,(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_addr2),5);
        tracep->fullSData(oldp+125,(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_csraddr),12);
        tracep->fullIData(oldp+126,(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_csrdata),32);
        tracep->fullBit(oldp+127,(vlSymsp->TOP__soc_top__coretop0.__PVT__idpipectrl_loadusehazard));
        tracep->fullIData(oldp+128,(vlSymsp->TOP__soc_top__coretop0.__PVT__fwdexe_rs1),32);
        tracep->fullIData(oldp+129,(vlSymsp->TOP__soc_top__coretop0.__PVT__fwdexe_rs2),32);
        tracep->fullIData(oldp+130,(vlSymsp->TOP__soc_top__coretop0.__PVT__fwdexe_csrdata),32);
        tracep->fullIData(oldp+131,(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_pc),32);
        tracep->fullCData(oldp+132,(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_rdaddr),5);
        tracep->fullIData(oldp+133,(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_rddata),32);
        tracep->fullBit(oldp+134,(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_we));
        tracep->fullIData(oldp+135,(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_memaddr),32);
        tracep->fullBit(oldp+136,(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_memre));
        tracep->fullCData(oldp+137,(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_opfunc3),3);
        tracep->fullSData(oldp+138,(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_csraddr),12);
        tracep->fullIData(oldp+139,(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_csrdata),32);
        tracep->fullBit(oldp+140,(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_csrwe));
        tracep->fullIData(oldp+141,(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_exception),32);
        tracep->fullIData(oldp+142,(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_exceptionpc),32);
        tracep->fullCData(oldp+143,(vlSymsp->TOP__soc_top__coretop0.__PVT__memwb_rdaddr),5);
        tracep->fullIData(oldp+144,(vlSymsp->TOP__soc_top__coretop0.__PVT__memwb_rddata),32);
        tracep->fullBit(oldp+145,(vlSymsp->TOP__soc_top__coretop0.__PVT__memwb_we));
        tracep->fullSData(oldp+146,(vlSymsp->TOP__soc_top__coretop0.__PVT__memwb_csraddr),12);
        tracep->fullIData(oldp+147,(vlSymsp->TOP__soc_top__coretop0.__PVT__memwb_csrdata),32);
        tracep->fullBit(oldp+148,(vlSymsp->TOP__soc_top__coretop0.__PVT__memwb_csrwe));
        tracep->fullCData(oldp+149,(vlSymsp->TOP__soc_top__coretop0.__PVT__wbreg_rdaddr),5);
        tracep->fullIData(oldp+150,(vlSymsp->TOP__soc_top__coretop0.__PVT__wbreg_rddata),32);
        tracep->fullBit(oldp+151,(vlSymsp->TOP__soc_top__coretop0.__PVT__wbreg_we));
        tracep->fullSData(oldp+152,(vlSymsp->TOP__soc_top__coretop0.__PVT__wbcsr_csraddr),12);
        tracep->fullIData(oldp+153,(vlSymsp->TOP__soc_top__coretop0.__PVT__wbcsr_csrdata),32);
        tracep->fullBit(oldp+154,(vlSymsp->TOP__soc_top__coretop0.__PVT__wbcsr_csrwe));
        tracep->fullIData(oldp+155,(vlSymsp->TOP__soc_top__coretop0.__PVT__csrflie0__DOT__mstatus),32);
        tracep->fullIData(oldp+156,(vlSymsp->TOP__soc_top__coretop0.__PVT__csrflie0__DOT__mip),32);
        tracep->fullIData(oldp+157,(vlSymsp->TOP__soc_top__coretop0.__PVT__csrflie0__DOT__mie),32);
        tracep->fullIData(oldp+158,(vlSymsp->TOP__soc_top__coretop0.__PVT__csrflie0__DOT__mtvec),32);
        tracep->fullIData(oldp+159,(vlSymsp->TOP__soc_top__coretop0.__PVT__csrflie0__DOT__mcounteren),32);
        tracep->fullIData(oldp+160,(vlSymsp->TOP__soc_top__coretop0.__PVT__csrflie0__DOT__mscratch),32);
        tracep->fullIData(oldp+161,(vlSymsp->TOP__soc_top__coretop0.__PVT__csrflie0__DOT__mcause),32);
        tracep->fullIData(oldp+162,(vlSymsp->TOP__soc_top__coretop0.__PVT__csrflie0__DOT__mtval),32);
        tracep->fullQData(oldp+163,(vlSymsp->TOP__soc_top__coretop0.__PVT__csrflie0__DOT__mcycle),64);
        tracep->fullIData(oldp+165,(vlSymsp->TOP__soc_top__coretop0.__PVT__csrflie0__DOT__interrupt_cause),32);
        tracep->fullIData(oldp+166,((0xfffffffcU & vlSymsp->TOP__soc_top__coretop0.__PVT__csrflie0__DOT__mtvec)),32);
        tracep->fullCData(oldp+167,((0x7fU & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst)),7);
        tracep->fullCData(oldp+168,(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__opfunc3),3);
        tracep->fullCData(oldp+169,((vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+170,((0x1fU & (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                              >> 7U))),5);
        tracep->fullCData(oldp+171,(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__optype),3);
        tracep->fullBit(oldp+172,((3U == (0x7fU & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))));
        tracep->fullBit(oldp+173,((0x23U == (0x7fU 
                                             & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))));
        tracep->fullBit(oldp+174,((((((((((0x13U == 
                                           (0x7fU & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst)) 
                                          | (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__Rtype)) 
                                         | (3U == (0x7fU 
                                                   & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))) 
                                        | (0x37U == 
                                           (0x7fU & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))) 
                                       | (0x17U == 
                                          (0x7fU & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))) 
                                      | (0x6fU == (0x7fU 
                                                   & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))) 
                                     | (0x67U == (0x7fU 
                                                  & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))) 
                                    | (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__Mtype)) 
                                   | (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__CSRtype))));
        tracep->fullBit(oldp+175,(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__CSRtype));
        tracep->fullIData(oldp+176,(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__immI),32);
        tracep->fullIData(oldp+177,((((- (IData)((vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                                  >> 0x1fU))) 
                                      << 0xcU) | (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                                  >> 0x14U))),32);
        tracep->fullIData(oldp+178,((((- (IData)((vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                                  >> 0x1fU))) 
                                      << 0xcU) | ((0xfe0U 
                                                   & (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                                        >> 7U))))),32);
        tracep->fullIData(oldp+179,((0xfffff000U & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst)),32);
        tracep->fullIData(oldp+180,((((- (IData)((vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                                  >> 0x1fU))) 
                                      << 0x14U) | (
                                                   (0xff000U 
                                                    & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst) 
                                                   | ((0x800U 
                                                       & (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                                          >> 9U)) 
                                                      | (0x7feU 
                                                         & (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                                            >> 0x14U)))))),32);
        tracep->fullIData(oldp+181,((((- (IData)((vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                                  >> 0x1fU))) 
                                      << 0xcU) | ((0x800U 
                                                   & (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                                           >> 7U)))))),32);
        tracep->fullIData(oldp+182,((0x1fU & (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                              >> 0xfU))),32);
        tracep->fullBit(oldp+183,((0x13U == (0x7fU 
                                             & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))));
        tracep->fullBit(oldp+184,(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__Rtype));
        tracep->fullBit(oldp+185,(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__Mtype));
        tracep->fullBit(oldp+186,((0x37U == (0x7fU 
                                             & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))));
        tracep->fullBit(oldp+187,((0x17U == (0x7fU 
                                             & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))));
        tracep->fullBit(oldp+188,((0x6fU == (0x7fU 
                                             & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))));
        tracep->fullBit(oldp+189,((0x67U == (0x7fU 
                                             & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))));
        tracep->fullBit(oldp+190,((0x63U == (0x7fU 
                                             & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))));
        tracep->fullBit(oldp+191,(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__MRETtype));
        tracep->fullBit(oldp+192,((((0x73U == (0x7fU 
                                               & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst)) 
                                    & (0U == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__opfunc3))) 
                                   & (0U == (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                             >> 0x14U)))));
        tracep->fullBit(oldp+193,(((0x20U == (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                              >> 0x19U))
                                    ? 1U : 0U)));
        tracep->fullBit(oldp+194,((((0x33U == (0x7fU 
                                               & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst)) 
                                    & (0x20U == (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                                 >> 0x19U))) 
                                   & (0U == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__opfunc3)))));
        tracep->fullBit(oldp+195,((((0x6fU == (0x7fU 
                                               & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst)) 
                                    | (0x37U == (0x7fU 
                                                 & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst)))
                                    ? 1U : 0U)));
        tracep->fullBit(oldp+196,((((0x1fU & (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                              >> 0xfU)) 
                                    == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_rdaddr)) 
                                   & (((((((((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__Rtype) 
                                             | (0x23U 
                                                == 
                                                (0x7fU 
                                                 & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))) 
                                            | (0x63U 
                                               == (0x7fU 
                                                   & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))) 
                                           | (0x13U 
                                              == (0x7fU 
                                                  & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))) 
                                          | (3U == 
                                             (0x7fU 
                                              & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))) 
                                         | (0x67U == 
                                            (0x7fU 
                                             & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))) 
                                        | (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__CSRtype)) 
                                       | (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__MRETtype)) 
                                      | (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__Mtype)))));
        tracep->fullBit(oldp+197,((((0x1fU & (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                              >> 0x14U)) 
                                    == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_rdaddr)) 
                                   & ((((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__Rtype) 
                                        | (0x23U == 
                                           (0x7fU & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))) 
                                       | (0x63U == 
                                          (0x7fU & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst))) 
                                      | (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__Mtype)))));
        tracep->fullIData(oldp+198,(((((0x73U == (0x7fU 
                                                  & vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst)) 
                                       & (0U == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__opfunc3))) 
                                      & (0U == (vlSymsp->TOP__soc_top__coretop0.__PVT__ifid_inst 
                                                >> 0x14U)))
                                      ? 0xbU : 0U)),32);
        tracep->fullIData(oldp+199,(vlSymsp->TOP__soc_top__coretop0.__PVT__decode0__DOT__imm),32);
        tracep->fullIData(oldp+200,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__op1),32);
        tracep->fullIData(oldp+201,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__op2),32);
        tracep->fullIData(oldp+202,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__op_result),32);
        tracep->fullIData(oldp+203,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mtypea),32);
        tracep->fullIData(oldp+204,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mtypeb),32);
        tracep->fullIData(oldp+205,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__csr_data),32);
        tracep->fullBit(oldp+206,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__csr_we));
        tracep->fullIData(oldp+207,((((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_memre) 
                                      | (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_memwe))
                                      ? (vlSymsp->TOP__soc_top__coretop0.__PVT__fwdexe_rs1 
                                         + vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_imm)
                                      : 0U)),32);
        tracep->fullIData(oldp+208,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__divresult),32);
        tracep->fullQData(oldp+209,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mulresult),64);
        tracep->fullQData(oldp+211,((1ULL + (~ vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mulresult))),64);
        tracep->fullBit(oldp+213,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mulstart));
        tracep->fullBit(oldp+214,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__divstart));
        tracep->fullBit(oldp+215,(((5U == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_optype)) 
                                   & (~ ((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idexe_opfunc3) 
                                         >> 1U)))));
        tracep->fullBit(oldp+216,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mulisdone));
        tracep->fullBit(oldp+217,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__divisdone));
        tracep->fullBit(oldp+218,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSymsp->TOP__soc_top__coretop0.__PVT__fwdexe_rs2))))));
        tracep->fullBit(oldp+219,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mtypea))))));
        tracep->fullBit(oldp+220,((1U & (~ (IData)(
                                                   (0U 
                                                    != vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mtypeb))))));
        tracep->fullBit(oldp+221,((1U & (~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mul0__DOT__cnt)))))));
        tracep->fullIData(oldp+222,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mul0__DOT__reg32),32);
        tracep->fullWData(oldp+223,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mul0__DOT__result),65);
        tracep->fullCData(oldp+226,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mul0__DOT__cnt),6);
        tracep->fullCData(oldp+227,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mul0__DOT__S),3);
        tracep->fullCData(oldp+228,(((0U == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mul0__DOT__S))
                                      ? ((1U & ((~ (IData)(
                                                           (0U 
                                                            != vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mtypea))) 
                                                | (~ (IData)(
                                                             (0U 
                                                              != vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mtypeb)))))
                                          ? 3U : 1U)
                                      : ((1U == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mul0__DOT__S))
                                          ? ((0U != (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mul0__DOT__cnt))
                                              ? 1U : 3U)
                                          : 0U))),3);
        tracep->fullBit(oldp+229,((1U & vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mul0__DOT__result[0U])));
        tracep->fullIData(oldp+230,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mul0__DOT__result[1U]),32);
        tracep->fullQData(oldp+231,((0x1ffffffffULL 
                                     & ((QData)((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mul0__DOT__reg32)) 
                                        + (QData)((IData)(
                                                          vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mul0__DOT__result[1U]))))),33);
        __Vtemp1[0U] = vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mul0__DOT__result[0U];
        __Vtemp1[1U] = (IData)((0x1ffffffffULL & ((QData)((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mul0__DOT__reg32)) 
                                                  + (QData)((IData)(
                                                                    vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mul0__DOT__result[1U])))));
        __Vtemp1[2U] = (IData)(((0x1ffffffffULL & ((QData)((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mul0__DOT__reg32)) 
                                                   + (QData)((IData)(
                                                                     vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mul0__DOT__result[1U])))) 
                                >> 0x20U));
        tracep->fullWData(oldp+233,(__Vtemp1),65);
        tracep->fullBit(oldp+236,((0U == vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mtypea)));
        tracep->fullBit(oldp+237,((0U == vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mtypeb)));
        tracep->fullBit(oldp+238,((1U & (~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__cnt)))))));
        tracep->fullIData(oldp+239,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__reg32),32);
        tracep->fullWData(oldp+240,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__result),65);
        tracep->fullCData(oldp+243,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__cnt),6);
        tracep->fullIData(oldp+244,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__result[0U]),32);
        tracep->fullIData(oldp+245,(((vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__result[2U] 
                                      << 0x1fU) | (
                                                   vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__result[1U] 
                                                   >> 1U))),32);
        tracep->fullCData(oldp+246,(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__S),3);
        tracep->fullCData(oldp+247,(((0U == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__S))
                                      ? ((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__divstart)
                                          ? (((0U == vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mtypea) 
                                              | (0U 
                                                 == vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__mtypeb))
                                              ? 3U : 1U)
                                          : 0U) : (
                                                   (1U 
                                                    == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__S))
                                                    ? 
                                                   ((0U 
                                                     != (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__cnt))
                                                     ? 1U
                                                     : 3U)
                                                    : 0U))),3);
        tracep->fullBit(oldp+248,((vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__result[1U] 
                                   >= vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__reg32)));
        tracep->fullQData(oldp+249,((0x1ffffffffULL 
                                     & ((QData)((IData)(
                                                        vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__result[1U])) 
                                        - (QData)((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__reg32))))),33);
        __Vtemp2[0U] = vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__result[0U];
        __Vtemp2[1U] = (IData)((0x1ffffffffULL & ((QData)((IData)(
                                                                  vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__result[1U])) 
                                                  - (QData)((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__reg32)))));
        __Vtemp2[2U] = (IData)(((0x1ffffffffULL & ((QData)((IData)(
                                                                   vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__result[1U])) 
                                                   - (QData)((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exe0__DOT__div0__DOT__reg32)))) 
                                >> 0x20U));
        tracep->fullWData(oldp+251,(__Vtemp2),65);
        tracep->fullCData(oldp+254,((3U & vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_memaddr)),2);
        tracep->fullBit(oldp+255,(((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_addr1) 
                                   == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_rdaddr))));
        tracep->fullBit(oldp+256,(((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_addr2) 
                                   == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_rdaddr))));
        tracep->fullBit(oldp+257,(((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_csraddr) 
                                   == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_csraddr))));
        tracep->fullBit(oldp+258,((0U != (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_rdaddr))));
        tracep->fullBit(oldp+259,(((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_addr1) 
                                   == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__memwb_rdaddr))));
        tracep->fullBit(oldp+260,(((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_addr2) 
                                   == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__memwb_rdaddr))));
        tracep->fullBit(oldp+261,(((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_csraddr) 
                                   == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__memwb_csraddr))));
        tracep->fullBit(oldp+262,((0U != (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__memwb_rdaddr))));
        tracep->fullBit(oldp+263,(((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_addr1) 
                                   == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__wbreg_rdaddr))));
        tracep->fullBit(oldp+264,(((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_addr2) 
                                   == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__wbreg_rdaddr))));
        tracep->fullBit(oldp+265,(((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_csraddr) 
                                   == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__wbcsr_csraddr))));
        tracep->fullBit(oldp+266,((0U != (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__wbreg_rdaddr))));
        tracep->fullBit(oldp+267,((((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_we) 
                                    & (0U != (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_rdaddr))) 
                                   & ((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_addr1) 
                                      == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_rdaddr)))));
        tracep->fullBit(oldp+268,((((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_we) 
                                    & (0U != (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_rdaddr))) 
                                   & ((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_addr2) 
                                      == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_rdaddr)))));
        tracep->fullBit(oldp+269,(((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_csrwe) 
                                   & ((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_csraddr) 
                                      == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__exemem_csraddr)))));
        tracep->fullBit(oldp+270,((((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__memwb_we) 
                                    & (0U != (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__memwb_rdaddr))) 
                                   & ((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_addr1) 
                                      == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__memwb_rdaddr)))));
        tracep->fullBit(oldp+271,((((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__memwb_we) 
                                    & (0U != (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__memwb_rdaddr))) 
                                   & ((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_addr2) 
                                      == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__memwb_rdaddr)))));
        tracep->fullBit(oldp+272,(((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__memwb_csrwe) 
                                   & ((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_csraddr) 
                                      == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__memwb_csraddr)))));
        tracep->fullBit(oldp+273,((((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__wbreg_we) 
                                    & (0U != (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__wbreg_rdaddr))) 
                                   & ((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_addr1) 
                                      == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__wbreg_rdaddr)))));
        tracep->fullBit(oldp+274,((((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__wbreg_we) 
                                    & (0U != (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__wbreg_rdaddr))) 
                                   & ((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_addr2) 
                                      == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__wbreg_rdaddr)))));
        tracep->fullBit(oldp+275,(((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__wbcsr_csrwe) 
                                   & ((IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__idfwd_csraddr) 
                                      == (IData)(vlSymsp->TOP__soc_top__coretop0.__PVT__wbcsr_csraddr)))));
        tracep->fullIData(oldp+276,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[0]),32);
        tracep->fullIData(oldp+277,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[1]),32);
        tracep->fullIData(oldp+278,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[2]),32);
        tracep->fullIData(oldp+279,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[3]),32);
        tracep->fullIData(oldp+280,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[4]),32);
        tracep->fullIData(oldp+281,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[5]),32);
        tracep->fullIData(oldp+282,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[6]),32);
        tracep->fullIData(oldp+283,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[7]),32);
        tracep->fullIData(oldp+284,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[8]),32);
        tracep->fullIData(oldp+285,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[9]),32);
        tracep->fullIData(oldp+286,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[10]),32);
        tracep->fullIData(oldp+287,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[11]),32);
        tracep->fullIData(oldp+288,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[12]),32);
        tracep->fullIData(oldp+289,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[13]),32);
        tracep->fullIData(oldp+290,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[14]),32);
        tracep->fullIData(oldp+291,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[15]),32);
        tracep->fullIData(oldp+292,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[16]),32);
        tracep->fullIData(oldp+293,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[17]),32);
        tracep->fullIData(oldp+294,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[18]),32);
        tracep->fullIData(oldp+295,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[19]),32);
        tracep->fullIData(oldp+296,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[20]),32);
        tracep->fullIData(oldp+297,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[21]),32);
        tracep->fullIData(oldp+298,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[22]),32);
        tracep->fullIData(oldp+299,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[23]),32);
        tracep->fullIData(oldp+300,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[24]),32);
        tracep->fullIData(oldp+301,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[25]),32);
        tracep->fullIData(oldp+302,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[26]),32);
        tracep->fullIData(oldp+303,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[27]),32);
        tracep->fullIData(oldp+304,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[28]),32);
        tracep->fullIData(oldp+305,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[29]),32);
        tracep->fullIData(oldp+306,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[30]),32);
        tracep->fullIData(oldp+307,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__x[31]),32);
        tracep->fullBit(oldp+308,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__we));
        tracep->fullIData(oldp+309,(vlSymsp->TOP__soc_top__coretop0__regfiles0.__PVT__i),32);
        tracep->fullIData(oldp+310,(vlSymsp->TOP__soc_top.__PVT__host_wdata[0]),32);
        tracep->fullIData(oldp+311,(vlSymsp->TOP__soc_top.__PVT__host_rdata[0]),32);
        tracep->fullIData(oldp+312,(vlSymsp->TOP__soc_top.__PVT__device_wdata[0]),32);
        tracep->fullIData(oldp+313,(vlSymsp->TOP__soc_top.__PVT__device_wdata[1]),32);
        tracep->fullIData(oldp+314,(vlSymsp->TOP__soc_top.__PVT__device_wdata[2]),32);
        tracep->fullIData(oldp+315,(vlSymsp->TOP__soc_top.__Vcellinp__u_bus__host_wdata_i[0]),32);
        tracep->fullIData(oldp+316,(vlSymsp->TOP__soc_top.__Vcellout__u_bus__host_rdata_o[0]),32);
        tracep->fullIData(oldp+317,(vlSymsp->TOP__soc_top.__Vcellout__u_bus__device_wdata_o[0]),32);
        tracep->fullIData(oldp+318,(vlSymsp->TOP__soc_top.__Vcellout__u_bus__device_wdata_o[1]),32);
        tracep->fullIData(oldp+319,(vlSymsp->TOP__soc_top.__Vcellout__u_bus__device_wdata_o[2]),32);
        tracep->fullCData(oldp+320,(vlSymsp->TOP__soc_top.__PVT__u_bus__DOT__device_sel_resp),2);
        tracep->fullIData(oldp+321,(vlSymsp->TOP__soc_top.__PVT__device_wdata
                                    [1U]),32);
        tracep->fullIData(oldp+322,(vlSymsp->TOP__soc_top.__PVT__device_wdata
                                    [2U]),32);
        tracep->fullIData(oldp+323,(vlSymsp->TOP__soc_top.__PVT__device_wdata
                                    [0U]),32);
        tracep->fullIData(oldp+324,(vlSymsp->TOP__soc_top.__PVT__host_rdata
                                    [0U]),32);
        tracep->fullIData(oldp+325,(vlSymsp->TOP__soc_top__coretop0.__PVT__memrom_ramdata),32);
        tracep->fullIData(oldp+326,(vlSymsp->TOP__soc_top__coretop0.__PVT__mem0__DOT__rd_data),32);
        tracep->fullBit(oldp+327,(vlSelf->clk_i));
        tracep->fullBit(oldp+328,(vlSelf->rst_i));
        tracep->fullBit(oldp+329,(vlSelf->halt_o));
        tracep->fullIData(oldp+330,(((vlSymsp->TOP__soc_top__dpram0.__PVT__mem
                                      [(0x1ffffcU & vlSymsp->TOP__soc_top__coretop0.__PVT__pc_wire)] 
                                      << 0x18U) | (
                                                   (vlSymsp->TOP__soc_top__dpram0.__PVT__mem
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
        tracep->fullBit(oldp+331,(((~ (IData)(vlSelf->rst_i)) 
                                   & (IData)(vlSymsp->TOP__soc_top.__PVT__u_bus__DOT__host_sel_req))));
        tracep->fullIData(oldp+332,((vlSymsp->TOP__soc_top.__PVT__device_req
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
        tracep->fullIData(oldp+333,(3U),32);
        tracep->fullIData(oldp+334,(1U),32);
        tracep->fullIData(oldp+335,(0x200000U),32);
        tracep->fullIData(oldp+336,(0x15U),32);
        tracep->fullBit(oldp+337,(0U));
        tracep->fullIData(oldp+338,(3U),32);
        tracep->fullIData(oldp+339,(1U),32);
        tracep->fullIData(oldp+340,(0x20U),32);
        tracep->fullIData(oldp+341,(2U),32);
        tracep->fullIData(oldp+342,(0xffffffffU),32);
        tracep->fullIData(oldp+343,(3U),32);
        tracep->fullIData(oldp+344,(1U),32);
        tracep->fullBit(oldp+345,(1U));
        tracep->fullCData(oldp+346,(4U),8);
        tracep->fullCData(oldp+347,(8U),8);
        tracep->fullSData(oldp+348,(0U),16);
        tracep->fullSData(oldp+349,(0x4000U),16);
        tracep->fullSData(oldp+350,(0xbff8U),16);
        tracep->fullIData(oldp+351,(0x200000U),32);
        tracep->fullIData(oldp+352,(0x15U),32);
        tracep->fullIData(oldp+353,(0U),32);
        tracep->fullIData(oldp+354,(0x40001100U),32);
        tracep->fullCData(oldp+355,(1U),2);
        tracep->fullIData(oldp+356,(0x1100U),26);
        tracep->fullCData(oldp+357,(0U),3);
        tracep->fullCData(oldp+358,(1U),3);
        tracep->fullCData(oldp+359,(3U),3);
    }
}
