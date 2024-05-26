// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop_fixed_accumulator__IB12_I5.h"

VL_INLINE_OPT void Vtop_fixed_accumulator__IB12_I5___ico_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__0(Vtop_fixed_accumulator__IB12_I5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_fixed_accumulator__IB12_I5___ico_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__0\n"); );
    // Body
    vlSelf->register_slice__DOT__data_in = vlSelf->reg_in;
    vlSelf->reg_in_ready = vlSelf->register_slice__DOT__data_in_ready;
    vlSelf->data_out = vlSelf->register_slice__DOT__data_out;
    vlSelf->reg_in_valid = (5U == (IData)(vlSelf->counter));
    vlSelf->data_in_ready = ((5U != (IData)(vlSelf->counter)) 
                             | (IData)(vlSelf->register_slice__DOT__data_in_ready));
    vlSelf->data_out_valid = vlSelf->register_slice__DOT__data_out_valid;
    vlSelf->register_slice__DOT__clk = vlSelf->clk;
    vlSelf->register_slice__DOT__rst = vlSelf->rst;
    vlSelf->register_slice__DOT__data_in_valid = vlSelf->reg_in_valid;
    vlSelf->register_slice__DOT__insert = ((IData)(vlSelf->reg_in_valid) 
                                           & (IData)(vlSelf->register_slice__DOT__data_in_ready));
}

VL_INLINE_OPT void Vtop_fixed_accumulator__IB12_I5___ico_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__1(Vtop_fixed_accumulator__IB12_I5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_fixed_accumulator__IB12_I5___ico_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__1\n"); );
    // Body
    vlSelf->data_in_sext = ((0x1c0000U & ((- (IData)(
                                                     (1U 
                                                      & (vlSelf->data_in 
                                                         >> 0x11U)))) 
                                          << 0x12U)) 
                            | vlSelf->data_in);
    vlSelf->register_slice__DOT__data_out_ready = vlSelf->data_out_ready;
    vlSelf->register_slice__DOT__remove = ((IData)(vlSelf->register_slice__DOT__data_out_valid) 
                                           & (IData)(vlSelf->data_out_ready));
    vlSelf->register_slice__DOT__unload = ((1U == vlSelf->register_slice__DOT__state) 
                                           & (1U == 
                                              (((IData)(vlSelf->register_slice__DOT__insert) 
                                                << 1U) 
                                               | (IData)(vlSelf->register_slice__DOT__remove))));
    vlSelf->register_slice__DOT__fill = ((1U == vlSelf->register_slice__DOT__state) 
                                         & (2U == (
                                                   ((IData)(vlSelf->register_slice__DOT__insert) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->register_slice__DOT__remove))));
    vlSelf->register_slice__DOT__flow = ((1U == vlSelf->register_slice__DOT__state) 
                                         & (3U == (
                                                   ((IData)(vlSelf->register_slice__DOT__insert) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->register_slice__DOT__remove))));
    vlSelf->register_slice__DOT__load = ((0U == vlSelf->register_slice__DOT__state) 
                                         & (2U == (
                                                   ((IData)(vlSelf->register_slice__DOT__insert) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->register_slice__DOT__remove))));
    vlSelf->register_slice__DOT__flush = ((2U == vlSelf->register_slice__DOT__state) 
                                          & (1U == 
                                             (((IData)(vlSelf->register_slice__DOT__insert) 
                                               << 1U) 
                                              | (IData)(vlSelf->register_slice__DOT__remove))));
    vlSelf->register_slice__DOT__data_buffer_wren = vlSelf->register_slice__DOT__fill;
    vlSelf->register_slice__DOT__data_out_wren = (((IData)(vlSelf->register_slice__DOT__load) 
                                                   | (IData)(vlSelf->register_slice__DOT__flow)) 
                                                  | (IData)(vlSelf->register_slice__DOT__flush));
    vlSelf->register_slice__DOT__state_next = ((0U 
                                                == vlSelf->register_slice__DOT__state)
                                                ? ((IData)(vlSelf->register_slice__DOT__load)
                                                    ? 1U
                                                    : vlSelf->register_slice__DOT__state)
                                                : (
                                                   (1U 
                                                    == vlSelf->register_slice__DOT__state)
                                                    ? 
                                                   ((IData)(vlSelf->register_slice__DOT__fill)
                                                     ? 2U
                                                     : 
                                                    ((IData)(vlSelf->register_slice__DOT__flow)
                                                      ? 1U
                                                      : 
                                                     ((IData)(vlSelf->register_slice__DOT__unload)
                                                       ? 0U
                                                       : vlSelf->register_slice__DOT__state)))
                                                    : 
                                                   ((2U 
                                                     == vlSelf->register_slice__DOT__state)
                                                     ? 
                                                    ((IData)(vlSelf->register_slice__DOT__flush)
                                                      ? 1U
                                                      : vlSelf->register_slice__DOT__state)
                                                     : vlSelf->register_slice__DOT__state)));
    vlSelf->register_slice__DOT__use_buffered_data 
        = vlSelf->register_slice__DOT__flush;
    vlSelf->register_slice__DOT__selected_data = ((IData)(vlSelf->register_slice__DOT__use_buffered_data)
                                                   ? vlSelf->register_slice__DOT__data_buffer_out
                                                   : vlSelf->reg_in);
}

