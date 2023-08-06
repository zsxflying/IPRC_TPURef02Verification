// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTPUSimEnv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTPUSimEnv__Syms.h"
#include "VTPUSimEnv__Syms.h"
#include "VTPUSimEnv___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VTPUSimEnv___024root___dump_triggers__ico(VTPUSimEnv___024root* vlSelf);
#endif  // VL_DEBUG

void VTPUSimEnv___024root___eval_triggers__ico(VTPUSimEnv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPUSimEnv___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTPUSimEnv___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void VTPUSimEnv_TPUSimEnv___ico_sequent__TOP__TPUSimEnv__0(VTPUSimEnv_TPUSimEnv* vlSelf);

void VTPUSimEnv___024root___eval_ico(VTPUSimEnv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPUSimEnv___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VTPUSimEnv_TPUSimEnv___ico_sequent__TOP__TPUSimEnv__0((&vlSymsp->TOP__TPUSimEnv));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTPUSimEnv___024root___dump_triggers__act(VTPUSimEnv___024root* vlSelf);
#endif  // VL_DEBUG

void VTPUSimEnv___024root___eval_triggers__act(VTPUSimEnv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPUSimEnv___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTPUSimEnv___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VTPUSimEnv___024root___nba_sequent__TOP__0(VTPUSimEnv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPUSimEnv___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->io_tpu_done = vlSymsp->TOP__TPUSimEnv.__PVT__tpu_1__DOT__tpuVerilog_tpu_done;
}

void VTPUSimEnv_SRAMWriteOnly_2___nba_sequent__TOP__TPUSimEnv__sramRes2__0(VTPUSimEnv_SRAMWriteOnly_2* vlSelf);
void VTPUSimEnv_SRAMWriteOnly___nba_sequent__TOP__TPUSimEnv__sramRes0__0(VTPUSimEnv_SRAMWriteOnly* vlSelf);
void VTPUSimEnv_SRAMWriteOnly_1___nba_sequent__TOP__TPUSimEnv__sramRes1__0(VTPUSimEnv_SRAMWriteOnly_1* vlSelf);
void VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__0(VTPUSimEnv_TPUSimEnv* vlSelf);
void VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__1(VTPUSimEnv_TPUSimEnv* vlSelf);
void VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__2(VTPUSimEnv_TPUSimEnv* vlSelf);
void VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__3(VTPUSimEnv_TPUSimEnv* vlSelf);
void VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__4(VTPUSimEnv_TPUSimEnv* vlSelf);
void VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__5(VTPUSimEnv_TPUSimEnv* vlSelf);
void VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__6(VTPUSimEnv_TPUSimEnv* vlSelf);
void VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__7(VTPUSimEnv_TPUSimEnv* vlSelf);
void VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__8(VTPUSimEnv_TPUSimEnv* vlSelf);
void VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__9(VTPUSimEnv_TPUSimEnv* vlSelf);
void VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__10(VTPUSimEnv_TPUSimEnv* vlSelf);
void VTPUSimEnv_SRAMReadOnly_2___nba_sequent__TOP__TPUSimEnv__sramD0__0(VTPUSimEnv_SRAMReadOnly_2* vlSelf);
void VTPUSimEnv_SRAMReadOnly_3___nba_sequent__TOP__TPUSimEnv__sramD1__0(VTPUSimEnv_SRAMReadOnly_3* vlSelf);
void VTPUSimEnv_SRAMReadOnly___nba_sequent__TOP__TPUSimEnv__sramW0__0(VTPUSimEnv_SRAMReadOnly* vlSelf);
void VTPUSimEnv_SRAMReadOnly_1___nba_sequent__TOP__TPUSimEnv__sramW1__0(VTPUSimEnv_SRAMReadOnly_1* vlSelf);
void VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__11(VTPUSimEnv_TPUSimEnv* vlSelf);

void VTPUSimEnv___024root___eval_nba(VTPUSimEnv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPUSimEnv___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTPUSimEnv_SRAMWriteOnly_2___nba_sequent__TOP__TPUSimEnv__sramRes2__0((&vlSymsp->TOP__TPUSimEnv__sramRes2));
        vlSelf->__Vm_traceActivity[1U] = 1U;
        VTPUSimEnv_SRAMWriteOnly___nba_sequent__TOP__TPUSimEnv__sramRes0__0((&vlSymsp->TOP__TPUSimEnv__sramRes0));
        VTPUSimEnv_SRAMWriteOnly_1___nba_sequent__TOP__TPUSimEnv__sramRes1__0((&vlSymsp->TOP__TPUSimEnv__sramRes1));
        VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__0((&vlSymsp->TOP__TPUSimEnv));
        VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__1((&vlSymsp->TOP__TPUSimEnv));
        VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__2((&vlSymsp->TOP__TPUSimEnv));
        VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__3((&vlSymsp->TOP__TPUSimEnv));
        VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__4((&vlSymsp->TOP__TPUSimEnv));
        VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__5((&vlSymsp->TOP__TPUSimEnv));
        VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__6((&vlSymsp->TOP__TPUSimEnv));
        VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__7((&vlSymsp->TOP__TPUSimEnv));
        VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__8((&vlSymsp->TOP__TPUSimEnv));
        VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__9((&vlSymsp->TOP__TPUSimEnv));
        VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__10((&vlSymsp->TOP__TPUSimEnv));
        VTPUSimEnv_SRAMReadOnly_2___nba_sequent__TOP__TPUSimEnv__sramD0__0((&vlSymsp->TOP__TPUSimEnv__sramD0));
        VTPUSimEnv_SRAMReadOnly_3___nba_sequent__TOP__TPUSimEnv__sramD1__0((&vlSymsp->TOP__TPUSimEnv__sramD1));
        VTPUSimEnv_SRAMReadOnly___nba_sequent__TOP__TPUSimEnv__sramW0__0((&vlSymsp->TOP__TPUSimEnv__sramW0));
        VTPUSimEnv_SRAMReadOnly_1___nba_sequent__TOP__TPUSimEnv__sramW1__0((&vlSymsp->TOP__TPUSimEnv__sramW1));
        VTPUSimEnv___024root___nba_sequent__TOP__0(vlSelf);
        VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__11((&vlSymsp->TOP__TPUSimEnv));
    }
}
