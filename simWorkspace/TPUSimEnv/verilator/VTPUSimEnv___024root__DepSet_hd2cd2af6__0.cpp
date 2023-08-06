// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTPUSimEnv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTPUSimEnv__Syms.h"
#include "VTPUSimEnv___024root.h"

void VTPUSimEnv___024root___eval_act(VTPUSimEnv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPUSimEnv___024root___eval_act\n"); );
}

void VTPUSimEnv___024root___eval_triggers__ico(VTPUSimEnv___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VTPUSimEnv___024root___dump_triggers__ico(VTPUSimEnv___024root* vlSelf);
#endif  // VL_DEBUG
void VTPUSimEnv___024root___eval_ico(VTPUSimEnv___024root* vlSelf);
void VTPUSimEnv___024root___eval_triggers__act(VTPUSimEnv___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VTPUSimEnv___024root___dump_triggers__act(VTPUSimEnv___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTPUSimEnv___024root___dump_triggers__nba(VTPUSimEnv___024root* vlSelf);
#endif  // VL_DEBUG
void VTPUSimEnv___024root___eval_nba(VTPUSimEnv___024root* vlSelf);

void VTPUSimEnv___024root___eval(VTPUSimEnv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPUSimEnv___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VTPUSimEnv___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VTPUSimEnv___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/rick/NTTAccelerator/example/TPU_verification/tmp/job_1/TPUSimEnv.v", 6, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VTPUSimEnv___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VTPUSimEnv___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VTPUSimEnv___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/rick/NTTAccelerator/example/TPU_verification/tmp/job_1/TPUSimEnv.v", 6, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                VTPUSimEnv___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VTPUSimEnv___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/rick/NTTAccelerator/example/TPU_verification/tmp/job_1/TPUSimEnv.v", 6, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VTPUSimEnv___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VTPUSimEnv___024root___eval_debug_assertions(VTPUSimEnv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPUSimEnv___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->io_tpu_start & 0xfeU))) {
        Verilated::overWidthError("io_tpu_start");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
