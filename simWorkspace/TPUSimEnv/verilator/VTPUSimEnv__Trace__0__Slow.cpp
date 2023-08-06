// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTPUSimEnv__Syms.h"


VL_ATTR_COLD void VTPUSimEnv___024root__trace_init_sub__TOP__0(VTPUSimEnv___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPUSimEnv___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+83,"io_tpu_start", false,-1);
    tracep->declBit(c+84,"io_tpu_done", false,-1);
    tracep->declBit(c+85,"reset", false,-1);
    tracep->declBit(c+86,"clk", false,-1);
}

VL_ATTR_COLD void VTPUSimEnv___024root__trace_init_sub__TOP__TPUSimEnv__0(VTPUSimEnv___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPUSimEnv___024root__trace_init_sub__TOP__TPUSimEnv__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+83,"io_tpu_start", false,-1);
    tracep->declBit(c+1,"io_tpu_done", false,-1);
    tracep->declBit(c+85,"reset", false,-1);
    tracep->declBit(c+86,"clk", false,-1);
    tracep->declBus(c+2,"sramW0_io_addr", false,-1, 6,0);
    tracep->declBus(c+3,"sramW1_io_addr", false,-1, 6,0);
    tracep->declBus(c+4,"sramD0_io_addr", false,-1, 6,0);
    tracep->declBus(c+5,"sramD1_io_addr", false,-1, 6,0);
    tracep->declBus(c+6,"sramRes0_io_addr", false,-1, 3,0);
    tracep->declBus(c+7,"sramRes1_io_addr", false,-1, 3,0);
    tracep->declBus(c+8,"sramRes2_io_addr", false,-1, 3,0);
    tracep->declBus(c+9,"tpu_1_io_sram_raddr_w0", false,-1, 9,0);
    tracep->declBus(c+10,"tpu_1_io_sram_raddr_w1", false,-1, 9,0);
    tracep->declBus(c+11,"tpu_1_io_sram_raddr_d0", false,-1, 9,0);
    tracep->declBus(c+12,"tpu_1_io_sram_raddr_d1", false,-1, 9,0);
    tracep->declBit(c+13,"tpu_1_io_sram_write_enable_a", false,-1);
    tracep->declArray(c+14,"tpu_1_io_sram_wdata_a", false,-1, 127,0);
    tracep->declBus(c+18,"tpu_1_io_sram_waddr_a", false,-1, 5,0);
    tracep->declBit(c+19,"tpu_1_io_sram_write_enable_b", false,-1);
    tracep->declArray(c+20,"tpu_1_io_sram_wdata_b", false,-1, 127,0);
    tracep->declBus(c+24,"tpu_1_io_sram_waddr_b", false,-1, 5,0);
    tracep->declBit(c+25,"tpu_1_io_sram_write_enable_c", false,-1);
    tracep->declArray(c+26,"tpu_1_io_sram_wdata_c", false,-1, 127,0);
    tracep->declBus(c+30,"tpu_1_io_sram_waddr_c", false,-1, 5,0);
    tracep->declBit(c+1,"tpu_1_io_tpu_done", false,-1);
    tracep->declBus(c+31,"sramW0_io_rdata", false,-1, 31,0);
    tracep->declBus(c+32,"sramW1_io_rdata", false,-1, 31,0);
    tracep->declBus(c+33,"sramD0_io_rdata", false,-1, 31,0);
    tracep->declBus(c+34,"sramD1_io_rdata", false,-1, 31,0);
    tracep->pushNamePrefix("tpu_1 ");
    tracep->declBit(c+83,"io_tpu_start", false,-1);
    tracep->declBus(c+31,"io_sram_rdata_w0", false,-1, 31,0);
    tracep->declBus(c+32,"io_sram_rdata_w1", false,-1, 31,0);
    tracep->declBus(c+33,"io_sram_rdata_d0", false,-1, 31,0);
    tracep->declBus(c+34,"io_sram_rdata_d1", false,-1, 31,0);
    tracep->declBus(c+9,"io_sram_raddr_w0", false,-1, 9,0);
    tracep->declBus(c+10,"io_sram_raddr_w1", false,-1, 9,0);
    tracep->declBus(c+11,"io_sram_raddr_d0", false,-1, 9,0);
    tracep->declBus(c+12,"io_sram_raddr_d1", false,-1, 9,0);
    tracep->declBit(c+13,"io_sram_write_enable_a", false,-1);
    tracep->declArray(c+14,"io_sram_wdata_a", false,-1, 127,0);
    tracep->declBus(c+18,"io_sram_waddr_a", false,-1, 5,0);
    tracep->declBit(c+19,"io_sram_write_enable_b", false,-1);
    tracep->declArray(c+20,"io_sram_wdata_b", false,-1, 127,0);
    tracep->declBus(c+24,"io_sram_waddr_b", false,-1, 5,0);
    tracep->declBit(c+25,"io_sram_write_enable_c", false,-1);
    tracep->declArray(c+26,"io_sram_wdata_c", false,-1, 127,0);
    tracep->declBus(c+30,"io_sram_waddr_c", false,-1, 5,0);
    tracep->declBit(c+1,"io_tpu_done", false,-1);
    tracep->declBit(c+85,"reset", false,-1);
    tracep->declBit(c+86,"clk", false,-1);
    tracep->declBit(c+87,"tpuVerilog_srstn", false,-1);
    tracep->declBus(c+9,"tpuVerilog_sram_raddr_w0", false,-1, 9,0);
    tracep->declBus(c+10,"tpuVerilog_sram_raddr_w1", false,-1, 9,0);
    tracep->declBus(c+11,"tpuVerilog_sram_raddr_d0", false,-1, 9,0);
    tracep->declBus(c+12,"tpuVerilog_sram_raddr_d1", false,-1, 9,0);
    tracep->declBit(c+13,"tpuVerilog_sram_write_enable_a0", false,-1);
    tracep->declArray(c+14,"tpuVerilog_sram_wdata_a", false,-1, 127,0);
    tracep->declBus(c+18,"tpuVerilog_sram_waddr_a", false,-1, 5,0);
    tracep->declBit(c+19,"tpuVerilog_sram_write_enable_b0", false,-1);
    tracep->declArray(c+20,"tpuVerilog_sram_wdata_b", false,-1, 127,0);
    tracep->declBus(c+24,"tpuVerilog_sram_waddr_b", false,-1, 5,0);
    tracep->declBit(c+25,"tpuVerilog_sram_write_enable_c0", false,-1);
    tracep->declArray(c+26,"tpuVerilog_sram_wdata_c", false,-1, 127,0);
    tracep->declBus(c+30,"tpuVerilog_sram_waddr_c", false,-1, 5,0);
    tracep->declBit(c+1,"tpuVerilog_tpu_done", false,-1);
    tracep->pushNamePrefix("tpuVerilog ");
    tracep->declBus(c+282,"ARRAY_SIZE", false,-1, 31,0);
    tracep->declBus(c+283,"SRAM_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+282,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+284,"OUTPUT_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+86,"clk", false,-1);
    tracep->declBit(c+87,"srstn", false,-1);
    tracep->declBit(c+83,"tpu_start", false,-1);
    tracep->declBus(c+31,"sram_rdata_w0", false,-1, 31,0);
    tracep->declBus(c+32,"sram_rdata_w1", false,-1, 31,0);
    tracep->declBus(c+33,"sram_rdata_d0", false,-1, 31,0);
    tracep->declBus(c+34,"sram_rdata_d1", false,-1, 31,0);
    tracep->declBus(c+9,"sram_raddr_w0", false,-1, 9,0);
    tracep->declBus(c+10,"sram_raddr_w1", false,-1, 9,0);
    tracep->declBus(c+11,"sram_raddr_d0", false,-1, 9,0);
    tracep->declBus(c+12,"sram_raddr_d1", false,-1, 9,0);
    tracep->declBit(c+13,"sram_write_enable_a0", false,-1);
    tracep->declArray(c+14,"sram_wdata_a", false,-1, 127,0);
    tracep->declBus(c+18,"sram_waddr_a", false,-1, 5,0);
    tracep->declBit(c+19,"sram_write_enable_b0", false,-1);
    tracep->declArray(c+20,"sram_wdata_b", false,-1, 127,0);
    tracep->declBus(c+24,"sram_waddr_b", false,-1, 5,0);
    tracep->declBit(c+25,"sram_write_enable_c0", false,-1);
    tracep->declArray(c+26,"sram_wdata_c", false,-1, 127,0);
    tracep->declBus(c+30,"sram_waddr_c", false,-1, 5,0);
    tracep->declBit(c+1,"tpu_done", false,-1);
    tracep->declBus(c+285,"ORI_WIDTH", false,-1, 31,0);
    tracep->declBus(c+35,"addr_serial_num", false,-1, 6,0);
    tracep->declArray(c+36,"ori_data", false,-1, 167,0);
    tracep->declArray(c+42,"quantized_data", false,-1, 127,0);
    tracep->declBit(c+46,"alu_start", false,-1);
    tracep->declBus(c+47,"cycle_num", false,-1, 8,0);
    tracep->declBus(c+48,"matrix_index", false,-1, 5,0);
    tracep->declBit(c+49,"sram_write_enable", false,-1);
    tracep->declBus(c+50,"data_set", false,-1, 1,0);
    tracep->pushNamePrefix("addr_sel ");
    tracep->declBit(c+86,"clk", false,-1);
    tracep->declBus(c+35,"addr_serial_num", false,-1, 6,0);
    tracep->declBus(c+9,"sram_raddr_w0", false,-1, 9,0);
    tracep->declBus(c+10,"sram_raddr_w1", false,-1, 9,0);
    tracep->declBus(c+11,"sram_raddr_d0", false,-1, 9,0);
    tracep->declBus(c+12,"sram_raddr_d1", false,-1, 9,0);
    tracep->declBus(c+51,"sram_raddr_w0_nx", false,-1, 9,0);
    tracep->declBus(c+52,"sram_raddr_w1_nx", false,-1, 9,0);
    tracep->declBus(c+51,"sram_raddr_d0_nx", false,-1, 9,0);
    tracep->declBus(c+52,"sram_raddr_d1_nx", false,-1, 9,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("quantize ");
    tracep->declBus(c+282,"ARRAY_SIZE", false,-1, 31,0);
    tracep->declBus(c+283,"SRAM_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+282,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+284,"OUTPUT_DATA_WIDTH", false,-1, 31,0);
    tracep->declArray(c+36,"ori_data", false,-1, 167,0);
    tracep->declArray(c+42,"quantized_data", false,-1, 127,0);
    tracep->declBus(c+286,"max_val", false,-1, 31,0);
    tracep->declBus(c+287,"min_val", false,-1, 31,0);
    tracep->declBus(c+285,"ORI_WIDTH", false,-1, 31,0);
    tracep->declBus(c+53,"ori_shifted_data", false,-1, 20,0);
    tracep->declBus(c+288,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("systolic ");
    tracep->declBus(c+282,"ARRAY_SIZE", false,-1, 31,0);
    tracep->declBus(c+283,"SRAM_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+282,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+86,"clk", false,-1);
    tracep->declBit(c+87,"srstn", false,-1);
    tracep->declBit(c+46,"alu_start", false,-1);
    tracep->declBus(c+47,"cycle_num", false,-1, 8,0);
    tracep->declBus(c+31,"sram_rdata_w0", false,-1, 31,0);
    tracep->declBus(c+32,"sram_rdata_w1", false,-1, 31,0);
    tracep->declBus(c+33,"sram_rdata_d0", false,-1, 31,0);
    tracep->declBus(c+34,"sram_rdata_d1", false,-1, 31,0);
    tracep->declBus(c+48,"matrix_index", false,-1, 5,0);
    tracep->declArray(c+36,"mul_outcome", false,-1, 167,0);
    tracep->declBus(c+289,"FIRST_OUT", false,-1, 31,0);
    tracep->declBus(c+290,"PARALLEL_START", false,-1, 31,0);
    tracep->declBus(c+285,"OUTCOME_WIDTH", false,-1, 31,0);
    tracep->declBus(c+54,"mul_result", false,-1, 15,0);
    tracep->declBus(c+55,"upper_bound", false,-1, 5,0);
    tracep->declBus(c+56,"lower_bound", false,-1, 5,0);
    tracep->declBus(c+57,"i", false,-1, 31,0);
    tracep->declBus(c+58,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("systolic_controll ");
    tracep->declBus(c+282,"ARRAY_SIZE", false,-1, 31,0);
    tracep->declBit(c+86,"clk", false,-1);
    tracep->declBit(c+87,"srstn", false,-1);
    tracep->declBit(c+83,"tpu_start", false,-1);
    tracep->declBit(c+49,"sram_write_enable", false,-1);
    tracep->declBus(c+35,"addr_serial_num", false,-1, 6,0);
    tracep->declBit(c+46,"alu_start", false,-1);
    tracep->declBus(c+47,"cycle_num", false,-1, 8,0);
    tracep->declBus(c+48,"matrix_index", false,-1, 5,0);
    tracep->declBus(c+50,"data_set", false,-1, 1,0);
    tracep->declBit(c+1,"tpu_done", false,-1);
    tracep->declBus(c+291,"IDLE", false,-1, 2,0);
    tracep->declBus(c+292,"LOAD_DATA", false,-1, 2,0);
    tracep->declBus(c+293,"WAIT1", false,-1, 2,0);
    tracep->declBus(c+294,"ROLLING", false,-1, 2,0);
    tracep->declBus(c+59,"state", false,-1, 2,0);
    tracep->declBus(c+88,"state_nx", false,-1, 2,0);
    tracep->declBus(c+60,"data_set_nx", false,-1, 1,0);
    tracep->declBit(c+61,"tpu_done_nx", false,-1);
    tracep->declBus(c+89,"addr_serial_num_nx", false,-1, 6,0);
    tracep->declBus(c+62,"cycle_num_nx", false,-1, 8,0);
    tracep->declBus(c+63,"matrix_index_nx", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("write_out ");
    tracep->declBus(c+282,"ARRAY_SIZE", false,-1, 31,0);
    tracep->declBus(c+284,"OUTPUT_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+86,"clk", false,-1);
    tracep->declBit(c+87,"srstn", false,-1);
    tracep->declBit(c+49,"sram_write_enable", false,-1);
    tracep->declBus(c+50,"data_set", false,-1, 1,0);
    tracep->declBus(c+48,"matrix_index", false,-1, 5,0);
    tracep->declArray(c+42,"quantized_data", false,-1, 127,0);
    tracep->declBit(c+13,"sram_write_enable_a0", false,-1);
    tracep->declArray(c+14,"sram_wdata_a", false,-1, 127,0);
    tracep->declBus(c+18,"sram_waddr_a", false,-1, 5,0);
    tracep->declBit(c+19,"sram_write_enable_b0", false,-1);
    tracep->declArray(c+20,"sram_wdata_b", false,-1, 127,0);
    tracep->declBus(c+24,"sram_waddr_b", false,-1, 5,0);
    tracep->declBit(c+25,"sram_write_enable_c0", false,-1);
    tracep->declArray(c+26,"sram_wdata_c", false,-1, 127,0);
    tracep->declBus(c+30,"sram_waddr_c", false,-1, 5,0);
    tracep->declBus(c+64,"i", false,-1, 31,0);
    tracep->declBus(c+295,"MAX_INDEX", false,-1, 31,0);
    tracep->declBit(c+65,"sram_write_enable_a0_nx", false,-1);
    tracep->declBit(c+66,"sram_write_enable_b0_nx", false,-1);
    tracep->declBit(c+67,"sram_write_enable_c0_nx", false,-1);
    tracep->declArray(c+68,"sram_wdata_a_nx", false,-1, 127,0);
    tracep->declArray(c+72,"sram_wdata_b_nx", false,-1, 127,0);
    tracep->declArray(c+76,"sram_wdata_c_nx", false,-1, 127,0);
    tracep->declBus(c+80,"sram_waddr_a_nx", false,-1, 5,0);
    tracep->declBus(c+81,"sram_waddr_b_nx", false,-1, 5,0);
    tracep->declBus(c+82,"sram_waddr_c_nx", false,-1, 5,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void VTPUSimEnv___024root__trace_init_sub__TOP__TPUSimEnv__sramRes2__0(VTPUSimEnv___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPUSimEnv___024root__trace_init_sub__TOP__TPUSimEnv__sramRes2__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+25,"io_valid", false,-1);
    tracep->declBus(c+8,"io_addr", false,-1, 3,0);
    tracep->declArray(c+26,"io_wdata", false,-1, 127,0);
    tracep->declBit(c+86,"clk", false,-1);
    tracep->declBit(c+85,"reset", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+90+i*4,"mem", true,(i+0), 127,0);
    }
}

VL_ATTR_COLD void VTPUSimEnv___024root__trace_init_sub__TOP__TPUSimEnv__sramRes1__0(VTPUSimEnv___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPUSimEnv___024root__trace_init_sub__TOP__TPUSimEnv__sramRes1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+19,"io_valid", false,-1);
    tracep->declBus(c+7,"io_addr", false,-1, 3,0);
    tracep->declArray(c+20,"io_wdata", false,-1, 127,0);
    tracep->declBit(c+86,"clk", false,-1);
    tracep->declBit(c+85,"reset", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+154+i*4,"mem", true,(i+0), 127,0);
    }
}

VL_ATTR_COLD void VTPUSimEnv___024root__trace_init_sub__TOP__TPUSimEnv__sramRes0__0(VTPUSimEnv___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPUSimEnv___024root__trace_init_sub__TOP__TPUSimEnv__sramRes0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+13,"io_valid", false,-1);
    tracep->declBus(c+6,"io_addr", false,-1, 3,0);
    tracep->declArray(c+14,"io_wdata", false,-1, 127,0);
    tracep->declBit(c+86,"clk", false,-1);
    tracep->declBit(c+85,"reset", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declArray(c+218+i*4,"mem", true,(i+0), 127,0);
    }
}

VL_ATTR_COLD void VTPUSimEnv___024root__trace_init_sub__TOP__TPUSimEnv__sramD1__0(VTPUSimEnv___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPUSimEnv___024root__trace_init_sub__TOP__TPUSimEnv__sramD1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+5,"io_addr", false,-1, 6,0);
    tracep->declBus(c+34,"io_rdata", false,-1, 31,0);
    tracep->declBit(c+86,"clk", false,-1);
    tracep->declBit(c+85,"reset", false,-1);
}

VL_ATTR_COLD void VTPUSimEnv___024root__trace_init_sub__TOP__TPUSimEnv__sramD0__0(VTPUSimEnv___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPUSimEnv___024root__trace_init_sub__TOP__TPUSimEnv__sramD0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+4,"io_addr", false,-1, 6,0);
    tracep->declBus(c+33,"io_rdata", false,-1, 31,0);
    tracep->declBit(c+86,"clk", false,-1);
    tracep->declBit(c+85,"reset", false,-1);
}

VL_ATTR_COLD void VTPUSimEnv___024root__trace_init_sub__TOP__TPUSimEnv__sramW1__0(VTPUSimEnv___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPUSimEnv___024root__trace_init_sub__TOP__TPUSimEnv__sramW1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3,"io_addr", false,-1, 6,0);
    tracep->declBus(c+32,"io_rdata", false,-1, 31,0);
    tracep->declBit(c+86,"clk", false,-1);
    tracep->declBit(c+85,"reset", false,-1);
}

