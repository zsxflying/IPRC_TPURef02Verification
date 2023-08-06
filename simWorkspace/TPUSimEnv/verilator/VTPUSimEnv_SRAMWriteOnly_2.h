// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTPUSimEnv.h for the primary calling header

#ifndef VERILATED_VTPUSIMENV_SRAMWRITEONLY_2_H_
#define VERILATED_VTPUSIMENV_SRAMWRITEONLY_2_H_  // guard

#include "verilated.h"


class VTPUSimEnv__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTPUSimEnv_SRAMWriteOnly_2 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__io_valid,0,0);
    VL_IN8(__PVT__io_addr,3,0);
    VL_IN8(__PVT__reset,0,0);
    VL_INW(__PVT__io_wdata,127,0,4);
    VlUnpacked<VlWide<4>/*127:0*/, 16> mem;

    // INTERNAL VARIABLES
    VTPUSimEnv__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTPUSimEnv_SRAMWriteOnly_2(VTPUSimEnv__Syms* symsp, const char* v__name);
    ~VTPUSimEnv_SRAMWriteOnly_2();
    VL_UNCOPYABLE(VTPUSimEnv_SRAMWriteOnly_2);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
