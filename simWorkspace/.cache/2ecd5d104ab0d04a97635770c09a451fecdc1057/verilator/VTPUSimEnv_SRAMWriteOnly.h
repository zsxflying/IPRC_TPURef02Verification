// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTPUSimEnv.h for the primary calling header

#ifndef VERILATED_VTPUSIMENV_SRAMWRITEONLY_H_
#define VERILATED_VTPUSIMENV_SRAMWRITEONLY_H_  // guard

#include "verilated.h"


class VTPUSimEnv__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTPUSimEnv_SRAMWriteOnly final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__io_valid,0,0);
    VL_IN8(__PVT__io_addr,3,0);
    VL_IN8(__PVT__resetn,0,0);
    VL_INW(__PVT__io_wdata,127,0,4);
    VlWide<4>/*127:0*/ __Vlvbound_ha17ce783__0;
    VlUnpacked<VlWide<4>/*127:0*/, 15> mem;

    // INTERNAL VARIABLES
    VTPUSimEnv__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTPUSimEnv_SRAMWriteOnly(VTPUSimEnv__Syms* symsp, const char* v__name);
    ~VTPUSimEnv_SRAMWriteOnly();
    VL_UNCOPYABLE(VTPUSimEnv_SRAMWriteOnly);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
