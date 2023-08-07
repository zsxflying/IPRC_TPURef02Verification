// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTPUSimEnv.h for the primary calling header

#ifndef VERILATED_VTPUSIMENV_SRAMREADONLY_H_
#define VERILATED_VTPUSIMENV_SRAMREADONLY_H_  // guard

#include "verilated.h"


class VTPUSimEnv__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTPUSimEnv_SRAMReadOnly final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__io_addr,4,0);
    VL_IN8(__PVT__resetn,0,0);
    IData/*31:0*/ __Vxrand_h9b47bc05__0;
    VL_OUT(__PVT__io_rdata,31,0);
    IData/*31:0*/ __PVT___zz_mem_port0;
    VlUnpacked<IData/*31:0*/, 31> mem;

    // INTERNAL VARIABLES
    VTPUSimEnv__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTPUSimEnv_SRAMReadOnly(VTPUSimEnv__Syms* symsp, const char* v__name);
    ~VTPUSimEnv_SRAMReadOnly();
    VL_UNCOPYABLE(VTPUSimEnv_SRAMReadOnly);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
