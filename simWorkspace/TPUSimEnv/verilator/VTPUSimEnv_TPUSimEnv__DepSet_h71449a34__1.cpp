// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTPUSimEnv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTPUSimEnv__Syms.h"
#include "VTPUSimEnv_TPUSimEnv.h"

VL_INLINE_OPT void VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__9(VTPUSimEnv_TPUSimEnv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__9\n"); );
    // Body
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_write_enable_a0_nx 
        = (1U & ((~ (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__sram_write_enable)) 
                 | (0U != (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__data_set))));
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_write_enable_c0_nx 
        = (1U & ((~ (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__sram_write_enable)) 
                 | (1U != (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__data_set))));
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_write_enable_b0_nx 
        = (1U & ((~ (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__sram_write_enable)) 
                 | ((0U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__data_set))
                     ? (8U > (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index))
                     : ((1U != (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__data_set)) 
                        | (8U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index))))));
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantize__DOT__ori_shifted_data 
        = (0x1fffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[0U]);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[0U] 
        = ((0xffff0000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[0U]) 
           | (VL_LTES_III(32, 0x7fffU, VL_EXTENDS_II(32,21, vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantize__DOT__ori_shifted_data))
               ? 0x7fffU : (VL_GTES_III(32, 0xffff8000U, 
                                        VL_EXTENDS_II(32,21, vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantize__DOT__ori_shifted_data))
                             ? 0x8000U : (0xffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantize__DOT__ori_shifted_data))));
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantize__DOT__ori_shifted_data 
        = (0x1fffffU & ((vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U] 
                         << 0xbU) | (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[0U] 
                                     >> 0x15U)));
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[0U] 
        = ((0xffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[0U]) 
           | ((VL_LTES_III(32, 0x7fffU, VL_EXTENDS_II(32,21, vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantize__DOT__ori_shifted_data))
                ? 0x7fffU : (VL_GTES_III(32, 0xffff8000U, 
                                         VL_EXTENDS_II(32,21, vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantize__DOT__ori_shifted_data))
                              ? 0x8000U : (0xffffU 
                                           & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantize__DOT__ori_shifted_data))) 
              << 0x10U));
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantize__DOT__ori_shifted_data 
        = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U] 
                        >> 0xaU));
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[1U] 
        = ((0xffff0000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[1U]) 
           | (VL_LTES_III(32, 0x7fffU, VL_EXTENDS_II(32,21, vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantize__DOT__ori_shifted_data))
               ? 0x7fffU : (VL_GTES_III(32, 0xffff8000U, 
                                        VL_EXTENDS_II(32,21, vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantize__DOT__ori_shifted_data))
                             ? 0x8000U : (0xffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantize__DOT__ori_shifted_data))));
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantize__DOT__ori_shifted_data 
        = (0x1fffffU & ((vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[2U] 
                         << 1U) | (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U] 
                                   >> 0x1fU)));
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[1U] 
        = ((0xffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[1U]) 
           | ((VL_LTES_III(32, 0x7fffU, VL_EXTENDS_II(32,21, vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantize__DOT__ori_shifted_data))
                ? 0x7fffU : (VL_GTES_III(32, 0xffff8000U, 
                                         VL_EXTENDS_II(32,21, vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantize__DOT__ori_shifted_data))
                              ? 0x8000U : (0xffffU 
                                           & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantize__DOT__ori_shifted_data))) 
              << 0x10U));
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantize__DOT__ori_shifted_data 
        = (0x1fffffU & ((vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U] 
                         << 0xcU) | (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[2U] 
                                     >> 0x14U)));
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[2U] 
        = ((0xffff0000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[2U]) 
           | (VL_LTES_III(32, 0x7fffU, VL_EXTENDS_II(32,21, vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantize__DOT__ori_shifted_data))
               ? 0x7fffU : (VL_GTES_III(32, 0xffff8000U, 
                                        VL_EXTENDS_II(32,21, vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantize__DOT__ori_shifted_data))
                             ? 0x8000U : (0xffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantize__DOT__ori_shifted_data))));
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantize__DOT__ori_shifted_data 
        = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U] 
                        >> 9U));
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[2U] 
        = ((0xffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[2U]) 
           | ((VL_LTES_III(32, 0x7fffU, VL_EXTENDS_II(32,21, vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantize__DOT__ori_shifted_data))
                ? 0x7fffU : (VL_GTES_III(32, 0xffff8000U, 
                                         VL_EXTENDS_II(32,21, vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantize__DOT__ori_shifted_data))
                              ? 0x8000U : (0xffffU 
                                           & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantize__DOT__ori_shifted_data))) 
              << 0x10U));
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantize__DOT__ori_shifted_data 
        = (0x1fffffU & ((vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[4U] 
                         << 2U) | (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U] 
                                   >> 0x1eU)));
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[3U] 
        = ((0xffff0000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[3U]) 
           | (VL_LTES_III(32, 0x7fffU, VL_EXTENDS_II(32,21, vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantize__DOT__ori_shifted_data))
               ? 0x7fffU : (VL_GTES_III(32, 0xffff8000U, 
                                        VL_EXTENDS_II(32,21, vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantize__DOT__ori_shifted_data))
                             ? 0x8000U : (0xffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantize__DOT__ori_shifted_data))));
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantize__DOT__ori_shifted_data 
        = (0x1fffffU & ((vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[5U] 
                         << 0xdU) | (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[4U] 
                                     >> 0x13U)));
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[3U] 
        = ((0xffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[3U]) 
           | ((VL_LTES_III(32, 0x7fffU, VL_EXTENDS_II(32,21, vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantize__DOT__ori_shifted_data))
                ? 0x7fffU : (VL_GTES_III(32, 0xffff8000U, 
                                         VL_EXTENDS_II(32,21, vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantize__DOT__ori_shifted_data))
                              ? 0x8000U : (0xffffU 
                                           & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantize__DOT__ori_shifted_data))) 
              << 0x10U));
    if (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__sram_write_enable) {
        if ((0U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__data_set))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_waddr_a_nx 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index;
            if ((8U > (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index))) {
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_waddr_b_nx 
                    = (0x3fU & 0U);
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_a_nx[3U] 
                    = ((vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[0U] 
                        << 0x10U) | ((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index))
                                      ? (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[0U] 
                                         >> 0x10U) : 0U));
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i = 8U;
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_a_nx[2U] 
                    = ((((2U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index))
                          ? (0xffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[1U])
                          : 0U) << 0x10U) | ((3U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index))
                                              ? (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[1U] 
                                                 >> 0x10U)
                                              : 0U));
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_a_nx[1U] 
                    = ((((4U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index))
                          ? (0xffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[2U])
                          : 0U) << 0x10U) | ((5U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index))
                                              ? (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[2U] 
                                                 >> 0x10U)
                                              : 0U));
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_a_nx[0U] 
                    = ((((6U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index))
                          ? (0xffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[3U])
                          : 0U) << 0x10U) | ((7U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index))
                                              ? (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[3U] 
                                                 >> 0x10U)
                                              : 0U));
            } else {
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_waddr_b_nx 
                    = (0x3fU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                - (IData)(8U)));
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_a_nx[3U] 
                    = ((0xffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_a_nx[3U]) 
                       | (((0U < ((IData)(0xfU) - (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)))
                            ? (0xffffU & (((0U == (0x1fU 
                                                   & (((IData)(1U) 
                                                       + 
                                                       ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                        - (IData)(8U))) 
                                                      << 4U)))
                                            ? 0U : 
                                           (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                            (((IData)(0xfU) 
                                              + (0x7fU 
                                                 & (((IData)(1U) 
                                                     + 
                                                     ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                      - (IData)(8U))) 
                                                    << 4U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & (((IData)(1U) 
                                                       + 
                                                       ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                        - (IData)(8U))) 
                                                      << 4U))))) 
                                          | (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                             (3U & 
                                              (((IData)(1U) 
                                                + ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                   - (IData)(8U))) 
                                               >> 1U))] 
                                             >> (0x1fU 
                                                 & (((IData)(1U) 
                                                     + 
                                                     ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                      - (IData)(8U))) 
                                                    << 4U)))))
                            : 0U) << 0x10U));
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i = 8U;
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_a_nx[3U] 
                    = ((0xffff0000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_a_nx[3U]) 
                       | ((1U < ((IData)(0xfU) - (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)))
                           ? (0xffffU & (((0U == (0x1fU 
                                                  & (((IData)(2U) 
                                                      + 
                                                      ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                       - (IData)(8U))) 
                                                     << 4U)))
                                           ? 0U : (
                                                   vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                                   (((IData)(0xfU) 
                                                     + 
                                                     (0x7fU 
                                                      & (((IData)(2U) 
                                                          + 
                                                          ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                           - (IData)(8U))) 
                                                         << 4U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & (((IData)(2U) 
                                                         + 
                                                         ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                          - (IData)(8U))) 
                                                        << 4U))))) 
                                         | (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                            (3U & (
                                                   ((IData)(2U) 
                                                    + 
                                                    ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                     - (IData)(8U))) 
                                                   >> 1U))] 
                                            >> (0x1fU 
                                                & (((IData)(2U) 
                                                    + 
                                                    ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                     - (IData)(8U))) 
                                                   << 4U)))))
                           : 0U));
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_a_nx[2U] 
                    = ((0xffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_a_nx[2U]) 
                       | (((2U < ((IData)(0xfU) - (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)))
                            ? (0xffffU & (((0U == (0x1fU 
                                                   & (((IData)(3U) 
                                                       + 
                                                       ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                        - (IData)(8U))) 
                                                      << 4U)))
                                            ? 0U : 
                                           (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                            (((IData)(0xfU) 
                                              + (0x7fU 
                                                 & (((IData)(3U) 
                                                     + 
                                                     ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                      - (IData)(8U))) 
                                                    << 4U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & (((IData)(3U) 
                                                       + 
                                                       ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                        - (IData)(8U))) 
                                                      << 4U))))) 
                                          | (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                             (3U & 
                                              (((IData)(3U) 
                                                + ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                   - (IData)(8U))) 
                                               >> 1U))] 
                                             >> (0x1fU 
                                                 & (((IData)(3U) 
                                                     + 
                                                     ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                      - (IData)(8U))) 
                                                    << 4U)))))
                            : 0U) << 0x10U));
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_a_nx[2U] 
                    = ((0xffff0000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_a_nx[2U]) 
                       | ((3U < ((IData)(0xfU) - (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)))
                           ? (0xffffU & (((0U == (0x1fU 
                                                  & (((IData)(4U) 
                                                      + 
                                                      ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                       - (IData)(8U))) 
                                                     << 4U)))
                                           ? 0U : (
                                                   vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                                   (((IData)(0xfU) 
                                                     + 
                                                     (0x7fU 
                                                      & (((IData)(4U) 
                                                          + 
                                                          ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                           - (IData)(8U))) 
                                                         << 4U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & (((IData)(4U) 
                                                         + 
                                                         ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                          - (IData)(8U))) 
                                                        << 4U))))) 
                                         | (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                            (3U & (
                                                   ((IData)(4U) 
                                                    + 
                                                    ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                     - (IData)(8U))) 
                                                   >> 1U))] 
                                            >> (0x1fU 
                                                & (((IData)(4U) 
                                                    + 
                                                    ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                     - (IData)(8U))) 
                                                   << 4U)))))
                           : 0U));
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_a_nx[1U] 
                    = ((0xffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_a_nx[1U]) 
                       | (((4U < ((IData)(0xfU) - (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)))
                            ? (0xffffU & (((0U == (0x1fU 
                                                   & (((IData)(5U) 
                                                       + 
                                                       ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                        - (IData)(8U))) 
                                                      << 4U)))
                                            ? 0U : 
                                           (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                            (((IData)(0xfU) 
                                              + (0x7fU 
                                                 & (((IData)(5U) 
                                                     + 
                                                     ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                      - (IData)(8U))) 
                                                    << 4U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & (((IData)(5U) 
                                                       + 
                                                       ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                        - (IData)(8U))) 
                                                      << 4U))))) 
                                          | (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                             (3U & 
                                              (((IData)(5U) 
                                                + ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                   - (IData)(8U))) 
                                               >> 1U))] 
                                             >> (0x1fU 
                                                 & (((IData)(5U) 
                                                     + 
                                                     ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                      - (IData)(8U))) 
                                                    << 4U)))))
                            : 0U) << 0x10U));
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_a_nx[1U] 
                    = ((0xffff0000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_a_nx[1U]) 
                       | ((5U < ((IData)(0xfU) - (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)))
                           ? (0xffffU & (((0U == (0x1fU 
                                                  & (((IData)(6U) 
                                                      + 
                                                      ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                       - (IData)(8U))) 
                                                     << 4U)))
                                           ? 0U : (
                                                   vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                                   (((IData)(0xfU) 
                                                     + 
                                                     (0x7fU 
                                                      & (((IData)(6U) 
                                                          + 
                                                          ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                           - (IData)(8U))) 
                                                         << 4U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & (((IData)(6U) 
                                                         + 
                                                         ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                          - (IData)(8U))) 
                                                        << 4U))))) 
                                         | (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                            (3U & (
                                                   ((IData)(6U) 
                                                    + 
                                                    ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                     - (IData)(8U))) 
                                                   >> 1U))] 
                                            >> (0x1fU 
                                                & (((IData)(6U) 
                                                    + 
                                                    ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                     - (IData)(8U))) 
                                                   << 4U)))))
                           : 0U));
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_a_nx[0U] 
                    = ((0xffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_a_nx[0U]) 
                       | (((6U < ((IData)(0xfU) - (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)))
                            ? (0xffffU & (((0U == (0x1fU 
                                                   & (((IData)(7U) 
                                                       + 
                                                       ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                        - (IData)(8U))) 
                                                      << 4U)))
                                            ? 0U : 
                                           (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                            (((IData)(0xfU) 
                                              + (0x7fU 
                                                 & (((IData)(7U) 
                                                     + 
                                                     ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                      - (IData)(8U))) 
                                                    << 4U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & (((IData)(7U) 
                                                       + 
                                                       ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                        - (IData)(8U))) 
                                                      << 4U))))) 
                                          | (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                             (3U & 
                                              (((IData)(7U) 
                                                + ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                   - (IData)(8U))) 
                                               >> 1U))] 
                                             >> (0x1fU 
                                                 & (((IData)(7U) 
                                                     + 
                                                     ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                      - (IData)(8U))) 
                                                    << 4U)))))
                            : 0U) << 0x10U));
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_a_nx[0U] 
                    = ((0xffff0000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_a_nx[0U]) 
                       | ((7U < ((IData)(0xfU) - (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)))
                           ? (0xffffU & (((0U == (0x1fU 
                                                  & (((IData)(8U) 
                                                      + 
                                                      ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                       - (IData)(8U))) 
                                                     << 4U)))
                                           ? 0U : (
                                                   vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                                   (((IData)(0xfU) 
                                                     + 
                                                     (0x7fU 
                                                      & (((IData)(8U) 
                                                          + 
                                                          ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                           - (IData)(8U))) 
                                                         << 4U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & (((IData)(8U) 
                                                         + 
                                                         ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                          - (IData)(8U))) 
                                                        << 4U))))) 
                                         | (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                            (3U & (
                                                   ((IData)(8U) 
                                                    + 
                                                    ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                     - (IData)(8U))) 
                                                   >> 1U))] 
                                            >> (0x1fU 
                                                & (((IData)(8U) 
                                                    + 
                                                    ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                     - (IData)(8U))) 
                                                   << 4U)))))
                           : 0U));
            }
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_waddr_a_nx = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_waddr_b_nx 
                = (0x3fU & ((1U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__data_set))
                             ? ((8U > (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index))
                                 ? ((IData)(8U) + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index))
                                 : 0U) : 0U));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i = 0U;
            while (VL_GTS_III(32, 0x80U, vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i)) {
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_a_nx[(3U 
                                                                                & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i 
                                                                                >> 5U))] 
                    = ((~ ((IData)(1U) << (0x1fU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i))) 
                       & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_a_nx[
                       (3U & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i 
                              >> 5U))]);
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i 
                    = ((IData)(1U) + vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i);
            }
        }
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_waddr_c_nx 
            = ((1U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__data_set))
                ? (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)
                : 0U);
    } else {
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_waddr_a_nx = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_waddr_b_nx = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_waddr_c_nx = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i = 0U;
        while (VL_GTS_III(32, 0x80U, vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i)) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_a_nx[(3U 
                                                                                & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i 
                                                                                >> 5U))] 
                = ((~ ((IData)(1U) << (0x1fU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i))) 
                   & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_a_nx[
                   (3U & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i 
                          >> 5U))]);
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i 
                = ((IData)(1U) + vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i);
        }
    }
}

