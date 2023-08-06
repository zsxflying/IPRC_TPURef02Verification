// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTPUSimEnv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTPUSimEnv__Syms.h"
#include "VTPUSimEnv_SRAMReadOnly_3.h"
#include "VTPUSimEnv__Syms.h"

VL_INLINE_OPT void VTPUSimEnv_SRAMReadOnly_3___nba_sequent__TOP__TPUSimEnv__sramD1__0(VTPUSimEnv_SRAMReadOnly_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTPUSimEnv_SRAMReadOnly_3___nba_sequent__TOP__TPUSimEnv__sramD1__0\n"); );
    // Body
    vlSelf->__PVT___zz_mem_port0 = vlSelf->mem[(0x7fU 
                                                & (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_d1))];
}
