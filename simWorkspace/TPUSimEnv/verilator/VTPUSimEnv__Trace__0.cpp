// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTPUSimEnv__Syms.h"


void VTPUSimEnv___024root__trace_chg_sub_0(VTPUSimEnv___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTPUSimEnv___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPUSimEnv___024root__trace_chg_top_0\n"); );
    // Init
    VTPUSimEnv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTPUSimEnv___024root*>(voidSelf);
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTPUSimEnv___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VTPUSimEnv___024root__trace_chg_sub_0(VTPUSimEnv___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPUSimEnv___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_tpu_done));
        bufp->chgCData(oldp+1,((0x1fU & (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_d0))),5);
        bufp->chgCData(oldp+2,((0x1fU & (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_d1))),5);
        bufp->chgCData(oldp+3,((0x1fU & (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_w0))),5);
        bufp->chgCData(oldp+4,((0x1fU & (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_w1))),5);
        bufp->chgCData(oldp+5,((0xfU & (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_waddr_a))),4);
        bufp->chgCData(oldp+6,((0xfU & (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_waddr_b))),4);
        bufp->chgCData(oldp+7,((0xfU & (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_waddr_c))),4);
        bufp->chgSData(oldp+8,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_w0),10);
        bufp->chgSData(oldp+9,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_w1),10);
        bufp->chgSData(oldp+10,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_d0),10);
        bufp->chgSData(oldp+11,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_d1),10);
        bufp->chgBit(oldp+12,((1U & (~ (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_write_enable_a0)))));
        bufp->chgWData(oldp+13,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_a),128);
        bufp->chgCData(oldp+17,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_waddr_a),6);
        bufp->chgBit(oldp+18,((1U & (~ (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_write_enable_b0)))));
        bufp->chgWData(oldp+19,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_b),128);
        bufp->chgCData(oldp+23,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_waddr_b),6);
        bufp->chgBit(oldp+24,((1U & (~ (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_write_enable_c0)))));
        bufp->chgWData(oldp+25,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_c),128);
        bufp->chgCData(oldp+29,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_waddr_c),6);
        bufp->chgIData(oldp+30,(vlSymsp->TOP__TPUSimEnv__sramD0.__PVT___zz_mem_port0),32);
        bufp->chgIData(oldp+31,(vlSymsp->TOP__TPUSimEnv__sramD1.__PVT___zz_mem_port0),32);
        bufp->chgIData(oldp+32,(vlSymsp->TOP__TPUSimEnv__sramW0.__PVT___zz_mem_port0),32);
        bufp->chgIData(oldp+33,(vlSymsp->TOP__TPUSimEnv__sramW1.__PVT___zz_mem_port0),32);
        bufp->chgBit(oldp+34,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_write_enable_a0));
        bufp->chgBit(oldp+35,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_write_enable_b0));
        bufp->chgBit(oldp+36,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_write_enable_c0));
        bufp->chgCData(oldp+37,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__addr_serial_num),7);
        bufp->chgWData(oldp+38,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data),168);
        bufp->chgWData(oldp+44,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data),128);
        bufp->chgBit(oldp+48,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__alu_start));
        bufp->chgSData(oldp+49,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num),9);
        bufp->chgCData(oldp+50,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index),6);
        bufp->chgBit(oldp+51,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__sram_write_enable));
        bufp->chgCData(oldp+52,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__data_set),2);
        bufp->chgSData(oldp+53,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__addr_sel__DOT__sram_raddr_w0_nx),10);
        bufp->chgSData(oldp+54,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__addr_sel__DOT__sram_raddr_w1_nx),10);
        bufp->chgIData(oldp+55,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__quantize__DOT__ori_shifted_data),21);
        bufp->chgSData(oldp+56,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result),16);
        bufp->chgCData(oldp+57,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound),6);
        bufp->chgCData(oldp+58,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__lower_bound),6);
        bufp->chgIData(oldp+59,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__i),32);
        bufp->chgIData(oldp+60,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__j),32);
        bufp->chgIData(oldp+61,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [0U][0U]),21);
        bufp->chgCData(oldp+62,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state),3);
        bufp->chgCData(oldp+63,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__data_set_nx),2);
        bufp->chgBit(oldp+64,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__tpu_done_nx));
        bufp->chgSData(oldp+65,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__cycle_num_nx),9);
        bufp->chgCData(oldp+66,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__matrix_index_nx),6);
        bufp->chgIData(oldp+67,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i),32);
        bufp->chgBit(oldp+68,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_write_enable_a0_nx));
        bufp->chgBit(oldp+69,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_write_enable_b0_nx));
        bufp->chgBit(oldp+70,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_write_enable_c0_nx));
        bufp->chgWData(oldp+71,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_a_nx),128);
        bufp->chgWData(oldp+75,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx),128);
        bufp->chgWData(oldp+79,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_c_nx),128);
        bufp->chgCData(oldp+83,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_waddr_a_nx),6);
        bufp->chgCData(oldp+84,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_waddr_b_nx),6);
        bufp->chgCData(oldp+85,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_waddr_c_nx),6);
        bufp->chgSData(oldp+86,((0xffffU & vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_c[0U])),16);
        bufp->chgSData(oldp+87,((vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_c[0U] 
                                 >> 0x10U)),16);
        bufp->chgSData(oldp+88,((0xffffU & vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_c[1U])),16);
        bufp->chgSData(oldp+89,((vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_c[1U] 
                                 >> 0x10U)),16);
        bufp->chgSData(oldp+90,((0xffffU & vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_c[2U])),16);
        bufp->chgSData(oldp+91,((vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_c[2U] 
                                 >> 0x10U)),16);
        bufp->chgSData(oldp+92,((0xffffU & vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_c[3U])),16);
        bufp->chgSData(oldp+93,((vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_c[3U] 
                                 >> 0x10U)),16);
        bufp->chgSData(oldp+94,((0xffffU & vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_b[0U])),16);
        bufp->chgSData(oldp+95,((vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_b[0U] 
                                 >> 0x10U)),16);
        bufp->chgSData(oldp+96,((0xffffU & vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_b[1U])),16);
        bufp->chgSData(oldp+97,((vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_b[1U] 
                                 >> 0x10U)),16);
        bufp->chgSData(oldp+98,((0xffffU & vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_b[2U])),16);
        bufp->chgSData(oldp+99,((vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_b[2U] 
                                 >> 0x10U)),16);
        bufp->chgSData(oldp+100,((0xffffU & vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_b[3U])),16);
        bufp->chgSData(oldp+101,((vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_b[3U] 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+102,((0xffffU & vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_a[0U])),16);
        bufp->chgSData(oldp+103,((vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_a[0U] 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+104,((0xffffU & vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_a[1U])),16);
        bufp->chgSData(oldp+105,((vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_a[1U] 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+106,((0xffffU & vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_a[2U])),16);
        bufp->chgSData(oldp+107,((vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_a[2U] 
                                  >> 0x10U)),16);
        bufp->chgSData(oldp+108,((0xffffU & vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_a[3U])),16);
        bufp->chgSData(oldp+109,((vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_a[3U] 
                                  >> 0x10U)),16);
    }
    bufp->chgBit(oldp+110,(vlSelf->io_tpu_start));
    bufp->chgBit(oldp+111,(vlSelf->io_tpu_done));
    bufp->chgBit(oldp+112,(vlSelf->resetn));
    bufp->chgBit(oldp+113,(vlSelf->clk));
    bufp->chgCData(oldp+114,(((4U & (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state))
                               ? 0U : ((2U & (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state))
                                        ? ((1U & (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state))
                                            ? (((0xfU 
                                                 == (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                & (1U 
                                                   == (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__data_set)))
                                                ? 0U
                                                : 3U)
                                            : 3U) : 
                                       ((1U & (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state))
                                         ? 2U : ((IData)(vlSelf->io_tpu_start)
                                                  ? 1U
                                                  : 0U))))),3);
    bufp->chgCData(oldp+115,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__addr_serial_num_nx),7);
    bufp->chgWData(oldp+116,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[0]),128);
    bufp->chgWData(oldp+120,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[1]),128);
    bufp->chgWData(oldp+124,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[2]),128);
    bufp->chgWData(oldp+128,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[3]),128);
    bufp->chgWData(oldp+132,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[4]),128);
    bufp->chgWData(oldp+136,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[5]),128);
    bufp->chgWData(oldp+140,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[6]),128);
    bufp->chgWData(oldp+144,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[7]),128);
    bufp->chgWData(oldp+148,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[8]),128);
    bufp->chgWData(oldp+152,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[9]),128);
    bufp->chgWData(oldp+156,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[10]),128);
    bufp->chgWData(oldp+160,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[11]),128);
    bufp->chgWData(oldp+164,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[12]),128);
    bufp->chgWData(oldp+168,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[13]),128);
    bufp->chgWData(oldp+172,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[14]),128);
    bufp->chgWData(oldp+176,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[0]),128);
    bufp->chgWData(oldp+180,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[1]),128);
    bufp->chgWData(oldp+184,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[2]),128);
    bufp->chgWData(oldp+188,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[3]),128);
    bufp->chgWData(oldp+192,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[4]),128);
    bufp->chgWData(oldp+196,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[5]),128);
    bufp->chgWData(oldp+200,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[6]),128);
    bufp->chgWData(oldp+204,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[7]),128);
    bufp->chgWData(oldp+208,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[8]),128);
    bufp->chgWData(oldp+212,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[9]),128);
    bufp->chgWData(oldp+216,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[10]),128);
    bufp->chgWData(oldp+220,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[11]),128);
    bufp->chgWData(oldp+224,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[12]),128);
    bufp->chgWData(oldp+228,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[13]),128);
    bufp->chgWData(oldp+232,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[14]),128);
    bufp->chgWData(oldp+236,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[0]),128);
    bufp->chgWData(oldp+240,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[1]),128);
    bufp->chgWData(oldp+244,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[2]),128);
    bufp->chgWData(oldp+248,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[3]),128);
    bufp->chgWData(oldp+252,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[4]),128);
    bufp->chgWData(oldp+256,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[5]),128);
    bufp->chgWData(oldp+260,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[6]),128);
    bufp->chgWData(oldp+264,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[7]),128);
    bufp->chgWData(oldp+268,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[8]),128);
    bufp->chgWData(oldp+272,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[9]),128);
    bufp->chgWData(oldp+276,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[10]),128);
    bufp->chgWData(oldp+280,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[11]),128);
    bufp->chgWData(oldp+284,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[12]),128);
    bufp->chgWData(oldp+288,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[13]),128);
    bufp->chgWData(oldp+292,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[14]),128);
    bufp->chgIData(oldp+296,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[0]),32);
    bufp->chgIData(oldp+297,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[1]),32);
    bufp->chgIData(oldp+298,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[2]),32);
    bufp->chgIData(oldp+299,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[3]),32);
    bufp->chgIData(oldp+300,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[4]),32);
    bufp->chgIData(oldp+301,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[5]),32);
    bufp->chgIData(oldp+302,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[6]),32);
    bufp->chgIData(oldp+303,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[7]),32);
    bufp->chgIData(oldp+304,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[8]),32);
    bufp->chgIData(oldp+305,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[9]),32);
    bufp->chgIData(oldp+306,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[10]),32);
    bufp->chgIData(oldp+307,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[11]),32);
    bufp->chgIData(oldp+308,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[12]),32);
    bufp->chgIData(oldp+309,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[13]),32);
    bufp->chgIData(oldp+310,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[14]),32);
    bufp->chgIData(oldp+311,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[15]),32);
    bufp->chgIData(oldp+312,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[16]),32);
    bufp->chgIData(oldp+313,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[17]),32);
    bufp->chgIData(oldp+314,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[18]),32);
    bufp->chgIData(oldp+315,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[19]),32);
    bufp->chgIData(oldp+316,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[20]),32);
    bufp->chgIData(oldp+317,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[21]),32);
    bufp->chgIData(oldp+318,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[22]),32);
    bufp->chgIData(oldp+319,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[23]),32);
    bufp->chgIData(oldp+320,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[24]),32);
    bufp->chgIData(oldp+321,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[25]),32);
    bufp->chgIData(oldp+322,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[26]),32);
    bufp->chgIData(oldp+323,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[27]),32);
    bufp->chgIData(oldp+324,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[28]),32);
    bufp->chgIData(oldp+325,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[29]),32);
    bufp->chgIData(oldp+326,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[30]),32);
    bufp->chgIData(oldp+327,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[0]),32);
    bufp->chgIData(oldp+328,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[1]),32);
    bufp->chgIData(oldp+329,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[2]),32);
    bufp->chgIData(oldp+330,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[3]),32);
    bufp->chgIData(oldp+331,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[4]),32);
    bufp->chgIData(oldp+332,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[5]),32);
    bufp->chgIData(oldp+333,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[6]),32);
    bufp->chgIData(oldp+334,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[7]),32);
    bufp->chgIData(oldp+335,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[8]),32);
    bufp->chgIData(oldp+336,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[9]),32);
    bufp->chgIData(oldp+337,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[10]),32);
    bufp->chgIData(oldp+338,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[11]),32);
    bufp->chgIData(oldp+339,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[12]),32);
    bufp->chgIData(oldp+340,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[13]),32);
    bufp->chgIData(oldp+341,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[14]),32);
    bufp->chgIData(oldp+342,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[15]),32);
    bufp->chgIData(oldp+343,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[16]),32);
    bufp->chgIData(oldp+344,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[17]),32);
    bufp->chgIData(oldp+345,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[18]),32);
    bufp->chgIData(oldp+346,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[19]),32);
    bufp->chgIData(oldp+347,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[20]),32);
    bufp->chgIData(oldp+348,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[21]),32);
    bufp->chgIData(oldp+349,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[22]),32);
    bufp->chgIData(oldp+350,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[23]),32);
    bufp->chgIData(oldp+351,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[24]),32);
    bufp->chgIData(oldp+352,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[25]),32);
    bufp->chgIData(oldp+353,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[26]),32);
    bufp->chgIData(oldp+354,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[27]),32);
    bufp->chgIData(oldp+355,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[28]),32);
    bufp->chgIData(oldp+356,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[29]),32);
    bufp->chgIData(oldp+357,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[30]),32);
    bufp->chgIData(oldp+358,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[0]),32);
    bufp->chgIData(oldp+359,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[1]),32);
    bufp->chgIData(oldp+360,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[2]),32);
    bufp->chgIData(oldp+361,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[3]),32);
    bufp->chgIData(oldp+362,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[4]),32);
    bufp->chgIData(oldp+363,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[5]),32);
    bufp->chgIData(oldp+364,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[6]),32);
    bufp->chgIData(oldp+365,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[7]),32);
    bufp->chgIData(oldp+366,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[8]),32);
    bufp->chgIData(oldp+367,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[9]),32);
    bufp->chgIData(oldp+368,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[10]),32);
    bufp->chgIData(oldp+369,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[11]),32);
    bufp->chgIData(oldp+370,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[12]),32);
    bufp->chgIData(oldp+371,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[13]),32);
    bufp->chgIData(oldp+372,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[14]),32);
    bufp->chgIData(oldp+373,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[15]),32);
    bufp->chgIData(oldp+374,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[16]),32);
    bufp->chgIData(oldp+375,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[17]),32);
    bufp->chgIData(oldp+376,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[18]),32);
    bufp->chgIData(oldp+377,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[19]),32);
    bufp->chgIData(oldp+378,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[20]),32);
    bufp->chgIData(oldp+379,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[21]),32);
    bufp->chgIData(oldp+380,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[22]),32);
    bufp->chgIData(oldp+381,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[23]),32);
    bufp->chgIData(oldp+382,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[24]),32);
    bufp->chgIData(oldp+383,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[25]),32);
    bufp->chgIData(oldp+384,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[26]),32);
    bufp->chgIData(oldp+385,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[27]),32);
    bufp->chgIData(oldp+386,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[28]),32);
    bufp->chgIData(oldp+387,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[29]),32);
    bufp->chgIData(oldp+388,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[30]),32);
    bufp->chgIData(oldp+389,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[0]),32);
    bufp->chgIData(oldp+390,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[1]),32);
    bufp->chgIData(oldp+391,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[2]),32);
    bufp->chgIData(oldp+392,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[3]),32);
    bufp->chgIData(oldp+393,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[4]),32);
    bufp->chgIData(oldp+394,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[5]),32);
    bufp->chgIData(oldp+395,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[6]),32);
    bufp->chgIData(oldp+396,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[7]),32);
    bufp->chgIData(oldp+397,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[8]),32);
    bufp->chgIData(oldp+398,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[9]),32);
    bufp->chgIData(oldp+399,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[10]),32);
    bufp->chgIData(oldp+400,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[11]),32);
    bufp->chgIData(oldp+401,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[12]),32);
    bufp->chgIData(oldp+402,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[13]),32);
    bufp->chgIData(oldp+403,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[14]),32);
    bufp->chgIData(oldp+404,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[15]),32);
    bufp->chgIData(oldp+405,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[16]),32);
    bufp->chgIData(oldp+406,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[17]),32);
    bufp->chgIData(oldp+407,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[18]),32);
    bufp->chgIData(oldp+408,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[19]),32);
    bufp->chgIData(oldp+409,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[20]),32);
    bufp->chgIData(oldp+410,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[21]),32);
    bufp->chgIData(oldp+411,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[22]),32);
    bufp->chgIData(oldp+412,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[23]),32);
    bufp->chgIData(oldp+413,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[24]),32);
    bufp->chgIData(oldp+414,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[25]),32);
    bufp->chgIData(oldp+415,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[26]),32);
    bufp->chgIData(oldp+416,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[27]),32);
    bufp->chgIData(oldp+417,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[28]),32);
    bufp->chgIData(oldp+418,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[29]),32);
    bufp->chgIData(oldp+419,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[30]),32);
}

void VTPUSimEnv___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPUSimEnv___024root__trace_cleanup\n"); );
    // Init
    VTPUSimEnv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTPUSimEnv___024root*>(voidSelf);
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
