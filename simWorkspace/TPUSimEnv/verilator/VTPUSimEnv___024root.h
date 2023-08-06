// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTPUSimEnv.h for the primary calling header

#ifndef VERILATED_VTPUSIMENV___024ROOT_H_
#define VERILATED_VTPUSIMENV___024ROOT_H_  // guard

#include "verilated.h"
class VTPUSimEnv_TPUSimEnv;


class VTPUSimEnv__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTPUSimEnv___024root final : public VerilatedModule {
  public:
    // CELLS
    VTPUSimEnv_TPUSimEnv* TPUSimEnv;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(io_tpu_start,0,0);
    VL_OUT8(io_tpu_done,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VTPUSimEnv__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTPUSimEnv___024root(VTPUSimEnv__Syms* symsp, const char* v__name);
    ~VTPUSimEnv___024root();
    VL_UNCOPYABLE(VTPUSimEnv___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
