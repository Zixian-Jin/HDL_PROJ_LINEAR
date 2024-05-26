// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop_fixed_accumulator__IB12_I5.h"

VL_ATTR_COLD void Vtop_fixed_accumulator__IB12_I5___stl_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__0(Vtop_fixed_accumulator__IB12_I5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_fixed_accumulator__IB12_I5___stl_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fixed_accumulator_inst__0\n"); );
    // Body
    vlSelf->register_slice__DOT__data_in = vlSelf->reg_in;
    vlSelf->reg_in_ready = vlSelf->register_slice__DOT__data_in_ready;
    vlSelf->data_out = vlSelf->register_slice__DOT__data_out;
    vlSelf->reg_in_valid = (5U == (IData)(vlSelf->counter));
    vlSelf->data_in_ready = ((5U != (IData)(vlSelf->counter)) 
                             | (IData)(vlSelf->register_slice__DOT__data_in_ready));
    vlSelf->data_out_valid = vlSelf->register_slice__DOT__data_out_valid;
    vlSelf->register_slice__DOT__rst = vlSelf->rst;
    vlSelf->register_slice__DOT__clk = vlSelf->clk;
    vlSelf->register_slice__DOT__data_in_valid = vlSelf->reg_in_valid;
    vlSelf->register_slice__DOT__insert = ((IData)(vlSelf->reg_in_valid) 
                                           & (IData)(vlSelf->register_slice__DOT__data_in_ready));
}

VL_ATTR_COLD void Vtop_fixed_accumulator__IB12_I5___stl_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__0(Vtop_fixed_accumulator__IB12_I5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_fixed_accumulator__IB12_I5___stl_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fixed_accumulator_inst__0\n"); );
    // Body
    vlSelf->register_slice__DOT__data_in = vlSelf->reg_in;
    vlSelf->reg_in_ready = vlSelf->register_slice__DOT__data_in_ready;
    vlSelf->data_out_valid = vlSelf->register_slice__DOT__data_out_valid;
    vlSelf->data_out = vlSelf->register_slice__DOT__data_out;
    vlSelf->reg_in_valid = (5U == (IData)(vlSelf->counter));
    vlSelf->data_in_ready = ((5U != (IData)(vlSelf->counter)) 
                             | (IData)(vlSelf->register_slice__DOT__data_in_ready));
    vlSelf->register_slice__DOT__rst = vlSelf->rst;
    vlSelf->register_slice__DOT__clk = vlSelf->clk;
    vlSelf->register_slice__DOT__data_in_valid = vlSelf->reg_in_valid;
    vlSelf->register_slice__DOT__insert = ((IData)(vlSelf->reg_in_valid) 
                                           & (IData)(vlSelf->register_slice__DOT__data_in_ready));
}

VL_ATTR_COLD void Vtop_fixed_accumulator__IB12_I5___ctor_var_reset(Vtop_fixed_accumulator__IB12_I5* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_fixed_accumulator__IB12_I5___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->data_in = VL_RAND_RESET_I(18);
    vlSelf->data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->data_out = VL_RAND_RESET_I(21);
    vlSelf->data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->reg_in = VL_RAND_RESET_I(21);
    vlSelf->reg_in_valid = VL_RAND_RESET_I(1);
    vlSelf->reg_in_ready = VL_RAND_RESET_I(1);
    vlSelf->counter = VL_RAND_RESET_I(4);
    vlSelf->data_in_sext = VL_RAND_RESET_I(21);
    vlSelf->register_slice__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->register_slice__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->register_slice__DOT__data_in = VL_RAND_RESET_I(21);
    vlSelf->register_slice__DOT__data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->register_slice__DOT__data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->register_slice__DOT__data_out = VL_RAND_RESET_I(21);
    vlSelf->register_slice__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->register_slice__DOT__data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->register_slice__DOT__data_buffer_out = VL_RAND_RESET_I(21);
    vlSelf->register_slice__DOT__data_buffer_wren = VL_RAND_RESET_I(1);
    vlSelf->register_slice__DOT__data_out_wren = VL_RAND_RESET_I(1);
    vlSelf->register_slice__DOT__use_buffered_data = VL_RAND_RESET_I(1);
    vlSelf->register_slice__DOT__selected_data = VL_RAND_RESET_I(21);
    vlSelf->register_slice__DOT__state = 0;
    vlSelf->register_slice__DOT__state_next = 0;
    vlSelf->register_slice__DOT__insert = VL_RAND_RESET_I(1);
    vlSelf->register_slice__DOT__remove = VL_RAND_RESET_I(1);
    vlSelf->register_slice__DOT__load = VL_RAND_RESET_I(1);
    vlSelf->register_slice__DOT__flow = VL_RAND_RESET_I(1);
    vlSelf->register_slice__DOT__fill = VL_RAND_RESET_I(1);
    vlSelf->register_slice__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->register_slice__DOT__unload = VL_RAND_RESET_I(1);
}