VL_INLINE_OPT void Vtop_fixed_accumulator__IB12_I5___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__0(Vtop_fixed_accumulator__IB12_I5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_fixed_accumulator__IB12_I5___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__0\n"); );
    // Init
    CData/*3:0*/ __Vdly__counter;
    __Vdly__counter = 0;
    IData/*20:0*/ __Vdly__reg_in;
    __Vdly__reg_in = 0;
    // Body
    __Vdly__reg_in = vlSelf->reg_in;
    __Vdly__counter = vlSelf->counter;
    if (vlSelf->rst) {
        __Vdly__reg_in = 0U;
        __Vdly__counter = 0U;
        vlSelf->register_slice__DOT__data_buffer_out = 0U;
        vlSelf->register_slice__DOT__data_out = 0U;
        vlSelf->register_slice__DOT__state = 0U;
    } else {
        if (vlSelf->reg_in_valid) {
            if (vlSelf->reg_in_ready) {
                if (vlSelf->data_in_valid) {
                    __Vdly__reg_in = vlSelf->data_in_sext;
                    __Vdly__counter = 1U;
                } else {
                    __Vdly__reg_in = 0U;
                    __Vdly__counter = 0U;
                }
            }
        } else if (((IData)(vlSelf->data_in_valid) 
                    & (IData)(vlSelf->data_in_ready))) {
            __Vdly__reg_in = (0x1fffffU & (vlSelf->reg_in 
                                           + vlSelf->data_in_sext));
            __Vdly__counter = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->counter)));
        }
        if (vlSelf->register_slice__DOT__data_buffer_wren) {
            vlSelf->register_slice__DOT__data_buffer_out 
                = vlSelf->reg_in;
        }
        if (vlSelf->register_slice__DOT__data_out_wren) {
            vlSelf->register_slice__DOT__data_out = vlSelf->register_slice__DOT__selected_data;
        }
        vlSelf->register_slice__DOT__state = vlSelf->register_slice__DOT__state_next;
    }
    vlSelf->register_slice__DOT__data_in_ready = ((~ (IData)(vlSelf->rst)) 
                                                  & (2U 
                                                     != vlSelf->register_slice__DOT__state_next));
    vlSelf->register_slice__DOT__data_out_valid = (
                                                   (~ (IData)(vlSelf->rst)) 
                                                   & (0U 
                                                      != vlSelf->register_slice__DOT__state_next));
    vlSelf->counter = __Vdly__counter;
    vlSelf->reg_in = __Vdly__reg_in;
    vlSelf->reg_in_valid = (5U == (IData)(vlSelf->counter));
    vlSelf->register_slice__DOT__data_in = vlSelf->reg_in;
    vlSelf->data_out = vlSelf->register_slice__DOT__data_out;
    vlSelf->reg_in_ready = vlSelf->register_slice__DOT__data_in_ready;
    vlSelf->data_in_ready = ((5U != (IData)(vlSelf->counter)) 
                             | (IData)(vlSelf->register_slice__DOT__data_in_ready));
    vlSelf->data_out_valid = vlSelf->register_slice__DOT__data_out_valid;
    vlSelf->register_slice__DOT__data_in_valid = vlSelf->reg_in_valid;
    vlSelf->register_slice__DOT__insert = ((IData)(vlSelf->reg_in_valid) 
                                           & (IData)(vlSelf->register_slice__DOT__data_in_ready));
}

