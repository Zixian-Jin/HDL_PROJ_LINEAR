// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.at(0U) = (0U == vlSelf->__VicoIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fdp_join_inst__data_in_valid;
    fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fdp_join_inst__data_in_valid = 0;
    CData/*1:0*/ fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__acc_join_inst__data_in_valid;
    fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__acc_join_inst__data_in_valid = 0;
    IData/*31:0*/ fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0;
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 = 0;
    IData/*31:0*/ fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0;
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 = 0;
    IData/*31:0*/ fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0;
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 = 0;
    IData/*31:0*/ fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0;
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 = 0;
    IData/*31:0*/ fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0;
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 = 0;
    IData/*31:0*/ fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0;
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 = 0;
    IData/*31:0*/ fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0;
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 = 0;
    IData/*31:0*/ fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0;
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 = 0;
    IData/*31:0*/ fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0;
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 = 0;
    IData/*31:0*/ fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0;
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 = 0;
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_in_0_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_data_in_0_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__data_out 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__data_out 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__data_out 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__data_out 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__data_out 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__data_out 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__data_out 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__data_out 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__data_out 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__data_out 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__dout_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__dout_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__dout_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__dout_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__dout_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__dout_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__dout_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__dout_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__dout_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__address0 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__counter;
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__ce0 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__ce0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__address0 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__counter;
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__ce0 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__ce0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__dout_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__fc1_weight_rom_U__DOT__q0 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__fc1_weight_rom_U__DOT__q0_t1;
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t1[0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t1[1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t1[2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_data_out[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_data_out[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_data_out[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_data_out[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_data_out[4U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_data_out[5U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_data_out[6U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_data_out[7U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_data_out[8U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_data_out[9U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst.clk 
        = vlSelf->clk;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst.clk 
        = vlSelf->clk;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_inst.clk 
        = vlSelf->clk;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_inst.clk 
        = vlSelf->clk;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_inst.clk 
        = vlSelf->clk;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_inst.clk 
        = vlSelf->clk;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_inst.clk 
        = vlSelf->clk;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_inst.clk 
        = vlSelf->clk;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_inst.clk 
        = vlSelf->clk;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_inst.clk 
        = vlSelf->clk;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst.rst 
        = vlSelf->rst;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst.rst 
        = vlSelf->rst;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_inst.rst 
        = vlSelf->rst;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_inst.rst 
        = vlSelf->rst;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_inst.rst 
        = vlSelf->rst;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_inst.rst 
        = vlSelf->rst;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_inst.rst 
        = vlSelf->rst;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_inst.rst 
        = vlSelf->rst;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_inst.rst 
        = vlSelf->rst;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_inst.rst 
        = vlSelf->rst;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid 
        = (5U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__counter));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid 
        = (5U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__counter));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid 
        = (5U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__counter));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid 
        = (5U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__counter));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid 
        = (5U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__counter));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid 
        = (5U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__counter));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid 
        = (5U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__counter));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid 
        = (5U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__counter));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid 
        = (5U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__counter));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid 
        = (5U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__counter));
    vlSelf->fixed_linear_sync_top__DOT__rst = vlSelf->rst;
    vlSelf->fixed_linear_sync_top__DOT__clk = vlSelf->clk;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready 
        = ((5U != (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__counter)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready 
        = ((5U != (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__counter)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready 
        = ((5U != (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__counter)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready 
        = ((5U != (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__counter)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready 
        = ((5U != (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__counter)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready 
        = ((5U != (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__counter)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready 
        = ((5U != (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__counter)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready 
        = ((5U != (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__counter)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready 
        = ((5U != (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__counter)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready 
        = ((5U != (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__counter)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__reg_ready 
        = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__data_in_ready) 
            << 9U) | (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__data_in_ready) 
                       << 8U) | (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__data_in_ready) 
                                  << 7U) | (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__data_in_ready) 
                                             << 6U) 
                                            | (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__data_in_ready) 
                                                << 5U) 
                                               | (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__data_in_ready) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__data_in_ready) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__data_in_ready) 
                                                         << 2U) 
                                                        | (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__data_in_ready) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__data_in_ready))))))))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__acc_data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid;
    fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fdp_join_inst__data_in_valid 
        = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__data_out_valid) 
            << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_data_in_0_valid));
    vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_data_in_0
        [3U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_data_in_0
        [2U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_data_in_0
        [1U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_data_in_0
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff[4U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff[5U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff[6U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff[7U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff[8U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff[9U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out[0U] 
        = (0xffU & vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t1[0U]);
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out[1U] 
        = (0xffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t1[0U] 
                    >> 8U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out[2U] 
        = (0xffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t1[0U] 
                    >> 0x10U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out[3U] 
        = (vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t1[0U] 
           >> 0x18U);
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out[4U] 
        = (0xffU & vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t1[1U]);
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out[5U] 
        = (0xffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t1[1U] 
                    >> 8U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out[6U] 
        = (0xffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t1[1U] 
                    >> 0x10U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out[7U] 
        = (vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t1[1U] 
           >> 0x18U);
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out[8U] 
        = (0xffU & vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t1[2U]);
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out[9U] 
        = (0xffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t1[2U] 
                    >> 8U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__data_out[0U] 
        = (0xffU & vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__fc1_weight_rom_U__DOT__q0_t1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__data_out[1U] 
        = (0xffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__fc1_weight_rom_U__DOT__q0_t1 
                    >> 8U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__data_out[2U] 
        = (0xffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__fc1_weight_rom_U__DOT__q0_t1 
                    >> 0x10U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__data_out[3U] 
        = (vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__fc1_weight_rom_U__DOT__q0_t1 
           >> 0x18U);
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__fc1_weight_rom_U__DOT__addr0 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__address0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__fc1_weight_rom_U__DOT__ce0 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__ce0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__addr0 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__address0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__ce0 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__ce0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__weight_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_weight_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__acc_data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__acc_data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__acc_data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__acc_data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__acc_data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__acc_data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__acc_data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__acc_data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__acc_data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__dout_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__data_vector 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__fc1_weight_rom_U__DOT__q0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__q0 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__fc1_weight_rom_U__DOT__q0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_vector[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0[0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_vector[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0[1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_vector[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0[2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__q0[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0[0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__q0[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0[1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__q0[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0[2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__rst 
        = vlSelf->fixed_linear_sync_top__DOT__rst;
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__rst 
        = vlSelf->fixed_linear_sync_top__DOT__rst;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__rst 
        = vlSelf->fixed_linear_sync_top__DOT__rst;
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__clk 
        = vlSelf->fixed_linear_sync_top__DOT__clk;
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__clk 
        = vlSelf->fixed_linear_sync_top__DOT__clk;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__clk 
        = vlSelf->fixed_linear_sync_top__DOT__clk;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst.data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst.data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_inst.data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_inst.data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_inst.data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_inst.data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_inst.data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_inst.data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_inst.data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_inst.data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__acc_join_ready 
        = (0x3ffU == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__reg_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__bias_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__acc_data_out_valid;
    fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__acc_join_inst__data_in_valid 
        = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_bias_valid) 
            << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__acc_data_out_valid));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fdp_join_inst__DOT__data_in_valid 
        = fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fdp_join_inst__data_in_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fdp_join_inst__DOT__data_out_valid 
        = (3U == (IData)(fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fdp_join_inst__data_in_valid));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_in_0[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_in_0[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_in_0[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_in_0[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__0__KET____DOT__fdp_inst__data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__0__KET____DOT__fdp_inst__data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__0__KET____DOT__fdp_inst__data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__0__KET____DOT__fdp_inst__data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__1__KET____DOT__fdp_inst__data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__1__KET____DOT__fdp_inst__data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__1__KET____DOT__fdp_inst__data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__1__KET____DOT__fdp_inst__data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__2__KET____DOT__fdp_inst__data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__2__KET____DOT__fdp_inst__data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__2__KET____DOT__fdp_inst__data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__2__KET____DOT__fdp_inst__data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__3__KET____DOT__fdp_inst__data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__3__KET____DOT__fdp_inst__data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__3__KET____DOT__fdp_inst__data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__3__KET____DOT__fdp_inst__data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__4__KET____DOT__fdp_inst__data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__4__KET____DOT__fdp_inst__data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__4__KET____DOT__fdp_inst__data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__4__KET____DOT__fdp_inst__data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__5__KET____DOT__fdp_inst__data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__5__KET____DOT__fdp_inst__data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__5__KET____DOT__fdp_inst__data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__5__KET____DOT__fdp_inst__data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__6__KET____DOT__fdp_inst__data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__6__KET____DOT__fdp_inst__data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__6__KET____DOT__fdp_inst__data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__6__KET____DOT__fdp_inst__data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__7__KET____DOT__fdp_inst__data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__7__KET____DOT__fdp_inst__data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__7__KET____DOT__fdp_inst__data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__7__KET____DOT__fdp_inst__data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__8__KET____DOT__fdp_inst__data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__8__KET____DOT__fdp_inst__data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__8__KET____DOT__fdp_inst__data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__8__KET____DOT__fdp_inst__data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__9__KET____DOT__fdp_inst__data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__9__KET____DOT__fdp_inst__data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__9__KET____DOT__fdp_inst__data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__9__KET____DOT__fdp_inst__data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in[9U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff
        [9U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in[8U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff
        [8U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in[7U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff
        [7U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in[6U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff
        [6U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in[5U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff
        [5U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in[4U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff
        [4U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff
        [0U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out[9U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out
        [9U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out[8U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out
        [8U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out[7U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out
        [7U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out[6U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out
        [6U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out[5U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out
        [5U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out[4U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out
        [4U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out
        [3U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out
        [2U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out
        [1U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out
        [0U];
    __Vilp = 0U;
    while ((__Vilp <= 0x27U)) {
        vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_weight_source_0__data_out[__Vilp] 
            = vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__data_out
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__reset 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__rst;
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__reset 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__rst;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__rst 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__rst;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__rst 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__rst;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__rst 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__rst;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__rst 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__rst;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__rst 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__rst;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__rst 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__rst;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__rst 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__rst;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__rst 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__rst;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__rst 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__rst;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__rst 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__rst;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__rst 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__rst;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__rst 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__rst;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__rst 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__rst;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__rst 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__rst;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__rst 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__rst;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__rst 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__rst;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__rst 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__rst;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__rst 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__rst;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__rst 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__rst;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__rst 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__rst;
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__clk 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__clk;
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__clk 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__clk;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__clk 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__clk;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__clk 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__clk;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__clk 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__clk;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__clk 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__clk;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__clk 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__clk;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__clk 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__clk;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__clk 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__clk;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__clk 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__clk;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__clk 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__clk;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__clk 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__clk;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__clk 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__clk;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__clk 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__clk;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__clk 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__clk;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__clk 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__clk;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__clk 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__clk;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__clk 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__clk;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__clk 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__clk;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__clk 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__clk;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__clk 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__clk;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__clk 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__clk;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__acc_join_inst__DOT__data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__acc_join_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__acc_join_inst__DOT__data_in_valid 
        = fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__acc_join_inst__data_in_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__bias_ready 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__acc_join_ready) 
           & (IData)((2U != (IData)(fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__acc_join_inst__data_in_valid))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__acc_join_inst__DOT__data_out_valid 
        = (3U == (IData)(fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__acc_join_inst__data_in_valid));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_ready 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__acc_join_ready) 
           & (IData)((1U != (IData)(fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__acc_join_inst__data_in_valid))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fdp_join_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fdp_join_inst__DOT__data_out_valid;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst.weight_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fdp_join_inst__DOT__data_out_valid;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst.data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fdp_join_inst__DOT__data_out_valid;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_inst.weight_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fdp_join_inst__DOT__data_out_valid;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_inst.data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fdp_join_inst__DOT__data_out_valid;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_inst.weight_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fdp_join_inst__DOT__data_out_valid;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_inst.data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fdp_join_inst__DOT__data_out_valid;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_inst.weight_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fdp_join_inst__DOT__data_out_valid;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_inst.data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fdp_join_inst__DOT__data_out_valid;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_inst.weight_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fdp_join_inst__DOT__data_out_valid;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_inst.data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fdp_join_inst__DOT__data_out_valid;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_inst.weight_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fdp_join_inst__DOT__data_out_valid;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_inst.data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fdp_join_inst__DOT__data_out_valid;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_inst.weight_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fdp_join_inst__DOT__data_out_valid;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_inst.data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fdp_join_inst__DOT__data_out_valid;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_inst.weight_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fdp_join_inst__DOT__data_out_valid;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_inst.data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fdp_join_inst__DOT__data_out_valid;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_inst.weight_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fdp_join_inst__DOT__data_out_valid;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_inst.data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fdp_join_inst__DOT__data_out_valid;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst.weight_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fdp_join_inst__DOT__data_out_valid;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst.data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fdp_join_inst__DOT__data_out_valid;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst.data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__0__KET____DOT__fdp_inst__data_in
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst.data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__0__KET____DOT__fdp_inst__data_in
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst.data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__0__KET____DOT__fdp_inst__data_in
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst.data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__0__KET____DOT__fdp_inst__data_in
        [0U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst.data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__1__KET____DOT__fdp_inst__data_in
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst.data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__1__KET____DOT__fdp_inst__data_in
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst.data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__1__KET____DOT__fdp_inst__data_in
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst.data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__1__KET____DOT__fdp_inst__data_in
        [0U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_inst.data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__2__KET____DOT__fdp_inst__data_in
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_inst.data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__2__KET____DOT__fdp_inst__data_in
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_inst.data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__2__KET____DOT__fdp_inst__data_in
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_inst.data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__2__KET____DOT__fdp_inst__data_in
        [0U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_inst.data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__3__KET____DOT__fdp_inst__data_in
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_inst.data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__3__KET____DOT__fdp_inst__data_in
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_inst.data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__3__KET____DOT__fdp_inst__data_in
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_inst.data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__3__KET____DOT__fdp_inst__data_in
        [0U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_inst.data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__4__KET____DOT__fdp_inst__data_in
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_inst.data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__4__KET____DOT__fdp_inst__data_in
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_inst.data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__4__KET____DOT__fdp_inst__data_in
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_inst.data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__4__KET____DOT__fdp_inst__data_in
        [0U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_inst.data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__5__KET____DOT__fdp_inst__data_in
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_inst.data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__5__KET____DOT__fdp_inst__data_in
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_inst.data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__5__KET____DOT__fdp_inst__data_in
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_inst.data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__5__KET____DOT__fdp_inst__data_in
        [0U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_inst.data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__6__KET____DOT__fdp_inst__data_in
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_inst.data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__6__KET____DOT__fdp_inst__data_in
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_inst.data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__6__KET____DOT__fdp_inst__data_in
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_inst.data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__6__KET____DOT__fdp_inst__data_in
        [0U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_inst.data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__7__KET____DOT__fdp_inst__data_in
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_inst.data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__7__KET____DOT__fdp_inst__data_in
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_inst.data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__7__KET____DOT__fdp_inst__data_in
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_inst.data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__7__KET____DOT__fdp_inst__data_in
        [0U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_inst.data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__8__KET____DOT__fdp_inst__data_in
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_inst.data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__8__KET____DOT__fdp_inst__data_in
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_inst.data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__8__KET____DOT__fdp_inst__data_in
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_inst.data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__8__KET____DOT__fdp_inst__data_in
        [0U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_inst.data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__9__KET____DOT__fdp_inst__data_in
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_inst.data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__9__KET____DOT__fdp_inst__data_in
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_inst.data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__9__KET____DOT__fdp_inst__data_in
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_inst.data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__9__KET____DOT__fdp_inst__data_in
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [4U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [5U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [6U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [7U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [8U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [9U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_in[9U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [9U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_in[8U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [8U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_in[7U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [7U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_in[6U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [6U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_in[5U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [5U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_in[4U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [4U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                 [0U] >> 0x14U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                 [1U] >> 0x14U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                 [2U] >> 0x14U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                 [3U] >> 0x14U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                 [4U] >> 0x14U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                 [5U] >> 0x14U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                 [6U] >> 0x14U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                 [7U] >> 0x14U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                 [8U] >> 0x14U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                 [9U] >> 0x14U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias[9U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out
        [9U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias[8U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out
        [8U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias[7U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out
        [7U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias[6U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out
        [6U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias[5U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out
        [5U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias[4U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out
        [4U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out
        [0U];
    __Vilp = 0U;
    while ((__Vilp <= 0x27U)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_weight[__Vilp] 
            = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_weight_source_0__data_out
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__rst 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__rst;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__rst 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__rst;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__rst 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__rst;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__rst 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__rst;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__rst 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__rst;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__rst 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__rst;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__rst 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__rst;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__rst 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__rst;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__rst 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__rst;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__rst 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__rst;
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__fc1_weight_rom_U__DOT__clk 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__clk;
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__clk 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__clk;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__clk 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__clk;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__clk 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__clk;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__clk 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__clk;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__clk 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__clk;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__clk 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__clk;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__clk 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__clk;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__clk 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__clk;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__clk 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__clk;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__clk 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__clk;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__clk 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__clk;
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__bias_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__bias_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__acc_join_inst__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__acc_join_inst__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__acc_join_inst__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__acc_join_inst__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__acc_join_inst__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__acc_join_inst__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__acc_join_inst__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__acc_join_inst__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__acc_join_inst__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__acc_join_inst__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__acc_join_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__acc_join_inst__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__acc_join_inst__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__acc_join_inst__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__acc_join_inst__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__acc_join_inst__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__acc_join_inst__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__acc_join_inst__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__acc_join_inst__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__acc_join_inst__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__acc_join_inst__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__acc_join_inst__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__acc_data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__acc_data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__acc_data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__acc_data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__acc_data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__acc_data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__acc_data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__acc_data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__acc_data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__acc_data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__acc_join_inst__DOT__data_in_ready 
        = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__bias_ready) 
            << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_ready));
    vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias[9U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias
        [9U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias[8U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias
        [8U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias[7U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias
        [7U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias[6U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias
        [6U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias[5U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias
        [5U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias[4U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias
        [4U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias
        [3U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias
        [2U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias
        [1U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias
        [0U];
    __Vilp = 0U;
    while ((__Vilp <= 0x27U)) {
        vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight[__Vilp] 
            = vlSelf->fixed_linear_sync_top__DOT__fc1_weight
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__unload 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__fill 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__flow 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__state) 
           & (3U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__load 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__flush 
        = ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__unload 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__fill 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__flow 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__state) 
           & (3U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__load 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__flush 
        = ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__unload 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__fill 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__flow 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__state) 
           & (3U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__load 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__flush 
        = ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__unload 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__fill 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__flow 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__state) 
           & (3U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__load 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__flush 
        = ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__unload 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__fill 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__flow 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__state) 
           & (3U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__load 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__flush 
        = ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__unload 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__fill 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__flow 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__state) 
           & (3U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__load 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__flush 
        = ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__unload 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__fill 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__flow 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__state) 
           & (3U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__load 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__flush 
        = ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__unload 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__fill 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__flow 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__state) 
           & (3U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__load 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__flush 
        = ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__unload 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__fill 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__flow 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__state) 
           & (3U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__load 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__flush 
        = ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__unload 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__fill 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__flow 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__state) 
           & (3U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__load 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__flush 
        = ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__data_out_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__data_out_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__data_out_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__data_out_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__data_out_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__data_out_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__data_out_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__data_out_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__data_out_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__data_out_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__unload 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (3U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush 
        = ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__unload 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (3U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush 
        = ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__unload 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (3U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush 
        = ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__unload 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (3U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush 
        = ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__unload 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (3U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush 
        = ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__unload 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (3U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush 
        = ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__unload 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (3U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush 
        = ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__unload 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (3U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush 
        = ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__unload 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (3U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush 
        = ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__unload 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow 
        = ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (3U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush 
        = ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__remove))));
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign)
            ? (~ ((0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                   [0U]) - (IData)(1U))) : (0xfffffU 
                                            & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                                            [0U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_data 
        = (0xfffffU & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__lsb_below 
        = ((4U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                  >> 2U)) | ((2U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                    >> 2U)) | (0U != 
                                               (7U 
                                                & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0))));
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign)
            ? (~ ((0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                   [1U]) - (IData)(1U))) : (0xfffffU 
                                            & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                                            [1U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_data 
        = (0xfffffU & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__lsb_below 
        = ((4U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                  >> 2U)) | ((2U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                    >> 2U)) | (0U != 
                                               (7U 
                                                & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0))));
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign)
            ? (~ ((0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                   [2U]) - (IData)(1U))) : (0xfffffU 
                                            & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                                            [2U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_data 
        = (0xfffffU & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__lsb_below 
        = ((4U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                  >> 2U)) | ((2U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                    >> 2U)) | (0U != 
                                               (7U 
                                                & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0))));
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign)
            ? (~ ((0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                   [3U]) - (IData)(1U))) : (0xfffffU 
                                            & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                                            [3U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_data 
        = (0xfffffU & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__lsb_below 
        = ((4U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                  >> 2U)) | ((2U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                    >> 2U)) | (0U != 
                                               (7U 
                                                & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0))));
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign)
            ? (~ ((0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                   [4U]) - (IData)(1U))) : (0xfffffU 
                                            & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                                            [4U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_data 
        = (0xfffffU & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__lsb_below 
        = ((4U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                  >> 2U)) | ((2U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                    >> 2U)) | (0U != 
                                               (7U 
                                                & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0))));
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign)
            ? (~ ((0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                   [5U]) - (IData)(1U))) : (0xfffffU 
                                            & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                                            [5U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_data 
        = (0xfffffU & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__lsb_below 
        = ((4U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                  >> 2U)) | ((2U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                    >> 2U)) | (0U != 
                                               (7U 
                                                & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0))));
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign)
            ? (~ ((0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                   [6U]) - (IData)(1U))) : (0xfffffU 
                                            & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                                            [6U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_data 
        = (0xfffffU & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__lsb_below 
        = ((4U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                  >> 2U)) | ((2U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                    >> 2U)) | (0U != 
                                               (7U 
                                                & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0))));
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign)
            ? (~ ((0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                   [7U]) - (IData)(1U))) : (0xfffffU 
                                            & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                                            [7U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_data 
        = (0xfffffU & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__lsb_below 
        = ((4U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                  >> 2U)) | ((2U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                    >> 2U)) | (0U != 
                                               (7U 
                                                & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0))));
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign)
            ? (~ ((0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                   [8U]) - (IData)(1U))) : (0xfffffU 
                                            & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                                            [8U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_data 
        = (0xfffffU & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__lsb_below 
        = ((4U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                  >> 2U)) | ((2U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                    >> 2U)) | (0U != 
                                               (7U 
                                                & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0))));
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign)
            ? (~ ((0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                   [9U]) - (IData)(1U))) : (0xfffffU 
                                            & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                                            [9U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_data 
        = (0xfffffU & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__lsb_below 
        = ((4U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                  >> 2U)) | ((2U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                    >> 2U)) | (0U != 
                                               (7U 
                                                & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__bias[9U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [9U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__bias[8U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [8U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__bias[7U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [7U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__bias[6U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [6U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__bias[5U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [5U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__bias[4U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [4U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__bias[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__bias[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__bias[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__bias[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in[9U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [9U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in[8U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [8U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in[7U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [7U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in[6U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [6U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in[5U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [5U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in[4U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [4U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [0U];
    __Vilp = 0U;
    while ((__Vilp <= 0x27U)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__weight[__Vilp] 
            = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__current_weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__current_weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__current_weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__current_weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__current_weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [7U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__current_weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [6U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__current_weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [5U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__current_weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [4U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__current_weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0xbU];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__current_weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0xaU];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__current_weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [9U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__current_weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [8U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__current_weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0xfU];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__current_weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0xeU];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__current_weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0xdU];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__current_weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0xcU];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__current_weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x13U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__current_weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x12U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__current_weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x11U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__current_weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x10U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__current_weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x17U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__current_weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x16U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__current_weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x15U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__current_weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x14U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__current_weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x1bU];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__current_weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x1aU];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__current_weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x19U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__current_weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x18U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__current_weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x1fU];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__current_weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x1eU];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__current_weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x1dU];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__current_weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x1cU];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__current_weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x23U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__current_weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x22U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__current_weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x21U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__current_weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x20U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__current_weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x27U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__current_weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x26U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__current_weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x25U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__current_weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x24U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__data_buffer_wren 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__fill;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__data_out_wren 
        = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__load) 
            | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__flow)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__flush));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__state_next 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__state)
            ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__load)
                ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__state)
            : ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__state)
                ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__fill)
                    ? 2U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__flow)
                             ? 1U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__unload)
                                      ? 0U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__state)))
                : ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__state)
                    ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__flush)
                        ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__state)
                    : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__state)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__use_buffered_data 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__flush;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__data_buffer_wren 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__fill;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__data_out_wren 
        = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__load) 
            | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__flow)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__flush));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__state_next 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__state)
            ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__load)
                ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__state)
            : ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__state)
                ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__fill)
                    ? 2U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__flow)
                             ? 1U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__unload)
                                      ? 0U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__state)))
                : ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__state)
                    ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__flush)
                        ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__state)
                    : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__state)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__use_buffered_data 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__flush;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__data_buffer_wren 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__fill;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__data_out_wren 
        = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__load) 
            | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__flow)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__flush));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__state_next 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__state)
            ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__load)
                ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__state)
            : ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__state)
                ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__fill)
                    ? 2U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__flow)
                             ? 1U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__unload)
                                      ? 0U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__state)))
                : ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__state)
                    ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__flush)
                        ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__state)
                    : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__state)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__use_buffered_data 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__flush;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__data_buffer_wren 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__fill;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__data_out_wren 
        = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__load) 
            | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__flow)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__flush));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__state_next 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__state)
            ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__load)
                ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__state)
            : ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__state)
                ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__fill)
                    ? 2U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__flow)
                             ? 1U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__unload)
                                      ? 0U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__state)))
                : ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__state)
                    ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__flush)
                        ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__state)
                    : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__state)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__use_buffered_data 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__flush;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__data_buffer_wren 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__fill;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__data_out_wren 
        = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__load) 
            | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__flow)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__flush));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__state_next 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__state)
            ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__load)
                ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__state)
            : ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__state)
                ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__fill)
                    ? 2U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__flow)
                             ? 1U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__unload)
                                      ? 0U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__state)))
                : ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__state)
                    ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__flush)
                        ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__state)
                    : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__state)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__use_buffered_data 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__flush;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__data_buffer_wren 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__fill;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__data_out_wren 
        = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__load) 
            | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__flow)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__flush));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__state_next 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__state)
            ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__load)
                ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__state)
            : ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__state)
                ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__fill)
                    ? 2U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__flow)
                             ? 1U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__unload)
                                      ? 0U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__state)))
                : ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__state)
                    ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__flush)
                        ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__state)
                    : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__state)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__use_buffered_data 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__flush;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__data_buffer_wren 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__fill;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__data_out_wren 
        = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__load) 
            | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__flow)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__flush));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__state_next 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__state)
            ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__load)
                ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__state)
            : ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__state)
                ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__fill)
                    ? 2U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__flow)
                             ? 1U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__unload)
                                      ? 0U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__state)))
                : ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__state)
                    ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__flush)
                        ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__state)
                    : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__state)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__use_buffered_data 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__flush;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__data_buffer_wren 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__fill;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__data_out_wren 
        = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__load) 
            | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__flow)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__flush));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__state_next 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__state)
            ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__load)
                ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__state)
            : ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__state)
                ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__fill)
                    ? 2U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__flow)
                             ? 1U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__unload)
                                      ? 0U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__state)))
                : ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__state)
                    ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__flush)
                        ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__state)
                    : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__state)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__use_buffered_data 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__flush;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__data_buffer_wren 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__fill;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__data_out_wren 
        = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__load) 
            | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__flow)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__flush));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__state_next 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__state)
            ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__load)
                ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__state)
            : ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__state)
                ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__fill)
                    ? 2U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__flow)
                             ? 1U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__unload)
                                      ? 0U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__state)))
                : ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__state)
                    ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__flush)
                        ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__state)
                    : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__state)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__use_buffered_data 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__flush;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__data_buffer_wren 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__fill;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__data_out_wren 
        = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__load) 
            | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__flow)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__flush));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__state_next 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__state)
            ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__load)
                ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__state)
            : ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__state)
                ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__fill)
                    ? 2U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__flow)
                             ? 1U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__unload)
                                      ? 0U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__state)))
                : ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__state)
                    ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__flush)
                        ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__state)
                    : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__state)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__use_buffered_data 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__flush;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_wren 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_wren 
        = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load) 
            | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
            ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load)
                ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
            : ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
                ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill)
                    ? 2U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow)
                             ? 1U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__unload)
                                      ? 0U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)))
                : ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
                    ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush)
                        ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
                    : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__use_buffered_data 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_wren 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_wren 
        = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load) 
            | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
            ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load)
                ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
            : ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
                ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill)
                    ? 2U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow)
                             ? 1U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__unload)
                                      ? 0U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)))
                : ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
                    ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush)
                        ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
                    : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__use_buffered_data 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_wren 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_wren 
        = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load) 
            | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
            ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load)
                ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
            : ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
                ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill)
                    ? 2U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow)
                             ? 1U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__unload)
                                      ? 0U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)))
                : ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
                    ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush)
                        ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
                    : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__use_buffered_data 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_wren 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_wren 
        = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load) 
            | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
            ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load)
                ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
            : ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
                ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill)
                    ? 2U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow)
                             ? 1U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__unload)
                                      ? 0U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)))
                : ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
                    ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush)
                        ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
                    : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__use_buffered_data 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_wren 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_wren 
        = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load) 
            | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
            ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load)
                ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
            : ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
                ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill)
                    ? 2U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow)
                             ? 1U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__unload)
                                      ? 0U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)))
                : ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
                    ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush)
                        ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
                    : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__use_buffered_data 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_wren 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_wren 
        = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load) 
            | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
            ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load)
                ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
            : ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
                ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill)
                    ? 2U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow)
                             ? 1U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__unload)
                                      ? 0U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)))
                : ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
                    ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush)
                        ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
                    : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__use_buffered_data 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_wren 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_wren 
        = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load) 
            | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
            ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load)
                ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
            : ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
                ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill)
                    ? 2U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow)
                             ? 1U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__unload)
                                      ? 0U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)))
                : ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
                    ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush)
                        ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
                    : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__use_buffered_data 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_wren 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_wren 
        = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load) 
            | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
            ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load)
                ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
            : ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
                ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill)
                    ? 2U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow)
                             ? 1U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__unload)
                                      ? 0U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)))
                : ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
                    ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush)
                        ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
                    : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__use_buffered_data 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_wren 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_wren 
        = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load) 
            | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
            ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load)
                ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
            : ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
                ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill)
                    ? 2U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow)
                             ? 1U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__unload)
                                      ? 0U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)))
                : ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
                    ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush)
                        ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
                    : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__use_buffered_data 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_wren 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_wren 
        = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load) 
            | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next 
        = ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
            ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__load)
                ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
            : ((1U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
                ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__fill)
                    ? 2U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flow)
                             ? 1U : ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__unload)
                                      ? 0U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)))
                : ((2U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
                    ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush)
                        ? 1U : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)
                    : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__use_buffered_data 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__flush;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__carry_in 
        = (1U & ((4U & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__lsb_below))
                  ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__lsb_below) 
                     >> 1U) : (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__lsb_below) 
                                >> 1U) & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__lsb_below))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__carry_in 
        = (1U & ((4U & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__lsb_below))
                  ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__lsb_below) 
                     >> 1U) : (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__lsb_below) 
                                >> 1U) & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__lsb_below))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__carry_in 
        = (1U & ((4U & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__lsb_below))
                  ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__lsb_below) 
                     >> 1U) : (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__lsb_below) 
                                >> 1U) & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__lsb_below))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__carry_in 
        = (1U & ((4U & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__lsb_below))
                  ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__lsb_below) 
                     >> 1U) : (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__lsb_below) 
                                >> 1U) & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__lsb_below))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__carry_in 
        = (1U & ((4U & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__lsb_below))
                  ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__lsb_below) 
                     >> 1U) : (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__lsb_below) 
                                >> 1U) & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__lsb_below))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__carry_in 
        = (1U & ((4U & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__lsb_below))
                  ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__lsb_below) 
                     >> 1U) : (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__lsb_below) 
                                >> 1U) & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__lsb_below))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__carry_in 
        = (1U & ((4U & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__lsb_below))
                  ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__lsb_below) 
                     >> 1U) : (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__lsb_below) 
                                >> 1U) & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__lsb_below))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__carry_in 
        = (1U & ((4U & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__lsb_below))
                  ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__lsb_below) 
                     >> 1U) : (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__lsb_below) 
                                >> 1U) & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__lsb_below))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__carry_in 
        = (1U & ((4U & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__lsb_below))
                  ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__lsb_below) 
                     >> 1U) : (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__lsb_below) 
                                >> 1U) & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__lsb_below))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__carry_in 
        = (1U & ((4U & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__lsb_below))
                  ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__lsb_below) 
                     >> 1U) : (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__lsb_below) 
                                >> 1U) & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__lsb_below))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [4U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [5U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [6U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [7U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [8U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [9U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_in[9U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [9U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_in[8U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [8U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_in[7U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [7U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_in[6U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [6U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_in[5U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [5U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_in[4U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [4U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                 [0U] >> 7U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                 [1U] >> 7U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                 [2U] >> 7U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                 [3U] >> 7U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                 [4U] >> 7U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                 [5U] >> 7U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                 [6U] >> 7U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                 [7U] >> 7U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                 [8U] >> 7U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                 [9U] >> 7U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__0__KET____DOT__fdp_inst__weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__current_weight
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__0__KET____DOT__fdp_inst__weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__current_weight
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__0__KET____DOT__fdp_inst__weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__current_weight
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__0__KET____DOT__fdp_inst__weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__current_weight
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__1__KET____DOT__fdp_inst__weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__current_weight
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__1__KET____DOT__fdp_inst__weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__current_weight
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__1__KET____DOT__fdp_inst__weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__current_weight
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__1__KET____DOT__fdp_inst__weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__current_weight
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__2__KET____DOT__fdp_inst__weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__current_weight
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__2__KET____DOT__fdp_inst__weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__current_weight
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__2__KET____DOT__fdp_inst__weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__current_weight
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__2__KET____DOT__fdp_inst__weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__current_weight
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__3__KET____DOT__fdp_inst__weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__current_weight
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__3__KET____DOT__fdp_inst__weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__current_weight
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__3__KET____DOT__fdp_inst__weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__current_weight
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__3__KET____DOT__fdp_inst__weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__current_weight
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__4__KET____DOT__fdp_inst__weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__current_weight
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__4__KET____DOT__fdp_inst__weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__current_weight
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__4__KET____DOT__fdp_inst__weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__current_weight
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__4__KET____DOT__fdp_inst__weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__current_weight
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__5__KET____DOT__fdp_inst__weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__current_weight
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__5__KET____DOT__fdp_inst__weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__current_weight
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__5__KET____DOT__fdp_inst__weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__current_weight
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__5__KET____DOT__fdp_inst__weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__current_weight
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__6__KET____DOT__fdp_inst__weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__current_weight
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__6__KET____DOT__fdp_inst__weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__current_weight
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__6__KET____DOT__fdp_inst__weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__current_weight
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__6__KET____DOT__fdp_inst__weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__current_weight
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__7__KET____DOT__fdp_inst__weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__current_weight
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__7__KET____DOT__fdp_inst__weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__current_weight
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__7__KET____DOT__fdp_inst__weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__current_weight
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__7__KET____DOT__fdp_inst__weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__current_weight
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__8__KET____DOT__fdp_inst__weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__current_weight
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__8__KET____DOT__fdp_inst__weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__current_weight
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__8__KET____DOT__fdp_inst__weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__current_weight
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__8__KET____DOT__fdp_inst__weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__current_weight
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__9__KET____DOT__fdp_inst__weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__current_weight
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__9__KET____DOT__fdp_inst__weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__current_weight
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__9__KET____DOT__fdp_inst__weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__current_weight
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__9__KET____DOT__fdp_inst__weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__current_weight
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__reg_in);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__reg_in);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__reg_in);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__reg_in);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__reg_in);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__reg_in);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__reg_in);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__reg_in);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__reg_in);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__reg_in);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3ffffffU & ((0xffffU & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                     >> 4U)) + (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__carry_in)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3ffffffU & ((0xffffU & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                     >> 4U)) + (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__carry_in)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3ffffffU & ((0xffffU & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                     >> 4U)) + (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__carry_in)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3ffffffU & ((0xffffU & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                     >> 4U)) + (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__carry_in)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3ffffffU & ((0xffffU & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                     >> 4U)) + (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__carry_in)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3ffffffU & ((0xffffU & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                     >> 4U)) + (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__carry_in)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3ffffffU & ((0xffffU & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                     >> 4U)) + (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__carry_in)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3ffffffU & ((0xffffU & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                     >> 4U)) + (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__carry_in)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3ffffffU & ((0xffffU & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                     >> 4U)) + (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__carry_in)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3ffffffU & ((0xffffU & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                     >> 4U)) + (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__carry_in)));
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst.weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__0__KET____DOT__fdp_inst__weight
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst.weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__0__KET____DOT__fdp_inst__weight
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst.weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__0__KET____DOT__fdp_inst__weight
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst.weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__0__KET____DOT__fdp_inst__weight
        [0U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst.weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__1__KET____DOT__fdp_inst__weight
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst.weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__1__KET____DOT__fdp_inst__weight
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst.weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__1__KET____DOT__fdp_inst__weight
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst.weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__1__KET____DOT__fdp_inst__weight
        [0U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_inst.weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__2__KET____DOT__fdp_inst__weight
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_inst.weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__2__KET____DOT__fdp_inst__weight
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_inst.weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__2__KET____DOT__fdp_inst__weight
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_inst.weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__2__KET____DOT__fdp_inst__weight
        [0U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_inst.weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__3__KET____DOT__fdp_inst__weight
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_inst.weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__3__KET____DOT__fdp_inst__weight
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_inst.weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__3__KET____DOT__fdp_inst__weight
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_inst.weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__3__KET____DOT__fdp_inst__weight
        [0U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_inst.weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__4__KET____DOT__fdp_inst__weight
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_inst.weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__4__KET____DOT__fdp_inst__weight
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_inst.weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__4__KET____DOT__fdp_inst__weight
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_inst.weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__4__KET____DOT__fdp_inst__weight
        [0U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_inst.weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__5__KET____DOT__fdp_inst__weight
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_inst.weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__5__KET____DOT__fdp_inst__weight
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_inst.weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__5__KET____DOT__fdp_inst__weight
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_inst.weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__5__KET____DOT__fdp_inst__weight
        [0U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_inst.weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__6__KET____DOT__fdp_inst__weight
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_inst.weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__6__KET____DOT__fdp_inst__weight
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_inst.weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__6__KET____DOT__fdp_inst__weight
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_inst.weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__6__KET____DOT__fdp_inst__weight
        [0U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_inst.weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__7__KET____DOT__fdp_inst__weight
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_inst.weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__7__KET____DOT__fdp_inst__weight
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_inst.weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__7__KET____DOT__fdp_inst__weight
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_inst.weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__7__KET____DOT__fdp_inst__weight
        [0U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_inst.weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__8__KET____DOT__fdp_inst__weight
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_inst.weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__8__KET____DOT__fdp_inst__weight
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_inst.weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__8__KET____DOT__fdp_inst__weight
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_inst.weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__8__KET____DOT__fdp_inst__weight
        [0U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_inst.weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__9__KET____DOT__fdp_inst__weight
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_inst.weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__9__KET____DOT__fdp_inst__weight
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_inst.weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__9__KET____DOT__fdp_inst__weight
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_inst.weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__9__KET____DOT__fdp_inst__weight
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3ffffffU & ((IData)(1U) + (~ (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__rounded_out_data))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) {
        if ((8U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[0U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[0U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[0U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[0U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((7U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__data_out 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[0U] 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__rounded_out_data));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[0U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__rounded_out_data));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3ffffffU & ((IData)(1U) + (~ (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__rounded_out_data))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) {
        if ((8U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[1U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[1U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[1U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[1U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((7U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__data_out 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[1U] 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__rounded_out_data));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[1U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__rounded_out_data));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3ffffffU & ((IData)(1U) + (~ (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__rounded_out_data))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) {
        if ((8U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[2U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[2U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[2U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[2U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((7U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__data_out 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[2U] 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__rounded_out_data));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[2U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__rounded_out_data));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3ffffffU & ((IData)(1U) + (~ (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__rounded_out_data))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) {
        if ((8U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[3U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[3U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[3U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[3U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((7U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__data_out 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[3U] 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__rounded_out_data));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[3U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__rounded_out_data));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3ffffffU & ((IData)(1U) + (~ (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__rounded_out_data))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) {
        if ((8U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[4U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[4U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[4U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[4U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((7U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__data_out 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[4U] 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__rounded_out_data));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[4U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__rounded_out_data));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3ffffffU & ((IData)(1U) + (~ (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__rounded_out_data))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) {
        if ((8U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[5U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[5U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[5U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[5U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((7U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__data_out 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[5U] 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__rounded_out_data));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[5U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__rounded_out_data));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3ffffffU & ((IData)(1U) + (~ (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__rounded_out_data))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) {
        if ((8U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[6U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[6U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[6U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[6U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((7U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__data_out 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[6U] 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__rounded_out_data));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[6U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__rounded_out_data));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3ffffffU & ((IData)(1U) + (~ (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__rounded_out_data))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) {
        if ((8U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[7U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[7U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[7U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[7U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((7U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__data_out 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[7U] 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__rounded_out_data));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[7U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__rounded_out_data));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3ffffffU & ((IData)(1U) + (~ (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__rounded_out_data))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) {
        if ((8U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[8U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[8U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[8U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[8U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((7U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__data_out 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[8U] 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__rounded_out_data));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[8U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__rounded_out_data));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3ffffffU & ((IData)(1U) + (~ (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__rounded_out_data))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) {
        if ((8U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[9U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[9U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[9U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[9U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((7U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__data_out 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[9U] 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__rounded_out_data));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[9U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__rounded_out_data));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_data 
        = (0x7fU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign)
                     ? (~ ((0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                            [0U]) - (IData)(1U))) : 
                    (0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                     [0U])));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3fffffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_data) 
                          << 3U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3fffffffU & ((IData)(1U) + (~ (0xfffffU 
                                            & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_data) 
                                               << 3U)))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) {
        if ((0x100000U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[0U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
        } else if ((0U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_data))) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__data_out = 0x1ffc00U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[0U] = 0x1ffc00U;
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[0U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[0U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((0xfffffU <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__data_out 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[0U] 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[0U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_data 
        = (0x7fU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign)
                     ? (~ ((0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                            [1U]) - (IData)(1U))) : 
                    (0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                     [1U])));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3fffffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_data) 
                          << 3U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3fffffffU & ((IData)(1U) + (~ (0xfffffU 
                                            & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_data) 
                                               << 3U)))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) {
        if ((0x100000U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[1U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
        } else if ((0U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_data))) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__data_out = 0x1ffc00U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[1U] = 0x1ffc00U;
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[1U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[1U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((0xfffffU <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__data_out 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[1U] 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[1U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_data 
        = (0x7fU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign)
                     ? (~ ((0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                            [2U]) - (IData)(1U))) : 
                    (0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                     [2U])));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3fffffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_data) 
                          << 3U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3fffffffU & ((IData)(1U) + (~ (0xfffffU 
                                            & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_data) 
                                               << 3U)))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) {
        if ((0x100000U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[2U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
        } else if ((0U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_data))) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__data_out = 0x1ffc00U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[2U] = 0x1ffc00U;
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[2U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[2U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((0xfffffU <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__data_out 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[2U] 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[2U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_data 
        = (0x7fU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign)
                     ? (~ ((0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                            [3U]) - (IData)(1U))) : 
                    (0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                     [3U])));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3fffffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_data) 
                          << 3U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3fffffffU & ((IData)(1U) + (~ (0xfffffU 
                                            & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_data) 
                                               << 3U)))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) {
        if ((0x100000U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[3U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
        } else if ((0U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_data))) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__data_out = 0x1ffc00U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[3U] = 0x1ffc00U;
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[3U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[3U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((0xfffffU <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__data_out 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[3U] 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[3U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_data 
        = (0x7fU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign)
                     ? (~ ((0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                            [4U]) - (IData)(1U))) : 
                    (0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                     [4U])));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3fffffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_data) 
                          << 3U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3fffffffU & ((IData)(1U) + (~ (0xfffffU 
                                            & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_data) 
                                               << 3U)))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) {
        if ((0x100000U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[4U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
        } else if ((0U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_data))) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__data_out = 0x1ffc00U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[4U] = 0x1ffc00U;
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[4U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[4U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((0xfffffU <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__data_out 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[4U] 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[4U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_data 
        = (0x7fU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign)
                     ? (~ ((0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                            [5U]) - (IData)(1U))) : 
                    (0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                     [5U])));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3fffffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_data) 
                          << 3U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3fffffffU & ((IData)(1U) + (~ (0xfffffU 
                                            & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_data) 
                                               << 3U)))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) {
        if ((0x100000U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[5U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
        } else if ((0U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_data))) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__data_out = 0x1ffc00U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[5U] = 0x1ffc00U;
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[5U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[5U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((0xfffffU <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__data_out 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[5U] 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[5U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_data 
        = (0x7fU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign)
                     ? (~ ((0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                            [6U]) - (IData)(1U))) : 
                    (0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                     [6U])));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3fffffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_data) 
                          << 3U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3fffffffU & ((IData)(1U) + (~ (0xfffffU 
                                            & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_data) 
                                               << 3U)))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) {
        if ((0x100000U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[6U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
        } else if ((0U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_data))) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__data_out = 0x1ffc00U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[6U] = 0x1ffc00U;
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[6U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[6U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((0xfffffU <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__data_out 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[6U] 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[6U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_data 
        = (0x7fU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign)
                     ? (~ ((0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                            [7U]) - (IData)(1U))) : 
                    (0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                     [7U])));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3fffffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_data) 
                          << 3U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3fffffffU & ((IData)(1U) + (~ (0xfffffU 
                                            & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_data) 
                                               << 3U)))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) {
        if ((0x100000U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[7U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
        } else if ((0U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_data))) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__data_out = 0x1ffc00U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[7U] = 0x1ffc00U;
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[7U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[7U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((0xfffffU <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__data_out 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[7U] 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[7U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_data 
        = (0x7fU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign)
                     ? (~ ((0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                            [8U]) - (IData)(1U))) : 
                    (0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                     [8U])));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3fffffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_data) 
                          << 3U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3fffffffU & ((IData)(1U) + (~ (0xfffffU 
                                            & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_data) 
                                               << 3U)))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) {
        if ((0x100000U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[8U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
        } else if ((0U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_data))) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__data_out = 0x1ffc00U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[8U] = 0x1ffc00U;
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[8U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[8U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((0xfffffU <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__data_out 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[8U] 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[8U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_data 
        = (0x7fU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign)
                     ? (~ ((0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                            [9U]) - (IData)(1U))) : 
                    (0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                     [9U])));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3fffffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_data) 
                          << 3U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3fffffffU & ((IData)(1U) + (~ (0xfffffU 
                                            & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_data) 
                                               << 3U)))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) {
        if ((0x100000U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[9U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
        } else if ((0U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_data))) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__data_out = 0x1ffc00U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[9U] = 0x1ffc00U;
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[9U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[9U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((0xfffffU <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__data_out 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[9U] 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[9U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out[9U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out
        [9U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out[8U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out
        [8U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out[7U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out
        [7U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out[6U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out
        [6U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out[5U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out
        [5U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out[4U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out
        [4U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out[9U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out
        [9U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out[8U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out
        [8U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out[7U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out
        [7U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out[6U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out
        [6U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out[5U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out
        [5U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out[4U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out
        [4U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0[9U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out
        [9U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0[8U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out
        [8U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0[7U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out
        [7U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0[6U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out
        [6U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0[5U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out
        [5U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0[4U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out
        [4U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext[9U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out
        [9U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext[8U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out
        [8U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext[7U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out
        [7U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext[6U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out
        [6U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext[5U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out
        [5U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext[4U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out
        [4U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out
        [0U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0[9U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0
        [9U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0[8U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0
        [8U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0[7U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0
        [7U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0[6U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0
        [6U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0[5U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0
        [5U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0[4U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0
        [4U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0
        [3U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0
        [2U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0
        [1U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__add 
        = (0x1fffffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out 
                        + vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext
                        [0U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__add 
        = (0x1fffffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out 
                        + vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext
                        [1U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__add 
        = (0x1fffffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out 
                        + vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext
                        [2U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__add 
        = (0x1fffffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out 
                        + vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext
                        [3U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__add 
        = (0x1fffffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out 
                        + vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext
                        [4U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__add 
        = (0x1fffffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out 
                        + vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext
                        [5U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__add 
        = (0x1fffffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out 
                        + vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext
                        [6U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__add 
        = (0x1fffffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out 
                        + vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext
                        [7U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__add 
        = (0x1fffffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out 
                        + vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext
                        [8U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__add 
        = (0x1fffffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out 
                        + vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext
                        [9U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0[9U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0
        [9U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0[8U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0
        [8U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0[7U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0
        [7U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0[6U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0
        [6U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0[5U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0
        [5U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0[4U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0
        [4U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__add;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__add);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__add;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__add);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__add;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__add);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__add;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__add);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__add;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__add);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__add;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__add);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__add;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__add);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__add;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__add);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__add;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__add);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__add;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__add);
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__1\n"); );
    // Body
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fdp_join_ready 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst.data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_in_0_ready 
        = ((IData)(vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst.data_in_ready) 
           & ((~ (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_data_in_0_valid)) 
              | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__data_out_valid)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__weight_ready 
        = ((IData)(vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst.data_in_ready) 
           & ((~ (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__data_out_valid)) 
              | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_data_in_0_valid)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_data_out_valid 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst.data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_data_out 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst.data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_data_out_valid 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst.data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_data_out 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst.data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_data_out_valid 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_inst.data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_data_out 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_inst.data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_data_out_valid 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_inst.data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_data_out 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_inst.data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_data_out_valid 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_inst.data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_data_out 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_inst.data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_data_out_valid 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_inst.data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_data_out 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_inst.data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_data_out_valid 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_inst.data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_data_out 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_inst.data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_data_out_valid 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_inst.data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_data_out 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_inst.data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_data_out_valid 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_inst.data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_data_out 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_inst.data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fdp_data_ready 
        = (((IData)(vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_inst.data_in_ready) 
            << 9U) | (((IData)(vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_inst.data_in_ready) 
                       << 8U) | (((IData)(vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_inst.data_in_ready) 
                                  << 7U) | (((IData)(vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_inst.data_in_ready) 
                                             << 6U) 
                                            | (((IData)(vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_inst.data_in_ready) 
                                                << 5U) 
                                               | (((IData)(vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_inst.data_in_ready) 
                                                   << 4U) 
                                                  | (((IData)(vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_inst.data_in_ready) 
                                                      << 3U) 
                                                     | (((IData)(vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_inst.data_in_ready) 
                                                         << 2U) 
                                                        | (((IData)(vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst.data_in_ready) 
                                                            << 1U) 
                                                           | (IData)(vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst.data_in_ready))))))))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fdp_weight_ready 
        = (((IData)(vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_inst.weight_ready) 
            << 9U) | (((IData)(vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_inst.weight_ready) 
                       << 8U) | (((IData)(vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_inst.weight_ready) 
                                  << 7U) | (((IData)(vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_inst.weight_ready) 
                                             << 6U) 
                                            | (((IData)(vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_inst.weight_ready) 
                                                << 5U) 
                                               | (((IData)(vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_inst.weight_ready) 
                                                   << 4U) 
                                                  | (((IData)(vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_inst.weight_ready) 
                                                      << 3U) 
                                                     | (((IData)(vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_inst.weight_ready) 
                                                         << 2U) 
                                                        | (((IData)(vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst.weight_ready) 
                                                            << 1U) 
                                                           | (IData)(vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst.weight_ready))))))))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_data_out_valid 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_inst.data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_data_out 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_inst.data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fdp_join_inst__DOT__data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fdp_join_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_data_in_0_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_in_0_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__weight_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__weight_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fdp_join_inst__DOT__data_in_ready 
        = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__weight_ready) 
            << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_in_0_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext 
        = ((0x1c0000U & ((- (IData)((1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_data_out 
                                           >> 0x11U)))) 
                         << 0x12U)) | vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_data_out);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext 
        = ((0x1c0000U & ((- (IData)((1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_data_out 
                                           >> 0x11U)))) 
                         << 0x12U)) | vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_data_out);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext 
        = ((0x1c0000U & ((- (IData)((1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_data_out 
                                           >> 0x11U)))) 
                         << 0x12U)) | vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_data_out);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext 
        = ((0x1c0000U & ((- (IData)((1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_data_out 
                                           >> 0x11U)))) 
                         << 0x12U)) | vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_data_out);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext 
        = ((0x1c0000U & ((- (IData)((1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_data_out 
                                           >> 0x11U)))) 
                         << 0x12U)) | vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_data_out);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext 
        = ((0x1c0000U & ((- (IData)((1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_data_out 
                                           >> 0x11U)))) 
                         << 0x12U)) | vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_data_out);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext 
        = ((0x1c0000U & ((- (IData)((1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_data_out 
                                           >> 0x11U)))) 
                         << 0x12U)) | vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_data_out);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext 
        = ((0x1c0000U & ((- (IData)((1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_data_out 
                                           >> 0x11U)))) 
                         << 0x12U)) | vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_data_out);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext 
        = ((0x1c0000U & ((- (IData)((1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_data_out 
                                           >> 0x11U)))) 
                         << 0x12U)) | vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_data_out);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext 
        = ((0x1c0000U & ((- (IData)((1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_data_out 
                                           >> 0x11U)))) 
                         << 0x12U)) | vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_data_out);
}

void Vtop_fixed_dot_product__I8_W8___ico_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__0(Vtop_fixed_dot_product__I8_W8* vlSelf);
void Vtop_fixed_dot_product__I8_W8___ico_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst__0(Vtop_fixed_dot_product__I8_W8* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        Vtop_fixed_dot_product__I8_W8___ico_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__0((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst));
        Vtop_fixed_dot_product__I8_W8___ico_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst__0((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst));
        Vtop_fixed_dot_product__I8_W8___ico_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst__0((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_inst));
        Vtop_fixed_dot_product__I8_W8___ico_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst__0((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_inst));
        Vtop_fixed_dot_product__I8_W8___ico_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst__0((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_inst));
        Vtop_fixed_dot_product__I8_W8___ico_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst__0((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_inst));
        Vtop_fixed_dot_product__I8_W8___ico_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst__0((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_inst));
        Vtop_fixed_dot_product__I8_W8___ico_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst__0((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_inst));
        Vtop_fixed_dot_product__I8_W8___ico_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst__0((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_inst));
        Vtop_fixed_dot_product__I8_W8___ico_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst__0((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_inst));
        Vtop___024root___ico_sequent__TOP__1(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst.clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__clk)));
    vlSelf->__VactTriggered.at(2U) = ((IData)(vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst.clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst__clk)));
    vlSelf->__VactTriggered.at(3U) = ((IData)(vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_inst.clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_inst__clk)));
    vlSelf->__VactTriggered.at(4U) = ((IData)(vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_inst.clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_inst__clk)));
    vlSelf->__VactTriggered.at(5U) = ((IData)(vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_inst.clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_inst__clk)));
    vlSelf->__VactTriggered.at(6U) = ((IData)(vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_inst.clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_inst__clk)));
    vlSelf->__VactTriggered.at(7U) = ((IData)(vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_inst.clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_inst__clk)));
    vlSelf->__VactTriggered.at(8U) = ((IData)(vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_inst.clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_inst__clk)));
    vlSelf->__VactTriggered.at(9U) = ((IData)(vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_inst.clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_inst__clk)));
    vlSelf->__VactTriggered.at(0xaU) = ((IData)(vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_inst.clk) 
                                        & (~ (IData)(vlSelf->__Vtrigrprev__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_inst__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__clk 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst.clk;
    vlSelf->__Vtrigrprev__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst__clk 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst.clk;
    vlSelf->__Vtrigrprev__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_inst__clk 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_inst.clk;
    vlSelf->__Vtrigrprev__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_inst__clk 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_inst.clk;
    vlSelf->__Vtrigrprev__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_inst__clk 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_inst.clk;
    vlSelf->__Vtrigrprev__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_inst__clk 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_inst.clk;
    vlSelf->__Vtrigrprev__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_inst__clk 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_inst.clk;
    vlSelf->__Vtrigrprev__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_inst__clk 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_inst.clk;
    vlSelf->__Vtrigrprev__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_inst__clk 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_inst.clk;
    vlSelf->__Vtrigrprev__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_inst__clk 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_inst.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0;
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 = 0;
    IData/*31:0*/ fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0;
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 = 0;
    IData/*31:0*/ fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0;
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 = 0;
    IData/*31:0*/ fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0;
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 = 0;
    IData/*31:0*/ fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0;
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 = 0;
    IData/*31:0*/ fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0;
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 = 0;
    IData/*31:0*/ fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0;
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 = 0;
    IData/*31:0*/ fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0;
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 = 0;
    IData/*31:0*/ fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0;
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 = 0;
    IData/*31:0*/ fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0;
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 = 0;
    CData/*3:0*/ __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__counter;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__counter = 0;
    IData/*20:0*/ __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__reg_in = 0;
    CData/*3:0*/ __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__counter;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__counter = 0;
    IData/*20:0*/ __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__reg_in = 0;
    CData/*3:0*/ __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__counter;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__counter = 0;
    IData/*20:0*/ __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__reg_in = 0;
    CData/*3:0*/ __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__counter;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__counter = 0;
    IData/*20:0*/ __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__reg_in = 0;
    CData/*3:0*/ __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__counter;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__counter = 0;
    IData/*20:0*/ __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__reg_in = 0;
    CData/*3:0*/ __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__counter;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__counter = 0;
    IData/*20:0*/ __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__reg_in = 0;
    CData/*3:0*/ __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__counter;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__counter = 0;
    IData/*20:0*/ __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__reg_in = 0;
    CData/*3:0*/ __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__counter;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__counter = 0;
    IData/*20:0*/ __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__reg_in = 0;
    CData/*3:0*/ __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__counter;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__counter = 0;
    IData/*20:0*/ __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__reg_in = 0;
    CData/*3:0*/ __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__counter;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__counter = 0;
    IData/*20:0*/ __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__reg_in = 0;
    CData/*2:0*/ __Vdly__fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__counter;
    __Vdly__fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__counter = 0;
    CData/*0:0*/ __Vdly__fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__counter;
    __Vdly__fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__counter = 0;
    IData/*31:0*/ __Vilp;
    // Body
    __Vdly__fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__counter 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__counter;
    __Vdly__fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__counter 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__counter;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__counter 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__counter;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__counter 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__counter;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__counter 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__counter;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__counter 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__counter;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__counter 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__counter;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__counter 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__counter;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__counter 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__counter;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__counter 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__counter;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__counter 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__counter;
    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__counter 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__counter;
    if (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_data_in_0_valid) 
         & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_in_0_ready))) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_data_in_0[0U] 
            = vlSelf->fixed_linear_sync_top__DOT__counter;
        vlSelf->fixed_linear_sync_top__DOT__fc1_data_in_0[1U] 
            = vlSelf->fixed_linear_sync_top__DOT__counter;
        vlSelf->fixed_linear_sync_top__DOT__fc1_data_in_0[2U] 
            = vlSelf->fixed_linear_sync_top__DOT__counter;
        vlSelf->fixed_linear_sync_top__DOT__fc1_data_in_0[3U] 
            = vlSelf->fixed_linear_sync_top__DOT__counter;
        vlSelf->fixed_linear_sync_top__DOT__counter 
            = ((0x1fU == (IData)(vlSelf->fixed_linear_sync_top__DOT__counter))
                ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelf->fixed_linear_sync_top__DOT__counter))));
    }
    if (vlSelf->rst) {
        __Vdly__fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__counter = 0U;
        __Vdly__fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__counter = 0U;
        __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__reg_in = 0U;
        __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__reg_in = 0U;
        __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__reg_in = 0U;
        __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__reg_in = 0U;
        __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__reg_in = 0U;
        __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__reg_in = 0U;
        __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__reg_in = 0U;
        __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__reg_in = 0U;
        __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__reg_in = 0U;
        __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__reg_in = 0U;
        __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__counter = 0U;
        __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__counter = 0U;
        __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__counter = 0U;
        __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__counter = 0U;
        __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__counter = 0U;
        __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__counter = 0U;
        __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__counter = 0U;
        __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__counter = 0U;
        __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__counter = 0U;
        __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__counter = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__data_buffer_out = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__data_buffer_out = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__data_buffer_out = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__data_buffer_out = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__data_buffer_out = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__data_buffer_out = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__data_buffer_out = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__data_buffer_out = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__data_buffer_out = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__data_buffer_out = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__state = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__state = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__state = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__state = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__state = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__state = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__state = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__state = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__state = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__state = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__data_out = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__data_out = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__data_out = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__data_out = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__data_out = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__data_out = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__data_out = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__data_out = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__data_out = 0U;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__data_out = 0U;
    } else {
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__bias_ready) {
            __Vdly__fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__counter 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__counter) 
                   & ((IData)(1U) + (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__counter)));
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__weight_ready) {
            __Vdly__fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__counter 
                = ((4U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__counter))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__counter))));
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid) {
            if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready) {
                if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_data_out_valid) {
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
                        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext;
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__counter = 1U;
                } else {
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__reg_in = 0U;
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__counter = 0U;
                }
            }
        } else if (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_data_out_valid) 
                    & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready))) {
            __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
                = (0x1fffffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
                                + vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext));
            __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__counter 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__counter)));
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid) {
            if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready) {
                if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_data_out_valid) {
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
                        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext;
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__counter = 1U;
                } else {
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__reg_in = 0U;
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__counter = 0U;
                }
            }
        } else if (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_data_out_valid) 
                    & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready))) {
            __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
                = (0x1fffffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
                                + vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext));
            __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__counter 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__counter)));
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid) {
            if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready) {
                if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_data_out_valid) {
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
                        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext;
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__counter = 1U;
                } else {
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__reg_in = 0U;
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__counter = 0U;
                }
            }
        } else if (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_data_out_valid) 
                    & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready))) {
            __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
                = (0x1fffffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
                                + vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext));
            __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__counter 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__counter)));
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid) {
            if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready) {
                if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_data_out_valid) {
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
                        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext;
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__counter = 1U;
                } else {
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__reg_in = 0U;
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__counter = 0U;
                }
            }
        } else if (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_data_out_valid) 
                    & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready))) {
            __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
                = (0x1fffffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
                                + vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext));
            __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__counter 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__counter)));
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid) {
            if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready) {
                if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_data_out_valid) {
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
                        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext;
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__counter = 1U;
                } else {
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__reg_in = 0U;
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__counter = 0U;
                }
            }
        } else if (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_data_out_valid) 
                    & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready))) {
            __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
                = (0x1fffffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
                                + vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext));
            __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__counter 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__counter)));
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid) {
            if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready) {
                if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_data_out_valid) {
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
                        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext;
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__counter = 1U;
                } else {
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__reg_in = 0U;
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__counter = 0U;
                }
            }
        } else if (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_data_out_valid) 
                    & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready))) {
            __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
                = (0x1fffffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
                                + vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext));
            __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__counter 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__counter)));
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid) {
            if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready) {
                if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_data_out_valid) {
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
                        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext;
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__counter = 1U;
                } else {
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__reg_in = 0U;
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__counter = 0U;
                }
            }
        } else if (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_data_out_valid) 
                    & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready))) {
            __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
                = (0x1fffffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
                                + vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext));
            __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__counter 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__counter)));
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid) {
            if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready) {
                if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_data_out_valid) {
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
                        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext;
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__counter = 1U;
                } else {
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__reg_in = 0U;
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__counter = 0U;
                }
            }
        } else if (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_data_out_valid) 
                    & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready))) {
            __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
                = (0x1fffffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
                                + vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext));
            __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__counter 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__counter)));
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid) {
            if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready) {
                if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_data_out_valid) {
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
                        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext;
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__counter = 1U;
                } else {
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__reg_in = 0U;
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__counter = 0U;
                }
            }
        } else if (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_data_out_valid) 
                    & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready))) {
            __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
                = (0x1fffffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
                                + vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext));
            __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__counter 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__counter)));
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid) {
            if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready) {
                if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_data_out_valid) {
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
                        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext;
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__counter = 1U;
                } else {
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__reg_in = 0U;
                    __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__counter = 0U;
                }
            }
        } else if (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_data_out_valid) 
                    & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready))) {
            __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
                = (0x1fffffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
                                + vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext));
            __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__counter 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__counter)));
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__data_buffer_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__data_buffer_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__add;
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__data_buffer_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__data_buffer_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__add;
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__data_buffer_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__data_buffer_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__add;
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__data_buffer_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__data_buffer_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__add;
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__data_buffer_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__data_buffer_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__add;
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__data_buffer_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__data_buffer_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__add;
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__data_buffer_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__data_buffer_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__add;
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__data_buffer_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__data_buffer_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__add;
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__data_buffer_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__data_buffer_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__add;
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__data_buffer_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__data_buffer_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__add;
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_buffer_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__selected_data;
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__selected_data;
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__selected_data;
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__selected_data;
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__selected_data;
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__selected_data;
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__selected_data;
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__selected_data;
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__selected_data;
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__selected_data;
        }
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__state 
            = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__state_next;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__state 
            = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__state_next;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__state 
            = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__state_next;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__state 
            = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__state_next;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__state 
            = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__state_next;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__state 
            = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__state_next;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__state 
            = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__state_next;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__state 
            = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__state_next;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__state 
            = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__state_next;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__state 
            = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__state_next;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state 
            = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state 
            = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state 
            = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state 
            = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state 
            = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state 
            = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state 
            = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state 
            = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state 
            = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next;
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state 
            = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next;
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__data_out_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__data_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__selected_data;
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__data_out_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__data_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__selected_data;
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__data_out_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__data_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__selected_data;
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__data_out_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__data_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__selected_data;
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__data_out_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__data_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__selected_data;
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__data_out_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__data_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__selected_data;
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__data_out_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__data_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__selected_data;
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__data_out_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__data_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__selected_data;
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__data_out_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__data_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__selected_data;
        }
        if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__data_out_wren) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__data_out 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__selected_data;
        }
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__data_out_valid 
        = ((~ (IData)(vlSelf->rst)) & (0U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__data_out_valid 
        = ((~ (IData)(vlSelf->rst)) & (0U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__data_out_valid 
        = ((~ (IData)(vlSelf->rst)) & (0U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__data_out_valid 
        = ((~ (IData)(vlSelf->rst)) & (0U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__data_out_valid 
        = ((~ (IData)(vlSelf->rst)) & (0U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__data_out_valid 
        = ((~ (IData)(vlSelf->rst)) & (0U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__data_out_valid 
        = ((~ (IData)(vlSelf->rst)) & (0U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__data_out_valid 
        = ((~ (IData)(vlSelf->rst)) & (0U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__data_out_valid 
        = ((~ (IData)(vlSelf->rst)) & (0U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid 
        = ((~ (IData)(vlSelf->rst)) & (0U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid 
        = ((~ (IData)(vlSelf->rst)) & (0U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid 
        = ((~ (IData)(vlSelf->rst)) & (0U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid 
        = ((~ (IData)(vlSelf->rst)) & (0U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid 
        = ((~ (IData)(vlSelf->rst)) & (0U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid 
        = ((~ (IData)(vlSelf->rst)) & (0U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid 
        = ((~ (IData)(vlSelf->rst)) & (0U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid 
        = ((~ (IData)(vlSelf->rst)) & (0U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid 
        = ((~ (IData)(vlSelf->rst)) & (0U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__data_out_valid 
        = ((~ (IData)(vlSelf->rst)) & (0U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready 
        = ((~ (IData)(vlSelf->rst)) & (2U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready 
        = ((~ (IData)(vlSelf->rst)) & (2U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready 
        = ((~ (IData)(vlSelf->rst)) & (2U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready 
        = ((~ (IData)(vlSelf->rst)) & (2U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready 
        = ((~ (IData)(vlSelf->rst)) & (2U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready 
        = ((~ (IData)(vlSelf->rst)) & (2U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready 
        = ((~ (IData)(vlSelf->rst)) & (2U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready 
        = ((~ (IData)(vlSelf->rst)) & (2U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready 
        = ((~ (IData)(vlSelf->rst)) & (2U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready 
        = ((~ (IData)(vlSelf->rst)) & (2U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__data_in_ready 
        = ((~ (IData)(vlSelf->rst)) & (2U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__data_in_ready 
        = ((~ (IData)(vlSelf->rst)) & (2U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__data_in_ready 
        = ((~ (IData)(vlSelf->rst)) & (2U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__data_in_ready 
        = ((~ (IData)(vlSelf->rst)) & (2U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__data_in_ready 
        = ((~ (IData)(vlSelf->rst)) & (2U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__data_in_ready 
        = ((~ (IData)(vlSelf->rst)) & (2U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__data_in_ready 
        = ((~ (IData)(vlSelf->rst)) & (2U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__data_in_ready 
        = ((~ (IData)(vlSelf->rst)) & (2U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__data_in_ready 
        = ((~ (IData)(vlSelf->rst)) & (2U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__data_in_ready 
        = ((~ (IData)(vlSelf->rst)) & (2U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid 
        = ((~ (IData)(vlSelf->rst)) & (0U != vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__state_next));
    vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_data_in_0
        [3U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_data_in_0
        [2U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_data_in_0
        [1U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_data_in_0
        [0U];
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__ce0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t1[0U] 
            = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t0[0U];
        vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t1[1U] 
            = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t0[1U];
        vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t1[2U] 
            = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t0[2U];
        if ((0U >= (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__counter))) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t0[0U] 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__ram
                [vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__counter][0U];
            vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t0[1U] 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__ram
                [vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__counter][1U];
            vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t0[2U] 
                = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__ram
                [vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__counter][2U];
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t0[0U] = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t0[1U] = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t0[2U] = 0U;
        }
    }
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__ce0) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__fc1_weight_rom_U__DOT__q0_t1 
            = vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__fc1_weight_rom_U__DOT__q0_t0;
        vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__fc1_weight_rom_U__DOT__q0_t0 
            = ((4U >= (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__counter))
                ? vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__fc1_weight_rom_U__DOT__ram
               [vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__counter]
                : 0U);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__counter 
        = __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__counter;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__counter 
        = __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__counter;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__counter 
        = __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__counter;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__counter 
        = __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__counter;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__counter 
        = __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__counter;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__counter 
        = __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__counter;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__counter 
        = __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__counter;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__counter 
        = __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__counter;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__counter 
        = __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__counter;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__counter 
        = __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__counter;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
        = __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
        = __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
        = __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
        = __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
        = __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
        = __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
        = __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
        = __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
        = __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__reg_in 
        = __Vdly__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_in_0[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_in_0[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_in_0[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_in_0[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__0__KET____DOT__fdp_inst__data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__0__KET____DOT__fdp_inst__data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__0__KET____DOT__fdp_inst__data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__0__KET____DOT__fdp_inst__data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__1__KET____DOT__fdp_inst__data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__1__KET____DOT__fdp_inst__data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__1__KET____DOT__fdp_inst__data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__1__KET____DOT__fdp_inst__data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__2__KET____DOT__fdp_inst__data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__2__KET____DOT__fdp_inst__data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__2__KET____DOT__fdp_inst__data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__2__KET____DOT__fdp_inst__data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__3__KET____DOT__fdp_inst__data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__3__KET____DOT__fdp_inst__data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__3__KET____DOT__fdp_inst__data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__3__KET____DOT__fdp_inst__data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__4__KET____DOT__fdp_inst__data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__4__KET____DOT__fdp_inst__data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__4__KET____DOT__fdp_inst__data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__4__KET____DOT__fdp_inst__data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__5__KET____DOT__fdp_inst__data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__5__KET____DOT__fdp_inst__data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__5__KET____DOT__fdp_inst__data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__5__KET____DOT__fdp_inst__data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__6__KET____DOT__fdp_inst__data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__6__KET____DOT__fdp_inst__data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__6__KET____DOT__fdp_inst__data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__6__KET____DOT__fdp_inst__data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__7__KET____DOT__fdp_inst__data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__7__KET____DOT__fdp_inst__data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__7__KET____DOT__fdp_inst__data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__7__KET____DOT__fdp_inst__data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__8__KET____DOT__fdp_inst__data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__8__KET____DOT__fdp_inst__data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__8__KET____DOT__fdp_inst__data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__8__KET____DOT__fdp_inst__data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__9__KET____DOT__fdp_inst__data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__9__KET____DOT__fdp_inst__data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__9__KET____DOT__fdp_inst__data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__9__KET____DOT__fdp_inst__data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__data_in_0
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid 
        = (5U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__counter));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid 
        = (5U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__counter));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid 
        = (5U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__counter));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid 
        = (5U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__counter));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid 
        = (5U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__counter));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid 
        = (5U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__counter));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid 
        = (5U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__counter));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid 
        = (5U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__counter));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid 
        = (5U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__counter));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid 
        = (5U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__counter));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__reg_in;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__data_out 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_data_out[9U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__data_out 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_data_out[8U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__data_out 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_data_out[7U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__data_out 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_data_out[6U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__data_out 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_data_out[5U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__data_out 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_data_out[4U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__data_out 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_data_out[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__data_out 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_data_out[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__data_out 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_data_out[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__data_out 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__acc_data_out[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__dout_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__dout_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__dout_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__dout_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__dout_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__dout_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__dout_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__dout_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__dout_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__dout_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready 
        = ((5U != (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__counter)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready 
        = ((5U != (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__counter)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready 
        = ((5U != (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__counter)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready 
        = ((5U != (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__counter)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready 
        = ((5U != (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__counter)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready 
        = ((5U != (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__counter)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready 
        = ((5U != (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__counter)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready 
        = ((5U != (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__counter)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready 
        = ((5U != (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__counter)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__reg_in_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready 
        = ((5U != (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__counter)) 
           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__reg_ready 
        = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__data_in_ready) 
            << 9U) | (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__data_in_ready) 
                       << 8U) | (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__data_in_ready) 
                                  << 7U) | (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__data_in_ready) 
                                             << 6U) 
                                            | (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__data_in_ready) 
                                                << 5U) 
                                               | (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__data_in_ready) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__data_in_ready) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__data_in_ready) 
                                                         << 2U) 
                                                        | (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__data_in_ready) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__data_in_ready))))))))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__acc_data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out_valid;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst.data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__0__KET____DOT__fdp_inst__data_in
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst.data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__0__KET____DOT__fdp_inst__data_in
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst.data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__0__KET____DOT__fdp_inst__data_in
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst.data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__0__KET____DOT__fdp_inst__data_in
        [0U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst.data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__1__KET____DOT__fdp_inst__data_in
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst.data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__1__KET____DOT__fdp_inst__data_in
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst.data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__1__KET____DOT__fdp_inst__data_in
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst.data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__1__KET____DOT__fdp_inst__data_in
        [0U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_inst.data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__2__KET____DOT__fdp_inst__data_in
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_inst.data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__2__KET____DOT__fdp_inst__data_in
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_inst.data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__2__KET____DOT__fdp_inst__data_in
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_inst.data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__2__KET____DOT__fdp_inst__data_in
        [0U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_inst.data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__3__KET____DOT__fdp_inst__data_in
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_inst.data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__3__KET____DOT__fdp_inst__data_in
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_inst.data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__3__KET____DOT__fdp_inst__data_in
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_inst.data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__3__KET____DOT__fdp_inst__data_in
        [0U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_inst.data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__4__KET____DOT__fdp_inst__data_in
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_inst.data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__4__KET____DOT__fdp_inst__data_in
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_inst.data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__4__KET____DOT__fdp_inst__data_in
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_inst.data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__4__KET____DOT__fdp_inst__data_in
        [0U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_inst.data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__5__KET____DOT__fdp_inst__data_in
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_inst.data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__5__KET____DOT__fdp_inst__data_in
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_inst.data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__5__KET____DOT__fdp_inst__data_in
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_inst.data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__5__KET____DOT__fdp_inst__data_in
        [0U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_inst.data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__6__KET____DOT__fdp_inst__data_in
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_inst.data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__6__KET____DOT__fdp_inst__data_in
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_inst.data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__6__KET____DOT__fdp_inst__data_in
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_inst.data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__6__KET____DOT__fdp_inst__data_in
        [0U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_inst.data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__7__KET____DOT__fdp_inst__data_in
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_inst.data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__7__KET____DOT__fdp_inst__data_in
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_inst.data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__7__KET____DOT__fdp_inst__data_in
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_inst.data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__7__KET____DOT__fdp_inst__data_in
        [0U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_inst.data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__8__KET____DOT__fdp_inst__data_in
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_inst.data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__8__KET____DOT__fdp_inst__data_in
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_inst.data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__8__KET____DOT__fdp_inst__data_in
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_inst.data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__8__KET____DOT__fdp_inst__data_in
        [0U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_inst.data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__9__KET____DOT__fdp_inst__data_in
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_inst.data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__9__KET____DOT__fdp_inst__data_in
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_inst.data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__9__KET____DOT__fdp_inst__data_in
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_inst.data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__9__KET____DOT__fdp_inst__data_in
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff[9U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff[8U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff[7U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff[6U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff[5U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff[4U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t1[0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t1[1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t1[2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out[0U] 
        = (0xffU & vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t1[0U]);
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out[1U] 
        = (0xffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t1[0U] 
                    >> 8U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out[2U] 
        = (0xffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t1[0U] 
                    >> 0x10U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out[3U] 
        = (vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t1[0U] 
           >> 0x18U);
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out[4U] 
        = (0xffU & vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t1[1U]);
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out[5U] 
        = (0xffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t1[1U] 
                    >> 8U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out[6U] 
        = (0xffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t1[1U] 
                    >> 0x10U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out[7U] 
        = (vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t1[1U] 
           >> 0x18U);
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out[8U] 
        = (0xffU & vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t1[2U]);
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out[9U] 
        = (0xffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0_t1[2U] 
                    >> 8U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__fc1_weight_rom_U__DOT__q0 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__fc1_weight_rom_U__DOT__q0_t1;
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__data_out[0U] 
        = (0xffU & vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__fc1_weight_rom_U__DOT__q0_t1);
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__data_out[1U] 
        = (0xffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__fc1_weight_rom_U__DOT__q0_t1 
                    >> 8U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__data_out[2U] 
        = (0xffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__fc1_weight_rom_U__DOT__q0_t1 
                    >> 0x10U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__data_out[3U] 
        = (vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__fc1_weight_rom_U__DOT__q0_t1 
           >> 0x18U);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__reg_in_valid) 
           & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__acc_data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__acc_data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__acc_data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__acc_data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__acc_data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__acc_data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__acc_data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__acc_data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__acc_data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__dout_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_inst.data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_inst.data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_inst.data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_inst.data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_inst.data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_inst.data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_inst.data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_inst.data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst.data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst.data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__data_in_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__acc_join_ready 
        = (0x3ffU == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__reg_ready));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__data_out_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__acc_data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in[9U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff
        [9U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in[8U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff
        [8U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in[7U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff
        [7U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in[6U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff
        [6U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in[5U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff
        [5U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in[4U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff
        [4U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_buff
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__counter 
        = __Vdly__fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__counter;
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_vector[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0[0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_vector[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0[1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_vector[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0[2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__q0[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0[0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__q0[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0[1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__q0[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__q0[2U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out[9U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out
        [9U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out[8U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out
        [8U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out[7U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out
        [7U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out[6U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out
        [6U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out[5U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out
        [5U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out[4U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out
        [4U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out
        [3U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out
        [2U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out
        [1U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__data_out
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__counter 
        = __Vdly__fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__counter;
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__data_vector 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__fc1_weight_rom_U__DOT__q0;
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__q0 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__fc1_weight_rom_U__DOT__q0;
    __Vilp = 0U;
    while ((__Vilp <= 0x27U)) {
        vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_weight_source_0__data_out[__Vilp] 
            = vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__data_out
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__acc_join_inst__DOT__data_out_ready 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__acc_join_ready;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [4U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [5U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [6U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [7U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [8U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [9U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_in[9U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [9U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_in[8U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [8U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_in[7U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [7U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_in[6U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [6U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_in[5U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [5U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_in[4U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [4U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                 [0U] >> 0x14U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                 [1U] >> 0x14U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                 [2U] >> 0x14U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                 [3U] >> 0x14U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                 [4U] >> 0x14U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                 [5U] >> 0x14U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                 [6U] >> 0x14U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                 [7U] >> 0x14U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                 [8U] >> 0x14U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                 [9U] >> 0x14U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__address0 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__counter;
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias[9U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out
        [9U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias[8U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out
        [8U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias[7U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out
        [7U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias[6U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out
        [6U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias[5U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out
        [5U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias[4U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out
        [4U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_bias_source_0__data_out
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__address0 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__counter;
    __Vilp = 0U;
    while ((__Vilp <= 0x27U)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_weight[__Vilp] 
            = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_weight_source_0__data_out
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__fc1_bias_rom_U__DOT__addr0 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias_source_0__DOT__fc1_bias_mem__DOT__address0;
    vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias[9U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias
        [9U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias[8U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias
        [8U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias[7U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias
        [7U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias[6U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias
        [6U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias[5U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias
        [5U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias[4U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias
        [4U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias
        [3U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias
        [2U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias
        [1U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_bias
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__fc1_weight_rom_U__DOT__addr0 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_weight_source_0__DOT__fc1_weight_mem__DOT__address0;
    __Vilp = 0U;
    while ((__Vilp <= 0x27U)) {
        vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight[__Vilp] 
            = vlSelf->fixed_linear_sync_top__DOT__fc1_weight
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign)
            ? (~ ((0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                   [0U]) - (IData)(1U))) : (0xfffffU 
                                            & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                                            [0U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_data 
        = (0xfffffU & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__lsb_below 
        = ((4U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                  >> 2U)) | ((2U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                    >> 2U)) | (0U != 
                                               (7U 
                                                & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0))));
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign)
            ? (~ ((0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                   [1U]) - (IData)(1U))) : (0xfffffU 
                                            & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                                            [1U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_data 
        = (0xfffffU & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__lsb_below 
        = ((4U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                  >> 2U)) | ((2U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                    >> 2U)) | (0U != 
                                               (7U 
                                                & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0))));
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign)
            ? (~ ((0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                   [2U]) - (IData)(1U))) : (0xfffffU 
                                            & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                                            [2U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_data 
        = (0xfffffU & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__lsb_below 
        = ((4U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                  >> 2U)) | ((2U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                    >> 2U)) | (0U != 
                                               (7U 
                                                & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0))));
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign)
            ? (~ ((0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                   [3U]) - (IData)(1U))) : (0xfffffU 
                                            & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                                            [3U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_data 
        = (0xfffffU & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__lsb_below 
        = ((4U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                  >> 2U)) | ((2U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                    >> 2U)) | (0U != 
                                               (7U 
                                                & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0))));
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign)
            ? (~ ((0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                   [4U]) - (IData)(1U))) : (0xfffffU 
                                            & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                                            [4U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_data 
        = (0xfffffU & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__lsb_below 
        = ((4U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                  >> 2U)) | ((2U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                    >> 2U)) | (0U != 
                                               (7U 
                                                & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0))));
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign)
            ? (~ ((0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                   [5U]) - (IData)(1U))) : (0xfffffU 
                                            & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                                            [5U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_data 
        = (0xfffffU & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__lsb_below 
        = ((4U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                  >> 2U)) | ((2U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                    >> 2U)) | (0U != 
                                               (7U 
                                                & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0))));
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign)
            ? (~ ((0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                   [6U]) - (IData)(1U))) : (0xfffffU 
                                            & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                                            [6U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_data 
        = (0xfffffU & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__lsb_below 
        = ((4U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                  >> 2U)) | ((2U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                    >> 2U)) | (0U != 
                                               (7U 
                                                & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0))));
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign)
            ? (~ ((0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                   [7U]) - (IData)(1U))) : (0xfffffU 
                                            & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                                            [7U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_data 
        = (0xfffffU & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__lsb_below 
        = ((4U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                  >> 2U)) | ((2U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                    >> 2U)) | (0U != 
                                               (7U 
                                                & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0))));
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign)
            ? (~ ((0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                   [8U]) - (IData)(1U))) : (0xfffffU 
                                            & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                                            [8U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_data 
        = (0xfffffU & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__lsb_below 
        = ((4U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                  >> 2U)) | ((2U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                    >> 2U)) | (0U != 
                                               (7U 
                                                & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0))));
    fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign)
            ? (~ ((0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                   [9U]) - (IData)(1U))) : (0xfffffU 
                                            & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__fr_inst__data_in
                                            [9U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_data 
        = (0xfffffU & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__lsb_below 
        = ((4U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                  >> 2U)) | ((2U & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                    >> 2U)) | (0U != 
                                               (7U 
                                                & fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__bias[9U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [9U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__bias[8U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [8U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__bias[7U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [7U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__bias[6U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [6U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__bias[5U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [5U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__bias[4U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [4U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__bias[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__bias[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__bias[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__bias[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in[9U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [9U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in[8U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [8U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in[7U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [7U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in[6U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [6U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in[5U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [5U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in[4U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [4U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__bias
        [0U];
    __Vilp = 0U;
    while ((__Vilp <= 0x27U)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__weight[__Vilp] 
            = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
            [__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__current_weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__current_weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__current_weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__current_weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__current_weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [7U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__current_weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [6U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__current_weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [5U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__current_weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [4U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__current_weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0xbU];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__current_weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0xaU];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__current_weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [9U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__current_weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [8U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__current_weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0xfU];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__current_weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0xeU];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__current_weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0xdU];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__current_weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0xcU];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__current_weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x13U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__current_weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x12U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__current_weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x11U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__current_weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x10U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__current_weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x17U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__current_weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x16U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__current_weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x15U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__current_weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x14U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__current_weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x1bU];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__current_weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x1aU];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__current_weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x19U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__current_weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x18U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__current_weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x1fU];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__current_weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x1eU];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__current_weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x1dU];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__current_weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x1cU];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__current_weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x23U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__current_weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x22U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__current_weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x21U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__current_weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x20U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__current_weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x27U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__current_weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x26U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__current_weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x25U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__current_weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellinp__fc1_inst__weight
        [0x24U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__carry_in 
        = (1U & ((4U & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__lsb_below))
                  ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__lsb_below) 
                     >> 1U) : (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__lsb_below) 
                                >> 1U) & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__lsb_below))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__carry_in 
        = (1U & ((4U & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__lsb_below))
                  ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__lsb_below) 
                     >> 1U) : (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__lsb_below) 
                                >> 1U) & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__lsb_below))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__carry_in 
        = (1U & ((4U & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__lsb_below))
                  ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__lsb_below) 
                     >> 1U) : (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__lsb_below) 
                                >> 1U) & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__lsb_below))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__carry_in 
        = (1U & ((4U & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__lsb_below))
                  ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__lsb_below) 
                     >> 1U) : (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__lsb_below) 
                                >> 1U) & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__lsb_below))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__carry_in 
        = (1U & ((4U & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__lsb_below))
                  ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__lsb_below) 
                     >> 1U) : (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__lsb_below) 
                                >> 1U) & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__lsb_below))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__carry_in 
        = (1U & ((4U & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__lsb_below))
                  ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__lsb_below) 
                     >> 1U) : (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__lsb_below) 
                                >> 1U) & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__lsb_below))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__carry_in 
        = (1U & ((4U & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__lsb_below))
                  ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__lsb_below) 
                     >> 1U) : (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__lsb_below) 
                                >> 1U) & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__lsb_below))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__carry_in 
        = (1U & ((4U & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__lsb_below))
                  ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__lsb_below) 
                     >> 1U) : (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__lsb_below) 
                                >> 1U) & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__lsb_below))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__carry_in 
        = (1U & ((4U & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__lsb_below))
                  ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__lsb_below) 
                     >> 1U) : (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__lsb_below) 
                                >> 1U) & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__lsb_below))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__carry_in 
        = (1U & ((4U & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__lsb_below))
                  ? ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__lsb_below) 
                     >> 1U) : (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__lsb_below) 
                                >> 1U) & (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__lsb_below))));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [4U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [5U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [6U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [7U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [8U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [9U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_in[9U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [9U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_in[8U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [8U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_in[7U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [7U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_in[6U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [6U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_in[5U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [5U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_in[4U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [4U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_in[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_in[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_in[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_in[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                 [0U] >> 7U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                 [1U] >> 7U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                 [2U] >> 7U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                 [3U] >> 7U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                 [4U] >> 7U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                 [5U] >> 7U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                 [6U] >> 7U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                 [7U] >> 7U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                 [8U] >> 7U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign 
        = (1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                 [9U] >> 7U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__0__KET____DOT__fdp_inst__weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__current_weight
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__0__KET____DOT__fdp_inst__weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__current_weight
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__0__KET____DOT__fdp_inst__weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__current_weight
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__0__KET____DOT__fdp_inst__weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__current_weight
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__1__KET____DOT__fdp_inst__weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__current_weight
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__1__KET____DOT__fdp_inst__weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__current_weight
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__1__KET____DOT__fdp_inst__weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__current_weight
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__1__KET____DOT__fdp_inst__weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__current_weight
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__2__KET____DOT__fdp_inst__weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__current_weight
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__2__KET____DOT__fdp_inst__weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__current_weight
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__2__KET____DOT__fdp_inst__weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__current_weight
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__2__KET____DOT__fdp_inst__weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__current_weight
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__3__KET____DOT__fdp_inst__weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__current_weight
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__3__KET____DOT__fdp_inst__weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__current_weight
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__3__KET____DOT__fdp_inst__weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__current_weight
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__3__KET____DOT__fdp_inst__weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__current_weight
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__4__KET____DOT__fdp_inst__weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__current_weight
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__4__KET____DOT__fdp_inst__weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__current_weight
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__4__KET____DOT__fdp_inst__weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__current_weight
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__4__KET____DOT__fdp_inst__weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__current_weight
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__5__KET____DOT__fdp_inst__weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__current_weight
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__5__KET____DOT__fdp_inst__weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__current_weight
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__5__KET____DOT__fdp_inst__weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__current_weight
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__5__KET____DOT__fdp_inst__weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__current_weight
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__6__KET____DOT__fdp_inst__weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__current_weight
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__6__KET____DOT__fdp_inst__weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__current_weight
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__6__KET____DOT__fdp_inst__weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__current_weight
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__6__KET____DOT__fdp_inst__weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__current_weight
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__7__KET____DOT__fdp_inst__weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__current_weight
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__7__KET____DOT__fdp_inst__weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__current_weight
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__7__KET____DOT__fdp_inst__weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__current_weight
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__7__KET____DOT__fdp_inst__weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__current_weight
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__8__KET____DOT__fdp_inst__weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__current_weight
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__8__KET____DOT__fdp_inst__weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__current_weight
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__8__KET____DOT__fdp_inst__weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__current_weight
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__8__KET____DOT__fdp_inst__weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__current_weight
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__9__KET____DOT__fdp_inst__weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__current_weight
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__9__KET____DOT__fdp_inst__weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__current_weight
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__9__KET____DOT__fdp_inst__weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__current_weight
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__9__KET____DOT__fdp_inst__weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__current_weight
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3ffffffU & ((0xffffU & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                     >> 4U)) + (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__carry_in)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3ffffffU & ((0xffffU & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                     >> 4U)) + (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__carry_in)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3ffffffU & ((0xffffU & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                     >> 4U)) + (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__carry_in)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3ffffffU & ((0xffffU & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                     >> 4U)) + (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__carry_in)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3ffffffU & ((0xffffU & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                     >> 4U)) + (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__carry_in)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3ffffffU & ((0xffffU & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                     >> 4U)) + (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__carry_in)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3ffffffU & ((0xffffU & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                     >> 4U)) + (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__carry_in)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3ffffffU & ((0xffffU & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                     >> 4U)) + (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__carry_in)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3ffffffU & ((0xffffU & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                     >> 4U)) + (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__carry_in)));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3ffffffU & ((0xffffU & (fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT____VdfgTmp_hb67b9682__0 
                                     >> 4U)) + (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__carry_in)));
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst.weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__0__KET____DOT__fdp_inst__weight
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst.weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__0__KET____DOT__fdp_inst__weight
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst.weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__0__KET____DOT__fdp_inst__weight
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst.weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__0__KET____DOT__fdp_inst__weight
        [0U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst.weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__1__KET____DOT__fdp_inst__weight
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst.weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__1__KET____DOT__fdp_inst__weight
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst.weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__1__KET____DOT__fdp_inst__weight
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst.weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__1__KET____DOT__fdp_inst__weight
        [0U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_inst.weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__2__KET____DOT__fdp_inst__weight
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_inst.weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__2__KET____DOT__fdp_inst__weight
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_inst.weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__2__KET____DOT__fdp_inst__weight
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_inst.weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__2__KET____DOT__fdp_inst__weight
        [0U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_inst.weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__3__KET____DOT__fdp_inst__weight
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_inst.weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__3__KET____DOT__fdp_inst__weight
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_inst.weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__3__KET____DOT__fdp_inst__weight
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_inst.weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__3__KET____DOT__fdp_inst__weight
        [0U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_inst.weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__4__KET____DOT__fdp_inst__weight
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_inst.weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__4__KET____DOT__fdp_inst__weight
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_inst.weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__4__KET____DOT__fdp_inst__weight
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_inst.weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__4__KET____DOT__fdp_inst__weight
        [0U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_inst.weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__5__KET____DOT__fdp_inst__weight
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_inst.weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__5__KET____DOT__fdp_inst__weight
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_inst.weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__5__KET____DOT__fdp_inst__weight
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_inst.weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__5__KET____DOT__fdp_inst__weight
        [0U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_inst.weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__6__KET____DOT__fdp_inst__weight
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_inst.weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__6__KET____DOT__fdp_inst__weight
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_inst.weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__6__KET____DOT__fdp_inst__weight
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_inst.weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__6__KET____DOT__fdp_inst__weight
        [0U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_inst.weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__7__KET____DOT__fdp_inst__weight
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_inst.weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__7__KET____DOT__fdp_inst__weight
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_inst.weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__7__KET____DOT__fdp_inst__weight
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_inst.weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__7__KET____DOT__fdp_inst__weight
        [0U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_inst.weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__8__KET____DOT__fdp_inst__weight
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_inst.weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__8__KET____DOT__fdp_inst__weight
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_inst.weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__8__KET____DOT__fdp_inst__weight
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_inst.weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__8__KET____DOT__fdp_inst__weight
        [0U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_inst.weight[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__9__KET____DOT__fdp_inst__weight
        [3U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_inst.weight[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__9__KET____DOT__fdp_inst__weight
        [2U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_inst.weight[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__9__KET____DOT__fdp_inst__weight
        [1U];
    vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_inst.weight[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__linear__BRA__9__KET____DOT__fdp_inst__weight
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3ffffffU & ((IData)(1U) + (~ (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__rounded_out_data))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) {
        if ((8U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[0U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[0U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[0U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[0U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((7U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__data_out 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[0U] 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__rounded_out_data));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[0U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__rounded_out_data));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3ffffffU & ((IData)(1U) + (~ (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__rounded_out_data))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) {
        if ((8U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[1U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[1U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[1U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[1U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((7U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__data_out 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[1U] 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__rounded_out_data));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[1U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__rounded_out_data));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3ffffffU & ((IData)(1U) + (~ (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__rounded_out_data))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) {
        if ((8U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[2U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[2U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[2U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[2U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((7U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__data_out 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[2U] 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__rounded_out_data));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[2U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__rounded_out_data));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3ffffffU & ((IData)(1U) + (~ (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__rounded_out_data))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) {
        if ((8U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[3U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[3U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[3U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[3U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((7U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__data_out 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[3U] 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__rounded_out_data));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[3U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__rounded_out_data));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3ffffffU & ((IData)(1U) + (~ (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__rounded_out_data))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) {
        if ((8U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[4U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[4U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[4U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[4U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((7U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__data_out 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[4U] 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__rounded_out_data));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[4U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__rounded_out_data));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3ffffffU & ((IData)(1U) + (~ (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__rounded_out_data))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) {
        if ((8U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[5U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[5U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[5U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[5U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((7U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__data_out 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[5U] 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__rounded_out_data));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[5U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__rounded_out_data));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3ffffffU & ((IData)(1U) + (~ (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__rounded_out_data))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) {
        if ((8U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[6U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[6U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[6U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[6U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((7U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__data_out 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[6U] 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__rounded_out_data));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[6U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__rounded_out_data));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3ffffffU & ((IData)(1U) + (~ (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__rounded_out_data))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) {
        if ((8U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[7U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[7U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[7U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[7U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((7U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__data_out 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[7U] 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__rounded_out_data));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[7U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__rounded_out_data));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3ffffffU & ((IData)(1U) + (~ (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__rounded_out_data))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) {
        if ((8U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[8U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[8U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[8U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[8U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((7U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__data_out 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[8U] 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__rounded_out_data));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[8U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__rounded_out_data));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3ffffffU & ((IData)(1U) + (~ (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__rounded_out_data))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) {
        if ((8U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[9U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[9U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) 
                   << 3U);
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[9U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[9U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) 
                    << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((7U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__data_out 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[9U] 
            = (7U | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) 
                     << 3U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__rounded_out_data));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out[9U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) 
                << 3U) | (7U & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__rounded_out_data));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_data 
        = (0x7fU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign)
                     ? (~ ((0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                            [0U]) - (IData)(1U))) : 
                    (0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                     [0U])));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3fffffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_data) 
                          << 3U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3fffffffU & ((IData)(1U) + (~ (0xfffffU 
                                            & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_data) 
                                               << 3U)))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) {
        if ((0x100000U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[0U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
        } else if ((0U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_data))) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__data_out = 0x1ffc00U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[0U] = 0x1ffc00U;
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[0U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[0U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((0xfffffU <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__data_out 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[0U] 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[0U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__0__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_data 
        = (0x7fU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign)
                     ? (~ ((0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                            [1U]) - (IData)(1U))) : 
                    (0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                     [1U])));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3fffffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_data) 
                          << 3U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3fffffffU & ((IData)(1U) + (~ (0xfffffU 
                                            & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_data) 
                                               << 3U)))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) {
        if ((0x100000U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[1U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
        } else if ((0U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_data))) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__data_out = 0x1ffc00U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[1U] = 0x1ffc00U;
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[1U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[1U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((0xfffffU <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__data_out 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[1U] 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[1U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__1__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_data 
        = (0x7fU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign)
                     ? (~ ((0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                            [2U]) - (IData)(1U))) : 
                    (0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                     [2U])));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3fffffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_data) 
                          << 3U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3fffffffU & ((IData)(1U) + (~ (0xfffffU 
                                            & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_data) 
                                               << 3U)))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) {
        if ((0x100000U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[2U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
        } else if ((0U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_data))) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__data_out = 0x1ffc00U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[2U] = 0x1ffc00U;
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[2U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[2U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((0xfffffU <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__data_out 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[2U] 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[2U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__2__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_data 
        = (0x7fU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign)
                     ? (~ ((0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                            [3U]) - (IData)(1U))) : 
                    (0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                     [3U])));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3fffffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_data) 
                          << 3U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3fffffffU & ((IData)(1U) + (~ (0xfffffU 
                                            & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_data) 
                                               << 3U)))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) {
        if ((0x100000U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[3U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
        } else if ((0U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_data))) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__data_out = 0x1ffc00U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[3U] = 0x1ffc00U;
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[3U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[3U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((0xfffffU <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__data_out 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[3U] 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[3U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__3__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_data 
        = (0x7fU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign)
                     ? (~ ((0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                            [4U]) - (IData)(1U))) : 
                    (0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                     [4U])));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3fffffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_data) 
                          << 3U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3fffffffU & ((IData)(1U) + (~ (0xfffffU 
                                            & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_data) 
                                               << 3U)))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) {
        if ((0x100000U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[4U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
        } else if ((0U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_data))) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__data_out = 0x1ffc00U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[4U] = 0x1ffc00U;
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[4U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[4U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((0xfffffU <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__data_out 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[4U] 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[4U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__4__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_data 
        = (0x7fU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign)
                     ? (~ ((0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                            [5U]) - (IData)(1U))) : 
                    (0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                     [5U])));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3fffffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_data) 
                          << 3U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3fffffffU & ((IData)(1U) + (~ (0xfffffU 
                                            & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_data) 
                                               << 3U)))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) {
        if ((0x100000U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[5U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
        } else if ((0U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_data))) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__data_out = 0x1ffc00U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[5U] = 0x1ffc00U;
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[5U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[5U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((0xfffffU <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__data_out 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[5U] 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[5U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__5__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_data 
        = (0x7fU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign)
                     ? (~ ((0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                            [6U]) - (IData)(1U))) : 
                    (0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                     [6U])));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3fffffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_data) 
                          << 3U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3fffffffU & ((IData)(1U) + (~ (0xfffffU 
                                            & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_data) 
                                               << 3U)))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) {
        if ((0x100000U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[6U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
        } else if ((0U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_data))) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__data_out = 0x1ffc00U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[6U] = 0x1ffc00U;
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[6U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[6U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((0xfffffU <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__data_out 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[6U] 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[6U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__6__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_data 
        = (0x7fU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign)
                     ? (~ ((0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                            [7U]) - (IData)(1U))) : 
                    (0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                     [7U])));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3fffffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_data) 
                          << 3U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3fffffffU & ((IData)(1U) + (~ (0xfffffU 
                                            & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_data) 
                                               << 3U)))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) {
        if ((0x100000U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[7U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
        } else if ((0U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_data))) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__data_out = 0x1ffc00U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[7U] = 0x1ffc00U;
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[7U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[7U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((0xfffffU <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__data_out 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[7U] 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[7U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__7__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_data 
        = (0x7fU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign)
                     ? (~ ((0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                            [8U]) - (IData)(1U))) : 
                    (0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                     [8U])));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3fffffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_data) 
                          << 3U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3fffffffU & ((IData)(1U) + (~ (0xfffffU 
                                            & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_data) 
                                               << 3U)))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) {
        if ((0x100000U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[8U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
        } else if ((0U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_data))) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__data_out = 0x1ffc00U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[8U] = 0x1ffc00U;
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[8U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[8U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((0xfffffU <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__data_out 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[8U] 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[8U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__8__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_data 
        = (0x7fU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign)
                     ? (~ ((0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                            [9U]) - (IData)(1U))) : 
                    (0x7fU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__bias_cast__data_in
                     [9U])));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__rounded_out_data 
        = (0x3fffffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_data) 
                          << 3U));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__comp_rouded_out 
        = (0x3fffffffU & ((IData)(1U) + (~ (0xfffffU 
                                            & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_data) 
                                               << 3U)))));
    if (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) {
        if ((0x100000U <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__data_out 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[9U] 
                = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) 
                   << 0x14U);
        } else if ((0U == (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_data))) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__data_out = 0x1ffc00U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[9U] = 0x1ffc00U;
        } else if ((0U == vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__rounded_out_data)) {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__data_out = 0U;
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[9U] = 0U;
        } else {
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__data_out 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__comp_rouded_out));
            vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[9U] 
                = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) 
                    << 0x14U) | (0xfffffU & vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__comp_rouded_out));
        }
    } else if ((0xfffffU <= vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__rounded_out_data)) {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__data_out 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[9U] 
            = (0xfffffU | ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) 
                           << 0x14U));
    } else {
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__data_out 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
        vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out[9U] 
            = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_sign) 
                << 0x14U) | (0xfffffU & ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__parallel_round__BRA__9__KET____DOT__fr_inst__DOT__input_data) 
                                         << 3U)));
    }
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out[9U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out
        [9U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out[8U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out
        [8U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out[7U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out
        [7U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out[6U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out
        [6U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out[5U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out
        [5U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out[4U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out
        [4U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__fr_inst__DOT__data_out
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out[9U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out
        [9U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out[8U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out
        [8U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out[7U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out
        [7U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out[6U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out
        [6U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out[5U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out
        [5U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out[4U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out
        [4U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_cast__DOT__data_out
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0[9U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out
        [9U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0[8U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out
        [8U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0[7U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out
        [7U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0[6U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out
        [6U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0[5U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out
        [5U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0[4U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out
        [4U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__fr_inst__data_out
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext[9U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out
        [9U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext[8U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out
        [8U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext[7U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out
        [7U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext[6U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out
        [6U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext[5U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out
        [5U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext[4U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out
        [4U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellout__genblk2__DOT__bias_cast__data_out
        [0U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0[9U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0
        [9U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0[8U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0
        [8U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0[7U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0
        [7U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0[6U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0
        [6U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0[5U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0
        [5U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0[4U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0
        [4U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0[3U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0
        [3U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0[2U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0
        [2U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0[1U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0
        [1U];
    vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0[0U] 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__data_out_0
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__add 
        = (0x1fffffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out 
                        + vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext
                        [0U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__add 
        = (0x1fffffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out 
                        + vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext
                        [1U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__add 
        = (0x1fffffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out 
                        + vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext
                        [2U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__add 
        = (0x1fffffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out 
                        + vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext
                        [3U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__add 
        = (0x1fffffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out 
                        + vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext
                        [4U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__add 
        = (0x1fffffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out 
                        + vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext
                        [5U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__add 
        = (0x1fffffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out 
                        + vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext
                        [6U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__add 
        = (0x1fffffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out 
                        + vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext
                        [7U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__add 
        = (0x1fffffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out 
                        + vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext
                        [8U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__add 
        = (0x1fffffU & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__register_slice__DOT__data_out 
                        + vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__bias_sext
                        [9U]));
    vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0[9U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0
        [9U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0[8U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0
        [8U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0[7U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0
        [7U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0[6U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0
        [6U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0[5U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0
        [5U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0[4U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0
        [4U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0[3U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0
        [3U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0[2U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0
        [2U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0[1U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0
        [1U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_data_out_0[0U] 
        = vlSelf->fixed_linear_sync_top__DOT____Vcellout__fc1_inst__data_out_0
        [0U];
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__add;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__add;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__add;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__add;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__add;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__add;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__add;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__add;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__add;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__add;
}
