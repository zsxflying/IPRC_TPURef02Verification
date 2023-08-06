// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTPUSimEnv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTPUSimEnv__Syms.h"
#include "VTPUSimEnv__Syms.h"
#include "VTPUSimEnv___024root.h"

VL_ATTR_COLD void VTPUSimEnv_TPUSimEnv___eval_initial__TOP__TPUSimEnv(VTPUSimEnv_TPUSimEnv* vlSelf);
VL_ATTR_COLD void VTPUSimEnv_SRAMWriteOnly_2___eval_initial__TOP__TPUSimEnv__sramRes2(VTPUSimEnv_SRAMWriteOnly_2* vlSelf);
VL_ATTR_COLD void VTPUSimEnv_SRAMWriteOnly_1___eval_initial__TOP__TPUSimEnv__sramRes1(VTPUSimEnv_SRAMWriteOnly_1* vlSelf);
VL_ATTR_COLD void VTPUSimEnv_SRAMWriteOnly___eval_initial__TOP__TPUSimEnv__sramRes0(VTPUSimEnv_SRAMWriteOnly* vlSelf);
VL_ATTR_COLD void VTPUSimEnv_SRAMReadOnly_3___eval_initial__TOP__TPUSimEnv__sramD1(VTPUSimEnv_SRAMReadOnly_3* vlSelf);
VL_ATTR_COLD void VTPUSimEnv_SRAMReadOnly_2___eval_initial__TOP__TPUSimEnv__sramD0(VTPUSimEnv_SRAMReadOnly_2* vlSelf);
VL_ATTR_COLD void VTPUSimEnv_SRAMReadOnly_1___eval_initial__TOP__TPUSimEnv__sramW1(VTPUSimEnv_SRAMReadOnly_1* vlSelf);
VL_ATTR_COLD void VTPUSimEnv_SRAMReadOnly___eval_initial__TOP__TPUSimEnv__sramW0(VTPUSimEnv_SRAMReadOnly* vlSelf);

VL_ATTR_COLD void VTPUSimEnv___024root___eval_initial(VTPUSimEnv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPUSimEnv___024root___eval_initial\n"); );
    // Body
    VTPUSimEnv_TPUSimEnv___eval_initial__TOP__TPUSimEnv((&vlSymsp->TOP__TPUSimEnv));
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    VTPUSimEnv_SRAMWriteOnly_2___eval_initial__TOP__TPUSimEnv__sramRes2((&vlSymsp->TOP__TPUSimEnv__sramRes2));
    VTPUSimEnv_SRAMWriteOnly_1___eval_initial__TOP__TPUSimEnv__sramRes1((&vlSymsp->TOP__TPUSimEnv__sramRes1));
    VTPUSimEnv_SRAMWriteOnly___eval_initial__TOP__TPUSimEnv__sramRes0((&vlSymsp->TOP__TPUSimEnv__sramRes0));
    VTPUSimEnv_SRAMReadOnly_3___eval_initial__TOP__TPUSimEnv__sramD1((&vlSymsp->TOP__TPUSimEnv__sramD1));
    VTPUSimEnv_SRAMReadOnly_2___eval_initial__TOP__TPUSimEnv__sramD0((&vlSymsp->TOP__TPUSimEnv__sramD0));
    VTPUSimEnv_SRAMReadOnly_1___eval_initial__TOP__TPUSimEnv__sramW1((&vlSymsp->TOP__TPUSimEnv__sramW1));
    VTPUSimEnv_SRAMReadOnly___eval_initial__TOP__TPUSimEnv__sramW0((&vlSymsp->TOP__TPUSimEnv__sramW0));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTPUSimEnv___024root___dump_triggers__stl(VTPUSimEnv___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VTPUSimEnv___024root___eval_triggers__stl(VTPUSimEnv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPUSimEnv___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTPUSimEnv___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

void VTPUSimEnv___024root___nba_sequent__TOP__0(VTPUSimEnv___024root* vlSelf);
VL_ATTR_COLD void VTPUSimEnv_TPUSimEnv___stl_sequent__TOP__TPUSimEnv__0(VTPUSimEnv_TPUSimEnv* vlSelf);
VL_ATTR_COLD void VTPUSimEnv_TPUSimEnv___stl_sequent__TOP__TPUSimEnv__1(VTPUSimEnv_TPUSimEnv* vlSelf);
VL_ATTR_COLD void VTPUSimEnv_TPUSimEnv___stl_sequent__TOP__TPUSimEnv__2(VTPUSimEnv_TPUSimEnv* vlSelf);
VL_ATTR_COLD void VTPUSimEnv_TPUSimEnv___stl_sequent__TOP__TPUSimEnv__3(VTPUSimEnv_TPUSimEnv* vlSelf);
void VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__10(VTPUSimEnv_TPUSimEnv* vlSelf);

VL_ATTR_COLD void VTPUSimEnv___024root___eval_stl(VTPUSimEnv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTPUSimEnv___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTPUSimEnv___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        VTPUSimEnv_TPUSimEnv___stl_sequent__TOP__TPUSimEnv__0((&vlSymsp->TOP__TPUSimEnv));
        VTPUSimEnv_TPUSimEnv___stl_sequent__TOP__TPUSimEnv__1((&vlSymsp->TOP__TPUSimEnv));
        VTPUSimEnv_TPUSimEnv___stl_sequent__TOP__TPUSimEnv__2((&vlSymsp->TOP__TPUSimEnv));
        VTPUSimEnv_TPUSimEnv___stl_sequent__TOP__TPUSimEnv__3((&vlSymsp->TOP__TPUSimEnv));
        VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__10((&vlSymsp->TOP__TPUSimEnv));
    }
}