VL_INLINE_OPT void Vtop_fixed_accumulator__IB12_I5___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__1(Vtop_fixed_accumulator__IB12_I5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_fixed_accumulator__IB12_I5___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__1\n"); );
    // Body
    vlSelf->data_in_sext = ((0x1c0000U & ((- (IData)(
                                                     (1U 
                                                      & (vlSelf->data_in 
                                                         >> 0x11U)))) 
                                          << 0x12U)) 
                            | vlSelf->data_in);
}

VL_INLINE_OPT void Vtop_fixed_accumulator__IB12_I5___nba_comb__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__0(Vtop_fixed_accumulator__IB12_I5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_fixed_accumulator__IB12_I5___nba_comb__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__0\n"); );
    // Body
    vlSelf->register_slice__DOT__data_out_ready = vlSelf->data_out_ready;
    vlSelf->register_slice__DOT__remove = ((IData)(vlSelf->register_slice__DOT__data_out_valid) 
                                           & (IData)(vlSelf->data_out_ready));
    vlSelf->register_slice__DOT__unload = ((1U == vlSelf->register_slice__DOT__state) 
                                           & (1U == 
                                              (((IData)(vlSelf->register_slice__DOT__insert) 
                                                << 1U) 
                                               | (IData)(vlSelf->register_slice__DOT__remove))));
    vlSelf->register_slice__DOT__fill = ((1U == vlSelf->register_slice__DOT__state) 
                                         & (2U == (
                                                   ((IData)(vlSelf->register_slice__DOT__insert) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->register_slice__DOT__remove))));
    vlSelf->register_slice__DOT__flow = ((1U == vlSelf->register_slice__DOT__state) 
                                         & (3U == (
                                                   ((IData)(vlSelf->register_slice__DOT__insert) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->register_slice__DOT__remove))));
    vlSelf->register_slice__DOT__load = ((0U == vlSelf->register_slice__DOT__state) 
                                         & (2U == (
                                                   ((IData)(vlSelf->register_slice__DOT__insert) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->register_slice__DOT__remove))));
    vlSelf->register_slice__DOT__flush = ((2U == vlSelf->register_slice__DOT__state) 
                                          & (1U == 
                                             (((IData)(vlSelf->register_slice__DOT__insert) 
                                               << 1U) 
                                              | (IData)(vlSelf->register_slice__DOT__remove))));
    vlSelf->register_slice__DOT__data_buffer_wren = vlSelf->register_slice__DOT__fill;
    vlSelf->register_slice__DOT__data_out_wren = (((IData)(vlSelf->register_slice__DOT__load) 
                                                   | (IData)(vlSelf->register_slice__DOT__flow)) 
                                                  | (IData)(vlSelf->register_slice__DOT__flush));
    vlSelf->register_slice__DOT__state_next = ((0U 
                                                == vlSelf->register_slice__DOT__state)
                                                ? ((IData)(vlSelf->register_slice__DOT__load)
                                                    ? 1U
                                                    : vlSelf->register_slice__DOT__state)
                                                : (
                                                   (1U 
                                                    == vlSelf->register_slice__DOT__state)
                                                    ? 
                                                   ((IData)(vlSelf->register_slice__DOT__fill)
                                                     ? 2U
                                                     : 
                                                    ((IData)(vlSelf->register_slice__DOT__flow)
                                                      ? 1U
                                                      : 
                                                     ((IData)(vlSelf->register_slice__DOT__unload)
                                                       ? 0U
                                                       : vlSelf->register_slice__DOT__state)))
                                                    : 
                                                   ((2U 
                                                     == vlSelf->register_slice__DOT__state)
                                                     ? 
                                                    ((IData)(vlSelf->register_slice__DOT__flush)
                                                      ? 1U
                                                      : vlSelf->register_slice__DOT__state)
                                                     : vlSelf->register_slice__DOT__state)));
    vlSelf->register_slice__DOT__use_buffered_data 
        = vlSelf->register_slice__DOT__flush;
    vlSelf->register_slice__DOT__selected_data = ((IData)(vlSelf->register_slice__DOT__use_buffered_data)
                                                   ? vlSelf->register_slice__DOT__data_buffer_out
                                                   : vlSelf->reg_in);
}

