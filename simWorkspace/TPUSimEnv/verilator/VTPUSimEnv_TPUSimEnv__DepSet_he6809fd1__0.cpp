// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTPUSimEnv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTPUSimEnv__Syms.h"
#include "VTPUSimEnv_TPUSimEnv.h"
#include "VTPUSimEnv__Syms.h"

extern const VlUnpacked<CData/*6:0*/, 2048> VTPUSimEnv__ConstPool__TABLE_h0402a734_0;

VL_INLINE_OPT void VTPUSimEnv_TPUSimEnv___ico_sequent__TOP__TPUSimEnv__0(VTPUSimEnv_TPUSimEnv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTPUSimEnv_TPUSimEnv___ico_sequent__TOP__TPUSimEnv__0\n"); );
    // Init
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state_nx 
        = ((4U & (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state))
            ? 0U : ((2U & (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state))
                     ? ((1U & (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state))
                         ? (((0xfU == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                             & (1U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__data_set)))
                             ? 0U : 3U) : 3U) : ((1U 
                                                  & (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state))
                                                  ? 2U
                                                  : 
                                                 ((IData)(vlSymsp->TOP.io_tpu_start)
                                                   ? 1U
                                                   : 0U))));
    __Vtableidx1 = (((IData)(vlSymsp->TOP.io_tpu_start) 
                     << 0xaU) | (((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__addr_serial_num) 
                                  << 3U) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state)));
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__addr_serial_num_nx 
        = VTPUSimEnv__ConstPool__TABLE_h0402a734_0[__Vtableidx1];
}

