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
    tracep->declBit(c+111,"io_tpu_start", false,-1);
    tracep->declBit(c+112,"io_tpu_done", false,-1);
    tracep->declBit(c+113,"resetn", false,-1);
    tracep->declBit(c+114,"clk", false,-1);
}

VL_ATTR_COLD void VTPUSimEnv___024root__trace_init_sub__TOP__TPUSimEnv__0(VTPUSimEnv___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPUSimEnv___024root__trace_init_sub__TOP__TPUSimEnv__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+111,"io_tpu_start", false,-1);
    tracep->declBit(c+1,"io_tpu_done", false,-1);
    tracep->declBit(c+113,"resetn", false,-1);
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBus(c+2,"sramD0_io_addr", false,-1, 4,0);
    tracep->declBus(c+3,"sramD1_io_addr", false,-1, 4,0);
    tracep->declBus(c+4,"sramW0_io_addr", false,-1, 4,0);
    tracep->declBus(c+5,"sramW1_io_addr", false,-1, 4,0);
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
    tracep->declBus(c+31,"sramD0_io_rdata", false,-1, 31,0);
    tracep->declBus(c+32,"sramD1_io_rdata", false,-1, 31,0);
    tracep->declBus(c+33,"sramW0_io_rdata", false,-1, 31,0);
    tracep->declBus(c+34,"sramW1_io_rdata", false,-1, 31,0);
    tracep->pushNamePrefix("tpu_1 ");
    tracep->declBit(c+111,"io_tpu_start", false,-1);
    tracep->declBus(c+33,"io_sram_rdata_w0", false,-1, 31,0);
    tracep->declBus(c+34,"io_sram_rdata_w1", false,-1, 31,0);
    tracep->declBus(c+31,"io_sram_rdata_d0", false,-1, 31,0);
    tracep->declBus(c+32,"io_sram_rdata_d1", false,-1, 31,0);
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
    tracep->declBit(c+113,"resetn", false,-1);
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBus(c+9,"tpuVerilog_sram_raddr_w0", false,-1, 9,0);
    tracep->declBus(c+10,"tpuVerilog_sram_raddr_w1", false,-1, 9,0);
    tracep->declBus(c+11,"tpuVerilog_sram_raddr_d0", false,-1, 9,0);
    tracep->declBus(c+12,"tpuVerilog_sram_raddr_d1", false,-1, 9,0);
    tracep->declBit(c+35,"tpuVerilog_sram_write_enable_a0", false,-1);
    tracep->declArray(c+14,"tpuVerilog_sram_wdata_a", false,-1, 127,0);
    tracep->declBus(c+18,"tpuVerilog_sram_waddr_a", false,-1, 5,0);
    tracep->declBit(c+36,"tpuVerilog_sram_write_enable_b0", false,-1);
    tracep->declArray(c+20,"tpuVerilog_sram_wdata_b", false,-1, 127,0);
    tracep->declBus(c+24,"tpuVerilog_sram_waddr_b", false,-1, 5,0);
    tracep->declBit(c+37,"tpuVerilog_sram_write_enable_c0", false,-1);
    tracep->declArray(c+26,"tpuVerilog_sram_wdata_c", false,-1, 127,0);
    tracep->declBus(c+30,"tpuVerilog_sram_waddr_c", false,-1, 5,0);
    tracep->declBit(c+1,"tpuVerilog_tpu_done", false,-1);
    tracep->pushNamePrefix("tpuVerilog ");
    tracep->declBus(c+421,"ARRAY_SIZE", false,-1, 31,0);
    tracep->declBus(c+422,"SRAM_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+421,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+423,"OUTPUT_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBit(c+113,"srstn", false,-1);
    tracep->declBit(c+111,"tpu_start", false,-1);
    tracep->declBus(c+33,"sram_rdata_w0", false,-1, 31,0);
    tracep->declBus(c+34,"sram_rdata_w1", false,-1, 31,0);
    tracep->declBus(c+31,"sram_rdata_d0", false,-1, 31,0);
    tracep->declBus(c+32,"sram_rdata_d1", false,-1, 31,0);
    tracep->declBus(c+9,"sram_raddr_w0", false,-1, 9,0);
    tracep->declBus(c+10,"sram_raddr_w1", false,-1, 9,0);
    tracep->declBus(c+11,"sram_raddr_d0", false,-1, 9,0);
    tracep->declBus(c+12,"sram_raddr_d1", false,-1, 9,0);
    tracep->declBit(c+35,"sram_write_enable_a0", false,-1);
    tracep->declArray(c+14,"sram_wdata_a", false,-1, 127,0);
    tracep->declBus(c+18,"sram_waddr_a", false,-1, 5,0);
    tracep->declBit(c+36,"sram_write_enable_b0", false,-1);
    tracep->declArray(c+20,"sram_wdata_b", false,-1, 127,0);
    tracep->declBus(c+24,"sram_waddr_b", false,-1, 5,0);
    tracep->declBit(c+37,"sram_write_enable_c0", false,-1);
    tracep->declArray(c+26,"sram_wdata_c", false,-1, 127,0);
    tracep->declBus(c+30,"sram_waddr_c", false,-1, 5,0);
    tracep->declBit(c+1,"tpu_done", false,-1);
    tracep->declBus(c+424,"ORI_WIDTH", false,-1, 31,0);
    tracep->declBus(c+38,"addr_serial_num", false,-1, 6,0);
    tracep->declArray(c+39,"ori_data", false,-1, 167,0);
    tracep->declArray(c+45,"quantized_data", false,-1, 127,0);
    tracep->declBit(c+49,"alu_start", false,-1);
    tracep->declBus(c+50,"cycle_num", false,-1, 8,0);
    tracep->declBus(c+51,"matrix_index", false,-1, 5,0);
    tracep->declBit(c+52,"sram_write_enable", false,-1);
    tracep->declBus(c+53,"data_set", false,-1, 1,0);
    tracep->pushNamePrefix("addr_sel ");
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBus(c+38,"addr_serial_num", false,-1, 6,0);
    tracep->declBus(c+9,"sram_raddr_w0", false,-1, 9,0);
    tracep->declBus(c+10,"sram_raddr_w1", false,-1, 9,0);
    tracep->declBus(c+11,"sram_raddr_d0", false,-1, 9,0);
    tracep->declBus(c+12,"sram_raddr_d1", false,-1, 9,0);
    tracep->declBus(c+54,"sram_raddr_w0_nx", false,-1, 9,0);
    tracep->declBus(c+55,"sram_raddr_w1_nx", false,-1, 9,0);
    tracep->declBus(c+54,"sram_raddr_d0_nx", false,-1, 9,0);
    tracep->declBus(c+55,"sram_raddr_d1_nx", false,-1, 9,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("quantize ");
    tracep->declBus(c+421,"ARRAY_SIZE", false,-1, 31,0);
    tracep->declBus(c+422,"SRAM_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+421,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+423,"OUTPUT_DATA_WIDTH", false,-1, 31,0);
    tracep->declArray(c+39,"ori_data", false,-1, 167,0);
    tracep->declArray(c+45,"quantized_data", false,-1, 127,0);
    tracep->declBus(c+425,"max_val", false,-1, 31,0);
    tracep->declBus(c+426,"min_val", false,-1, 31,0);
    tracep->declBus(c+424,"ORI_WIDTH", false,-1, 31,0);
    tracep->declBus(c+56,"ori_shifted_data", false,-1, 20,0);
    tracep->declBus(c+427,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("systolic ");
    tracep->declBus(c+421,"ARRAY_SIZE", false,-1, 31,0);
    tracep->declBus(c+422,"SRAM_DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+421,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBit(c+113,"srstn", false,-1);
    tracep->declBit(c+49,"alu_start", false,-1);
    tracep->declBus(c+50,"cycle_num", false,-1, 8,0);
    tracep->declBus(c+33,"sram_rdata_w0", false,-1, 31,0);
    tracep->declBus(c+34,"sram_rdata_w1", false,-1, 31,0);
    tracep->declBus(c+31,"sram_rdata_d0", false,-1, 31,0);
    tracep->declBus(c+32,"sram_rdata_d1", false,-1, 31,0);
    tracep->declBus(c+51,"matrix_index", false,-1, 5,0);
    tracep->declArray(c+39,"mul_outcome", false,-1, 167,0);
    tracep->declBus(c+428,"FIRST_OUT", false,-1, 31,0);
    tracep->declBus(c+429,"PARALLEL_START", false,-1, 31,0);
    tracep->declBus(c+424,"OUTCOME_WIDTH", false,-1, 31,0);
    tracep->declBus(c+57,"mul_result", false,-1, 15,0);
    tracep->declBus(c+58,"upper_bound", false,-1, 5,0);
    tracep->declBus(c+59,"lower_bound", false,-1, 5,0);
    tracep->declBus(c+60,"i", false,-1, 31,0);
    tracep->declBus(c+61,"j", false,-1, 31,0);
    tracep->declBus(c+62,"debug_mulres", false,-1, 20,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("systolic_controll ");
    tracep->declBus(c+421,"ARRAY_SIZE", false,-1, 31,0);
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBit(c+113,"srstn", false,-1);
    tracep->declBit(c+111,"tpu_start", false,-1);
    tracep->declBit(c+52,"sram_write_enable", false,-1);
    tracep->declBus(c+38,"addr_serial_num", false,-1, 6,0);
    tracep->declBit(c+49,"alu_start", false,-1);
    tracep->declBus(c+50,"cycle_num", false,-1, 8,0);
    tracep->declBus(c+51,"matrix_index", false,-1, 5,0);
    tracep->declBus(c+53,"data_set", false,-1, 1,0);
    tracep->declBit(c+1,"tpu_done", false,-1);
    tracep->declBus(c+430,"IDLE", false,-1, 2,0);
    tracep->declBus(c+431,"LOAD_DATA", false,-1, 2,0);
    tracep->declBus(c+432,"WAIT1", false,-1, 2,0);
    tracep->declBus(c+433,"ROLLING", false,-1, 2,0);
    tracep->declBus(c+63,"state", false,-1, 2,0);
    tracep->declBus(c+115,"state_nx", false,-1, 2,0);
    tracep->declBus(c+64,"data_set_nx", false,-1, 1,0);
    tracep->declBit(c+65,"tpu_done_nx", false,-1);
    tracep->declBus(c+116,"addr_serial_num_nx", false,-1, 6,0);
    tracep->declBus(c+66,"cycle_num_nx", false,-1, 8,0);
    tracep->declBus(c+67,"matrix_index_nx", false,-1, 5,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("write_out ");
    tracep->declBus(c+421,"ARRAY_SIZE", false,-1, 31,0);
    tracep->declBus(c+423,"OUTPUT_DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBit(c+113,"srstn", false,-1);
    tracep->declBit(c+52,"sram_write_enable", false,-1);
    tracep->declBus(c+53,"data_set", false,-1, 1,0);
    tracep->declBus(c+51,"matrix_index", false,-1, 5,0);
    tracep->declArray(c+45,"quantized_data", false,-1, 127,0);
    tracep->declBit(c+35,"sram_write_enable_a0", false,-1);
    tracep->declArray(c+14,"sram_wdata_a", false,-1, 127,0);
    tracep->declBus(c+18,"sram_waddr_a", false,-1, 5,0);
    tracep->declBit(c+36,"sram_write_enable_b0", false,-1);
    tracep->declArray(c+20,"sram_wdata_b", false,-1, 127,0);
    tracep->declBus(c+24,"sram_waddr_b", false,-1, 5,0);
    tracep->declBit(c+37,"sram_write_enable_c0", false,-1);
    tracep->declArray(c+26,"sram_wdata_c", false,-1, 127,0);
    tracep->declBus(c+30,"sram_waddr_c", false,-1, 5,0);
    tracep->declBus(c+68,"i", false,-1, 31,0);
    tracep->declBus(c+434,"MAX_INDEX", false,-1, 31,0);
    tracep->declBit(c+69,"sram_write_enable_a0_nx", false,-1);
    tracep->declBit(c+70,"sram_write_enable_b0_nx", false,-1);
    tracep->declBit(c+71,"sram_write_enable_c0_nx", false,-1);
    tracep->declArray(c+72,"sram_wdata_a_nx", false,-1, 127,0);
    tracep->declArray(c+76,"sram_wdata_b_nx", false,-1, 127,0);
    tracep->declArray(c+80,"sram_wdata_c_nx", false,-1, 127,0);
    tracep->declBus(c+84,"sram_waddr_a_nx", false,-1, 5,0);
    tracep->declBus(c+85,"sram_waddr_b_nx", false,-1, 5,0);
    tracep->declBus(c+86,"sram_waddr_c_nx", false,-1, 5,0);
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
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBit(c+113,"resetn", false,-1);
    tracep->declBus(c+87,"din_data_0", false,-1, 15,0);
    tracep->declBus(c+88,"din_data_1", false,-1, 15,0);
    tracep->declBus(c+89,"din_data_2", false,-1, 15,0);
    tracep->declBus(c+90,"din_data_3", false,-1, 15,0);
    tracep->declBus(c+91,"din_data_4", false,-1, 15,0);
    tracep->declBus(c+92,"din_data_5", false,-1, 15,0);
    tracep->declBus(c+93,"din_data_6", false,-1, 15,0);
    tracep->declBus(c+94,"din_data_7", false,-1, 15,0);
    for (int i = 0; i < 15; ++i) {
        tracep->declArray(c+117+i*4,"mem", true,(i+0), 127,0);
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
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBit(c+113,"resetn", false,-1);
    tracep->declBus(c+95,"din_data_0", false,-1, 15,0);
    tracep->declBus(c+96,"din_data_1", false,-1, 15,0);
    tracep->declBus(c+97,"din_data_2", false,-1, 15,0);
    tracep->declBus(c+98,"din_data_3", false,-1, 15,0);
    tracep->declBus(c+99,"din_data_4", false,-1, 15,0);
    tracep->declBus(c+100,"din_data_5", false,-1, 15,0);
    tracep->declBus(c+101,"din_data_6", false,-1, 15,0);
    tracep->declBus(c+102,"din_data_7", false,-1, 15,0);
    for (int i = 0; i < 15; ++i) {
        tracep->declArray(c+177+i*4,"mem", true,(i+0), 127,0);
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
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBit(c+113,"resetn", false,-1);
    tracep->declBus(c+103,"din_data_0", false,-1, 15,0);
    tracep->declBus(c+104,"din_data_1", false,-1, 15,0);
    tracep->declBus(c+105,"din_data_2", false,-1, 15,0);
    tracep->declBus(c+106,"din_data_3", false,-1, 15,0);
    tracep->declBus(c+107,"din_data_4", false,-1, 15,0);
    tracep->declBus(c+108,"din_data_5", false,-1, 15,0);
    tracep->declBus(c+109,"din_data_6", false,-1, 15,0);
    tracep->declBus(c+110,"din_data_7", false,-1, 15,0);
    for (int i = 0; i < 15; ++i) {
        tracep->declArray(c+237+i*4,"mem", true,(i+0), 127,0);
    }
}

VL_ATTR_COLD void VTPUSimEnv___024root__trace_init_sub__TOP__TPUSimEnv__sramW1__0(VTPUSimEnv___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPUSimEnv___024root__trace_init_sub__TOP__TPUSimEnv__sramW1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+5,"io_addr", false,-1, 4,0);
    tracep->declBus(c+34,"io_rdata", false,-1, 31,0);
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBit(c+113,"resetn", false,-1);
    for (int i = 0; i < 31; ++i) {
        tracep->declBus(c+297+i*1,"mem", true,(i+0), 31,0);
    }
}

VL_ATTR_COLD void VTPUSimEnv___024root__trace_init_sub__TOP__TPUSimEnv__sramW0__0(VTPUSimEnv___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPUSimEnv___024root__trace_init_sub__TOP__TPUSimEnv__sramW0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+4,"io_addr", false,-1, 4,0);
    tracep->declBus(c+33,"io_rdata", false,-1, 31,0);
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBit(c+113,"resetn", false,-1);
    for (int i = 0; i < 31; ++i) {
        tracep->declBus(c+328+i*1,"mem", true,(i+0), 31,0);
    }
}

VL_ATTR_COLD void VTPUSimEnv___024root__trace_init_sub__TOP__TPUSimEnv__sramD1__0(VTPUSimEnv___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPUSimEnv___024root__trace_init_sub__TOP__TPUSimEnv__sramD1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+3,"io_addr", false,-1, 4,0);
    tracep->declBus(c+32,"io_rdata", false,-1, 31,0);
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBit(c+113,"resetn", false,-1);
    for (int i = 0; i < 31; ++i) {
        tracep->declBus(c+359+i*1,"mem", true,(i+0), 31,0);
    }
}

VL_ATTR_COLD void VTPUSimEnv___024root__trace_init_sub__TOP__TPUSimEnv__sramD0__0(VTPUSimEnv___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPUSimEnv___024root__trace_init_sub__TOP__TPUSimEnv__sramD0__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+2,"io_addr", false,-1, 4,0);
    tracep->declBus(c+31,"io_rdata", false,-1, 31,0);
    tracep->declBit(c+114,"clk", false,-1);
    tracep->declBit(c+113,"resetn", false,-1);
    for (int i = 0; i < 31; ++i) {
        tracep->declBus(c+390+i*1,"mem", true,(i+0), 31,0);
    }
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
    bufp->fullCData(oldp+2,((0x1fU & (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_d0))),5);
    bufp->fullCData(oldp+3,((0x1fU & (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_d1))),5);
    bufp->fullCData(oldp+4,((0x1fU & (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_w0))),5);
    bufp->fullCData(oldp+5,((0x1fU & (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_w1))),5);
    bufp->fullCData(oldp+6,((0xfU & (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_waddr_a))),4);
    bufp->fullCData(oldp+7,((0xfU & (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_waddr_b))),4);
    bufp->fullCData(oldp+8,((0xfU & (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_waddr_c))),4);
    bufp->fullSData(oldp+9,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_w0),10);
    bufp->fullSData(oldp+10,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_w1),10);
    bufp->fullSData(oldp+11,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_d0),10);
    bufp->fullSData(oldp+12,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_d1),10);
    bufp->fullBit(oldp+13,((1U & (~ (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_write_enable_a0)))));
    bufp->fullWData(oldp+14,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_a),128);
    bufp->fullCData(oldp+18,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_waddr_a),6);
    bufp->fullBit(oldp+19,((1U & (~ (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_write_enable_b0)))));
    bufp->fullWData(oldp+20,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_b),128);
    bufp->fullCData(oldp+24,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_waddr_b),6);
    bufp->fullBit(oldp+25,((1U & (~ (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_write_enable_c0)))));
    bufp->fullWData(oldp+26,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_c),128);
    bufp->fullCData(oldp+30,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_waddr_c),6);
    bufp->fullIData(oldp+31,(vlSymsp->TOP__TPUSimEnv__sramD0.__PVT___zz_mem_port0),32);
    bufp->fullIData(oldp+32,(vlSymsp->TOP__TPUSimEnv__sramD1.__PVT___zz_mem_port0),32);
    bufp->fullIData(oldp+33,(vlSymsp->TOP__TPUSimEnv__sramW0.__PVT___zz_mem_port0),32);
    bufp->fullIData(oldp+34,(vlSymsp->TOP__TPUSimEnv__sramW1.__PVT___zz_mem_port0),32);
    bufp->fullBit(oldp+35,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_write_enable_a0));
    bufp->fullBit(oldp+36,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_write_enable_b0));
    bufp->fullBit(oldp+37,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_write_enable_c0));
    bufp->fullCData(oldp+38,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__addr_serial_num),7);
    bufp->fullWData(oldp+39,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data),168);
    bufp->fullWData(oldp+45,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data),128);
    bufp->fullBit(oldp+49,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__alu_start));
    bufp->fullSData(oldp+50,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num),9);
    bufp->fullCData(oldp+51,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index),6);
    bufp->fullBit(oldp+52,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__sram_write_enable));
    bufp->fullCData(oldp+53,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__data_set),2);
    bufp->fullSData(oldp+54,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__addr_sel__DOT__sram_raddr_w0_nx),10);
    bufp->fullSData(oldp+55,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__addr_sel__DOT__sram_raddr_w1_nx),10);
    bufp->fullIData(oldp+56,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__quantize__DOT__ori_shifted_data),21);
    bufp->fullSData(oldp+57,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result),16);
    bufp->fullCData(oldp+58,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound),6);
    bufp->fullCData(oldp+59,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__lower_bound),6);
    bufp->fullIData(oldp+60,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__i),32);
    bufp->fullIData(oldp+61,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__j),32);
    bufp->fullIData(oldp+62,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                             [0U][0U]),21);
    bufp->fullCData(oldp+63,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state),3);
    bufp->fullCData(oldp+64,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__data_set_nx),2);
    bufp->fullBit(oldp+65,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__tpu_done_nx));
    bufp->fullSData(oldp+66,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__cycle_num_nx),9);
    bufp->fullCData(oldp+67,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__matrix_index_nx),6);
    bufp->fullIData(oldp+68,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i),32);
    bufp->fullBit(oldp+69,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_write_enable_a0_nx));
    bufp->fullBit(oldp+70,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_write_enable_b0_nx));
    bufp->fullBit(oldp+71,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_write_enable_c0_nx));
    bufp->fullWData(oldp+72,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_a_nx),128);
    bufp->fullWData(oldp+76,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx),128);
    bufp->fullWData(oldp+80,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_c_nx),128);
    bufp->fullCData(oldp+84,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_waddr_a_nx),6);
    bufp->fullCData(oldp+85,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_waddr_b_nx),6);
    bufp->fullCData(oldp+86,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_waddr_c_nx),6);
    bufp->fullSData(oldp+87,((0xffffU & vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_c[0U])),16);
    bufp->fullSData(oldp+88,((vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_c[0U] 
                              >> 0x10U)),16);
    bufp->fullSData(oldp+89,((0xffffU & vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_c[1U])),16);
    bufp->fullSData(oldp+90,((vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_c[1U] 
                              >> 0x10U)),16);
    bufp->fullSData(oldp+91,((0xffffU & vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_c[2U])),16);
    bufp->fullSData(oldp+92,((vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_c[2U] 
                              >> 0x10U)),16);
    bufp->fullSData(oldp+93,((0xffffU & vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_c[3U])),16);
    bufp->fullSData(oldp+94,((vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_c[3U] 
                              >> 0x10U)),16);
    bufp->fullSData(oldp+95,((0xffffU & vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_b[0U])),16);
    bufp->fullSData(oldp+96,((vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_b[0U] 
                              >> 0x10U)),16);
    bufp->fullSData(oldp+97,((0xffffU & vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_b[1U])),16);
    bufp->fullSData(oldp+98,((vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_b[1U] 
                              >> 0x10U)),16);
    bufp->fullSData(oldp+99,((0xffffU & vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_b[2U])),16);
    bufp->fullSData(oldp+100,((vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_b[2U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+101,((0xffffU & vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_b[3U])),16);
    bufp->fullSData(oldp+102,((vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_b[3U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+103,((0xffffU & vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_a[0U])),16);
    bufp->fullSData(oldp+104,((vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_a[0U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+105,((0xffffU & vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_a[1U])),16);
    bufp->fullSData(oldp+106,((vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_a[1U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+107,((0xffffU & vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_a[2U])),16);
    bufp->fullSData(oldp+108,((vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_a[2U] 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+109,((0xffffU & vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_a[3U])),16);
    bufp->fullSData(oldp+110,((vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_a[3U] 
                               >> 0x10U)),16);
    bufp->fullBit(oldp+111,(vlSelf->io_tpu_start));
    bufp->fullBit(oldp+112,(vlSelf->io_tpu_done));
    bufp->fullBit(oldp+113,(vlSelf->resetn));
    bufp->fullBit(oldp+114,(vlSelf->clk));
    bufp->fullCData(oldp+115,(((4U & (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state))
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
    bufp->fullCData(oldp+116,(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__addr_serial_num_nx),7);
    bufp->fullWData(oldp+117,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[0]),128);
    bufp->fullWData(oldp+121,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[1]),128);
    bufp->fullWData(oldp+125,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[2]),128);
    bufp->fullWData(oldp+129,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[3]),128);
    bufp->fullWData(oldp+133,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[4]),128);
    bufp->fullWData(oldp+137,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[5]),128);
    bufp->fullWData(oldp+141,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[6]),128);
    bufp->fullWData(oldp+145,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[7]),128);
    bufp->fullWData(oldp+149,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[8]),128);
    bufp->fullWData(oldp+153,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[9]),128);
    bufp->fullWData(oldp+157,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[10]),128);
    bufp->fullWData(oldp+161,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[11]),128);
    bufp->fullWData(oldp+165,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[12]),128);
    bufp->fullWData(oldp+169,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[13]),128);
    bufp->fullWData(oldp+173,(vlSymsp->TOP__TPUSimEnv__sramRes2.mem[14]),128);
    bufp->fullWData(oldp+177,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[0]),128);
    bufp->fullWData(oldp+181,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[1]),128);
    bufp->fullWData(oldp+185,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[2]),128);
    bufp->fullWData(oldp+189,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[3]),128);
    bufp->fullWData(oldp+193,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[4]),128);
    bufp->fullWData(oldp+197,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[5]),128);
    bufp->fullWData(oldp+201,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[6]),128);
    bufp->fullWData(oldp+205,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[7]),128);
    bufp->fullWData(oldp+209,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[8]),128);
    bufp->fullWData(oldp+213,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[9]),128);
    bufp->fullWData(oldp+217,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[10]),128);
    bufp->fullWData(oldp+221,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[11]),128);
    bufp->fullWData(oldp+225,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[12]),128);
    bufp->fullWData(oldp+229,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[13]),128);
    bufp->fullWData(oldp+233,(vlSymsp->TOP__TPUSimEnv__sramRes1.mem[14]),128);
    bufp->fullWData(oldp+237,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[0]),128);
    bufp->fullWData(oldp+241,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[1]),128);
    bufp->fullWData(oldp+245,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[2]),128);
    bufp->fullWData(oldp+249,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[3]),128);
    bufp->fullWData(oldp+253,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[4]),128);
    bufp->fullWData(oldp+257,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[5]),128);
    bufp->fullWData(oldp+261,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[6]),128);
    bufp->fullWData(oldp+265,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[7]),128);
    bufp->fullWData(oldp+269,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[8]),128);
    bufp->fullWData(oldp+273,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[9]),128);
    bufp->fullWData(oldp+277,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[10]),128);
    bufp->fullWData(oldp+281,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[11]),128);
    bufp->fullWData(oldp+285,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[12]),128);
    bufp->fullWData(oldp+289,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[13]),128);
    bufp->fullWData(oldp+293,(vlSymsp->TOP__TPUSimEnv__sramRes0.mem[14]),128);
    bufp->fullIData(oldp+297,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[0]),32);
    bufp->fullIData(oldp+298,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[1]),32);
    bufp->fullIData(oldp+299,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[2]),32);
    bufp->fullIData(oldp+300,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[3]),32);
    bufp->fullIData(oldp+301,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[4]),32);
    bufp->fullIData(oldp+302,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[5]),32);
    bufp->fullIData(oldp+303,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[6]),32);
    bufp->fullIData(oldp+304,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[7]),32);
    bufp->fullIData(oldp+305,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[8]),32);
    bufp->fullIData(oldp+306,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[9]),32);
    bufp->fullIData(oldp+307,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[10]),32);
    bufp->fullIData(oldp+308,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[11]),32);
    bufp->fullIData(oldp+309,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[12]),32);
    bufp->fullIData(oldp+310,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[13]),32);
    bufp->fullIData(oldp+311,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[14]),32);
    bufp->fullIData(oldp+312,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[15]),32);
    bufp->fullIData(oldp+313,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[16]),32);
    bufp->fullIData(oldp+314,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[17]),32);
    bufp->fullIData(oldp+315,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[18]),32);
    bufp->fullIData(oldp+316,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[19]),32);
    bufp->fullIData(oldp+317,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[20]),32);
    bufp->fullIData(oldp+318,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[21]),32);
    bufp->fullIData(oldp+319,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[22]),32);
    bufp->fullIData(oldp+320,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[23]),32);
    bufp->fullIData(oldp+321,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[24]),32);
    bufp->fullIData(oldp+322,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[25]),32);
    bufp->fullIData(oldp+323,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[26]),32);
    bufp->fullIData(oldp+324,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[27]),32);
    bufp->fullIData(oldp+325,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[28]),32);
    bufp->fullIData(oldp+326,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[29]),32);
    bufp->fullIData(oldp+327,(vlSymsp->TOP__TPUSimEnv__sramW1.mem[30]),32);
    bufp->fullIData(oldp+328,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[0]),32);
    bufp->fullIData(oldp+329,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[1]),32);
    bufp->fullIData(oldp+330,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[2]),32);
    bufp->fullIData(oldp+331,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[3]),32);
    bufp->fullIData(oldp+332,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[4]),32);
    bufp->fullIData(oldp+333,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[5]),32);
    bufp->fullIData(oldp+334,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[6]),32);
    bufp->fullIData(oldp+335,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[7]),32);
    bufp->fullIData(oldp+336,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[8]),32);
    bufp->fullIData(oldp+337,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[9]),32);
    bufp->fullIData(oldp+338,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[10]),32);
    bufp->fullIData(oldp+339,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[11]),32);
    bufp->fullIData(oldp+340,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[12]),32);
    bufp->fullIData(oldp+341,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[13]),32);
    bufp->fullIData(oldp+342,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[14]),32);
    bufp->fullIData(oldp+343,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[15]),32);
    bufp->fullIData(oldp+344,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[16]),32);
    bufp->fullIData(oldp+345,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[17]),32);
    bufp->fullIData(oldp+346,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[18]),32);
    bufp->fullIData(oldp+347,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[19]),32);
    bufp->fullIData(oldp+348,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[20]),32);
    bufp->fullIData(oldp+349,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[21]),32);
    bufp->fullIData(oldp+350,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[22]),32);
    bufp->fullIData(oldp+351,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[23]),32);
    bufp->fullIData(oldp+352,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[24]),32);
    bufp->fullIData(oldp+353,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[25]),32);
    bufp->fullIData(oldp+354,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[26]),32);
    bufp->fullIData(oldp+355,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[27]),32);
    bufp->fullIData(oldp+356,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[28]),32);
    bufp->fullIData(oldp+357,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[29]),32);
    bufp->fullIData(oldp+358,(vlSymsp->TOP__TPUSimEnv__sramW0.mem[30]),32);
    bufp->fullIData(oldp+359,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[0]),32);
    bufp->fullIData(oldp+360,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[1]),32);
    bufp->fullIData(oldp+361,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[2]),32);
    bufp->fullIData(oldp+362,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[3]),32);
    bufp->fullIData(oldp+363,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[4]),32);
    bufp->fullIData(oldp+364,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[5]),32);
    bufp->fullIData(oldp+365,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[6]),32);
    bufp->fullIData(oldp+366,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[7]),32);
    bufp->fullIData(oldp+367,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[8]),32);
    bufp->fullIData(oldp+368,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[9]),32);
    bufp->fullIData(oldp+369,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[10]),32);
    bufp->fullIData(oldp+370,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[11]),32);
    bufp->fullIData(oldp+371,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[12]),32);
    bufp->fullIData(oldp+372,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[13]),32);
    bufp->fullIData(oldp+373,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[14]),32);
    bufp->fullIData(oldp+374,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[15]),32);
    bufp->fullIData(oldp+375,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[16]),32);
    bufp->fullIData(oldp+376,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[17]),32);
    bufp->fullIData(oldp+377,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[18]),32);
    bufp->fullIData(oldp+378,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[19]),32);
    bufp->fullIData(oldp+379,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[20]),32);
    bufp->fullIData(oldp+380,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[21]),32);
    bufp->fullIData(oldp+381,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[22]),32);
    bufp->fullIData(oldp+382,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[23]),32);
    bufp->fullIData(oldp+383,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[24]),32);
    bufp->fullIData(oldp+384,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[25]),32);
    bufp->fullIData(oldp+385,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[26]),32);
    bufp->fullIData(oldp+386,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[27]),32);
    bufp->fullIData(oldp+387,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[28]),32);
    bufp->fullIData(oldp+388,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[29]),32);
    bufp->fullIData(oldp+389,(vlSymsp->TOP__TPUSimEnv__sramD1.mem[30]),32);
    bufp->fullIData(oldp+390,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[0]),32);
    bufp->fullIData(oldp+391,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[1]),32);
    bufp->fullIData(oldp+392,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[2]),32);
    bufp->fullIData(oldp+393,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[3]),32);
    bufp->fullIData(oldp+394,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[4]),32);
    bufp->fullIData(oldp+395,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[5]),32);
    bufp->fullIData(oldp+396,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[6]),32);
    bufp->fullIData(oldp+397,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[7]),32);
    bufp->fullIData(oldp+398,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[8]),32);
    bufp->fullIData(oldp+399,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[9]),32);
    bufp->fullIData(oldp+400,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[10]),32);
    bufp->fullIData(oldp+401,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[11]),32);
    bufp->fullIData(oldp+402,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[12]),32);
    bufp->fullIData(oldp+403,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[13]),32);
    bufp->fullIData(oldp+404,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[14]),32);
    bufp->fullIData(oldp+405,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[15]),32);
    bufp->fullIData(oldp+406,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[16]),32);
    bufp->fullIData(oldp+407,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[17]),32);
    bufp->fullIData(oldp+408,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[18]),32);
    bufp->fullIData(oldp+409,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[19]),32);
    bufp->fullIData(oldp+410,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[20]),32);
    bufp->fullIData(oldp+411,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[21]),32);
    bufp->fullIData(oldp+412,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[22]),32);
    bufp->fullIData(oldp+413,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[23]),32);
    bufp->fullIData(oldp+414,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[24]),32);
    bufp->fullIData(oldp+415,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[25]),32);
    bufp->fullIData(oldp+416,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[26]),32);
    bufp->fullIData(oldp+417,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[27]),32);
    bufp->fullIData(oldp+418,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[28]),32);
    bufp->fullIData(oldp+419,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[29]),32);
    bufp->fullIData(oldp+420,(vlSymsp->TOP__TPUSimEnv__sramD0.mem[30]),32);
    bufp->fullIData(oldp+421,(8U),32);
    bufp->fullIData(oldp+422,(0x20U),32);
    bufp->fullIData(oldp+423,(0x10U),32);
    bufp->fullIData(oldp+424,(0x15U),32);
    bufp->fullIData(oldp+425,(0x7fffU),32);
    bufp->fullIData(oldp+426,(0xffff8000U),32);
    bufp->fullIData(oldp+427,(8U),32);
    bufp->fullIData(oldp+428,(9U),32);
    bufp->fullIData(oldp+429,(0x11U),32);
    bufp->fullCData(oldp+430,(0U),3);
    bufp->fullCData(oldp+431,(1U),3);
    bufp->fullCData(oldp+432,(2U),3);
    bufp->fullCData(oldp+433,(3U),3);
    bufp->fullIData(oldp+434,(7U),32);
}
