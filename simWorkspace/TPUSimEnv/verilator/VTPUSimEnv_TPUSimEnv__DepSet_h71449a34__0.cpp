// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTPUSimEnv.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTPUSimEnv__Syms.h"
#include "VTPUSimEnv_TPUSimEnv.h"

VL_INLINE_OPT void VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__3(VTPUSimEnv_TPUSimEnv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__3\n"); );
    // Body
    if (vlSelf->__Vdlyvset__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v64) {
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[0U][0U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v64;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[4U][0U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v65;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[1U][0U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v66;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[5U][0U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v67;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[2U][0U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v68;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[6U][0U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v69;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[3U][0U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v70;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[7U][0U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v71;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[0U][1U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v72;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[0U][2U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v73;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[0U][3U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v74;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[0U][4U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v75;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[0U][5U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v76;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[0U][6U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v77;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[0U][7U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v78;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[1U][1U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v79;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[1U][2U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v80;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[1U][3U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v81;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[1U][4U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v82;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[1U][5U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v83;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[1U][6U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v84;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[1U][7U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v85;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[2U][1U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v86;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[2U][2U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v87;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[2U][3U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v88;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[2U][4U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v89;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[2U][5U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v90;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[2U][6U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v91;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[2U][7U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v92;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[3U][1U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v93;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[3U][2U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v94;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[3U][3U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v95;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[3U][4U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v96;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[3U][5U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v97;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[3U][6U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v98;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[3U][7U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v99;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[4U][1U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v100;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[4U][2U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v101;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[4U][3U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v102;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[4U][4U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v103;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[4U][5U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v104;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[4U][6U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v105;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[4U][7U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v106;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[5U][1U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v107;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[5U][2U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v108;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[5U][3U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v109;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[5U][4U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v110;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[5U][5U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v111;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[5U][6U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v112;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[5U][7U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v113;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[6U][1U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v114;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[6U][2U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v115;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[6U][3U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v116;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[6U][4U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v117;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[6U][5U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v118;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[6U][6U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v119;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[6U][7U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v120;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[7U][1U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v121;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[7U][2U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v122;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[7U][3U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v123;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[7U][4U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v124;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[7U][5U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v125;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[7U][6U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v126;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue[7U][7U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue__v127;
    }
    if (vlSelf->__Vdlyvset__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v0) {
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[0U][0U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[0U][1U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[0U][2U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[0U][3U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[0U][4U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[0U][5U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[0U][6U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[0U][7U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[1U][0U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[1U][1U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[1U][2U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[1U][3U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[1U][4U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[1U][5U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[1U][6U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[1U][7U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[2U][0U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[2U][1U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[2U][2U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[2U][3U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[2U][4U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[2U][5U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[2U][6U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[2U][7U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[3U][0U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[3U][1U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[3U][2U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[3U][3U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[3U][4U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[3U][5U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[3U][6U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[3U][7U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[4U][0U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[4U][1U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[4U][2U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[4U][3U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[4U][4U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[4U][5U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[4U][6U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[4U][7U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[5U][0U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[5U][1U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[5U][2U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[5U][3U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[5U][4U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[5U][5U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[5U][6U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[5U][7U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[6U][0U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[6U][1U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[6U][2U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[6U][3U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[6U][4U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[6U][5U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[6U][6U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[6U][7U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[7U][0U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[7U][1U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[7U][2U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[7U][3U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[7U][4U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[7U][5U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[7U][6U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[7U][7U] = 0U;
    }
}

VL_INLINE_OPT void VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__4(VTPUSimEnv_TPUSimEnv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__4\n"); );
    // Body
    if (vlSelf->__Vdlyvset__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v64) {
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[0U][0U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v64;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[0U][4U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v65;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[0U][1U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v66;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[0U][5U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v67;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[0U][2U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v68;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[0U][6U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v69;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[0U][3U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v70;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[0U][7U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v71;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[1U][0U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v72;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[1U][1U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v73;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[1U][2U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v74;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[1U][3U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v75;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[1U][4U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v76;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[1U][5U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v77;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[1U][6U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v78;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[1U][7U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v79;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[2U][0U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v80;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[2U][1U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v81;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[2U][2U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v82;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[2U][3U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v83;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[2U][4U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v84;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[2U][5U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v85;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[2U][6U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v86;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[2U][7U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v87;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[3U][0U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v88;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[3U][1U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v89;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[3U][2U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v90;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[3U][3U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v91;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[3U][4U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v92;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[3U][5U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v93;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[3U][6U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v94;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[3U][7U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v95;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[4U][0U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v96;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[4U][1U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v97;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[4U][2U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v98;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[4U][3U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v99;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[4U][4U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v100;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[4U][5U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v101;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[4U][6U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v102;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[4U][7U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v103;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[5U][0U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v104;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[5U][1U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v105;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[5U][2U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v106;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[5U][3U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v107;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[5U][4U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v108;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[5U][5U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v109;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[5U][6U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v110;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[5U][7U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v111;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[6U][0U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v112;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[6U][1U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v113;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[6U][2U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v114;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[6U][3U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v115;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[6U][4U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v116;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[6U][5U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v117;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[6U][6U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v118;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[6U][7U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v119;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[7U][0U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v120;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[7U][1U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v121;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[7U][2U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v122;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[7U][3U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v123;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[7U][4U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v124;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[7U][5U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v125;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[7U][6U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v126;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue[7U][7U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue__v127;
    }
    if (vlSelf->__Vdlyvset__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v0) {
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[0U][0U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[0U][1U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[0U][2U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[0U][3U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[0U][4U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[0U][5U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[0U][6U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[0U][7U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[1U][0U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[1U][1U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[1U][2U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[1U][3U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[1U][4U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[1U][5U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[1U][6U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[1U][7U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[2U][0U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[2U][1U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[2U][2U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[2U][3U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[2U][4U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[2U][5U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[2U][6U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[2U][7U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[3U][0U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[3U][1U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[3U][2U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[3U][3U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[3U][4U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[3U][5U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[3U][6U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[3U][7U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[4U][0U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[4U][1U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[4U][2U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[4U][3U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[4U][4U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[4U][5U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[4U][6U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[4U][7U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[5U][0U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[5U][1U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[5U][2U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[5U][3U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[5U][4U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[5U][5U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[5U][6U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[5U][7U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[6U][0U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[6U][1U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[6U][2U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[6U][3U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[6U][4U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[6U][5U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[6U][6U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[6U][7U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[7U][0U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[7U][1U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[7U][2U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[7U][3U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[7U][4U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[7U][5U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[7U][6U] = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[7U][7U] = 0U;
    }
}

VL_INLINE_OPT void VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__5(VTPUSimEnv_TPUSimEnv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__5\n"); );
    // Body
    if (vlSelf->__Vdlyvset__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v64) {
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[0U][0U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v64;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[0U][1U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v65;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[0U][2U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v66;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[0U][3U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v67;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[0U][4U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v68;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[0U][5U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v69;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[0U][6U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v70;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[0U][7U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v71;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[1U][0U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v72;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[1U][1U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v73;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[1U][2U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v74;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[1U][3U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v75;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[1U][4U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v76;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[1U][5U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v77;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[1U][6U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v78;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[1U][7U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v79;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[2U][0U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v80;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[2U][1U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v81;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[2U][2U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v82;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[2U][3U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v83;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[2U][4U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v84;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[2U][5U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v85;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[2U][6U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v86;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[2U][7U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v87;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[3U][0U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v88;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[3U][1U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v89;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[3U][2U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v90;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[3U][3U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v91;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[3U][4U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v92;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[3U][5U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v93;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[3U][6U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v94;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[3U][7U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v95;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[4U][0U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v96;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[4U][1U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v97;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[4U][2U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v98;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[4U][3U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v99;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[4U][4U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v100;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[4U][5U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v101;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[4U][6U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v102;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[4U][7U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v103;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[5U][0U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v104;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[5U][1U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v105;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[5U][2U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v106;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[5U][3U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v107;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[5U][4U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v108;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[5U][5U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v109;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[5U][6U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v110;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[5U][7U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v111;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[6U][0U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v112;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[6U][1U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v113;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[6U][2U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v114;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[6U][3U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v115;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[6U][4U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v116;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[6U][5U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v117;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[6U][6U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v118;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[6U][7U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v119;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[7U][0U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v120;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[7U][1U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v121;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[7U][2U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v122;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[7U][3U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v123;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[7U][4U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v124;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[7U][5U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v125;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[7U][6U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v126;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D[7U][7U] 
            = vlSelf->__Vdlyvval__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D__v127;
    }
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__cycle_num_nx 
        = ((4U & (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state))
            ? 0U : ((2U & (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state))
                     ? ((1U & (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic_controll__DOT__state))
                         ? (0x1ffU & ((IData)(1U) + (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)))
                         : 0U) : 0U));
}

VL_INLINE_OPT void VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__7(VTPUSimEnv_TPUSimEnv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__7\n"); );
    // Body
    if ((3U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [2U][1U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U] 
            = ((0x800003ffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  << 0xaU));
    }
    if ((4U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [2U][2U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U] 
            = ((0x800003ffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  << 0xaU));
    }
    if ((5U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [2U][3U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U] 
            = ((0x800003ffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  << 0xaU));
    }
    if ((6U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [2U][4U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U] 
            = ((0x800003ffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  << 0xaU));
    }
    if ((7U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [2U][5U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U] 
            = ((0x800003ffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  << 0xaU));
    }
    if ((3U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [3U][0U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U] 
            = ((0x7fffffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  << 0x1fU));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[2U] 
            = ((0xfff00000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[2U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  >> 1U));
    }
    if ((4U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [3U][1U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U] 
            = ((0x7fffffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  << 0x1fU));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[2U] 
            = ((0xfff00000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[2U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  >> 1U));
    }
    if ((5U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [3U][2U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U] 
            = ((0x7fffffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  << 0x1fU));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[2U] 
            = ((0xfff00000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[2U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  >> 1U));
    }
    if ((6U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [3U][3U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U] 
            = ((0x7fffffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  << 0x1fU));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[2U] 
            = ((0xfff00000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[2U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  >> 1U));
    }
    if ((7U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [3U][4U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U] 
            = ((0x7fffffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  << 0x1fU));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[2U] 
            = ((0xfff00000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[2U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  >> 1U));
    }
    if ((4U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [4U][0U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[2U] 
            = ((0xfffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[2U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  << 0x14U));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U] 
            = ((0xfffffe00U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  >> 0xcU));
    }
    if ((5U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [4U][1U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[2U] 
            = ((0xfffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[2U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  << 0x14U));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U] 
            = ((0xfffffe00U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  >> 0xcU));
    }
    if ((6U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [4U][2U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[2U] 
            = ((0xfffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[2U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  << 0x14U));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U] 
            = ((0xfffffe00U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  >> 0xcU));
    }
    if ((7U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [4U][3U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[2U] 
            = ((0xfffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[2U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  << 0x14U));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U] 
            = ((0xfffffe00U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  >> 0xcU));
    }
    if ((5U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [5U][0U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U] 
            = ((0xc00001ffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  << 9U));
    }
    if ((6U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [5U][1U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U] 
            = ((0xc00001ffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  << 9U));
    }
    if ((7U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [5U][2U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U] 
            = ((0xc00001ffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  << 9U));
    }
    if ((6U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [6U][0U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U] 
            = ((0x3fffffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  << 0x1eU));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[4U] 
            = ((0xfff80000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[4U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  >> 2U));
    }
    if ((7U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__upper_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [6U][1U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U] 
            = ((0x3fffffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  << 0x1eU));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[4U] 
            = ((0xfff80000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[4U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  >> 2U));
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [7U][0U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[4U] 
            = ((0x7ffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[4U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                  << 0x13U));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[5U] 
            = (0xffU & (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__0 
                        >> 0xdU));
    }
    if ((8U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__lower_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [1U][7U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[0U] 
            = ((0x1fffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[0U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  << 0x15U));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U] 
            = ((0xfffffc00U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  >> 0xbU));
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [2U][6U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U] 
            = ((0x800003ffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  << 0xaU));
    }
    if ((9U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__lower_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [2U][7U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U] 
            = ((0x800003ffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  << 0xaU));
    }
    if ((8U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__lower_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [3U][5U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U] 
            = ((0x7fffffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  << 0x1fU));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[2U] 
            = ((0xfff00000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[2U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  >> 1U));
    }
    if ((9U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__lower_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [3U][6U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U] 
            = ((0x7fffffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  << 0x1fU));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[2U] 
            = ((0xfff00000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[2U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  >> 1U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__lower_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [3U][7U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U] 
            = ((0x7fffffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[1U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  << 0x1fU));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[2U] 
            = ((0xfff00000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[2U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  >> 1U));
    }
    if ((8U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__lower_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [4U][4U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[2U] 
            = ((0xfffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[2U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  << 0x14U));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U] 
            = ((0xfffffe00U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  >> 0xcU));
    }
    if ((9U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__lower_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [4U][5U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[2U] 
            = ((0xfffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[2U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  << 0x14U));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U] 
            = ((0xfffffe00U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  >> 0xcU));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__lower_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [4U][6U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[2U] 
            = ((0xfffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[2U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  << 0x14U));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U] 
            = ((0xfffffe00U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  >> 0xcU));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__lower_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [4U][7U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[2U] 
            = ((0xfffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[2U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  << 0x14U));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U] 
            = ((0xfffffe00U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  >> 0xcU));
    }
}

VL_INLINE_OPT void VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__8(VTPUSimEnv_TPUSimEnv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTPUSimEnv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VTPUSimEnv_TPUSimEnv___nba_sequent__TOP__TPUSimEnv__8\n"); );
    // Body
    if ((8U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__lower_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [5U][3U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U] 
            = ((0xc00001ffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  << 9U));
    }
    if ((9U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__lower_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [5U][4U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U] 
            = ((0xc00001ffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  << 9U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__lower_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [5U][5U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U] 
            = ((0xc00001ffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  << 9U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__lower_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [5U][6U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U] 
            = ((0xc00001ffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  << 9U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__lower_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [5U][7U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U] 
            = ((0xc00001ffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  << 9U));
    }
    if ((8U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__lower_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [6U][2U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U] 
            = ((0x3fffffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  << 0x1eU));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[4U] 
            = ((0xfff80000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[4U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  >> 2U));
    }
    if ((9U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__lower_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [6U][3U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U] 
            = ((0x3fffffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  << 0x1eU));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[4U] 
            = ((0xfff80000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[4U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  >> 2U));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__lower_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [6U][4U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U] 
            = ((0x3fffffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  << 0x1eU));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[4U] 
            = ((0xfff80000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[4U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  >> 2U));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__lower_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [6U][5U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U] 
            = ((0x3fffffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  << 0x1eU));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[4U] 
            = ((0xfff80000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[4U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  >> 2U));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__lower_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [6U][6U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U] 
            = ((0x3fffffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  << 0x1eU));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[4U] 
            = ((0xfff80000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[4U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  >> 2U));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__lower_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [6U][7U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U] 
            = ((0x3fffffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[3U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  << 0x1eU));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[4U] 
            = ((0xfff80000U & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[4U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  >> 2U));
    }
    if ((8U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__lower_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [7U][1U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[4U] 
            = ((0x7ffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[4U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  << 0x13U));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[5U] 
            = (0xffU & (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                        >> 0xdU));
    }
    if ((9U == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__lower_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [7U][2U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[4U] 
            = ((0x7ffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[4U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  << 0x13U));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[5U] 
            = (0xffU & (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                        >> 0xdU));
    }
    if ((0xaU == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__lower_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [7U][3U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[4U] 
            = ((0x7ffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[4U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  << 0x13U));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[5U] 
            = (0xffU & (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                        >> 0xdU));
    }
    if ((0xbU == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__lower_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [7U][4U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[4U] 
            = ((0x7ffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[4U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  << 0x13U));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[5U] 
            = (0xffU & (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                        >> 0xdU));
    }
    if ((0xcU == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__lower_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [7U][5U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[4U] 
            = ((0x7ffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[4U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  << 0x13U));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[5U] 
            = (0xffU & (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                        >> 0xdU));
    }
    if ((0xdU == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__lower_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [7U][6U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[4U] 
            = ((0x7ffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[4U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  << 0x13U));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[5U] 
            = (0xffU & (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                        >> 0xdU));
    }
    if ((0xeU == (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__lower_bound))) {
        vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [7U][7U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[4U] 
            = ((0x7ffffU & vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[4U]) 
               | (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                  << 0x13U));
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__ori_data[5U] 
            = (0xffU & (vlSelf->tpu_1__DOT__tpuVerilog__DOT__systolic__DOT____Vlvbound_haea73322__1 
                        >> 0xdU));
    }
    vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__i = 8U;
    if (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__alu_start) {
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (0U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (0U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [0U]
                                                              [0U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [0U]
                                                        [0U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[0U][0U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if ((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [0U]
                                                              [0U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [0U]
                                                        [0U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[0U][0U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [0U][0U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[0U][0U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [0U][0U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (1U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (1U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [0U]
                                                              [1U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [0U]
                                                        [1U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[0U][1U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (1U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [0U]
                                                              [1U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [0U]
                                                        [1U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[0U][1U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [0U][1U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[0U][1U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [0U][1U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (2U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (2U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [0U]
                                                              [2U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [0U]
                                                        [2U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[0U][2U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (2U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [0U]
                                                              [2U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [0U]
                                                        [2U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[0U][2U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [0U][2U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[0U][2U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [0U][2U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (3U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (3U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [0U]
                                                              [3U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [0U]
                                                        [3U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[0U][3U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (3U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [0U]
                                                              [3U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [0U]
                                                        [3U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[0U][3U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [0U][3U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[0U][3U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [0U][3U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (4U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (4U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [0U]
                                                              [4U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [0U]
                                                        [4U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[0U][4U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (4U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [0U]
                                                              [4U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [0U]
                                                        [4U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[0U][4U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [0U][4U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[0U][4U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [0U][4U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (5U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (5U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [0U]
                                                              [5U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [0U]
                                                        [5U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[0U][5U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (5U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [0U]
                                                              [5U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [0U]
                                                        [5U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[0U][5U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [0U][5U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[0U][5U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [0U][5U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (6U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (6U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [0U]
                                                              [6U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [0U]
                                                        [6U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[0U][6U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (6U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [0U]
                                                              [6U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [0U]
                                                        [6U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[0U][6U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [0U][6U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[0U][6U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [0U][6U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (7U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (7U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [0U]
                                                              [7U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [0U]
                                                        [7U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[0U][7U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (7U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [0U]
                                                              [7U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [0U]
                                                        [7U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[0U][7U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [0U][7U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[0U][7U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [0U][7U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (1U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (1U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [1U]
                                                              [0U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [1U]
                                                        [0U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[1U][0U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (1U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [1U]
                                                              [0U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [1U]
                                                        [0U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[1U][0U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [1U][0U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[1U][0U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [1U][0U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (2U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (2U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [1U]
                                                              [1U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [1U]
                                                        [1U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[1U][1U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (2U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [1U]
                                                              [1U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [1U]
                                                        [1U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[1U][1U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [1U][1U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[1U][1U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [1U][1U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (3U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (3U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [1U]
                                                              [2U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [1U]
                                                        [2U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[1U][2U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (3U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [1U]
                                                              [2U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [1U]
                                                        [2U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[1U][2U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [1U][2U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[1U][2U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [1U][2U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (4U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (4U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [1U]
                                                              [3U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [1U]
                                                        [3U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[1U][3U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (4U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [1U]
                                                              [3U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [1U]
                                                        [3U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[1U][3U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [1U][3U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[1U][3U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [1U][3U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (5U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (5U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [1U]
                                                              [4U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [1U]
                                                        [4U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[1U][4U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (5U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [1U]
                                                              [4U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [1U]
                                                        [4U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[1U][4U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [1U][4U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[1U][4U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [1U][4U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (6U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (6U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [1U]
                                                              [5U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [1U]
                                                        [5U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[1U][5U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (6U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [1U]
                                                              [5U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [1U]
                                                        [5U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[1U][5U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [1U][5U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[1U][5U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [1U][5U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (7U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (7U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [1U]
                                                              [6U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [1U]
                                                        [6U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[1U][6U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (7U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [1U]
                                                              [6U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [1U]
                                                        [6U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[1U][6U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [1U][6U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[1U][6U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [1U][6U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (8U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (8U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [1U]
                                                              [7U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [1U]
                                                        [7U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[1U][7U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (8U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [1U]
                                                              [7U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [1U]
                                                        [7U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[1U][7U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [1U][7U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[1U][7U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [1U][7U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (2U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (2U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [2U]
                                                              [0U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [2U]
                                                        [0U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[2U][0U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (2U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [2U]
                                                              [0U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [2U]
                                                        [0U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[2U][0U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [2U][0U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[2U][0U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [2U][0U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (3U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (3U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [2U]
                                                              [1U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [2U]
                                                        [1U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[2U][1U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (3U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [2U]
                                                              [1U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [2U]
                                                        [1U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[2U][1U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [2U][1U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[2U][1U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [2U][1U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (4U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (4U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [2U]
                                                              [2U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [2U]
                                                        [2U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[2U][2U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (4U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [2U]
                                                              [2U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [2U]
                                                        [2U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[2U][2U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [2U][2U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[2U][2U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [2U][2U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (5U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (5U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [2U]
                                                              [3U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [2U]
                                                        [3U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[2U][3U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (5U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [2U]
                                                              [3U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [2U]
                                                        [3U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[2U][3U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [2U][3U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[2U][3U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [2U][3U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (6U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (6U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [2U]
                                                              [4U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [2U]
                                                        [4U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[2U][4U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (6U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [2U]
                                                              [4U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [2U]
                                                        [4U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[2U][4U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [2U][4U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[2U][4U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [2U][4U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (7U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (7U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [2U]
                                                              [5U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [2U]
                                                        [5U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[2U][5U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (7U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [2U]
                                                              [5U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [2U]
                                                        [5U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[2U][5U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [2U][5U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[2U][5U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [2U][5U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (8U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (8U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [2U]
                                                              [6U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [2U]
                                                        [6U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[2U][6U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (8U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [2U]
                                                              [6U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [2U]
                                                        [6U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[2U][6U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [2U][6U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[2U][6U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [2U][6U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (9U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (9U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [2U]
                                                              [7U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [2U]
                                                        [7U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[2U][7U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (9U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [2U]
                                                              [7U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [2U]
                                                        [7U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[2U][7U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [2U][7U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[2U][7U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [2U][7U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (3U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (3U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [3U]
                                                              [0U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [3U]
                                                        [0U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[3U][0U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (3U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [3U]
                                                              [0U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [3U]
                                                        [0U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[3U][0U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [3U][0U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[3U][0U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [3U][0U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (4U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (4U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [3U]
                                                              [1U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [3U]
                                                        [1U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[3U][1U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (4U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [3U]
                                                              [1U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [3U]
                                                        [1U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[3U][1U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [3U][1U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[3U][1U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [3U][1U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (5U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (5U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [3U]
                                                              [2U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [3U]
                                                        [2U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[3U][2U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (5U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [3U]
                                                              [2U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [3U]
                                                        [2U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[3U][2U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [3U][2U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[3U][2U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [3U][2U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (6U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (6U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [3U]
                                                              [3U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [3U]
                                                        [3U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[3U][3U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (6U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [3U]
                                                              [3U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [3U]
                                                        [3U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[3U][3U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [3U][3U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[3U][3U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [3U][3U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (7U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (7U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [3U]
                                                              [4U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [3U]
                                                        [4U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[3U][4U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (7U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [3U]
                                                              [4U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [3U]
                                                        [4U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[3U][4U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [3U][4U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[3U][4U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [3U][4U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (8U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (8U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [3U]
                                                              [5U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [3U]
                                                        [5U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[3U][5U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (8U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [3U]
                                                              [5U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [3U]
                                                        [5U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[3U][5U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [3U][5U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[3U][5U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [3U][5U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (9U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (9U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [3U]
                                                              [6U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [3U]
                                                        [6U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[3U][6U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (9U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [3U]
                                                              [6U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [3U]
                                                        [6U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[3U][6U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [3U][6U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[3U][6U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [3U][6U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (0xaU == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                  - (IData)(9U))))) 
             | ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                & (0xaU == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                    - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [3U]
                                                              [7U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [3U]
                                                        [7U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[3U][7U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (0xaU <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [3U]
                                                              [7U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [3U]
                                                        [7U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[3U][7U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [3U][7U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[3U][7U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [3U][7U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (4U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (4U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [4U]
                                                              [0U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [4U]
                                                        [0U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[4U][0U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (4U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [4U]
                                                              [0U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [4U]
                                                        [0U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[4U][0U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [4U][0U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[4U][0U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [4U][0U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (5U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (5U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [4U]
                                                              [1U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [4U]
                                                        [1U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[4U][1U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (5U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [4U]
                                                              [1U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [4U]
                                                        [1U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[4U][1U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [4U][1U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[4U][1U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [4U][1U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (6U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (6U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [4U]
                                                              [2U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [4U]
                                                        [2U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[4U][2U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (6U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [4U]
                                                              [2U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [4U]
                                                        [2U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[4U][2U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [4U][2U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[4U][2U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [4U][2U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (7U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (7U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [4U]
                                                              [3U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [4U]
                                                        [3U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[4U][3U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (7U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [4U]
                                                              [3U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [4U]
                                                        [3U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[4U][3U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [4U][3U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[4U][3U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [4U][3U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (8U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (8U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [4U]
                                                              [4U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [4U]
                                                        [4U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[4U][4U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (8U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [4U]
                                                              [4U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [4U]
                                                        [4U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[4U][4U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [4U][4U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[4U][4U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [4U][4U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (9U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (9U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [4U]
                                                              [5U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [4U]
                                                        [5U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[4U][5U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (9U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [4U]
                                                              [5U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [4U]
                                                        [5U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[4U][5U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [4U][5U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[4U][5U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [4U][5U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (0xaU == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                  - (IData)(9U))))) 
             | ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                & (0xaU == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                    - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [4U]
                                                              [6U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [4U]
                                                        [6U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[4U][6U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (0xaU <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [4U]
                                                              [6U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [4U]
                                                        [6U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[4U][6U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [4U][6U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[4U][6U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [4U][6U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (0xbU == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                  - (IData)(9U))))) 
             | ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                & (0xbU == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                    - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [4U]
                                                              [7U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [4U]
                                                        [7U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[4U][7U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (0xbU <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [4U]
                                                              [7U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [4U]
                                                        [7U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[4U][7U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [4U][7U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[4U][7U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [4U][7U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (5U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (5U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [5U]
                                                              [0U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [5U]
                                                        [0U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[5U][0U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (5U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [5U]
                                                              [0U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [5U]
                                                        [0U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[5U][0U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [5U][0U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[5U][0U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [5U][0U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (6U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (6U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [5U]
                                                              [1U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [5U]
                                                        [1U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[5U][1U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (6U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [5U]
                                                              [1U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [5U]
                                                        [1U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[5U][1U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [5U][1U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[5U][1U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [5U][1U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (7U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (7U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [5U]
                                                              [2U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [5U]
                                                        [2U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[5U][2U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (7U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [5U]
                                                              [2U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [5U]
                                                        [2U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[5U][2U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [5U][2U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[5U][2U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [5U][2U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (8U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (8U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [5U]
                                                              [3U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [5U]
                                                        [3U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[5U][3U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (8U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [5U]
                                                              [3U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [5U]
                                                        [3U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[5U][3U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [5U][3U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[5U][3U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [5U][3U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (9U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (9U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [5U]
                                                              [4U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [5U]
                                                        [4U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[5U][4U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (9U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [5U]
                                                              [4U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [5U]
                                                        [4U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[5U][4U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [5U][4U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[5U][4U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [5U][4U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (0xaU == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                  - (IData)(9U))))) 
             | ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                & (0xaU == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                    - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [5U]
                                                              [5U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [5U]
                                                        [5U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[5U][5U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (0xaU <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [5U]
                                                              [5U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [5U]
                                                        [5U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[5U][5U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [5U][5U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[5U][5U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [5U][5U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (0xbU == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                  - (IData)(9U))))) 
             | ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                & (0xbU == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                    - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [5U]
                                                              [6U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [5U]
                                                        [6U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[5U][6U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (0xbU <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [5U]
                                                              [6U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [5U]
                                                        [6U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[5U][6U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [5U][6U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[5U][6U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [5U][6U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (0xcU == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                  - (IData)(9U))))) 
             | ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                & (0xcU == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                    - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [5U]
                                                              [7U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [5U]
                                                        [7U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[5U][7U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (0xcU <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [5U]
                                                              [7U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [5U]
                                                        [7U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[5U][7U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [5U][7U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[5U][7U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [5U][7U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (6U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (6U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [6U]
                                                              [0U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [6U]
                                                        [0U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[6U][0U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (6U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [6U]
                                                              [0U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [6U]
                                                        [0U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[6U][0U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [6U][0U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[6U][0U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [6U][0U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (7U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (7U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [6U]
                                                              [1U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [6U]
                                                        [1U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[6U][1U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (7U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [6U]
                                                              [1U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [6U]
                                                        [1U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[6U][1U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [6U][1U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[6U][1U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [6U][1U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (8U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (8U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [6U]
                                                              [2U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [6U]
                                                        [2U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[6U][2U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (8U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [6U]
                                                              [2U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [6U]
                                                        [2U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[6U][2U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [6U][2U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[6U][2U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [6U][2U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (9U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (9U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [6U]
                                                              [3U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [6U]
                                                        [3U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[6U][3U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (9U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [6U]
                                                              [3U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [6U]
                                                        [3U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[6U][3U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [6U][3U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[6U][3U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [6U][3U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (0xaU == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                  - (IData)(9U))))) 
             | ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                & (0xaU == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                    - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [6U]
                                                              [4U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [6U]
                                                        [4U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[6U][4U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (0xaU <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [6U]
                                                              [4U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [6U]
                                                        [4U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[6U][4U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [6U][4U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[6U][4U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [6U][4U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (0xbU == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                  - (IData)(9U))))) 
             | ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                & (0xbU == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                    - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [6U]
                                                              [5U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [6U]
                                                        [5U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[6U][5U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (0xbU <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [6U]
                                                              [5U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [6U]
                                                        [5U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[6U][5U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [6U][5U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[6U][5U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [6U][5U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (0xcU == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                  - (IData)(9U))))) 
             | ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                & (0xcU == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                    - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [6U]
                                                              [6U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [6U]
                                                        [6U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[6U][6U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (0xcU <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [6U]
                                                              [6U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [6U]
                                                        [6U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[6U][6U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [6U][6U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[6U][6U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [6U][6U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (0xdU == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                  - (IData)(9U))))) 
             | ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                & (0xdU == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                    - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [6U]
                                                              [7U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [6U]
                                                        [7U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[6U][7U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (0xdU <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [6U]
                                                              [7U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [6U]
                                                        [7U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[6U][7U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [6U][7U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[6U][7U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [6U][7U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (7U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (7U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [7U]
                                                              [0U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [7U]
                                                        [0U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[7U][0U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (7U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [7U]
                                                              [0U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [7U]
                                                        [0U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[7U][0U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [7U][0U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[7U][0U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [7U][0U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (8U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (8U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [7U]
                                                              [1U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [7U]
                                                        [1U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[7U][1U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (8U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [7U]
                                                              [1U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [7U]
                                                        [1U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[7U][1U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [7U][1U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[7U][1U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [7U][1U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (9U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(9U))))) | 
             ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (9U == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [7U]
                                                              [2U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [7U]
                                                        [2U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[7U][2U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (9U <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                              - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [7U]
                                                              [2U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [7U]
                                                        [2U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[7U][2U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [7U][2U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[7U][2U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [7U][2U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (0xaU == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                  - (IData)(9U))))) 
             | ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                & (0xaU == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                    - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [7U]
                                                              [3U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [7U]
                                                        [3U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[7U][3U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (0xaU <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [7U]
                                                              [3U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [7U]
                                                        [3U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[7U][3U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [7U][3U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[7U][3U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [7U][3U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (0xbU == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                  - (IData)(9U))))) 
             | ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                & (0xbU == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                    - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [7U]
                                                              [4U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [7U]
                                                        [4U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[7U][4U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (0xbU <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [7U]
                                                              [4U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [7U]
                                                        [4U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[7U][4U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [7U][4U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[7U][4U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [7U][4U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (0xcU == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                  - (IData)(9U))))) 
             | ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                & (0xcU == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                    - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [7U]
                                                              [5U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [7U]
                                                        [5U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[7U][5U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (0xcU <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [7U]
                                                              [5U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [7U]
                                                        [5U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[7U][5U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [7U][5U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[7U][5U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [7U][5U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (0xdU == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                  - (IData)(9U))))) 
             | ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                & (0xdU == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                    - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [7U]
                                                              [6U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [7U]
                                                        [6U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[7U][6U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (0xdU <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [7U]
                                                              [6U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [7U]
                                                        [6U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[7U][6U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [7U][6U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[7U][6U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [7U][6U];
        }
        if ((((9U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
              & (0xeU == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                  - (IData)(9U))))) 
             | ((0x11U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                & (0xeU == (0xfU & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                    - (IData)(0x11U))))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [7U]
                                                              [7U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [7U]
                                                        [7U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[7U][7U] 
                = ((0x1f0000U & ((- (IData)((1U & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                   >> 0xfU)))) 
                                 << 0x10U)) | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result));
        } else if (((1U <= (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num)) 
                    & (0xeU <= ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__cycle_num) 
                                - (IData)(1U))))) {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result 
                = (0xffffU & VL_MULS_III(16, (0xffffU 
                                              & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__weight_queue
                                                              [7U]
                                                              [7U])), 
                                         (0xffffU & 
                                          VL_EXTENDS_II(16,8, 
                                                        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__data_queue
                                                        [7U]
                                                        [7U]))));
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[7U][7U] 
                = (0x1fffffU & (vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                                [7U][7U] + ((0x1f0000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result) 
                                                               >> 0xfU)))) 
                                                << 0x10U)) 
                                            | (IData)(vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result))));
        } else {
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
            vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[7U][7U] 
                = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
                [7U][7U];
        }
    } else {
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__mul_result = 0U;
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[0U][0U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [0U][0U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[0U][1U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [0U][1U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[0U][2U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [0U][2U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[0U][3U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [0U][3U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[0U][4U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [0U][4U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[0U][5U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [0U][5U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[0U][6U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [0U][6U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[0U][7U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [0U][7U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[1U][0U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [1U][0U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[1U][1U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [1U][1U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[1U][2U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [1U][2U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[1U][3U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [1U][3U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[1U][4U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [1U][4U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[1U][5U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [1U][5U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[1U][6U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [1U][6U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[1U][7U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [1U][7U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[2U][0U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [2U][0U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[2U][1U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [2U][1U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[2U][2U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [2U][2U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[2U][3U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [2U][3U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[2U][4U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [2U][4U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[2U][5U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [2U][5U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[2U][6U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [2U][6U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[2U][7U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [2U][7U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[3U][0U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [3U][0U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[3U][1U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [3U][1U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[3U][2U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [3U][2U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[3U][3U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [3U][3U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[3U][4U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [3U][4U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[3U][5U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [3U][5U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[3U][6U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [3U][6U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[3U][7U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [3U][7U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[4U][0U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [4U][0U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[4U][1U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [4U][1U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[4U][2U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [4U][2U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[4U][3U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [4U][3U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[4U][4U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [4U][4U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[4U][5U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [4U][5U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[4U][6U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [4U][6U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[4U][7U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [4U][7U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[5U][0U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [5U][0U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[5U][1U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [5U][1U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[5U][2U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [5U][2U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[5U][3U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [5U][3U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[5U][4U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [5U][4U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[5U][5U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [5U][5U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[5U][6U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [5U][6U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[5U][7U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [5U][7U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[6U][0U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [6U][0U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[6U][1U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [6U][1U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[6U][2U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [6U][2U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[6U][3U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [6U][3U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[6U][4U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [6U][4U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[6U][5U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [6U][5U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[6U][6U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [6U][6U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[6U][7U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [6U][7U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[7U][0U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [7U][0U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[7U][1U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [7U][1U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[7U][2U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [7U][2U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[7U][3U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [7U][3U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[7U][4U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [7U][4U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[7U][5U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [7U][5U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[7U][6U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [7U][6U];
        vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D_nx[7U][7U] 
            = vlSelf->__PVT__tpu_1__DOT__tpuVerilog__DOT__systolic__DOT__matrix_mul_2D
            [7U][7U];
    }
}
