// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTPUSimEnv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTPUSimEnv__Syms.h"
#include "VTPUSimEnv_SRAMWriteOnly.h"
#include "VTPUSimEnv__Syms.h"

VL_INLINE_OPT void VTPUSimEnv_SRAMWriteOnly___nba_sequent__TOP__TPUSimEnv__sramRes0__0(VTPUSimEnv_SRAMWriteOnly* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTPUSimEnv_SRAMWriteOnly___nba_sequent__TOP__TPUSimEnv__sramRes0__0\n"); );
    // Init
    CData/*3:0*/ __Vdlyvdim0__mem__v0;
    __Vdlyvdim0__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem__v0;
    __Vdlyvset__mem__v0 = 0;
    // Body
    __Vdlyvset__mem__v0 = 0U;
    if (vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_write_enable_a0) {
        __Vdlyvval__mem__v0[0U] = vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_a[0U];
        __Vdlyvval__mem__v0[1U] = vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_a[1U];
        __Vdlyvval__mem__v0[2U] = vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_a[2U];
        __Vdlyvval__mem__v0[3U] = vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_a[3U];
        __Vdlyvset__mem__v0 = 1U;
        __Vdlyvdim0__mem__v0 = (0xfU & (IData)(vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_sram_waddr_a));
    }
    if (__Vdlyvset__mem__v0) {
        vlSelf->mem[__Vdlyvdim0__mem__v0][0U] = __Vdlyvval__mem__v0[0U];
        vlSelf->mem[__Vdlyvdim0__mem__v0][1U] = __Vdlyvval__mem__v0[1U];
        vlSelf->mem[__Vdlyvdim0__mem__v0][2U] = __Vdlyvval__mem__v0[2U];
        vlSelf->mem[__Vdlyvdim0__mem__v0][3U] = __Vdlyvval__mem__v0[3U];
    }
}