VL_INLINE_OPT void VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__0(VTPUSimEnv_TPUSimEnv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__0\n"); );
    // Body
    vlSelf->__Vdlyvset__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v0 = 0U;
    vlSelf->__Vdlyvset__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v64 = 0U;
    vlSelf->__Vdlyvset__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v0 = 0U;
    vlSelf->__Vdlyvset__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v64 = 0U;
    vlSelf->__Vdlyvset__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v0 = 0U;
    vlSelf->__Vdlyvset__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v64 = 0U;
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__j = 8U;
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__i = 8U;
    if (vlSymsp->TOP.resetn) {
        if (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__alu_start) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__j = 8U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__i = 8U;
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v0 
                = (vlSymsp->TOP__TPUSimEnv__sramD0.__PVT___zz_mem_port0 
                   >> 0x18U);
            vlSelf->__Vdlyvset__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v0 = 1U;
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v1 
                = (vlSymsp->TOP__TPUSimEnv__sramD1.__PVT___zz_mem_port0 
                   >> 0x18U);
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v2 
                = (0xffU & (vlSymsp->TOP__TPUSimEnv__sramD0.__PVT___zz_mem_port0 
                            >> 0x10U));
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v3 
                = (0xffU & (vlSymsp->TOP__TPUSimEnv__sramD1.__PVT___zz_mem_port0 
                            >> 0x10U));
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v4 
                = (0xffU & (vlSymsp->TOP__TPUSimEnv__sramD0.__PVT___zz_mem_port0 
                            >> 8U));
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v5 
                = (0xffU & (vlSymsp->TOP__TPUSimEnv__sramD1.__PVT___zz_mem_port0 
                            >> 8U));
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v6 
                = (0xffU & vlSymsp->TOP__TPUSimEnv__sramD0.__PVT___zz_mem_port0);
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v7 
                = (0xffU & vlSymsp->TOP__TPUSimEnv__sramD1.__PVT___zz_mem_port0);
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v8 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [0U][0U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v9 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [0U][1U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v10 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [0U][2U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v11 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [0U][3U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v12 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [0U][4U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v13 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [0U][5U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v14 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [0U][6U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v15 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [1U][0U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v16 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [1U][1U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v17 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [1U][2U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v18 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [1U][3U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v19 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [1U][4U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v20 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [1U][5U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v21 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [1U][6U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v22 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [2U][0U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v23 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [2U][1U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v24 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [2U][2U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v25 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [2U][3U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v26 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [2U][4U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v27 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [2U][5U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v28 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [2U][6U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v29 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [3U][0U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v30 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [3U][1U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v31 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [3U][2U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v32 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [3U][3U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v33 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [3U][4U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v34 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [3U][5U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v35 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [3U][6U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v36 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [4U][0U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v37 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [4U][1U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v38 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [4U][2U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v39 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [4U][3U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v40 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [4U][4U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v41 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [4U][5U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v42 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [4U][6U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v43 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [5U][0U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v44 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [5U][1U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v45 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [5U][2U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v46 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [5U][3U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v47 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [5U][4U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v48 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [5U][5U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v49 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [5U][6U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v50 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [6U][0U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v51 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [6U][1U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v52 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [6U][2U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v53 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [6U][3U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v54 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [6U][4U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v55 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [6U][5U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v56 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [6U][6U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v57 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [7U][0U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v58 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [7U][1U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v59 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [7U][2U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v60 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [7U][3U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v61 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [7U][4U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v62 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [7U][5U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v63 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                [7U][6U];
        }
    } else {
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__j = 8U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__i = 8U;
        vlSelf->__Vdlyvset__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v64 = 1U;
    }
}

VL_INLINE_OPT void VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__1(VTPUSimEnv_TPUSimEnv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__1\n"); );
    // Body
    if (vlSymsp->TOP.resetn) {
        if (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__alu_start) {
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v0 
                = (vlSymsp->TOP__TPUSimEnv__sramW0.__PVT___zz_mem_port0 
                   >> 0x18U);
            vlSelf->__Vdlyvset__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v0 = 1U;
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v1 
                = (vlSymsp->TOP__TPUSimEnv__sramW1.__PVT___zz_mem_port0 
                   >> 0x18U);
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v2 
                = (0xffU & (vlSymsp->TOP__TPUSimEnv__sramW0.__PVT___zz_mem_port0 
                            >> 0x10U));
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v3 
                = (0xffU & (vlSymsp->TOP__TPUSimEnv__sramW1.__PVT___zz_mem_port0 
                            >> 0x10U));
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v4 
                = (0xffU & (vlSymsp->TOP__TPUSimEnv__sramW0.__PVT___zz_mem_port0 
                            >> 8U));
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v5 
                = (0xffU & (vlSymsp->TOP__TPUSimEnv__sramW1.__PVT___zz_mem_port0 
                            >> 8U));
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v6 
                = (0xffU & vlSymsp->TOP__TPUSimEnv__sramW0.__PVT___zz_mem_port0);
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v7 
                = (0xffU & vlSymsp->TOP__TPUSimEnv__sramW1.__PVT___zz_mem_port0);
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v8 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [0U][0U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v9 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [0U][1U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v10 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [0U][2U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v11 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [0U][3U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v12 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [0U][4U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v13 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [0U][5U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v14 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [0U][6U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v15 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [0U][7U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v16 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [1U][0U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v17 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [1U][1U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v18 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [1U][2U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v19 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [1U][3U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v20 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [1U][4U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v21 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [1U][5U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v22 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [1U][6U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v23 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [1U][7U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v24 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [2U][0U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v25 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [2U][1U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v26 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [2U][2U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v27 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [2U][3U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v28 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [2U][4U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v29 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [2U][5U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v30 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [2U][6U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v31 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [2U][7U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v32 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [3U][0U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v33 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [3U][1U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v34 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [3U][2U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v35 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [3U][3U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v36 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [3U][4U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v37 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [3U][5U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v38 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [3U][6U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v39 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [3U][7U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v40 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [4U][0U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v41 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [4U][1U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v42 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [4U][2U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v43 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [4U][3U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v44 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [4U][4U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v45 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [4U][5U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v46 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [4U][6U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v47 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [4U][7U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v48 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [5U][0U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v49 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [5U][1U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v50 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [5U][2U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v51 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [5U][3U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v52 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [5U][4U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v53 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [5U][5U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v54 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [5U][6U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v55 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [5U][7U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v56 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [6U][0U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v57 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [6U][1U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v58 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [6U][2U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v59 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [6U][3U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v60 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [6U][4U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v61 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [6U][5U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v62 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [6U][6U];
            vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v63 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                [6U][7U];
        }
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v0 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [0U][0U];
        vlSelf->__Vdlyvset__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v0 = 1U;
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v1 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [0U][1U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v2 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [0U][2U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v3 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [0U][3U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v4 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [0U][4U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v5 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [0U][5U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v6 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [0U][6U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v7 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [0U][7U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v8 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [1U][0U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v9 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [1U][1U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v10 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [1U][2U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v11 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [1U][3U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v12 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [1U][4U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v13 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [1U][5U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v14 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [1U][6U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v15 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [1U][7U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v16 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [2U][0U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v17 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [2U][1U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v18 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [2U][2U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v19 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [2U][3U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v20 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [2U][4U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v21 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [2U][5U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v22 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [2U][6U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v23 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [2U][7U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v24 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [3U][0U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v25 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [3U][1U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v26 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [3U][2U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v27 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [3U][3U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v28 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [3U][4U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v29 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [3U][5U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v30 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [3U][6U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v31 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [3U][7U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v32 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [4U][0U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v33 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [4U][1U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v34 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [4U][2U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v35 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [4U][3U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v36 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [4U][4U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v37 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [4U][5U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v38 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [4U][6U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v39 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [4U][7U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v40 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [5U][0U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v41 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [5U][1U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v42 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [5U][2U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v43 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [5U][3U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v44 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [5U][4U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v45 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [5U][5U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v46 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [5U][6U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v47 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [5U][7U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v48 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [6U][0U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v49 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [6U][1U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v50 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [6U][2U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v51 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [6U][3U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v52 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [6U][4U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v53 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [6U][5U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v54 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [6U][6U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v55 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [6U][7U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v56 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [7U][0U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v57 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [7U][1U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v58 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [7U][2U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v59 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [7U][3U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v60 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [7U][4U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v61 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [7U][5U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v62 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [7U][6U];
        vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v63 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx
            [7U][7U];
    } else {
        vlSelf->__Vdlyvset__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v64 = 1U;
        vlSelf->__Vdlyvset__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v64 = 1U;
    }
}

VL_INLINE_OPT void VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__2(VTPUSimEnv_TPUSimEnv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__2\n"); );
    // Body
    if (vlSymsp->TOP.resetn) {
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog_tpu_done 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__tpu_done_nx;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__addr_serial_num 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__addr_serial_num_nx;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__data_set 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__data_set_nx;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__cycle_num_nx;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state_nx;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__matrix_index_nx;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_waddr_c 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_waddr_c_nx;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_c[0U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_c_nx[0U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_c[1U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_c_nx[1U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_c[2U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_c_nx[2U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_c[3U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_c_nx[3U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_waddr_a 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_waddr_a_nx;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_a[0U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_a_nx[0U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_a[1U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_a_nx[1U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_a[2U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_a_nx[2U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_a[3U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_a_nx[3U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_waddr_b 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_waddr_b_nx;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_b[0U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[0U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_b[1U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[1U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_b[2U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[2U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_b[3U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[3U];
    } else {
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog_tpu_done = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__addr_serial_num = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__data_set = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_waddr_c = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_c[0U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_c[1U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_c[2U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_c[3U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_waddr_a = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_a[0U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_a[1U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_a[2U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_a[3U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_waddr_b = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_b[0U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_b[1U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_b[2U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_b[3U] = 0U;
    }
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_write_enable_c0 
        = (1U & ((~ (IData)(vlSymsp->TOP.resetn)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_write_enable_c0_nx)));
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_write_enable_a0 
        = (1U & ((~ (IData)(vlSymsp->TOP.resetn)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_write_enable_a0_nx)));
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_write_enable_b0 
        = (1U & ((~ (IData)(vlSymsp->TOP.resetn)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_write_enable_b0_nx)));
    if (vlSelf->__Vdlyvset__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v0) {
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[0U][0U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v0;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[4U][0U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v1;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[1U][0U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v2;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[5U][0U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v3;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[2U][0U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v4;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[6U][0U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v5;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[3U][0U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v6;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[7U][0U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v7;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[0U][1U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v8;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[0U][2U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v9;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[0U][3U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v10;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[0U][4U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v11;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[0U][5U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v12;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[0U][6U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v13;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[0U][7U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v14;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[1U][1U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v15;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[1U][2U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v16;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[1U][3U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v17;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[1U][4U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v18;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[1U][5U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v19;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[1U][6U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v20;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[1U][7U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v21;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[2U][1U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v22;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[2U][2U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v23;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[2U][3U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v24;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[2U][4U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v25;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[2U][5U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v26;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[2U][6U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v27;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[2U][7U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v28;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[3U][1U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v29;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[3U][2U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v30;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[3U][3U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v31;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[3U][4U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v32;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[3U][5U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v33;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[3U][6U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v34;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[3U][7U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v35;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[4U][1U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v36;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[4U][2U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v37;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[4U][3U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v38;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[4U][4U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v39;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[4U][5U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v40;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[4U][6U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v41;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[4U][7U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v42;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[5U][1U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v43;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[5U][2U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v44;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[5U][3U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v45;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[5U][4U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v46;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[5U][5U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v47;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[5U][6U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v48;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[5U][7U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v49;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[6U][1U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v50;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[6U][2U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v51;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[6U][3U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v52;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[6U][4U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v53;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[6U][5U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v54;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[6U][6U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v55;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[6U][7U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v56;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[7U][1U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v57;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[7U][2U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v58;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[7U][3U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v59;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[7U][4U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v60;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[7U][5U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v61;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[7U][6U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v62;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[7U][7U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v63;
    }
}

VL_INLINE_OPT void VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__6(VTPUSimEnv_TPUSimEnv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__6\n"); );
    // Init
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSymsp->TOP.io_tpu_start) 
                     << 0xaU) | (((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__addr_serial_num) 
                                  << 3U) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state)));
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__addr_serial_num_nx 
        = VTPUSimEnv__ConstPool__TABLE_h0402a734_0[__Vtableidx1];
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__alu_start 
        = (IData)((3U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state)));
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__sram_write_enable 
        = (IData)(((3U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state)) 
                   & (9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num))));
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__tpu_done_nx 
        = (IData)((((3U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state)) 
                    & (0xfU == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index))) 
                   & (1U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__data_set))));
    if ((4U & (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state))) {
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__matrix_index_nx = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state_nx = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__data_set_nx = 0U;
    } else if ((2U & (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state))) {
        if ((1U & (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state))) {
            if ((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num))) {
                if ((0xfU == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index))) {
                    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__matrix_index_nx = 0U;
                    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__data_set_nx 
                        = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__data_set)));
                } else {
                    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__matrix_index_nx 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)));
                    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__data_set_nx 
                        = (3U & (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__data_set));
                }
            } else {
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__matrix_index_nx = 0U;
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__data_set_nx 
                    = (3U & (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__data_set));
            }
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state_nx 
                = (((0xfU == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                    & (1U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__data_set)))
                    ? 0U : 3U);
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__matrix_index_nx = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state_nx = 3U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__data_set_nx = 0U;
        }
    } else {
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__matrix_index_nx = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state_nx 
            = ((1U & (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state))
                ? 2U : ((IData)(vlSymsp->TOP.io_tpu_start)
                         ? 1U : 0U));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__data_set_nx = 0U;
    }
    if ((8U > (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index))) {
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__lower_bound 
            = (0x3fU & ((IData)(8U) + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)));
    } else {
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound 
            = (0x3fU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                        - (IData)(8U)));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__lower_bound 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index;
    }
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__i = 0U;
    while (VL_GTS_III(32, 0xa8U, vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__i)) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_h2a316ab9__0 = 0U;
        if (VL_LIKELY((0xa7U >= (0xffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__i)))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[(7U 
                                                                  & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__i 
                                                                     >> 5U))] 
                = (((~ ((IData)(1U) << (0x1fU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__i))) 
                    & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[
                    (7U & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__i 
                           >> 5U))]) | ((IData)(vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_h2a316ab9__0) 
                                        << (0x1fU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__i)));
        }
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__i 
            = ((IData)(1U) + vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__i);
    }
    if ((0U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [0U][0U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[0U] 
            = ((0xffe00000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[0U]) 
               | vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0);
    }
    if ((1U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [0U][1U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[0U] 
            = ((0xffe00000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[0U]) 
               | vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0);
    }
    if ((2U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [0U][2U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[0U] 
            = ((0xffe00000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[0U]) 
               | vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0);
    }
    if ((3U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [0U][3U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[0U] 
            = ((0xffe00000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[0U]) 
               | vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0);
    }
    if ((4U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [0U][4U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[0U] 
            = ((0xffe00000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[0U]) 
               | vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0);
    }
    if ((5U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [0U][5U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[0U] 
            = ((0xffe00000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[0U]) 
               | vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0);
    }
    if ((6U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [0U][6U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[0U] 
            = ((0xffe00000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[0U]) 
               | vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0);
    }
    if ((7U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [0U][7U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[0U] 
            = ((0xffe00000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[0U]) 
               | vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0);
    }
    if ((1U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [1U][0U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[0U] 
            = ((0x1fffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[0U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  << 0x15U));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U] 
            = ((0xfffffc00U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  >> 0xbU));
    }
    if ((2U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [1U][1U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[0U] 
            = ((0x1fffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[0U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  << 0x15U));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U] 
            = ((0xfffffc00U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  >> 0xbU));
    }
    if ((3U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [1U][2U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[0U] 
            = ((0x1fffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[0U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  << 0x15U));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U] 
            = ((0xfffffc00U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  >> 0xbU));
    }
    if ((4U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [1U][3U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[0U] 
            = ((0x1fffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[0U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  << 0x15U));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U] 
            = ((0xfffffc00U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  >> 0xbU));
    }
    if ((5U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [1U][4U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[0U] 
            = ((0x1fffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[0U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  << 0x15U));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U] 
            = ((0xfffffc00U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  >> 0xbU));
    }
    if ((6U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [1U][5U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[0U] 
            = ((0x1fffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[0U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  << 0x15U));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U] 
            = ((0xfffffc00U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  >> 0xbU));
    }
    if ((7U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [1U][6U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[0U] 
            = ((0x1fffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[0U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  << 0x15U));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U] 
            = ((0xfffffc00U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  >> 0xbU));
    }
    if ((2U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [2U][0U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U] 
            = ((0x800003ffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  << 0xaU));
    }
}
