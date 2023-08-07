// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VTPUSimEnv__Syms.h"
#include "VTPUSimEnv.h"
#include "VTPUSimEnv___024root.h"
#include "VTPUSimEnv_TPUSimEnv.h"
#include "VTPUSimEnv_SRAMWriteOnly_2.h"
#include "VTPUSimEnv_SRAMWriteOnly_1.h"
#include "VTPUSimEnv_SRAMWriteOnly.h"
#include "VTPUSimEnv_SRAMReadOnly_3.h"
#include "VTPUSimEnv_SRAMReadOnly_2.h"
#include "VTPUSimEnv_SRAMReadOnly_1.h"
#include "VTPUSimEnv_SRAMReadOnly.h"

// FUNCTIONS
VTPUSimEnv__Syms::~VTPUSimEnv__Syms()
{
}

VTPUSimEnv__Syms::VTPUSimEnv__Syms(VerilatedContext* contextp, const char* namep, VTPUSimEnv* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__TPUSimEnv{this, Verilated::catName(namep, "TPUSimEnv")}
    , TOP__TPUSimEnv__sramD0{this, Verilated::catName(namep, "TPUSimEnv.sramD0")}
    , TOP__TPUSimEnv__sramD1{this, Verilated::catName(namep, "TPUSimEnv.sramD1")}
    , TOP__TPUSimEnv__sramRes0{this, Verilated::catName(namep, "TPUSimEnv.sramRes0")}
    , TOP__TPUSimEnv__sramRes1{this, Verilated::catName(namep, "TPUSimEnv.sramRes1")}
    , TOP__TPUSimEnv__sramRes2{this, Verilated::catName(namep, "TPUSimEnv.sramRes2")}
    , TOP__TPUSimEnv__sramW0{this, Verilated::catName(namep, "TPUSimEnv.sramW0")}
    , TOP__TPUSimEnv__sramW1{this, Verilated::catName(namep, "TPUSimEnv.sramW1")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.TPUSimEnv = &TOP__TPUSimEnv;
    TOP__TPUSimEnv.sramD0 = &TOP__TPUSimEnv__sramD0;
    TOP__TPUSimEnv.sramD1 = &TOP__TPUSimEnv__sramD1;
    TOP__TPUSimEnv.sramRes0 = &TOP__TPUSimEnv__sramRes0;
    TOP__TPUSimEnv.sramRes1 = &TOP__TPUSimEnv__sramRes1;
    TOP__TPUSimEnv.sramRes2 = &TOP__TPUSimEnv__sramRes2;
    TOP__TPUSimEnv.sramW0 = &TOP__TPUSimEnv__sramW0;
    TOP__TPUSimEnv.sramW1 = &TOP__TPUSimEnv__sramW1;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__TPUSimEnv.__Vconfigure(true);
    TOP__TPUSimEnv__sramD0.__Vconfigure(true);
    TOP__TPUSimEnv__sramD1.__Vconfigure(true);
    TOP__TPUSimEnv__sramRes0.__Vconfigure(true);
    TOP__TPUSimEnv__sramRes1.__Vconfigure(true);
    TOP__TPUSimEnv__sramRes2.__Vconfigure(true);
    TOP__TPUSimEnv__sramW0.__Vconfigure(true);
    TOP__TPUSimEnv__sramW1.__Vconfigure(true);
    // Setup scopes
    __Vscope_TPUSimEnv__sramD0.configure(this, name(), "TPUSimEnv.sramD0", "sramD0", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_TPUSimEnv__sramD1.configure(this, name(), "TPUSimEnv.sramD1", "sramD1", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_TPUSimEnv__sramRes0.configure(this, name(), "TPUSimEnv.sramRes0", "sramRes0", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_TPUSimEnv__sramRes1.configure(this, name(), "TPUSimEnv.sramRes1", "sramRes1", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_TPUSimEnv__sramRes2.configure(this, name(), "TPUSimEnv.sramRes2", "sramRes2", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_TPUSimEnv__sramW0.configure(this, name(), "TPUSimEnv.sramW0", "sramW0", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_TPUSimEnv__sramW1.configure(this, name(), "TPUSimEnv.sramW1", "sramW1", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TPUSimEnv__sramD0.varInsert(__Vfinal,"mem", &(TOP__TPUSimEnv__sramD0.mem), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,0,30);
        __Vscope_TPUSimEnv__sramD1.varInsert(__Vfinal,"mem", &(TOP__TPUSimEnv__sramD1.mem), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,0,30);
        __Vscope_TPUSimEnv__sramRes0.varInsert(__Vfinal,"mem", &(TOP__TPUSimEnv__sramRes0.mem), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,2 ,127,0 ,0,14);
        __Vscope_TPUSimEnv__sramRes1.varInsert(__Vfinal,"mem", &(TOP__TPUSimEnv__sramRes1.mem), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,2 ,127,0 ,0,14);
        __Vscope_TPUSimEnv__sramRes2.varInsert(__Vfinal,"mem", &(TOP__TPUSimEnv__sramRes2.mem), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,2 ,127,0 ,0,14);
        __Vscope_TPUSimEnv__sramW0.varInsert(__Vfinal,"mem", &(TOP__TPUSimEnv__sramW0.mem), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,0,30);
        __Vscope_TPUSimEnv__sramW1.varInsert(__Vfinal,"mem", &(TOP__TPUSimEnv__sramW1.mem), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,0,30);
    }
}