VL_INLINE_OPT void VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__10(VTPUSimEnv_TPUSimEnv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__10\n"); );
    // Body
    if (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__sram_write_enable) {
        if ((0U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__data_set))) {
            if ((8U > (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index))) {
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i = 0U;
                while (VL_GTS_III(32, 0x80U, vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i)) {
                    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[(3U 
                                                                                & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i 
                                                                                >> 5U))] 
                        = ((~ ((IData)(1U) << (0x1fU 
                                               & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i))) 
                           & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[
                           (3U & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i 
                                  >> 5U))]);
                    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i 
                        = ((IData)(1U) + vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i);
                }
            } else {
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[3U] 
                    = ((0xffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[3U]) 
                       | (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[0U] 
                          << 0x10U));
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i = 8U;
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[3U] 
                    = ((0xffff0000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[3U]) 
                       | ((1U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                  - (IData)(8U))) ? 
                          (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[0U] 
                           >> 0x10U) : 0U));
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[2U] 
                    = ((0xffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[2U]) 
                       | (((2U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                   - (IData)(8U))) ? 
                           (0xffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[1U])
                            : 0U) << 0x10U));
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[2U] 
                    = ((0xffff0000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[2U]) 
                       | ((3U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                  - (IData)(8U))) ? 
                          (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[1U] 
                           >> 0x10U) : 0U));
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[1U] 
                    = ((0xffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[1U]) 
                       | (((4U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                   - (IData)(8U))) ? 
                           (0xffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[2U])
                            : 0U) << 0x10U));
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[1U] 
                    = ((0xffff0000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[1U]) 
                       | ((5U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                  - (IData)(8U))) ? 
                          (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[2U] 
                           >> 0x10U) : 0U));
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[0U] 
                    = ((0xffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[0U]) 
                       | (((6U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                   - (IData)(8U))) ? 
                           (0xffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[3U])
                            : 0U) << 0x10U));
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[0U] 
                    = ((0xffff0000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[0U]) 
                       | ((7U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                  - (IData)(8U))) ? 
                          (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[3U] 
                           >> 0x10U) : 0U));
            }
        } else if ((1U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__data_set))) {
            if ((8U > (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index))) {
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[3U] 
                    = ((0xffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[3U]) 
                       | (((0U < (((IData)(8U) - (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                  - (IData)(1U))) ? 
                           (0xffffU & (((0U == (0x1fU 
                                                & (((IData)(1U) 
                                                    + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                   << 4U)))
                                         ? 0U : (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                                 (((IData)(0xfU) 
                                                   + 
                                                   (0x7fU 
                                                    & (((IData)(1U) 
                                                        + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                       << 4U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & (((IData)(1U) 
                                                       + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                      << 4U))))) 
                                       | (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                          (3U & (((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                 >> 1U))] 
                                          >> (0x1fU 
                                              & (((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                 << 4U)))))
                            : 0U) << 0x10U));
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i = 8U;
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[3U] 
                    = ((0xffff0000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[3U]) 
                       | ((1U < (((IData)(8U) - (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                 - (IData)(1U))) ? 
                          (0xffffU & (((0U == (0x1fU 
                                               & (((IData)(2U) 
                                                   + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                  << 4U)))
                                        ? 0U : (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                                (((IData)(0xfU) 
                                                  + 
                                                  (0x7fU 
                                                   & (((IData)(2U) 
                                                       + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                      << 4U))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & (((IData)(2U) 
                                                      + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                     << 4U))))) 
                                      | (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                         (3U & (((IData)(2U) 
                                                 + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                >> 1U))] 
                                         >> (0x1fU 
                                             & (((IData)(2U) 
                                                 + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                << 4U)))))
                           : 0U));
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[2U] 
                    = ((0xffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[2U]) 
                       | (((2U < (((IData)(8U) - (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                  - (IData)(1U))) ? 
                           (0xffffU & (((0U == (0x1fU 
                                                & (((IData)(3U) 
                                                    + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                   << 4U)))
                                         ? 0U : (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                                 (((IData)(0xfU) 
                                                   + 
                                                   (0x7fU 
                                                    & (((IData)(3U) 
                                                        + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                       << 4U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & (((IData)(3U) 
                                                       + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                      << 4U))))) 
                                       | (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                          (3U & (((IData)(3U) 
                                                  + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                 >> 1U))] 
                                          >> (0x1fU 
                                              & (((IData)(3U) 
                                                  + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                 << 4U)))))
                            : 0U) << 0x10U));
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[2U] 
                    = ((0xffff0000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[2U]) 
                       | ((3U < (((IData)(8U) - (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                 - (IData)(1U))) ? 
                          (0xffffU & (((0U == (0x1fU 
                                               & (((IData)(4U) 
                                                   + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                  << 4U)))
                                        ? 0U : (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                                (((IData)(0xfU) 
                                                  + 
                                                  (0x7fU 
                                                   & (((IData)(4U) 
                                                       + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                      << 4U))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & (((IData)(4U) 
                                                      + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                     << 4U))))) 
                                      | (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                         (3U & (((IData)(4U) 
                                                 + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                >> 1U))] 
                                         >> (0x1fU 
                                             & (((IData)(4U) 
                                                 + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                << 4U)))))
                           : 0U));
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[1U] 
                    = ((0xffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[1U]) 
                       | (((4U < (((IData)(8U) - (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                  - (IData)(1U))) ? 
                           (0xffffU & (((0U == (0x1fU 
                                                & (((IData)(5U) 
                                                    + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                   << 4U)))
                                         ? 0U : (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                                 (((IData)(0xfU) 
                                                   + 
                                                   (0x7fU 
                                                    & (((IData)(5U) 
                                                        + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                       << 4U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & (((IData)(5U) 
                                                       + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                      << 4U))))) 
                                       | (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                          (3U & (((IData)(5U) 
                                                  + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                 >> 1U))] 
                                          >> (0x1fU 
                                              & (((IData)(5U) 
                                                  + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                 << 4U)))))
                            : 0U) << 0x10U));
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[1U] 
                    = ((0xffff0000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[1U]) 
                       | ((5U < (((IData)(8U) - (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                 - (IData)(1U))) ? 
                          (0xffffU & (((0U == (0x1fU 
                                               & (((IData)(6U) 
                                                   + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                  << 4U)))
                                        ? 0U : (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                                (((IData)(0xfU) 
                                                  + 
                                                  (0x7fU 
                                                   & (((IData)(6U) 
                                                       + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                      << 4U))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & (((IData)(6U) 
                                                      + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                     << 4U))))) 
                                      | (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                         (3U & (((IData)(6U) 
                                                 + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                >> 1U))] 
                                         >> (0x1fU 
                                             & (((IData)(6U) 
                                                 + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                << 4U)))))
                           : 0U));
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[0U] 
                    = ((0xffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[0U]) 
                       | (((6U < (((IData)(8U) - (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                  - (IData)(1U))) ? 
                           (0xffffU & (((0U == (0x1fU 
                                                & (((IData)(7U) 
                                                    + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                   << 4U)))
                                         ? 0U : (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                                 (((IData)(0xfU) 
                                                   + 
                                                   (0x7fU 
                                                    & (((IData)(7U) 
                                                        + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                       << 4U))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & (((IData)(7U) 
                                                       + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                      << 4U))))) 
                                       | (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                          (3U & (((IData)(7U) 
                                                  + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                 >> 1U))] 
                                          >> (0x1fU 
                                              & (((IData)(7U) 
                                                  + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                 << 4U)))))
                            : 0U) << 0x10U));
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[0U] 
                    = ((0xffff0000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[0U]) 
                       | ((7U < (((IData)(8U) - (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                 - (IData)(1U))) ? 
                          (0xffffU & (((0U == (0x1fU 
                                               & (((IData)(8U) 
                                                   + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                  << 4U)))
                                        ? 0U : (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                                (((IData)(0xfU) 
                                                  + 
                                                  (0x7fU 
                                                   & (((IData)(8U) 
                                                       + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                      << 4U))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & (((IData)(8U) 
                                                      + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                     << 4U))))) 
                                      | (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                         (3U & (((IData)(8U) 
                                                 + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                >> 1U))] 
                                         >> (0x1fU 
                                             & (((IData)(8U) 
                                                 + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)) 
                                                << 4U)))))
                           : 0U));
            } else {
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i = 0U;
                while (VL_GTS_III(32, 0x80U, vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i)) {
                    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[(3U 
                                                                                & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i 
                                                                                >> 5U))] 
                        = ((~ ((IData)(1U) << (0x1fU 
                                               & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i))) 
                           & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[
                           (3U & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i 
                                  >> 5U))]);
                    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i 
                        = ((IData)(1U) + vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i);
                }
            }
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i = 0U;
            while (VL_GTS_III(32, 0x80U, vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i)) {
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[(3U 
                                                                                & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i 
                                                                                >> 5U))] 
                    = ((~ ((IData)(1U) << (0x1fU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i))) 
                       & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[
                       (3U & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i 
                              >> 5U))]);
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i 
                    = ((IData)(1U) + vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i);
            }
        }
        if ((1U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__data_set))) {
            if ((8U > (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index))) {
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_c_nx[3U] 
                    = ((vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[0U] 
                        << 0x10U) | ((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index))
                                      ? (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[0U] 
                                         >> 0x10U) : 0U));
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i = 8U;
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_c_nx[2U] 
                    = ((((2U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index))
                          ? (0xffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[1U])
                          : 0U) << 0x10U) | ((3U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index))
                                              ? (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[1U] 
                                                 >> 0x10U)
                                              : 0U));
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_c_nx[1U] 
                    = ((((4U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index))
                          ? (0xffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[2U])
                          : 0U) << 0x10U) | ((5U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index))
                                              ? (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[2U] 
                                                 >> 0x10U)
                                              : 0U));
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_c_nx[0U] 
                    = ((((6U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index))
                          ? (0xffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[3U])
                          : 0U) << 0x10U) | ((7U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index))
                                              ? (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[3U] 
                                                 >> 0x10U)
                                              : 0U));
            } else {
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_c_nx[3U] 
                    = ((0xffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_c_nx[3U]) 
                       | (((0U < ((IData)(0xfU) - (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)))
                            ? (0xffffU & (((0U == (0x1fU 
                                                   & (((IData)(1U) 
                                                       + 
                                                       ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                        - (IData)(8U))) 
                                                      << 4U)))
                                            ? 0U : 
                                           (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                            (((IData)(0xfU) 
                                              + (0x7fU 
                                                 & (((IData)(1U) 
                                                     + 
                                                     ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                      - (IData)(8U))) 
                                                    << 4U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & (((IData)(1U) 
                                                       + 
                                                       ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                        - (IData)(8U))) 
                                                      << 4U))))) 
                                          | (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                             (3U & 
                                              (((IData)(1U) 
                                                + ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                   - (IData)(8U))) 
                                               >> 1U))] 
                                             >> (0x1fU 
                                                 & (((IData)(1U) 
                                                     + 
                                                     ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                      - (IData)(8U))) 
                                                    << 4U)))))
                            : 0U) << 0x10U));
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i = 8U;
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_c_nx[3U] 
                    = ((0xffff0000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_c_nx[3U]) 
                       | ((1U < ((IData)(0xfU) - (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)))
                           ? (0xffffU & (((0U == (0x1fU 
                                                  & (((IData)(2U) 
                                                      + 
                                                      ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                       - (IData)(8U))) 
                                                     << 4U)))
                                           ? 0U : (
                                                   vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                                   (((IData)(0xfU) 
                                                     + 
                                                     (0x7fU 
                                                      & (((IData)(2U) 
                                                          + 
                                                          ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                           - (IData)(8U))) 
                                                         << 4U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & (((IData)(2U) 
                                                         + 
                                                         ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                          - (IData)(8U))) 
                                                        << 4U))))) 
                                         | (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                            (3U & (
                                                   ((IData)(2U) 
                                                    + 
                                                    ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                     - (IData)(8U))) 
                                                   >> 1U))] 
                                            >> (0x1fU 
                                                & (((IData)(2U) 
                                                    + 
                                                    ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                     - (IData)(8U))) 
                                                   << 4U)))))
                           : 0U));
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_c_nx[2U] 
                    = ((0xffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_c_nx[2U]) 
                       | (((2U < ((IData)(0xfU) - (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)))
                            ? (0xffffU & (((0U == (0x1fU 
                                                   & (((IData)(3U) 
                                                       + 
                                                       ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                        - (IData)(8U))) 
                                                      << 4U)))
                                            ? 0U : 
                                           (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                            (((IData)(0xfU) 
                                              + (0x7fU 
                                                 & (((IData)(3U) 
                                                     + 
                                                     ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                      - (IData)(8U))) 
                                                    << 4U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & (((IData)(3U) 
                                                       + 
                                                       ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                        - (IData)(8U))) 
                                                      << 4U))))) 
                                          | (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                             (3U & 
                                              (((IData)(3U) 
                                                + ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                   - (IData)(8U))) 
                                               >> 1U))] 
                                             >> (0x1fU 
                                                 & (((IData)(3U) 
                                                     + 
                                                     ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                      - (IData)(8U))) 
                                                    << 4U)))))
                            : 0U) << 0x10U));
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_c_nx[2U] 
                    = ((0xffff0000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_c_nx[2U]) 
                       | ((3U < ((IData)(0xfU) - (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)))
                           ? (0xffffU & (((0U == (0x1fU 
                                                  & (((IData)(4U) 
                                                      + 
                                                      ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                       - (IData)(8U))) 
                                                     << 4U)))
                                           ? 0U : (
                                                   vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                                   (((IData)(0xfU) 
                                                     + 
                                                     (0x7fU 
                                                      & (((IData)(4U) 
                                                          + 
                                                          ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                           - (IData)(8U))) 
                                                         << 4U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & (((IData)(4U) 
                                                         + 
                                                         ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                          - (IData)(8U))) 
                                                        << 4U))))) 
                                         | (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                            (3U & (
                                                   ((IData)(4U) 
                                                    + 
                                                    ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                     - (IData)(8U))) 
                                                   >> 1U))] 
                                            >> (0x1fU 
                                                & (((IData)(4U) 
                                                    + 
                                                    ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                     - (IData)(8U))) 
                                                   << 4U)))))
                           : 0U));
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_c_nx[1U] 
                    = ((0xffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_c_nx[1U]) 
                       | (((4U < ((IData)(0xfU) - (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)))
                            ? (0xffffU & (((0U == (0x1fU 
                                                   & (((IData)(5U) 
                                                       + 
                                                       ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                        - (IData)(8U))) 
                                                      << 4U)))
                                            ? 0U : 
                                           (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                            (((IData)(0xfU) 
                                              + (0x7fU 
                                                 & (((IData)(5U) 
                                                     + 
                                                     ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                      - (IData)(8U))) 
                                                    << 4U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & (((IData)(5U) 
                                                       + 
                                                       ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                        - (IData)(8U))) 
                                                      << 4U))))) 
                                          | (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                             (3U & 
                                              (((IData)(5U) 
                                                + ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                   - (IData)(8U))) 
                                               >> 1U))] 
                                             >> (0x1fU 
                                                 & (((IData)(5U) 
                                                     + 
                                                     ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                      - (IData)(8U))) 
                                                    << 4U)))))
                            : 0U) << 0x10U));
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_c_nx[1U] 
                    = ((0xffff0000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_c_nx[1U]) 
                       | ((5U < ((IData)(0xfU) - (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)))
                           ? (0xffffU & (((0U == (0x1fU 
                                                  & (((IData)(6U) 
                                                      + 
                                                      ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                       - (IData)(8U))) 
                                                     << 4U)))
                                           ? 0U : (
                                                   vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                                   (((IData)(0xfU) 
                                                     + 
                                                     (0x7fU 
                                                      & (((IData)(6U) 
                                                          + 
                                                          ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                           - (IData)(8U))) 
                                                         << 4U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & (((IData)(6U) 
                                                         + 
                                                         ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                          - (IData)(8U))) 
                                                        << 4U))))) 
                                         | (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                            (3U & (
                                                   ((IData)(6U) 
                                                    + 
                                                    ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                     - (IData)(8U))) 
                                                   >> 1U))] 
                                            >> (0x1fU 
                                                & (((IData)(6U) 
                                                    + 
                                                    ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                     - (IData)(8U))) 
                                                   << 4U)))))
                           : 0U));
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_c_nx[0U] 
                    = ((0xffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_c_nx[0U]) 
                       | (((6U < ((IData)(0xfU) - (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)))
                            ? (0xffffU & (((0U == (0x1fU 
                                                   & (((IData)(7U) 
                                                       + 
                                                       ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                        - (IData)(8U))) 
                                                      << 4U)))
                                            ? 0U : 
                                           (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                            (((IData)(0xfU) 
                                              + (0x7fU 
                                                 & (((IData)(7U) 
                                                     + 
                                                     ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                      - (IData)(8U))) 
                                                    << 4U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & (((IData)(7U) 
                                                       + 
                                                       ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                        - (IData)(8U))) 
                                                      << 4U))))) 
                                          | (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                             (3U & 
                                              (((IData)(7U) 
                                                + ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                   - (IData)(8U))) 
                                               >> 1U))] 
                                             >> (0x1fU 
                                                 & (((IData)(7U) 
                                                     + 
                                                     ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                      - (IData)(8U))) 
                                                    << 4U)))))
                            : 0U) << 0x10U));
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_c_nx[0U] 
                    = ((0xffff0000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_c_nx[0U]) 
                       | ((7U < ((IData)(0xfU) - (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index)))
                           ? (0xffffU & (((0U == (0x1fU 
                                                  & (((IData)(8U) 
                                                      + 
                                                      ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                       - (IData)(8U))) 
                                                     << 4U)))
                                           ? 0U : (
                                                   vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                                   (((IData)(0xfU) 
                                                     + 
                                                     (0x7fU 
                                                      & (((IData)(8U) 
                                                          + 
                                                          ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                           - (IData)(8U))) 
                                                         << 4U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & (((IData)(8U) 
                                                         + 
                                                         ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                          - (IData)(8U))) 
                                                        << 4U))))) 
                                         | (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data[
                                            (3U & (
                                                   ((IData)(8U) 
                                                    + 
                                                    ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                     - (IData)(8U))) 
                                                   >> 1U))] 
                                            >> (0x1fU 
                                                & (((IData)(8U) 
                                                    + 
                                                    ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index) 
                                                     - (IData)(8U))) 
                                                   << 4U)))))
                           : 0U));
            }
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i = 0U;
            while (VL_GTS_III(32, 0x80U, vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i)) {
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_c_nx[(3U 
                                                                                & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i 
                                                                                >> 5U))] 
                    = ((~ ((IData)(1U) << (0x1fU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i))) 
                       & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_c_nx[
                       (3U & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i 
                              >> 5U))]);
                vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i 
                    = ((IData)(1U) + vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i);
            }
        }
    } else {
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i = 0U;
        while (VL_GTS_III(32, 0x80U, vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i)) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[(3U 
                                                                                & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i 
                                                                                >> 5U))] 
                = ((~ ((IData)(1U) << (0x1fU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i))) 
                   & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx[
                   (3U & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i 
                          >> 5U))]);
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i 
                = ((IData)(1U) + vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i);
        }
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i = 0U;
        while (VL_GTS_III(32, 0x80U, vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i)) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_c_nx[(3U 
                                                                                & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i 
                                                                                >> 5U))] 
                = ((~ ((IData)(1U) << (0x1fU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i))) 
                   & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_c_nx[
                   (3U & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i 
                          >> 5U))]);
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i 
                = ((IData)(1U) + vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i);
        }
    }
}

VL_INLINE_OPT void VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__11(VTPUSimEnv_TPUSimEnv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__11\n"); );
    // Body
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_d0 
        = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__addr_sel__DOT__sram_raddr_w0_nx;
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_d1 
        = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__addr_sel__DOT__sram_raddr_w1_nx;
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_w0 
        = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__addr_sel__DOT__sram_raddr_w0_nx;
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_w1 
        = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__addr_sel__DOT__sram_raddr_w1_nx;
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__addr_sel__DOT__sram_raddr_w0_nx 
        = ((0x62U >= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__addr_serial_num))
            ? (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__addr_serial_num)
            : 0x7fU);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__addr_sel__DOT__sram_raddr_w1_nx 
        = (((4U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__addr_serial_num)) 
            & (0x66U >= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__addr_serial_num)))
            ? (0x7fU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__addr_serial_num) 
                        - (IData)(4U))) : 0x7fU);
}
