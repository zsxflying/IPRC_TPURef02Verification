// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTPUSimEnv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTPUSimEnv__Syms.h"
#include "VTPUSimEnv_TPUSimEnv.h"

VL_ATTR_COLD void VTPUSimEnv_TPUSimEnv___stl_sequent__TOP__TPUSimEnv__3(VTPUSimEnv_TPUSimEnv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTPUSimEnv_TPUSimEnv___stl_sequent__TOP__TPUSimEnv__3\n"); );
    // Body
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
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_write_enable_a0_nx 
        = (1U & ((~ (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__sram_write_enable)) 
                 | (0U != (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__data_set))));
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_write_enable_c0_nx 
        = (1U & ((~ (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__sram_write_enable)) 
                 | (1U != (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__data_set))));
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
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_write_enable_b0_nx 
        = (1U & ((~ (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__sram_write_enable)) 
                 | ((0U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__data_set))
                     ? (8U > (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index))
                     : ((1U != (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__data_set)) 
                        | (8U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index))))));
}

VL_ATTR_COLD void VTPUSimEnv_TPUSimEnv___ctor_var_reset(VTPUSimEnv_TPUSimEnv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTPUSimEnv_TPUSimEnv___ctor_var_reset\n"); );
    // Body
    vlSelf->io_tpu_start = VL_RAND_RESET_I(1);
    vlSelf->io_tpu_done = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->clk = 0;
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_w0 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_w1 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_d0 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_raddr_d1 = VL_RAND_RESET_I(10);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_write_enable_a0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_a);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_waddr_a = VL_RAND_RESET_I(6);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_write_enable_b0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_b);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_waddr_b = VL_RAND_RESET_I(6);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_write_enable_c0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_wdata_c);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog_sram_waddr_c = VL_RAND_RESET_I(6);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog_tpu_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__addr_serial_num = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(168, vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data);
    VL_RAND_RESET_W(128, vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantized_data);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__alu_start = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num = VL_RAND_RESET_I(9);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index = VL_RAND_RESET_I(6);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__sram_write_enable = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__data_set = VL_RAND_RESET_I(2);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__addr_sel__DOT__sram_raddr_w0_nx = VL_RAND_RESET_I(10);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__addr_sel__DOT__sram_raddr_w1_nx = VL_RAND_RESET_I(10);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__quantize__DOT__ori_shifted_data = VL_RAND_RESET_I(21);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[__Vi0][__Vi1] = VL_RAND_RESET_I(21);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[__Vi0][__Vi1] = VL_RAND_RESET_I(21);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = VL_RAND_RESET_I(16);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound = VL_RAND_RESET_I(6);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__lower_bound = VL_RAND_RESET_I(6);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_h2a316ab9__0 = VL_RAND_RESET_I(1);
    vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 = VL_RAND_RESET_I(21);
    vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 = VL_RAND_RESET_I(21);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state_nx = VL_RAND_RESET_I(3);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__data_set_nx = VL_RAND_RESET_I(2);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__tpu_done_nx = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__addr_serial_num_nx = VL_RAND_RESET_I(7);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__cycle_num_nx = VL_RAND_RESET_I(9);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__matrix_index_nx = VL_RAND_RESET_I(6);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_write_enable_a0_nx = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_write_enable_b0_nx = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_write_enable_c0_nx = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_a_nx);
    VL_RAND_RESET_W(128, vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_b_nx);
    VL_RAND_RESET_W(128, vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_wdata_c_nx);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_waddr_a_nx = VL_RAND_RESET_I(6);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_waddr_b_nx = VL_RAND_RESET_I(6);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__write_out__DOT__sram_waddr_c_nx = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvset__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v0 = 0;
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v64 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v64 = 0;
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v65 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v66 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v67 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v68 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v69 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v70 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v71 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v72 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v73 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v74 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v75 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v76 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v77 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v78 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v79 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v80 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v81 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v82 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v83 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v84 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v85 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v86 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v87 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v88 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v89 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v90 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v91 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v92 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v93 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v94 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v95 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v96 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v97 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v98 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v99 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v100 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v101 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v102 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v103 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v104 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v105 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v106 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v107 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v108 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v109 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v110 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v111 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v112 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v113 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v114 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v115 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v116 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v117 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v118 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v119 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v120 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v121 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v122 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v123 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v124 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v125 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v126 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v127 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v0 = 0;
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v64 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v64 = 0;
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v65 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v66 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v67 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v68 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v69 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v70 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v71 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v72 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v73 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v74 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v75 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v76 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v77 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v78 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v79 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v80 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v81 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v82 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v83 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v84 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v85 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v86 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v87 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v88 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v89 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v90 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v91 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v92 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v93 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v94 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v95 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v96 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v97 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v98 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v99 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v100 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v101 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v102 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v103 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v104 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v105 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v106 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v107 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v108 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v109 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v110 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v111 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v112 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v113 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v114 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v115 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v116 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v117 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v118 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v119 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v120 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v121 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v122 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v123 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v124 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v125 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v126 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v127 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v0 = 0;
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v64 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvset__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v64 = 0;
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v65 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v66 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v67 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v68 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v69 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v70 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v71 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v72 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v73 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v74 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v75 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v76 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v77 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v78 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v79 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v80 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v81 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v82 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v83 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v84 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v85 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v86 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v87 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v88 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v89 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v90 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v91 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v92 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v93 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v94 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v95 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v96 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v97 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v98 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v99 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v100 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v101 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v102 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v103 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v104 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v105 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v106 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v107 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v108 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v109 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v110 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v111 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v112 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v113 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v114 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v115 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v116 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v117 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v118 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v119 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v120 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v121 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v122 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v123 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v124 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v125 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v126 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v127 = VL_RAND_RESET_I(21);
}
