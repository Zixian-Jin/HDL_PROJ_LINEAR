// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
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
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_data_out_valid 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst.data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_data_out 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst.data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext 
        = ((0x1c0000U & ((- (IData)((1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_data_out 
                                           >> 0x11U)))) 
                         << 0x12U)) | vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_data_out);
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_data_out_valid 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_inst.data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_data_out 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_inst.data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext 
        = ((0x1c0000U & ((- (IData)((1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_data_out 
                                           >> 0x11U)))) 
                         << 0x12U)) | vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_data_out);
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    // Body
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_data_out_valid 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_inst.data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_data_out 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_inst.data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext 
        = ((0x1c0000U & ((- (IData)((1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_data_out 
                                           >> 0x11U)))) 
                         << 0x12U)) | vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_data_out);
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    // Body
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_data_out_valid 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_inst.data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_data_out 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_inst.data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext 
        = ((0x1c0000U & ((- (IData)((1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_data_out 
                                           >> 0x11U)))) 
                         << 0x12U)) | vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_data_out);
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    // Body
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_data_out_valid 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_inst.data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_data_out 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_inst.data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext 
        = ((0x1c0000U & ((- (IData)((1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_data_out 
                                           >> 0x11U)))) 
                         << 0x12U)) | vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_data_out);
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__7\n"); );
    // Body
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_data_out_valid 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_inst.data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_data_out 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_inst.data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext 
        = ((0x1c0000U & ((- (IData)((1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_data_out 
                                           >> 0x11U)))) 
                         << 0x12U)) | vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_data_out);
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__8\n"); );
    // Body
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_data_out_valid 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_inst.data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_data_out 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_inst.data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext 
        = ((0x1c0000U & ((- (IData)((1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_data_out 
                                           >> 0x11U)))) 
                         << 0x12U)) | vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_data_out);
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__9(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__9\n"); );
    // Body
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_data_out_valid 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_inst.data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_data_out 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_inst.data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext 
        = ((0x1c0000U & ((- (IData)((1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_data_out 
                                           >> 0x11U)))) 
                         << 0x12U)) | vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_data_out);
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__10(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__10\n"); );
    // Body
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_data_out_valid 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_inst.data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_data_out 
        = vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_inst.data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__data_in_valid 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_data_out_valid;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__data_in 
        = vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_data_out;
    vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fixed_accumulator_inst__DOT__data_in_sext 
        = ((0x1c0000U & ((- (IData)((1U & (vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_data_out 
                                           >> 0x11U)))) 
                         << 0x12U)) | vlSelf->fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_data_out);
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Body
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
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop_fixed_dot_product__I8_W8___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__0(Vtop_fixed_dot_product__I8_W8* vlSelf);
void Vtop_fixed_dot_product__I8_W8___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__1(Vtop_fixed_dot_product__I8_W8* vlSelf);
void Vtop_fixed_dot_product__I8_W8___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst__1(Vtop_fixed_dot_product__I8_W8* vlSelf);
void Vtop___024root___nba_sequent__TOP__11(Vtop___024root* vlSelf);
void Vtop_fixed_dot_product__I8_W8___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__2(Vtop_fixed_dot_product__I8_W8* vlSelf);
void Vtop_fixed_dot_product__I8_W8___nba_comb__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__0(Vtop_fixed_dot_product__I8_W8* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        Vtop_fixed_dot_product__I8_W8___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__0((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst));
        Vtop_fixed_dot_product__I8_W8___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__0((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst));
        Vtop_fixed_dot_product__I8_W8___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__0((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_inst));
        Vtop_fixed_dot_product__I8_W8___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__0((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_inst));
        Vtop_fixed_dot_product__I8_W8___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__0((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_inst));
        Vtop_fixed_dot_product__I8_W8___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__0((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_inst));
        Vtop_fixed_dot_product__I8_W8___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__0((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_inst));
        Vtop_fixed_dot_product__I8_W8___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__0((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_inst));
        Vtop_fixed_dot_product__I8_W8___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__0((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_inst));
        Vtop_fixed_dot_product__I8_W8___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__0((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_inst));
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop_fixed_dot_product__I8_W8___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__1((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst));
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vtop_fixed_dot_product__I8_W8___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst__1((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst));
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        Vtop_fixed_dot_product__I8_W8___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst__1((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_inst));
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        Vtop_fixed_dot_product__I8_W8___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst__1((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_inst));
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        Vtop_fixed_dot_product__I8_W8___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst__1((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_inst));
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(6U)) {
        Vtop_fixed_dot_product__I8_W8___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst__1((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_inst));
        Vtop___024root___nba_sequent__TOP__6(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(7U)) {
        Vtop_fixed_dot_product__I8_W8___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst__1((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_inst));
        Vtop___024root___nba_sequent__TOP__7(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(8U)) {
        Vtop_fixed_dot_product__I8_W8___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst__1((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_inst));
        Vtop___024root___nba_sequent__TOP__8(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(9U)) {
        Vtop_fixed_dot_product__I8_W8___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst__1((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_inst));
        Vtop___024root___nba_sequent__TOP__9(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0xaU)) {
        Vtop_fixed_dot_product__I8_W8___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst__1((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_inst));
        Vtop___024root___nba_sequent__TOP__10(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__11(vlSelf);
        Vtop_fixed_dot_product__I8_W8___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__2((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst));
        Vtop_fixed_dot_product__I8_W8___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__2((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst));
        Vtop_fixed_dot_product__I8_W8___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__2((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_inst));
        Vtop_fixed_dot_product__I8_W8___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__2((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_inst));
        Vtop_fixed_dot_product__I8_W8___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__2((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_inst));
        Vtop_fixed_dot_product__I8_W8___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__2((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_inst));
        Vtop_fixed_dot_product__I8_W8___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__2((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_inst));
        Vtop_fixed_dot_product__I8_W8___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__2((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_inst));
        Vtop_fixed_dot_product__I8_W8___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__2((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_inst));
        Vtop_fixed_dot_product__I8_W8___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__2((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_inst));
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vtop_fixed_dot_product__I8_W8___nba_comb__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__0((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst));
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(2U))) {
        Vtop_fixed_dot_product__I8_W8___nba_comb__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__0((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst));
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(3U))) {
        Vtop_fixed_dot_product__I8_W8___nba_comb__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__0((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__2__KET____DOT__fdp_inst));
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(4U))) {
        Vtop_fixed_dot_product__I8_W8___nba_comb__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__0((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__3__KET____DOT__fdp_inst));
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(5U))) {
        Vtop_fixed_dot_product__I8_W8___nba_comb__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__0((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__4__KET____DOT__fdp_inst));
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(6U))) {
        Vtop_fixed_dot_product__I8_W8___nba_comb__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__0((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__5__KET____DOT__fdp_inst));
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(7U))) {
        Vtop_fixed_dot_product__I8_W8___nba_comb__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__0((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__6__KET____DOT__fdp_inst));
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(8U))) {
        Vtop_fixed_dot_product__I8_W8___nba_comb__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__0((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__7__KET____DOT__fdp_inst));
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(9U))) {
        Vtop_fixed_dot_product__I8_W8___nba_comb__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__0((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__8__KET____DOT__fdp_inst));
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(0xaU))) {
        Vtop_fixed_dot_product__I8_W8___nba_comb__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__0((&vlSymsp->TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__9__KET____DOT__fdp_inst));
    }
    if ((((((((((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(2U)) 
                | vlSelf->__VnbaTriggered.at(3U)) | vlSelf->__VnbaTriggered.at(4U)) 
              | vlSelf->__VnbaTriggered.at(5U)) | vlSelf->__VnbaTriggered.at(6U)) 
            | vlSelf->__VnbaTriggered.at(7U)) | vlSelf->__VnbaTriggered.at(8U)) 
          | vlSelf->__VnbaTriggered.at(9U)) | vlSelf->__VnbaTriggered.at(0xaU))) {
        Vtop___024root___nba_comb__TOP__0(vlSelf);
    }
}
