// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTPUSimEnv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTPUSimEnv__Syms.h"
#include "VTPUSimEnv_TPUSimEnv.h"
#include "VTPUSimEnv__Syms.h"

extern const VlUnpacked<CData/*6:0*/, 2048> VTPUSimEnv__ConstPool__TABLE_h0402a734_0;

VL_ATTR_COLD void VTPUSimEnv_TPUSimEnv___stl_sequent__TOP__TPUSimEnv__0(VTPUSimEnv_TPUSimEnv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTPUSimEnv_TPUSimEnv___stl_sequent__TOP__TPUSimEnv__0\n"); );
    // Init
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__addr_sel__DOT__sram_raddr_w0_nx 
        = ((0x62U >= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__addr_serial_num))
            ? (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__addr_serial_num)
            : 0x7fU);
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__addr_sel__DOT__sram_raddr_w1_nx 
        = (((4U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__addr_serial_num)) 
            & (0x66U >= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__addr_serial_num)))
            ? (0x7fU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__addr_serial_num) 
                        - (IData)(4U))) : 0x7fU);
    if ((4U & (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state))) {
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__cycle_num_nx = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__matrix_index_nx = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state_nx = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__data_set_nx = 0U;
    } else if ((2U & (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state))) {
        if ((1U & (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__cycle_num_nx 
                = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)));
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
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__cycle_num_nx = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__matrix_index_nx = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state_nx = 3U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__data_set_nx = 0U;
        }
    } else {
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__cycle_num_nx = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__matrix_index_nx = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state_nx 
            = ((1U & (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state))
                ? 2U : ((IData)(vlSymsp->TOP.io_tpu_start)
                         ? 1U : 0U));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__data_set_nx = 0U;
    }
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__tpu_done_nx 
        = (IData)((((3U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state)) 
                    & (0xfU == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__matrix_index))) 
                   & (1U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__data_set))));
    __Vtableidx1 = (((IData)(vlSymsp->TOP.io_tpu_start) 
                     << 0xaU) | (((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__addr_serial_num) 
                                  << 3U) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state)));
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__addr_serial_num_nx 
        = VTPUSimEnv__ConstPool__TABLE_h0402a734_0[__Vtableidx1];
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__alu_start 
        = (IData)((3U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state)));
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
}
