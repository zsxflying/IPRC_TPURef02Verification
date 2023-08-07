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
    vlSelf->resetn = VL_RAND_RESET_I(1);
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
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v0 = 0;
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v4 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v5 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v6 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v7 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v8 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v9 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v10 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v11 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v12 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v13 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v14 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v15 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v16 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v17 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v18 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v19 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v20 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v21 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v22 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v23 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v24 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v25 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v26 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v27 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v28 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v29 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v30 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v31 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v32 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v33 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v34 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v35 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v36 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v37 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v38 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v39 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v40 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v41 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v42 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v43 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v44 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v45 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v46 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v47 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v48 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v49 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v50 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v51 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v52 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v53 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v54 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v55 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v56 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v57 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v58 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v59 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v60 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v61 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v62 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v63 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v64 = 0;
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v0 = 0;
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v4 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v5 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v6 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v7 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v8 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v9 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v10 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v11 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v12 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v13 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v14 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v15 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v16 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v17 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v18 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v19 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v20 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v21 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v22 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v23 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v24 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v25 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v26 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v27 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v28 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v29 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v30 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v31 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v32 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v33 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v34 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v35 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v36 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v37 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v38 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v39 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v40 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v41 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v42 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v43 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v44 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v45 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v46 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v47 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v48 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v49 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v50 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v51 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v52 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v53 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v54 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v55 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v56 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v57 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v58 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v59 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v60 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v61 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v62 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v63 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v64 = 0;
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v0 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvset__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v0 = 0;
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v1 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v2 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v3 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v4 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v5 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v6 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v7 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v8 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v9 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v10 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v11 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v12 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v13 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v14 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v15 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v16 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v17 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v18 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v19 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v20 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v21 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v22 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v23 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v24 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v25 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v26 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v27 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v28 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v29 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v30 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v31 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v32 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v33 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v34 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v35 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v36 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v37 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v38 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v39 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v40 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v41 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v42 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v43 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v44 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v45 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v46 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v47 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v48 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v49 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v50 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v51 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v52 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v53 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v54 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v55 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v56 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v57 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v58 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v59 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v60 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v61 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v62 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v63 = VL_RAND_RESET_I(21);
    vlSelf->__Vdlyvset__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v64 = 0;
}