VL_INLINE_OPT void Vtop_fixed_accumulator__IB12_I5___ico_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__0(Vtop_fixed_accumulator__IB12_I5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_fixed_accumulator__IB12_I5___ico_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__0\n"); );
    // Body
    vlSelf->register_slice__DOT__data_in = vlSelf->reg_in;
    vlSelf->reg_in_ready = vlSelf->register_slice__DOT__data_in_ready;
    vlSelf->data_out_valid = vlSelf->register_slice__DOT__data_out_valid;
    vlSelf->data_out = vlSelf->register_slice__DOT__data_out;
    vlSelf->reg_in_valid = (5U == (IData)(vlSelf->counter));
    vlSelf->data_in_ready = ((5U != (IData)(vlSelf->counter)) 
                             | (IData)(vlSelf->register_slice__DOT__data_in_ready));
    vlSelf->register_slice__DOT__clk = vlSelf->clk;
    vlSelf->register_slice__DOT__rst = vlSelf->rst;
    vlSelf->register_slice__DOT__data_in_valid = vlSelf->reg_in_valid;
    vlSelf->register_slice__DOT__insert = ((IData)(vlSelf->reg_in_valid) 
                                           & (IData)(vlSelf->register_slice__DOT__data_in_ready));
}

VL_INLINE_OPT void Vtop_fixed_accumulator__IB12_I5___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__0(Vtop_fixed_accumulator__IB12_I5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_fixed_accumulator__IB12_I5___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__0\n"); );
    // Init
    CData/*3:0*/ __Vdly__counter;
    __Vdly__counter = 0;
    IData/*20:0*/ __Vdly__reg_in;
    __Vdly__reg_in = 0;
    // Body
    __Vdly__reg_in = vlSelf->reg_in;
    __Vdly__counter = vlSelf->counter;
    if (vlSelf->rst) {
        __Vdly__reg_in = 0U;
        __Vdly__counter = 0U;
        vlSelf->register_slice__DOT__data_buffer_out = 0U;
        vlSelf->register_slice__DOT__data_out = 0U;
        vlSelf->register_slice__DOT__state = 0U;
    } else {
        if (vlSelf->reg_in_valid) {
            if (vlSelf->reg_in_ready) {
                if (vlSelf->data_in_valid) {
                    __Vdly__reg_in = vlSelf->data_in_sext;
                    __Vdly__counter = 1U;
                } else {
                    __Vdly__reg_in = 0U;
                    __Vdly__counter = 0U;
                }
            }
        } else if (((IData)(vlSelf->data_in_valid) 
                    & (IData)(vlSelf->data_in_ready))) {
            __Vdly__reg_in = (0x1fffffU & (vlSelf->reg_in 
                                           + vlSelf->data_in_sext));
            __Vdly__counter = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->counter)));
        }
        if (vlSelf->register_slice__DOT__data_buffer_wren) {
            vlSelf->register_slice__DOT__data_buffer_out 
                = vlSelf->reg_in;
        }
        if (vlSelf->register_slice__DOT__data_out_wren) {
            vlSelf->register_slice__DOT__data_out = vlSelf->register_slice__DOT__selected_data;
        }
        vlSelf->register_slice__DOT__state = vlSelf->register_slice__DOT__state_next;
    }
    vlSelf->register_slice__DOT__data_out_valid = (
                                                   (~ (IData)(vlSelf->rst)) 
                                                   & (0U 
                                                      != vlSelf->register_slice__DOT__state_next));
    vlSelf->register_slice__DOT__data_in_ready = ((~ (IData)(vlSelf->rst)) 
                                                  & (2U 
                                                     != vlSelf->register_slice__DOT__state_next));
    vlSelf->counter = __Vdly__counter;
    vlSelf->reg_in = __Vdly__reg_in;
    vlSelf->reg_in_valid = (5U == (IData)(vlSelf->counter));
    vlSelf->register_slice__DOT__data_in = vlSelf->reg_in;
    vlSelf->data_out = vlSelf->register_slice__DOT__data_out;
    vlSelf->data_out_valid = vlSelf->register_slice__DOT__data_out_valid;
    vlSelf->reg_in_ready = vlSelf->register_slice__DOT__data_in_ready;
    vlSelf->data_in_ready = ((5U != (IData)(vlSelf->counter)) 
                             | (IData)(vlSelf->register_slice__DOT__data_in_ready));
    vlSelf->register_slice__DOT__data_in_valid = vlSelf->reg_in_valid;
    vlSelf->register_slice__DOT__insert = ((IData)(vlSelf->reg_in_valid) 
                                           & (IData)(vlSelf->register_slice__DOT__data_in_ready));
}

