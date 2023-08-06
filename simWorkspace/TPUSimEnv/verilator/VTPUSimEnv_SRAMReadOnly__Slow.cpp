// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTPUSimEnv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTPUSimEnv__Syms.h"
#include "VTPUSimEnv_SRAMReadOnly.h"
#include "VTPUSimEnv__Syms.h"

void VTPUSimEnv_SRAMReadOnly___ctor_var_reset(VTPUSimEnv_SRAMReadOnly* vlSelf);

VTPUSimEnv_SRAMReadOnly::VTPUSimEnv_SRAMReadOnly(VTPUSimEnv__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTPUSimEnv_SRAMReadOnly___ctor_var_reset(this);
}

void VTPUSimEnv_SRAMReadOnly::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTPUSimEnv_SRAMReadOnly::~VTPUSimEnv_SRAMReadOnly() {
}
