// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTPUSimEnv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTPUSimEnv__Syms.h"
#include "VTPUSimEnv_SRAMWriteOnly.h"
#include "VTPUSimEnv__Syms.h"

void VTPUSimEnv_SRAMWriteOnly___ctor_var_reset(VTPUSimEnv_SRAMWriteOnly* vlSelf);

VTPUSimEnv_SRAMWriteOnly::VTPUSimEnv_SRAMWriteOnly(VTPUSimEnv__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTPUSimEnv_SRAMWriteOnly___ctor_var_reset(this);
}

void VTPUSimEnv_SRAMWriteOnly::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTPUSimEnv_SRAMWriteOnly::~VTPUSimEnv_SRAMWriteOnly() {
}
