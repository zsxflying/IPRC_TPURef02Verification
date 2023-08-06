// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTPUSimEnv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTPUSimEnv__Syms.h"
#include "VTPUSimEnv_TPUSimEnv.h"
#include "VTPUSimEnv__Syms.h"

void VTPUSimEnv_TPUSimEnv___ctor_var_reset(VTPUSimEnv_TPUSimEnv* vlSelf);

VTPUSimEnv_TPUSimEnv::VTPUSimEnv_TPUSimEnv(VTPUSimEnv__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTPUSimEnv_TPUSimEnv___ctor_var_reset(this);
}

void VTPUSimEnv_TPUSimEnv::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTPUSimEnv_TPUSimEnv::~VTPUSimEnv_TPUSimEnv() {
}