VL_INLINE_OPT void Vtop_fixed_accumulator__IB12_I5___nba_comb__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__0(Vtop_fixed_accumulator__IB12_I5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_fixed_accumulator__IB12_I5___nba_comb__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__0\n"); );
    // Body
    vlSelf->register_slice__DOT__data_out_ready = vlSelf->data_out_ready;
}

VL_INLINE_OPT void Vtop_fixed_accumulator__IB12_I5___nba_comb__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__1(Vtop_fixed_accumulator__IB12_I5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_fixed_accumulator__IB12_I5___nba_comb__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__1\n"); );
    // Body
    vlSelf->register_slice__DOT__remove = ((IData)(vlSelf->register_slice__DOT__data_out_valid) 
                                           & (IData)(vlSelf->data_out_ready));
    vlSelf->register_slice__DOT__unload = ((1U == vlSelf->register_slice__DOT__state) 
                                           & (1U == 
                                              (((IData)(vlSelf->register_slice__DOT__insert) 
                                                << 1U) 
                                               | (IData)(vlSelf->register_slice__DOT__remove))));
    vlSelf->register_slice__DOT__fill = ((1U == vlSelf->register_slice__DOT__state) 
                                         & (2U == (
                                                   ((IData)(vlSelf->register_slice__DOT__insert) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->register_slice__DOT__remove))));
    vlSelf->register_slice__DOT__flow = ((1U == vlSelf->register_slice__DOT__state) 
                                         & (3U == (
                                                   ((IData)(vlSelf->register_slice__DOT__insert) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->register_slice__DOT__remove))));
    vlSelf->register_slice__DOT__load = ((0U == vlSelf->register_slice__DOT__state) 
                                         & (2U == (
                                                   ((IData)(vlSelf->register_slice__DOT__insert) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->register_slice__DOT__remove))));
    vlSelf->register_slice__DOT__flush = ((2U == vlSelf->register_slice__DOT__state) 
                                          & (1U == 
                                             (((IData)(vlSelf->register_slice__DOT__insert) 
                                               << 1U) 
                                              | (IData)(vlSelf->register_slice__DOT__remove))));
    vlSelf->register_slice__DOT__data_buffer_wren = vlSelf->register_slice__DOT__fill;
    vlSelf->register_slice__DOT__data_out_wren = (((IData)(vlSelf->register_slice__DOT__load) 
                                                   | (IData)(vlSelf->register_slice__DOT__flow)) 
                                                  | (IData)(vlSelf->register_slice__DOT__flush));
    vlSelf->register_slice__DOT__state_next = ((0U 
                                                == vlSelf->register_slice__DOT__state)
                                                ? ((IData)(vlSelf->register_slice__DOT__load)
                                                    ? 1U
                                                    : vlSelf->register_slice__DOT__state)
                                                : (
                                                   (1U 
                                                    == vlSelf->register_slice__DOT__state)
                                                    ? 
                                                   ((IData)(vlSelf->register_slice__DOT__fill)
                                                     ? 2U
                                                     : 
                                                    ((IData)(vlSelf->register_slice__DOT__flow)
                                                      ? 1U
                                                      : 
                                                     ((IData)(vlSelf->register_slice__DOT__unload)
                                                       ? 0U
                                                       : vlSelf->register_slice__DOT__state)))
                                                    : 
                                                   ((2U 
                                                     == vlSelf->register_slice__DOT__state)
                                                     ? 
                                                    ((IData)(vlSelf->register_slice__DOT__flush)
                                                      ? 1U
                                                      : vlSelf->register_slice__DOT__state)
                                                     : vlSelf->register_slice__DOT__state)));
    vlSelf->register_slice__DOT__use_buffered_data 
        = vlSelf->register_slice__DOT__flush;
    vlSelf->register_slice__DOT__selected_data = ((IData)(vlSelf->register_slice__DOT__use_buffered_data)
                                                   ? vlSelf->register_slice__DOT__data_buffer_out
                                                   : vlSelf->reg_in);
}
