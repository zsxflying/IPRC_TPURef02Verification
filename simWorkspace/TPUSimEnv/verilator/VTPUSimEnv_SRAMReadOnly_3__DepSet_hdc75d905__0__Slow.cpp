// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTPUSimEnv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTPUSimEnv__Syms.h"
#include "VTPUSimEnv_SRAMReadOnly_3.h"

extern const VlWide<24>/*767:0*/ VTPUSimEnv__ConstPool__CONST_he481579d_0;

VL_ATTR_COLD void VTPUSimEnv_SRAMReadOnly_3___eval_initial__TOP__TPUSimEnv__sramD1(VTPUSimEnv_SRAMReadOnly_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTPUSimEnv_SRAMReadOnly_3___eval_initial__TOP__TPUSimEnv__sramD1\n"); );
    // Body
    VL_READMEM_N(false, 32, 128, 0, VL_CVT_PACK_STR_NW(24, VTPUSimEnv__ConstPool__CONST_he481579d_0)
                 ,  &(vlSelf->mem), 0, ~0ULL);
}

VL_ATTR_COLD void VTPUSimEnv_SRAMReadOnly_3___ctor_var_reset(VTPUSimEnv_SRAMReadOnly_3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTPUSimEnv_SRAMReadOnly_3___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__io_addr = VL_RAND_RESET_I(7);
    vlSelf->__PVT__io_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__clk = 0;
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_mem_port0 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->mem[__Vi0] = VL_RAND_RESET_I(32);
    }
}