VL_ATTR_COLD void VTPUSimEnv___024root__trace_init_sub__TOP__TPUSimEnv__sramW0__0(VTPUSimEnv___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPUSimEnv___024root__trace_init_sub__TOP__TPUSimEnv__sramW0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2,"io_addr", false,-1, 6,0);
    tracep->declBus(c+31,"io_rdata", false,-1, 31,0);
    tracep->declBit(c+86,"clk", false,-1);
    tracep->declBit(c+85,"reset", false,-1);
}

VL_ATTR_COLD void VTPUSimEnv___024root__trace_init_top(VTPUSimEnv___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPUSimEnv___024root__trace_init_top\n"); );
    // Body
    VTPUSimEnv___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("TPUSimEnv ");
    VTPUSimEnv___024root__trace_init_sub__TOP__TPUSimEnv__0(vlSelf, tracep);
    tracep->pushNamePrefix("sramD0 ");
    VTPUSimEnv___024root__trace_init_sub__TOP__TPUSimEnv__sramD0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sramD1 ");
    VTPUSimEnv___024root__trace_init_sub__TOP__TPUSimEnv__sramD1__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sramRes0 ");
    VTPUSimEnv___024root__trace_init_sub__TOP__TPUSimEnv__sramRes0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sramRes1 ");
    VTPUSimEnv___024root__trace_init_sub__TOP__TPUSimEnv__sramRes1__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sramRes2 ");
    VTPUSimEnv___024root__trace_init_sub__TOP__TPUSimEnv__sramRes2__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sramW0 ");
    VTPUSimEnv___024root__trace_init_sub__TOP__TPUSimEnv__sramW0__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sramW1 ");
    VTPUSimEnv___024root__trace_init_sub__TOP__TPUSimEnv__sramW1__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VTPUSimEnv___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTPUSimEnv___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VTPUSimEnv___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTPUSimEnv___024root__trace_register(VTPUSimEnv___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPUSimEnv___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VTPUSimEnv___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VTPUSimEnv___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VTPUSimEnv___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTPUSimEnv___024root__trace_full_sub_0(VTPUSimEnv___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VTPUSimEnv___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPUSimEnv___024root__trace_full_top_0\n"); );
    // Init
    VTPUSimEnv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTPUSimEnv___024root*>(voidSelf);
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTPUSimEnv___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VTPUSimEnv___024root__trace_full_sub_0(VTPUSimEnv___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPUSimEnv___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_tpu_done));
    bufp->fullCData(oldp+2,((0x7fU & (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_w0))),7);
    bufp->fullCData(oldp+3,((0x7fU & (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_w1))),7);
    bufp->fullCData(oldp+4,((0x7fU & (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_d0))),7);
    bufp->fullCData(oldp+5,((0x7fU & (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_d1))),7);
    bufp->fullCData(oldp+6,((0xfU & (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_waddr_a))),4);
    bufp->fullCData(oldp+7,((0xfU & (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_waddr_b))),4);
    bufp->fullCData(oldp+8,((0xfU & (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_waddr_c))),4);
    bufp->fullSData(oldp+9,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_w0),10);
    bufp->fullSData(oldp+10,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_w1),10);
    bufp->fullSData(oldp+11,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_d0),10);
    bufp->fullSData(oldp+12,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_d1),10);
    bufp->fullBit(oldp+13,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_write_enable_a0));
    bufp->fullWData(oldp+14,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_a),128);
    bufp->fullCData(oldp+18,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_waddr_a),6);
    bufp->fullBit(oldp+19,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_write_enable_b0));
    bufp->fullWData(oldp+20,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_b),128);
    bufp->fullCData(oldp+24,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_waddr_b),6);
    bufp->fullBit(oldp+25,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_write_enable_c0));
    bufp->fullWData(oldp+26,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_c),128);
    bufp->fullCData(oldp+30,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_waddr_c),6);
    bufp->fullIData(oldp+31,(vlSymsp->TOP__TPUSimEnv__sramW0.__PVT___zz_mem_port0),32);
    bufp->fullIData(oldp+32,(vlSymsp->TOP__TPUSimEnv__sramW1.__PVT___zz_mem_port0),32);
    bufp->fullIData(oldp+33,(vlSymsp->TOP__TPUSimEnv__sramD0.__PVT___zz_mem_port0),32);
    bufp->fullIData(oldp+34,(vlSymsp->TOP__TPUSimEnv__sramD1.__PVT___zz_mem_port0),32);
    bufp->fullCData(oldp+35,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__addr_serial_num),7);
    bufp->fullWData(oldp+36,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data),168);
    bufp->fullWData(oldp+42,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data),128);
    bufp->fullBit(oldp+46,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__alu_start));
    bufp->fullSData(oldp+47,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num),9);
    bufp->fullCData(oldp+48,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index),6);
    bufp->fullBit(oldp+49,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__sram_write_enable));
    bufp->fullCData(oldp+50,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__data_set),2);
    bufp->fullSData(oldp+51,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__addr_sel__DOT__sram_raddr_w0_nx),10);
    bufp->fullSData(oldp+52,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__addr_sel__DOT__sram_raddr_w1_nx),10);
    bufp->fullIData(oldp+53,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__quantize__DOT__ori_shifted_data),21);
    bufp->fullSData(oldp+54,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result),16);
    bufp->fullCData(oldp+55,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound),6);
    bufp->fullCData(oldp+56,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__lower_bound),6);
    bufp->fullIData(oldp+57,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__i),32);
    bufp->fullIData(oldp+58,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__j),32);
    bufp->fullCData(oldp+59,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state),3);
    bufp->fullCData(oldp+60,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__data_set_nx),2);
    bufp->fullBit(oldp+61,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__tpu_done_nx));
    bufp->fullSData(oldp+62,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__cycle_num_nx),9);
    bufp->fullCData(oldp+63,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__matrix_index_nx),6);
    bufp->fullIData(oldp+64,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i),32);
    bufp->fullBit(oldp+65,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_write_enable_a0_nx));
    bufp->fullBit(oldp+66,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_write_enable_b0_nx));
    bufp->fullBit(oldp+67,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_write_enable_c0_nx));
    bufp->fullWData(oldp+68,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_a_nx),128);
    bufp->fullWData(oldp+72,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx),128);
    bufp->fullWData(oldp+76,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_c_nx),128);
    bufp->fullCData(oldp+80,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_waddr_a_nx),6);
    bufp->fullCData(oldp+81,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_waddr_b_nx),6);
    bufp->fullCData(oldp+82,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_waddr_c_nx),6);
    bufp->fullBit(oldp+83,(vlSelf->io_tpu_start));
    bufp->fullBit(oldp+84,(vlSelf->io_tpu_done));
    bufp->fullBit(oldp+85,(vlSelf->reset));
    bufp->fullBit(oldp+86,(vlSelf->clk));
    bufp->fullBit(oldp+87,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullCData(oldp+88,(((4U & (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state))
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
    bufp->fullCData(oldp+89,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__addr_serial_num_nx),7);
    bufp->fullWData(oldp+90,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[0]),128);
    bufp->fullWData(oldp+94,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[1]),128);
    bufp->fullWData(oldp+98,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[2]),128);
    bufp->fullWData(oldp+102,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[3]),128);
    bufp->fullWData(oldp+106,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[4]),128);
    bufp->fullWData(oldp+110,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[5]),128);
    bufp->fullWData(oldp+114,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[6]),128);
    bufp->fullWData(oldp+118,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[7]),128);
    bufp->fullWData(oldp+122,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[8]),128);
    bufp->fullWData(oldp+126,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[9]),128);
    bufp->fullWData(oldp+130,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[10]),128);
    bufp->fullWData(oldp+134,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[11]),128);
    bufp->fullWData(oldp+138,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[12]),128);
    bufp->fullWData(oldp+142,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[13]),128);
    bufp->fullWData(oldp+146,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[14]),128);
    bufp->fullWData(oldp+150,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[15]),128);
    bufp->fullWData(oldp+154,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[0]),128);
    bufp->fullWData(oldp+158,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[1]),128);
    bufp->fullWData(oldp+162,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[2]),128);
    bufp->fullWData(oldp+166,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[3]),128);
    bufp->fullWData(oldp+170,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[4]),128);
    bufp->fullWData(oldp+174,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[5]),128);
    bufp->fullWData(oldp+178,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[6]),128);
    bufp->fullWData(oldp+182,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[7]),128);
    bufp->fullWData(oldp+186,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[8]),128);
    bufp->fullWData(oldp+190,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[9]),128);
    bufp->fullWData(oldp+194,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[10]),128);
    bufp->fullWData(oldp+198,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[11]),128);
    bufp->fullWData(oldp+202,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[12]),128);
    bufp->fullWData(oldp+206,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[13]),128);
    bufp->fullWData(oldp+210,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[14]),128);
    bufp->fullWData(oldp+214,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[15]),128);
    bufp->fullWData(oldp+218,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[0]),128);
    bufp->fullWData(oldp+222,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[1]),128);
    bufp->fullWData(oldp+226,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[2]),128);
    bufp->fullWData(oldp+230,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[3]),128);
    bufp->fullWData(oldp+234,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[4]),128);
    bufp->fullWData(oldp+238,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[5]),128);
    bufp->fullWData(oldp+242,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[6]),128);
    bufp->fullWData(oldp+246,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[7]),128);
    bufp->fullWData(oldp+250,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[8]),128);
    bufp->fullWData(oldp+254,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[9]),128);
    bufp->fullWData(oldp+258,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[10]),128);
    bufp->fullWData(oldp+262,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[11]),128);
    bufp->fullWData(oldp+266,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[12]),128);
    bufp->fullWData(oldp+270,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[13]),128);
    bufp->fullWData(oldp+274,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[14]),128);
    bufp->fullWData(oldp+278,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[15]),128);
    bufp->fullIData(oldp+282,(8U),32);
    bufp->fullIData(oldp+283,(0x20U),32);
    bufp->fullIData(oldp+284,(0x10U),32);
    bufp->fullIData(oldp+285,(0x15U),32);
    bufp->fullIData(oldp+286,(0x7fffU),32);
    bufp->fullIData(oldp+287,(0xffff8000U),32);
    bufp->fullIData(oldp+288,(8U),32);
    bufp->fullIData(oldp+289,(9U),32);
    bufp->fullIData(oldp+290,(0x11U),32);
    bufp->fullCData(oldp+291,(0U),3);
    bufp->fullCData(oldp+292,(1U),3);
    bufp->fullCData(oldp+293,(2U),3);
    bufp->fullCData(oldp+294,(3U),3);
    bufp->fullIData(oldp+295,(7U),32);
}
