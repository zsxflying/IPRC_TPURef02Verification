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
        bufp->chgCData(oldp+1,((0x7fU & (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_w0))),7);
        bufp->chgCData(oldp+2,((0x7fU & (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_w1))),7);
        bufp->chgCData(oldp+3,((0x7fU & (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_d0))),7);
        bufp->chgCData(oldp+4,((0x7fU & (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_d1))),7);
        bufp->chgCData(oldp+5,((0xfU & (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_waddr_a))),4);
        bufp->chgCData(oldp+6,((0xfU & (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_waddr_b))),4);
        bufp->chgCData(oldp+7,((0xfU & (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_waddr_c))),4);
        bufp->chgSData(oldp+8,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_w0),10);
        bufp->chgSData(oldp+9,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_w1),10);
        bufp->chgSData(oldp+10,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_d0),10);
        bufp->chgSData(oldp+11,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_d1),10);
        bufp->chgBit(oldp+12,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_write_enable_a0));
        bufp->chgWData(oldp+13,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_a),128);
        bufp->chgCData(oldp+17,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_waddr_a),6);
        bufp->chgBit(oldp+18,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_write_enable_b0));
        bufp->chgWData(oldp+19,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_b),128);
        bufp->chgCData(oldp+23,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_waddr_b),6);
        bufp->chgBit(oldp+24,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_write_enable_c0));
        bufp->chgWData(oldp+25,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_c),128);
        bufp->chgCData(oldp+29,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_waddr_c),6);
        bufp->chgIData(oldp+30,(vlSymsp->TOP__TPUSimEnv__sramW0.__PVT___zz_mem_port0),32);
        bufp->chgIData(oldp+31,(vlSymsp->TOP__TPUSimEnv__sramW1.__PVT___zz_mem_port0),32);
        bufp->chgIData(oldp+32,(vlSymsp->TOP__TPUSimEnv__sramD0.__PVT___zz_mem_port0),32);
        bufp->chgIData(oldp+33,(vlSymsp->TOP__TPUSimEnv__sramD1.__PVT___zz_mem_port0),32);
        bufp->chgCData(oldp+34,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__addr_serial_num),7);
        bufp->chgWData(oldp+35,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data),168);
        bufp->chgWData(oldp+41,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data),128);
        bufp->chgBit(oldp+45,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__alu_start));
        bufp->chgSData(oldp+46,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num),9);
        bufp->chgCData(oldp+47,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index),6);
        bufp->chgBit(oldp+48,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__sram_write_enable));
        bufp->chgCData(oldp+49,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__data_set),2);
        bufp->chgSData(oldp+50,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__addr_sel__DOT__sram_raddr_w0_nx),10);
        bufp->chgSData(oldp+51,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__addr_sel__DOT__sram_raddr_w1_nx),10);
        bufp->chgIData(oldp+52,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__quantize__DOT__ori_shifted_data),21);
        bufp->chgSData(oldp+53,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result),16);
        bufp->chgCData(oldp+54,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound),6);
        bufp->chgCData(oldp+55,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__lower_bound),6);
        bufp->chgIData(oldp+56,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__i),32);
        bufp->chgIData(oldp+57,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__j),32);
        bufp->chgCData(oldp+58,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state),3);
        bufp->chgCData(oldp+59,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__data_set_nx),2);
        bufp->chgBit(oldp+60,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__tpu_done_nx));
        bufp->chgSData(oldp+61,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__cycle_num_nx),9);
        bufp->chgCData(oldp+62,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__matrix_index_nx),6);
        bufp->chgIData(oldp+63,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i),32);
        bufp->chgBit(oldp+64,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_write_enable_a0_nx));
        bufp->chgBit(oldp+65,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_write_enable_b0_nx));
        bufp->chgBit(oldp+66,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_write_enable_c0_nx));
        bufp->chgWData(oldp+67,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_a_nx),128);
        bufp->chgWData(oldp+71,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx),128);
        bufp->chgWData(oldp+75,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_c_nx),128);
        bufp->chgCData(oldp+79,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_waddr_a_nx),6);
        bufp->chgCData(oldp+80,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_waddr_b_nx),6);
        bufp->chgCData(oldp+81,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_waddr_c_nx),6);
    }
    bufp->chgBit(oldp+82,(vlSelf->io_tpu_start));
    bufp->chgBit(oldp+83,(vlSelf->io_tpu_done));
    bufp->chgBit(oldp+84,(vlSelf->reset));
    bufp->chgBit(oldp+85,(vlSelf->clk));
    bufp->chgBit(oldp+86,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->chgCData(oldp+87,(((4U & (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state))
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
    bufp->chgCData(oldp+88,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__addr_serial_num_nx),7);
    bufp->chgWData(oldp+89,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[0]),128);
    bufp->chgWData(oldp+93,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[1]),128);
    bufp->chgWData(oldp+97,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[2]),128);
    bufp->chgWData(oldp+101,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[3]),128);
    bufp->chgWData(oldp+105,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[4]),128);
    bufp->chgWData(oldp+109,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[5]),128);
    bufp->chgWData(oldp+113,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[6]),128);
    bufp->chgWData(oldp+117,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[7]),128);
    bufp->chgWData(oldp+121,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[8]),128);
    bufp->chgWData(oldp+125,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[9]),128);
    bufp->chgWData(oldp+129,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[10]),128);
    bufp->chgWData(oldp+133,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[11]),128);
    bufp->chgWData(oldp+137,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[12]),128);
    bufp->chgWData(oldp+141,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[13]),128);
    bufp->chgWData(oldp+145,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[14]),128);
    bufp->chgWData(oldp+149,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[15]),128);
    bufp->chgWData(oldp+153,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[0]),128);
    bufp->chgWData(oldp+157,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[1]),128);
    bufp->chgWData(oldp+161,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[2]),128);
    bufp->chgWData(oldp+165,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[3]),128);
    bufp->chgWData(oldp+169,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[4]),128);
    bufp->chgWData(oldp+173,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[5]),128);
    bufp->chgWData(oldp+177,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[6]),128);
    bufp->chgWData(oldp+181,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[7]),128);
    bufp->chgWData(oldp+185,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[8]),128);
    bufp->chgWData(oldp+189,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[9]),128);
    bufp->chgWData(oldp+193,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[10]),128);
    bufp->chgWData(oldp+197,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[11]),128);
    bufp->chgWData(oldp+201,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[12]),128);
    bufp->chgWData(oldp+205,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[13]),128);
    bufp->chgWData(oldp+209,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[14]),128);
    bufp->chgWData(oldp+213,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[15]),128);
    bufp->chgWData(oldp+217,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[0]),128);
    bufp->chgWData(oldp+221,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[1]),128);
    bufp->chgWData(oldp+225,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[2]),128);
    bufp->chgWData(oldp+229,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[3]),128);
    bufp->chgWData(oldp+233,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[4]),128);
    bufp->chgWData(oldp+237,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[5]),128);
    bufp->chgWData(oldp+241,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[6]),128);
    bufp->chgWData(oldp+245,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[7]),128);
    bufp->chgWData(oldp+249,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[8]),128);
    bufp->chgWData(oldp+253,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[9]),128);
    bufp->chgWData(oldp+257,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[10]),128);
    bufp->chgWData(oldp+261,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[11]),128);
    bufp->chgWData(oldp+265,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[12]),128);
    bufp->chgWData(oldp+269,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[13]),128);
    bufp->chgWData(oldp+273,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[14]),128);
    bufp->chgWData(oldp+277,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[15]),128);
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
