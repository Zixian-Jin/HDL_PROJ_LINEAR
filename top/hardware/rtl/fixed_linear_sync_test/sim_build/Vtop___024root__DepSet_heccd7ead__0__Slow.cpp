// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

extern const VlWide<20>/*639:0*/ Vtop__ConstPool__CONST_hdb092d69_0;
extern const VlWide<19>/*607:0*/ Vtop__ConstPool__CONST_h212da833_0;

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__lsb_below = 0U;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__lsb_below = 0U;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__lsb_below = 0U;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__lsb_below = 0U;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__lsb_below = 0U;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__lsb_below = 0U;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__lsb_below = 0U;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__lsb_below = 0U;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__lsb_below = 0U;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__lsb_below = 0U;
    vlSelf->fixed_linear_sync_top__DOT__counter = 0U;
    vlSelf->fixed_linear_sync_top__DOT__fc1_data_in_0_valid = 1U;
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__ce0 = 1U;
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__data_out_valid = 1U;
    VL_READMEM_N(true, 32, 5, 0, VL_CVT_PACK_STR_NW(20, Vtop__ConstPool__CONST_hdb092d69_0)
                 ,  &(vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__fc1_weight_rom_U__DOT__ram)
                 , 0, ~0ULL);
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__ce0 = 1U;
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out_valid = 1U;
    VL_READMEM_N(true, 80, 1, 0, VL_CVT_PACK_STR_NW(19, Vtop__ConstPool__CONST_h212da833_0)
                 ,  &(vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__ram)
                 , 0, ~0ULL);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__carry_in = 0U;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__carry_in = 0U;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__carry_in = 0U;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__carry_in = 0U;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__carry_in = 0U;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__carry_in = 0U;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__carry_in = 0U;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__carry_in = 0U;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__carry_in = 0U;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__carry_in = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/zixian/HDL_PROJ_LINEAR/top/hardware/rtl/fixed_linear_sync_test/fixed_linear_sync_top.sv", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VicoTriggered.at(0U)) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge fixed_linear_sync_top.fc1_inst.linear[0].fdp_inst.clk)\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge fixed_linear_sync_top.fc1_inst.linear[1].fdp_inst.clk)\n");
    }
    if (vlSelf->__VactTriggered.at(3U)) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge fixed_linear_sync_top.fc1_inst.linear[2].fdp_inst.clk)\n");
    }
    if (vlSelf->__VactTriggered.at(4U)) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge fixed_linear_sync_top.fc1_inst.linear[3].fdp_inst.clk)\n");
    }
    if (vlSelf->__VactTriggered.at(5U)) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(posedge fixed_linear_sync_top.fc1_inst.linear[4].fdp_inst.clk)\n");
    }
    if (vlSelf->__VactTriggered.at(6U)) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(posedge fixed_linear_sync_top.fc1_inst.linear[5].fdp_inst.clk)\n");
    }
    if (vlSelf->__VactTriggered.at(7U)) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @(posedge fixed_linear_sync_top.fc1_inst.linear[6].fdp_inst.clk)\n");
    }
    if (vlSelf->__VactTriggered.at(8U)) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(posedge fixed_linear_sync_top.fc1_inst.linear[7].fdp_inst.clk)\n");
    }
    if (vlSelf->__VactTriggered.at(9U)) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @(posedge fixed_linear_sync_top.fc1_inst.linear[8].fdp_inst.clk)\n");
    }
    if (vlSelf->__VactTriggered.at(0xaU)) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @(posedge fixed_linear_sync_top.fc1_inst.linear[9].fdp_inst.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge fixed_linear_sync_top.fc1_inst.linear[0].fdp_inst.clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge fixed_linear_sync_top.fc1_inst.linear[1].fdp_inst.clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge fixed_linear_sync_top.fc1_inst.linear[2].fdp_inst.clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge fixed_linear_sync_top.fc1_inst.linear[3].fdp_inst.clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(posedge fixed_linear_sync_top.fc1_inst.linear[4].fdp_inst.clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(6U)) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(posedge fixed_linear_sync_top.fc1_inst.linear[5].fdp_inst.clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(7U)) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @(posedge fixed_linear_sync_top.fc1_inst.linear[6].fdp_inst.clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(8U)) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(posedge fixed_linear_sync_top.fc1_inst.linear[7].fdp_inst.clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(9U)) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @(posedge fixed_linear_sync_top.fc1_inst.linear[8].fdp_inst.clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(0xaU)) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @(posedge fixed_linear_sync_top.fc1_inst.linear[9].fdp_inst.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__rst = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_data_in_0[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_data_in_0_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_data_in_0_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 40; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_bias[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__counter = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 40; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 40; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_weight_source_0__data_out[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__rst = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_in_0[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_in_0_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_in_0_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 40; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__weight_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__weight_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__bias[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__bias_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__bias_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff[__Vi0] = VL_RAND_RESET_I(21);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fdp_join_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fdp_join_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fdp_data_ready = VL_RAND_RESET_I(10);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fdp_weight_ready = VL_RAND_RESET_I(10);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_data_out[__Vi0] = VL_RAND_RESET_I(21);
    }
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in[__Vi0] = VL_RAND_RESET_I(21);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__current_weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_data_out = VL_RAND_RESET_I(18);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_data_out_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__0__KET____DOT__fdp_inst__weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__0__KET____DOT__fdp_inst__data_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__acc_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__acc_data_out_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__current_weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_data_out = VL_RAND_RESET_I(18);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_data_out_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__1__KET____DOT__fdp_inst__weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__1__KET____DOT__fdp_inst__data_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__acc_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__acc_data_out_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__current_weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_data_out = VL_RAND_RESET_I(18);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_data_out_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__2__KET____DOT__fdp_inst__weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__2__KET____DOT__fdp_inst__data_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__acc_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__acc_data_out_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__current_weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_data_out = VL_RAND_RESET_I(18);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_data_out_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__3__KET____DOT__fdp_inst__weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__3__KET____DOT__fdp_inst__data_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__acc_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__acc_data_out_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__current_weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_data_out = VL_RAND_RESET_I(18);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_data_out_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__4__KET____DOT__fdp_inst__weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__4__KET____DOT__fdp_inst__data_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__acc_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__acc_data_out_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__current_weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_data_out = VL_RAND_RESET_I(18);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_data_out_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__5__KET____DOT__fdp_inst__weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__5__KET____DOT__fdp_inst__data_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__acc_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__acc_data_out_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__current_weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_data_out = VL_RAND_RESET_I(18);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_data_out_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__6__KET____DOT__fdp_inst__weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__6__KET____DOT__fdp_inst__data_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__acc_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__acc_data_out_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__current_weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_data_out = VL_RAND_RESET_I(18);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_data_out_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__7__KET____DOT__fdp_inst__weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__7__KET____DOT__fdp_inst__data_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__acc_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__acc_data_out_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__current_weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_data_out = VL_RAND_RESET_I(18);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_data_out_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__8__KET____DOT__fdp_inst__weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__8__KET____DOT__fdp_inst__data_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__acc_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__acc_data_out_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__current_weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_data_out = VL_RAND_RESET_I(18);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_data_out_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__9__KET____DOT__fdp_inst__weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__9__KET____DOT__fdp_inst__data_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__acc_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__acc_data_out_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext[__Vi0] = VL_RAND_RESET_I(21);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__acc_join_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__acc_join_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__reg_ready = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out[__Vi0] = VL_RAND_RESET_I(21);
    }
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__add = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__dout_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__add = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__dout_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__add = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__dout_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__add = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__dout_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__add = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__dout_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__add = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__dout_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__add = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__dout_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__add = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__dout_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__add = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__dout_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__add = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__dout_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fdp_join_inst__DOT__data_in_valid = VL_RAND_RESET_I(2);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fdp_join_inst__DOT__data_in_ready = VL_RAND_RESET_I(2);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fdp_join_inst__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fdp_join_inst__DOT__data_out_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_in[__Vi0] = VL_RAND_RESET_I(21);
    }
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__data_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__data_out = VL_RAND_RESET_I(4);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__lsb_below = VL_RAND_RESET_I(3);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_data = VL_RAND_RESET_I(20);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__carry_in = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__rounded_out_data = VL_RAND_RESET_I(26);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__comp_rouded_out = VL_RAND_RESET_I(26);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__data_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__data_out = VL_RAND_RESET_I(4);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__lsb_below = VL_RAND_RESET_I(3);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_data = VL_RAND_RESET_I(20);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__carry_in = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__rounded_out_data = VL_RAND_RESET_I(26);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__comp_rouded_out = VL_RAND_RESET_I(26);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__data_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__data_out = VL_RAND_RESET_I(4);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__lsb_below = VL_RAND_RESET_I(3);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_data = VL_RAND_RESET_I(20);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__carry_in = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__rounded_out_data = VL_RAND_RESET_I(26);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__comp_rouded_out = VL_RAND_RESET_I(26);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__data_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__data_out = VL_RAND_RESET_I(4);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__lsb_below = VL_RAND_RESET_I(3);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_data = VL_RAND_RESET_I(20);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__carry_in = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__rounded_out_data = VL_RAND_RESET_I(26);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__comp_rouded_out = VL_RAND_RESET_I(26);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__data_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__data_out = VL_RAND_RESET_I(4);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__lsb_below = VL_RAND_RESET_I(3);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_data = VL_RAND_RESET_I(20);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__carry_in = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__rounded_out_data = VL_RAND_RESET_I(26);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__comp_rouded_out = VL_RAND_RESET_I(26);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__data_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__data_out = VL_RAND_RESET_I(4);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__lsb_below = VL_RAND_RESET_I(3);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_data = VL_RAND_RESET_I(20);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__carry_in = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__rounded_out_data = VL_RAND_RESET_I(26);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__comp_rouded_out = VL_RAND_RESET_I(26);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__data_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__data_out = VL_RAND_RESET_I(4);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__lsb_below = VL_RAND_RESET_I(3);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_data = VL_RAND_RESET_I(20);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__carry_in = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__rounded_out_data = VL_RAND_RESET_I(26);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__comp_rouded_out = VL_RAND_RESET_I(26);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__data_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__data_out = VL_RAND_RESET_I(4);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__lsb_below = VL_RAND_RESET_I(3);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_data = VL_RAND_RESET_I(20);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__carry_in = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__rounded_out_data = VL_RAND_RESET_I(26);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__comp_rouded_out = VL_RAND_RESET_I(26);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__data_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__data_out = VL_RAND_RESET_I(4);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__lsb_below = VL_RAND_RESET_I(3);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_data = VL_RAND_RESET_I(20);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__carry_in = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__rounded_out_data = VL_RAND_RESET_I(26);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__comp_rouded_out = VL_RAND_RESET_I(26);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__data_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__data_out = VL_RAND_RESET_I(4);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__lsb_below = VL_RAND_RESET_I(3);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_data = VL_RAND_RESET_I(20);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__carry_in = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__rounded_out_data = VL_RAND_RESET_I(26);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__comp_rouded_out = VL_RAND_RESET_I(26);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__data_in = VL_RAND_RESET_I(18);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__reg_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__use_buffered_data = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__selected_data = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__unload = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__data_in = VL_RAND_RESET_I(18);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__reg_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__use_buffered_data = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__selected_data = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__unload = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__data_in = VL_RAND_RESET_I(18);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__reg_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__use_buffered_data = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__selected_data = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__unload = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__data_in = VL_RAND_RESET_I(18);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__reg_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__use_buffered_data = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__selected_data = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__unload = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__data_in = VL_RAND_RESET_I(18);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__reg_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__use_buffered_data = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__selected_data = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__unload = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__data_in = VL_RAND_RESET_I(18);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__reg_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__use_buffered_data = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__selected_data = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__unload = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__data_in = VL_RAND_RESET_I(18);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__reg_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__use_buffered_data = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__selected_data = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__unload = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__data_in = VL_RAND_RESET_I(18);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__reg_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__use_buffered_data = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__selected_data = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__unload = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__data_in = VL_RAND_RESET_I(18);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__reg_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__use_buffered_data = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__selected_data = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__unload = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__data_in = VL_RAND_RESET_I(18);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__reg_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__use_buffered_data = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__selected_data = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__unload = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__acc_join_inst__DOT__data_in_valid = VL_RAND_RESET_I(2);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__acc_join_inst__DOT__data_in_ready = VL_RAND_RESET_I(2);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__acc_join_inst__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__acc_join_inst__DOT__data_out_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[__Vi0] = VL_RAND_RESET_I(21);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__data_in = VL_RAND_RESET_I(8);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__lsb_below = VL_RAND_RESET_I(3);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_data = VL_RAND_RESET_I(7);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__carry_in = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__rounded_out_data = VL_RAND_RESET_I(30);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__comp_rouded_out = VL_RAND_RESET_I(30);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__data_in = VL_RAND_RESET_I(8);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__lsb_below = VL_RAND_RESET_I(3);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_data = VL_RAND_RESET_I(7);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__carry_in = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__rounded_out_data = VL_RAND_RESET_I(30);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__comp_rouded_out = VL_RAND_RESET_I(30);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__data_in = VL_RAND_RESET_I(8);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__lsb_below = VL_RAND_RESET_I(3);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_data = VL_RAND_RESET_I(7);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__carry_in = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__rounded_out_data = VL_RAND_RESET_I(30);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__comp_rouded_out = VL_RAND_RESET_I(30);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__data_in = VL_RAND_RESET_I(8);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__lsb_below = VL_RAND_RESET_I(3);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_data = VL_RAND_RESET_I(7);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__carry_in = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__rounded_out_data = VL_RAND_RESET_I(30);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__comp_rouded_out = VL_RAND_RESET_I(30);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__data_in = VL_RAND_RESET_I(8);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__lsb_below = VL_RAND_RESET_I(3);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_data = VL_RAND_RESET_I(7);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__carry_in = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__rounded_out_data = VL_RAND_RESET_I(30);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__comp_rouded_out = VL_RAND_RESET_I(30);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__data_in = VL_RAND_RESET_I(8);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__lsb_below = VL_RAND_RESET_I(3);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_data = VL_RAND_RESET_I(7);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__carry_in = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__rounded_out_data = VL_RAND_RESET_I(30);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__comp_rouded_out = VL_RAND_RESET_I(30);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__data_in = VL_RAND_RESET_I(8);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__lsb_below = VL_RAND_RESET_I(3);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_data = VL_RAND_RESET_I(7);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__carry_in = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__rounded_out_data = VL_RAND_RESET_I(30);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__comp_rouded_out = VL_RAND_RESET_I(30);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__data_in = VL_RAND_RESET_I(8);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__lsb_below = VL_RAND_RESET_I(3);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_data = VL_RAND_RESET_I(7);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__carry_in = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__rounded_out_data = VL_RAND_RESET_I(30);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__comp_rouded_out = VL_RAND_RESET_I(30);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__data_in = VL_RAND_RESET_I(8);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__lsb_below = VL_RAND_RESET_I(3);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_data = VL_RAND_RESET_I(7);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__carry_in = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__rounded_out_data = VL_RAND_RESET_I(30);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__comp_rouded_out = VL_RAND_RESET_I(30);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__data_in = VL_RAND_RESET_I(8);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__lsb_below = VL_RAND_RESET_I(3);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_data = VL_RAND_RESET_I(7);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__carry_in = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__rounded_out_data = VL_RAND_RESET_I(30);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__comp_rouded_out = VL_RAND_RESET_I(30);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__data_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__data_buffer_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__data_buffer_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__data_out_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__use_buffered_data = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__selected_data = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__state = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__state_next = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__insert = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__remove = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__load = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__flow = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__fill = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__unload = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__data_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__data_buffer_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__data_buffer_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__data_out_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__use_buffered_data = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__selected_data = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__state = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__state_next = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__insert = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__remove = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__load = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__flow = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__fill = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__unload = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__data_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__data_buffer_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__data_buffer_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__data_out_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__use_buffered_data = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__selected_data = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__state = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__state_next = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__insert = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__remove = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__load = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__flow = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__fill = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__unload = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__data_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__data_buffer_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__data_buffer_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__data_out_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__use_buffered_data = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__selected_data = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__state = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__state_next = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__insert = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__remove = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__load = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__flow = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__fill = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__unload = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__data_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__data_buffer_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__data_buffer_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__data_out_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__use_buffered_data = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__selected_data = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__state = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__state_next = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__insert = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__remove = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__load = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__flow = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__fill = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__unload = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__data_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__data_buffer_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__data_buffer_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__data_out_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__use_buffered_data = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__selected_data = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__state = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__state_next = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__insert = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__remove = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__load = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__flow = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__fill = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__unload = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__data_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__data_buffer_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__data_buffer_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__data_out_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__use_buffered_data = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__selected_data = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__state = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__state_next = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__insert = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__remove = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__load = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__flow = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__fill = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__unload = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__data_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__data_buffer_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__data_buffer_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__data_out_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__use_buffered_data = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__selected_data = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__state = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__state_next = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__insert = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__remove = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__load = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__flow = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__fill = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__unload = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__data_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__data_buffer_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__data_buffer_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__data_out_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__use_buffered_data = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__selected_data = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__state = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__state_next = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__insert = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__remove = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__load = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__flow = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__fill = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__unload = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__data_in = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__data_buffer_out = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__data_buffer_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__data_out_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__use_buffered_data = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__selected_data = VL_RAND_RESET_I(21);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__state = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__state_next = 0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__insert = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__remove = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__load = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__flow = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__fill = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__unload = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__rst = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 40; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__data_out[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__counter = VL_RAND_RESET_I(3);
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__ce0 = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__data_vector = VL_RAND_RESET_I(32);
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__address0 = VL_RAND_RESET_I(3);
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__ce0 = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__q0 = VL_RAND_RESET_I(32);
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__fc1_weight_rom_U__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__fc1_weight_rom_U__DOT__addr0 = VL_RAND_RESET_I(3);
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__fc1_weight_rom_U__DOT__ce0 = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__fc1_weight_rom_U__DOT__q0 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__fc1_weight_rom_U__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__fc1_weight_rom_U__DOT__q0_t0 = VL_RAND_RESET_I(32);
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__fc1_weight_rom_U__DOT__q0_t1 = VL_RAND_RESET_I(32);
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__rst = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__counter = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__ce0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(80, vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_vector);
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__address0 = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__ce0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(80, vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__q0);
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__addr0 = VL_RAND_RESET_I(1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__ce0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(80, vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(80, vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__ram[__Vi0]);
    }
    VL_RAND_RESET_W(80, vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t0);
    VL_RAND_RESET_W(80, vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t1);
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_inst__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_inst__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_inst__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_inst__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_inst__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_inst__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_inst__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_inst__clk = VL_RAND_RESET_I(1);
}
