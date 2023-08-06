// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTPUSimEnv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTPUSimEnv__Syms.h"
#include "VTPUSimEnv__Syms.h"
#include "VTPUSimEnv___024root.h"

void VTPUSimEnv___024root___ctor_var_reset(VTPUSimEnv___024root* vlSelf);

VTPUSimEnv___024root::VTPUSimEnv___024root(VTPUSimEnv__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTPUSimEnv___024root___ctor_var_reset(this);
}

void VTPUSimEnv___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTPUSimEnv___024root::~VTPUSimEnv___024root() {
}
