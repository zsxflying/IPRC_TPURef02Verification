// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VTPUSimEnv.h"
#include "VTPUSimEnv__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

VTPUSimEnv::VTPUSimEnv(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VTPUSimEnv__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , io_tpu_start{vlSymsp->TOP.io_tpu_start}
    , io_tpu_done{vlSymsp->TOP.io_tpu_done}
    , reset{vlSymsp->TOP.reset}
    , TPUSimEnv{vlSymsp->TOP.TPUSimEnv}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VTPUSimEnv::VTPUSimEnv(const char* _vcname__)
    : VTPUSimEnv(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VTPUSimEnv::~VTPUSimEnv() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VTPUSimEnv___024root___eval_debug_assertions(VTPUSimEnv___024root* vlSelf);
#endif  // VL_DEBUG
void VTPUSimEnv___024root___eval_static(VTPUSimEnv___024root* vlSelf);
void VTPUSimEnv___024root___eval_initial(VTPUSimEnv___024root* vlSelf);
void VTPUSimEnv___024root___eval_settle(VTPUSimEnv___024root* vlSelf);
void VTPUSimEnv___024root___eval(VTPUSimEnv___024root* vlSelf);

void VTPUSimEnv::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTPUSimEnv::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VTPUSimEnv___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VTPUSimEnv___024root___eval_static(&(vlSymsp->TOP));
        VTPUSimEnv___024root___eval_initial(&(vlSymsp->TOP));
        VTPUSimEnv___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VTPUSimEnv___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VTPUSimEnv::eventsPending() { return false; }

uint64_t VTPUSimEnv::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VTPUSimEnv::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VTPUSimEnv___024root___eval_final(VTPUSimEnv___024root* vlSelf);

VL_ATTR_COLD void VTPUSimEnv::final() {
    VTPUSimEnv___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VTPUSimEnv::hierName() const { return vlSymsp->name(); }
const char* VTPUSimEnv::modelName() const { return "VTPUSimEnv"; }
unsigned VTPUSimEnv::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VTPUSimEnv::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VTPUSimEnv___024root__trace_init_top(VTPUSimEnv___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VTPUSimEnv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTPUSimEnv___024root*>(voidSelf);
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VTPUSimEnv___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VTPUSimEnv___024root__trace_register(VTPUSimEnv___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VTPUSimEnv::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VTPUSimEnv::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VTPUSimEnv___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
