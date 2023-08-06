// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTPUSimEnv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTPUSimEnv__Syms.h"
#include "VTPUSimEnv_SRAMWriteOnly_1.h"
#include "VTPUSimEnv__Syms.h"

void VTPUSimEnv_SRAMWriteOnly_1___ctor_var_reset(VTPUSimEnv_SRAMWriteOnly_1* vlSelf);

VTPUSimEnv_SRAMWriteOnly_1::VTPUSimEnv_SRAMWriteOnly_1(VTPUSimEnv__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTPUSimEnv_SRAMWriteOnly_1___ctor_var_reset(this);
}

void VTPUSimEnv_SRAMWriteOnly_1::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTPUSimEnv_SRAMWriteOnly_1::~VTPUSimEnv_SRAMWriteOnly_1() {
}
