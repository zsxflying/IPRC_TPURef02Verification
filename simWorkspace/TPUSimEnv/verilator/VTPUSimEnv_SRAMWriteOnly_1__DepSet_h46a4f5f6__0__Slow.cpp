// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTPUSimEnv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTPUSimEnv__Syms.h"
#include "VTPUSimEnv_SRAMWriteOnly_1.h"

extern const VlWide<25>/*799:0*/ VTPUSimEnv__ConstPool__CONST_h145b2cb3_0;

VL_ATTR_COLD void VTPUSimEnv_SRAMWriteOnly_1___eval_initial__TOP__TPUSimEnv__sramRes1(VTPUSimEnv_SRAMWriteOnly_1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTPUSimEnv_SRAMWriteOnly_1___eval_initial__TOP__TPUSimEnv__sramRes1\n"); );
    // Body
    VL_READMEM_N(false, 128, 16, 0, VL_CVT_PACK_STR_NW(25, VTPUSimEnv__ConstPool__CONST_h145b2cb3_0)
                 ,  &(vlSelf->mem), 0, ~0ULL);
}

VL_ATTR_COLD void VTPUSimEnv_SRAMWriteOnly_1___ctor_var_reset(VTPUSimEnv_SRAMWriteOnly_1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTPUSimEnv_SRAMWriteOnly_1___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__io_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_addr = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(128, vlSelf->__PVT__io_wdata);
    vlSelf->__PVT__clk = 0;
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->mem[__Vi0]);
    }
}
