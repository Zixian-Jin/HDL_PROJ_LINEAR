// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__11(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__11\n"); );
    // Init
    CData/*1:0*/ fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__acc_join_inst__data_in_valid;
    fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__acc_join_inst__data_in_valid = 0;
    // Body
    fixed_linear_sync_top__DOT__fc1_inst__DOT____Vcellinp__genblk2__DOT__acc_join_inst__data_in_valid 
        = (((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_bias_valid) 
            << 1U) | (IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__acc_data_out_valid));
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
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__0__KET____DOT__add);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__1__KET____DOT__add);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__2__KET____DOT__add);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__3__KET____DOT__add);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__4__KET____DOT__add);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__5__KET____DOT__add);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__6__KET____DOT__add);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__7__KET____DOT__add);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__8__KET____DOT__add);
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__genblk2__DOT__add_bias__BRA__9__KET____DOT__add);
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
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_ico(Vtop___024root* vlSelf);
void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___eval_nba(Vtop___024root* vlSelf);

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<11> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vtop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/zixian/HDL_PROJ_LINEAR/top/hardware/rtl/fixed_linear_sync_test/fixed_linear_sync_top.sv", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vtop___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/zixian/HDL_PROJ_LINEAR/top/hardware/rtl/fixed_linear_sync_test/fixed_linear_sync_top.sv", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/zixian/HDL_PROJ_LINEAR/top/hardware/rtl/fixed_linear_sync_test/fixed_linear_sync_top.sv", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
