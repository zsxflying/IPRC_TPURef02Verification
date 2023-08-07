// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTPUSIMENV__SYMS_H_
#define VERILATED_VTPUSIMENV__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VTPUSimEnv.h"

// INCLUDE MODULE CLASSES
#include "VTPUSimEnv___024root.h"
#include "VTPUSimEnv_TPUSimEnv.h"
#include "VTPUSimEnv_SRAMWriteOnly_2.h"
#include "VTPUSimEnv_SRAMWriteOnly_1.h"
#include "VTPUSimEnv_SRAMWriteOnly.h"
#include "VTPUSimEnv_SRAMReadOnly_3.h"
#include "VTPUSimEnv_SRAMReadOnly_2.h"
#include "VTPUSimEnv_SRAMReadOnly_1.h"
#include "VTPUSimEnv_SRAMReadOnly.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VTPUSimEnv__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VTPUSimEnv* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VTPUSimEnv___024root           TOP;
    VTPUSimEnv_TPUSimEnv           TOP__TPUSimEnv;
    VTPUSimEnv_SRAMReadOnly        TOP__TPUSimEnv__sramD0;
    VTPUSimEnv_SRAMReadOnly_1      TOP__TPUSimEnv__sramD1;
    VTPUSimEnv_SRAMWriteOnly       TOP__TPUSimEnv__sramRes0;
    VTPUSimEnv_SRAMWriteOnly_1     TOP__TPUSimEnv__sramRes1;
    VTPUSimEnv_SRAMWriteOnly_2     TOP__TPUSimEnv__sramRes2;
    VTPUSimEnv_SRAMReadOnly_2      TOP__TPUSimEnv__sramW0;
    VTPUSimEnv_SRAMReadOnly_3      TOP__TPUSimEnv__sramW1;

    // SCOPE NAMES
    VerilatedScope __Vscope_TPUSimEnv__sramD0;
    VerilatedScope __Vscope_TPUSimEnv__sramD1;
    VerilatedScope __Vscope_TPUSimEnv__sramRes0;
    VerilatedScope __Vscope_TPUSimEnv__sramRes1;
    VerilatedScope __Vscope_TPUSimEnv__sramRes2;
    VerilatedScope __Vscope_TPUSimEnv__sramW0;
    VerilatedScope __Vscope_TPUSimEnv__sramW1;

    // CONSTRUCTORS
    VTPUSimEnv__Syms(VerilatedContext* contextp, const char* namep, VTPUSimEnv* modelp);
    ~VTPUSimEnv__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
