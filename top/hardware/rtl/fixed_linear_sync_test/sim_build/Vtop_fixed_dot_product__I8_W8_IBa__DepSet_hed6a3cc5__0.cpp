// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop_fixed_dot_product__I8_W8_IBa.h"

VL_INLINE_OPT void Vtop_fixed_dot_product__I8_W8_IBa___ico_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__0(Vtop_fixed_dot_product__I8_W8_IBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_fixed_dot_product__I8_W8_IBa___ico_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__0\n"); );
    // Init
    CData/*1:0*/ fixed_vector_mult_inst__DOT____Vcellinp__join_inst__data_in_valid;
    fixed_vector_mult_inst__DOT____Vcellinp__join_inst__data_in_valid = 0;
    // Body
    vlSelf->fixed_vector_mult_inst__DOT__product_data_out[0U] 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[0U];
    vlSelf->fixed_vector_mult_inst__DOT__product_data_out[1U] 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[1U];
    vlSelf->fixed_vector_mult_inst__DOT__product_data_out[2U] 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[2U];
    vlSelf->fixed_vector_mult_inst__DOT__product_data_out[3U] 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[3U];
    vlSelf->fixed_vector_mult_inst__DOT__product_data_out[4U] 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[4U];
    vlSelf->fixed_vector_mult_inst__DOT__product_data_in_ready 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__4__KET____DOT__valid 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__cast_data 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_out;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__valid 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__valid 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__ready 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__valid 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__ready 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__ready 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__ready 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_vector_mult_inst__DOT__data_out_valid 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__cast_data 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_out;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_data 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out[0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out[1U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out[2U];
    vlSelf->fixed_vector_mult_inst__DOT__data_out[0U] 
        = (0xffffU & vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[0U]);
    vlSelf->fixed_vector_mult_inst__DOT__data_out[1U] 
        = (vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[0U] 
           >> 0x10U);
    vlSelf->fixed_vector_mult_inst__DOT__data_out[2U] 
        = (0xffffU & vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[1U]);
    vlSelf->fixed_vector_mult_inst__DOT__data_out[3U] 
        = (vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[1U] 
           >> 0x10U);
    vlSelf->fixed_vector_mult_inst__DOT__data_out[4U] 
        = (0xffffU & vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[2U]);
    vlSelf->fixed_vector_mult_inst__DOT__data_out[5U] 
        = (vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[2U] 
           >> 0x10U);
    vlSelf->fixed_vector_mult_inst__DOT__data_out[6U] 
        = (0xffffU & vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[3U]);
    vlSelf->fixed_vector_mult_inst__DOT__data_out[7U] 
        = (vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[3U] 
           >> 0x10U);
    vlSelf->fixed_vector_mult_inst__DOT__data_out[8U] 
        = (0xffffU & vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[4U]);
    vlSelf->fixed_vector_mult_inst__DOT__data_out[9U] 
        = (vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[4U] 
           >> 0x10U);
    vlSelf->fixed_vector_mult_inst__DOT__clk = vlSelf->clk;
    vlSelf->fixed_adder_tree_inst__DOT__clk = vlSelf->clk;
    vlSelf->fixed_vector_mult_inst__DOT__rst = vlSelf->rst;
    vlSelf->fixed_adder_tree_inst__DOT__rst = vlSelf->rst;
    vlSelf->sum_ready = vlSelf->data_out_ready;
    vlSelf->fixed_vector_mult_inst__DOT__weight_valid 
        = vlSelf->weight_valid;
    vlSelf->fixed_vector_mult_inst__DOT__data_in_valid 
        = vlSelf->data_in_valid;
    vlSelf->weight_ready = ((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in_ready) 
                            & ((~ (IData)(vlSelf->weight_valid)) 
                               | (IData)(vlSelf->data_in_valid)));
    vlSelf->data_in_ready = ((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in_ready) 
                             & ((~ (IData)(vlSelf->data_in_valid)) 
                                | (IData)(vlSelf->weight_valid)));
    fixed_vector_mult_inst__DOT____Vcellinp__join_inst__data_in_valid 
        = (((IData)(vlSelf->weight_valid) << 1U) | (IData)(vlSelf->data_in_valid));
    vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in[9U] 
        = vlSelf->data_in[9U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in[8U] 
        = vlSelf->data_in[8U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in[7U] 
        = vlSelf->data_in[7U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in[6U] 
        = vlSelf->data_in[6U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in[5U] 
        = vlSelf->data_in[5U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in[4U] 
        = vlSelf->data_in[4U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in[3U] 
        = vlSelf->data_in[3U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in[2U] 
        = vlSelf->data_in[2U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in[1U] 
        = vlSelf->data_in[1U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in[0U] 
        = vlSelf->data_in[0U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__weight[9U] 
        = vlSelf->weight[9U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__weight[8U] 
        = vlSelf->weight[8U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__weight[7U] 
        = vlSelf->weight[7U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__weight[6U] 
        = vlSelf->weight[6U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__weight[5U] 
        = vlSelf->weight[5U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__weight[4U] 
        = vlSelf->weight[4U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__weight[3U] 
        = vlSelf->weight[3U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__weight[2U] 
        = vlSelf->weight[2U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__weight[1U] 
        = vlSelf->weight[1U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__weight[0U] 
        = vlSelf->weight[0U];
    vlSelf->fixed_vector_mult_inst__DOT__join_inst__DOT__data_out_ready 
        = vlSelf->fixed_vector_mult_inst__DOT__product_data_in_ready;
    vlSelf->fixed_adder_tree_inst__DOT__data_out_valid 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__4__KET____DOT__valid;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__4__KET____DOT__data[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__cast_data;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__valid;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__valid) 
           & (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__valid;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__valid) 
           & (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__ready;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__ready));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__valid;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__valid) 
           & (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__ready;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__ready));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__ready;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__ready));
    vlSelf->fixed_adder_tree_inst__DOT__data_in_ready 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__ready;
    vlSelf->fixed_adder_tree_inst__DOT__data_in_valid 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out_valid;
    vlSelf->pv_valid = vlSelf->fixed_vector_mult_inst__DOT__data_out_valid;
    vlSelf->fixed_vector_mult_inst__DOT__product_data_out_valid 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__valid 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__data[0U] 
        = (0x7ffffU & (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__cast_data));
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__data[1U] 
        = (0x7ffffU & (IData)((vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__cast_data 
                               >> 0x13U)));
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__data[0U] 
        = (0x3ffffU & (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_data));
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__data[1U] 
        = (0x3ffffU & (IData)((vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_data 
                               >> 0x12U)));
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__data[2U] 
        = (0x3ffffU & (IData)((vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_data 
                               >> 0x24U)));
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data[0U] 
        = (0x1ffffU & vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[0U]);
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data[1U] 
        = (0x1ffffU & ((vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[1U] 
                        << 0xfU) | (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[0U] 
                                    >> 0x11U)));
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data[2U] 
        = (0x1ffffU & (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[1U] 
                       >> 2U));
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data[3U] 
        = (0x1ffffU & ((vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[2U] 
                        << 0xdU) | (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[1U] 
                                    >> 0x13U)));
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data[4U] 
        = (0x1ffffU & (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[2U] 
                       >> 4U));
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[9U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [9U];
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[8U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [8U];
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[7U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [7U];
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[6U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [6U];
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[5U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [5U];
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[4U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [4U];
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[3U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [3U];
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[2U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [2U];
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[1U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [1U];
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[0U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [0U];
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__clk 
        = vlSelf->fixed_vector_mult_inst__DOT__clk;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__clk 
        = vlSelf->fixed_adder_tree_inst__DOT__clk;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__clk 
        = vlSelf->fixed_adder_tree_inst__DOT__clk;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__clk 
        = vlSelf->fixed_adder_tree_inst__DOT__clk;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__clk 
        = vlSelf->fixed_adder_tree_inst__DOT__clk;
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__rst 
        = vlSelf->fixed_vector_mult_inst__DOT__rst;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__rst 
        = vlSelf->fixed_adder_tree_inst__DOT__rst;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__rst 
        = vlSelf->fixed_adder_tree_inst__DOT__rst;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__rst 
        = vlSelf->fixed_adder_tree_inst__DOT__rst;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__rst 
        = vlSelf->fixed_adder_tree_inst__DOT__rst;
    vlSelf->fixed_adder_tree_inst__DOT__data_out_ready 
        = vlSelf->sum_ready;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__4__KET____DOT__ready 
        = vlSelf->sum_ready;
    vlSelf->fixed_vector_mult_inst__DOT__weight_ready 
        = vlSelf->weight_ready;
    vlSelf->fixed_vector_mult_inst__DOT__data_in_ready 
        = vlSelf->data_in_ready;
    vlSelf->fixed_vector_mult_inst__DOT__join_inst__DOT__data_in_ready 
        = (((IData)(vlSelf->weight_ready) << 1U) | (IData)(vlSelf->data_in_ready));
    vlSelf->fixed_vector_mult_inst__DOT__join_inst__DOT__data_in_valid 
        = fixed_vector_mult_inst__DOT____Vcellinp__join_inst__data_in_valid;
    vlSelf->fixed_vector_mult_inst__DOT__join_inst__DOT__data_out_valid 
        = (3U == (IData)(fixed_vector_mult_inst__DOT____Vcellinp__join_inst__data_in_valid));
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__0__KET____DOT__fixed_mult_inst__DOT__data_a 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [0U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__1__KET____DOT__fixed_mult_inst__DOT__data_a 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [1U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__2__KET____DOT__fixed_mult_inst__DOT__data_a 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [2U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__3__KET____DOT__fixed_mult_inst__DOT__data_a 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [3U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__4__KET____DOT__fixed_mult_inst__DOT__data_a 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [4U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__5__KET____DOT__fixed_mult_inst__DOT__data_a 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [5U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__6__KET____DOT__fixed_mult_inst__DOT__data_a 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [6U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__7__KET____DOT__fixed_mult_inst__DOT__data_a 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [7U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__8__KET____DOT__fixed_mult_inst__DOT__data_a 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [8U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__9__KET____DOT__fixed_mult_inst__DOT__data_a 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [9U];
    vlSelf->fixed_vector_mult_inst__DOT__data_in[9U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [9U];
    vlSelf->fixed_vector_mult_inst__DOT__data_in[8U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [8U];
    vlSelf->fixed_vector_mult_inst__DOT__data_in[7U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [7U];
    vlSelf->fixed_vector_mult_inst__DOT__data_in[6U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [6U];
    vlSelf->fixed_vector_mult_inst__DOT__data_in[5U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [5U];
    vlSelf->fixed_vector_mult_inst__DOT__data_in[4U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [4U];
    vlSelf->fixed_vector_mult_inst__DOT__data_in[3U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [3U];
    vlSelf->fixed_vector_mult_inst__DOT__data_in[2U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [2U];
    vlSelf->fixed_vector_mult_inst__DOT__data_in[1U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [1U];
    vlSelf->fixed_vector_mult_inst__DOT__data_in[0U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [0U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__0__KET____DOT__fixed_mult_inst__DOT__data_b 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [0U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__1__KET____DOT__fixed_mult_inst__DOT__data_b 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [1U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__2__KET____DOT__fixed_mult_inst__DOT__data_b 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [2U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__3__KET____DOT__fixed_mult_inst__DOT__data_b 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [3U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__4__KET____DOT__fixed_mult_inst__DOT__data_b 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [4U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__5__KET____DOT__fixed_mult_inst__DOT__data_b 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [5U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__6__KET____DOT__fixed_mult_inst__DOT__data_b 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [6U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__7__KET____DOT__fixed_mult_inst__DOT__data_b 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [7U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__8__KET____DOT__fixed_mult_inst__DOT__data_b 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [8U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__9__KET____DOT__fixed_mult_inst__DOT__data_b 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [9U];
    vlSelf->fixed_vector_mult_inst__DOT__weight[9U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [9U];
    vlSelf->fixed_vector_mult_inst__DOT__weight[8U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [8U];
    vlSelf->fixed_vector_mult_inst__DOT__weight[7U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [7U];
    vlSelf->fixed_vector_mult_inst__DOT__weight[6U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [6U];
    vlSelf->fixed_vector_mult_inst__DOT__weight[5U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [5U];
    vlSelf->fixed_vector_mult_inst__DOT__weight[4U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [4U];
    vlSelf->fixed_vector_mult_inst__DOT__weight[3U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [3U];
    vlSelf->fixed_vector_mult_inst__DOT__weight[2U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [2U];
    vlSelf->fixed_vector_mult_inst__DOT__weight[1U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [1U];
    vlSelf->fixed_vector_mult_inst__DOT__weight[0U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [0U];
    vlSelf->fixed_vector_mult_inst__DOT__product_vector[0U] 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [0U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [0U]))));
    vlSelf->fixed_vector_mult_inst__DOT__product_vector[1U] 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [1U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [1U]))));
    vlSelf->fixed_vector_mult_inst__DOT__product_vector[2U] 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [2U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [2U]))));
    vlSelf->fixed_vector_mult_inst__DOT__product_vector[3U] 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [3U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [3U]))));
    vlSelf->fixed_vector_mult_inst__DOT__product_vector[4U] 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [4U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [4U]))));
    vlSelf->fixed_vector_mult_inst__DOT__product_vector[5U] 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [5U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [5U]))));
    vlSelf->fixed_vector_mult_inst__DOT__product_vector[6U] 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [6U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [6U]))));
    vlSelf->fixed_vector_mult_inst__DOT__product_vector[7U] 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [7U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [7U]))));
    vlSelf->fixed_vector_mult_inst__DOT__product_vector[8U] 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [8U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [8U]))));
    vlSelf->fixed_vector_mult_inst__DOT__product_vector[9U] 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [9U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [9U]))));
    vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__0__KET____DOT__fixed_mult_inst__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [0U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [0U]))));
    vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__1__KET____DOT__fixed_mult_inst__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [1U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [1U]))));
    vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__2__KET____DOT__fixed_mult_inst__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [2U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [2U]))));
    vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__3__KET____DOT__fixed_mult_inst__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [3U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [3U]))));
    vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__4__KET____DOT__fixed_mult_inst__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [4U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [4U]))));
    vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__5__KET____DOT__fixed_mult_inst__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [5U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [5U]))));
    vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__6__KET____DOT__fixed_mult_inst__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [6U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [6U]))));
    vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__7__KET____DOT__fixed_mult_inst__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [7U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [7U]))));
    vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__8__KET____DOT__fixed_mult_inst__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [8U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [8U]))));
    vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__9__KET____DOT__fixed_mult_inst__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [9U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [9U]))));
    vlSelf->data_out_valid = vlSelf->fixed_adder_tree_inst__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__data_out = 
        vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__4__KET____DOT__data
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__unload 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__fill 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__flow 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state) 
           & (3U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__load 
        = ((0U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__flush 
        = ((2U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__unload 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__fill 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__flow 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state) 
           & (3U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__load 
        = ((0U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__flush 
        = ((2U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_vector_mult_inst__DOT__product_data_out_ready 
        = vlSelf->fixed_adder_tree_inst__DOT__data_in_ready;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__valid;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__valid) 
           & (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__3__KET____DOT__layer__data_in[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__data
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__3__KET____DOT__layer__data_in[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__data
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__data
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__data
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__data
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in[4U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data
        [4U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in[3U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data
        [3U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data
        [0U];
    vlSelf->pv[9U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [9U];
    vlSelf->pv[8U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [8U];
    vlSelf->pv[7U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [7U];
    vlSelf->pv[6U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [6U];
    vlSelf->pv[5U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [5U];
    vlSelf->pv[4U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [4U];
    vlSelf->pv[3U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [3U];
    vlSelf->pv[2U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [2U];
    vlSelf->pv[1U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [1U];
    vlSelf->pv[0U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__4__KET____DOT__ready;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__4__KET____DOT__ready));
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_vector_mult_inst__DOT__join_inst__DOT__data_out_valid;
    vlSelf->fixed_vector_mult_inst__DOT__product_data_in_valid 
        = vlSelf->fixed_vector_mult_inst__DOT__join_inst__DOT__data_out_valid;
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_vector_mult_inst__DOT__join_inst__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__0__KET____DOT__fixed_mult_inst__DOT__product 
        = vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__0__KET____DOT__fixed_mult_inst__product;
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__1__KET____DOT__fixed_mult_inst__DOT__product 
        = vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__1__KET____DOT__fixed_mult_inst__product;
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__2__KET____DOT__fixed_mult_inst__DOT__product 
        = vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__2__KET____DOT__fixed_mult_inst__product;
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__3__KET____DOT__fixed_mult_inst__DOT__product 
        = vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__3__KET____DOT__fixed_mult_inst__product;
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__4__KET____DOT__fixed_mult_inst__DOT__product 
        = vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__4__KET____DOT__fixed_mult_inst__product;
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__5__KET____DOT__fixed_mult_inst__DOT__product 
        = vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__5__KET____DOT__fixed_mult_inst__product;
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__6__KET____DOT__fixed_mult_inst__DOT__product 
        = vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__6__KET____DOT__fixed_mult_inst__product;
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__7__KET____DOT__fixed_mult_inst__DOT__product 
        = vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__7__KET____DOT__fixed_mult_inst__product;
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__8__KET____DOT__fixed_mult_inst__DOT__product 
        = vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__8__KET____DOT__fixed_mult_inst__product;
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__9__KET____DOT__fixed_mult_inst__DOT__product 
        = vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__9__KET____DOT__fixed_mult_inst__product;
    vlSelf->fixed_vector_mult_inst__DOT__product_data_in[0U] 
        = (((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__1__KET____DOT__fixed_mult_inst__product) 
            << 0x10U) | (IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__0__KET____DOT__fixed_mult_inst__product));
    vlSelf->fixed_vector_mult_inst__DOT__product_data_in[1U] 
        = (((0xffffU & (IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__2__KET____DOT__fixed_mult_inst__product)) 
            | ((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__1__KET____DOT__fixed_mult_inst__product) 
               >> 0x10U)) | ((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__3__KET____DOT__fixed_mult_inst__product) 
                             << 0x10U));
    vlSelf->fixed_vector_mult_inst__DOT__product_data_in[2U] 
        = (((0xffffU & (IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__4__KET____DOT__fixed_mult_inst__product)) 
            | ((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__3__KET____DOT__fixed_mult_inst__product) 
               >> 0x10U)) | ((IData)((((QData)((IData)(
                                                       (((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__8__KET____DOT__fixed_mult_inst__product) 
                                                         << 0x10U) 
                                                        | (IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__7__KET____DOT__fixed_mult_inst__product)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__6__KET____DOT__fixed_mult_inst__product) 
                                                                     << 0x10U) 
                                                                    | (IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__5__KET____DOT__fixed_mult_inst__product)))))) 
                             << 0x10U));
    vlSelf->fixed_vector_mult_inst__DOT__product_data_in[3U] 
        = (((IData)((((QData)((IData)((((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__8__KET____DOT__fixed_mult_inst__product) 
                                        << 0x10U) | (IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__7__KET____DOT__fixed_mult_inst__product)))) 
                      << 0x20U) | (QData)((IData)((
                                                   ((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__6__KET____DOT__fixed_mult_inst__product) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__5__KET____DOT__fixed_mult_inst__product)))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    (((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__8__KET____DOT__fixed_mult_inst__product) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__7__KET____DOT__fixed_mult_inst__product)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__6__KET____DOT__fixed_mult_inst__product) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__5__KET____DOT__fixed_mult_inst__product))))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->fixed_vector_mult_inst__DOT__product_data_in[4U] 
        = (((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__9__KET____DOT__fixed_mult_inst__product) 
            << 0x10U) | ((IData)(((((QData)((IData)(
                                                    (((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__8__KET____DOT__fixed_mult_inst__product) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__7__KET____DOT__fixed_mult_inst__product)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__6__KET____DOT__fixed_mult_inst__product) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__5__KET____DOT__fixed_mult_inst__product))))) 
                                  >> 0x20U)) >> 0x10U));
    vlSelf->sum_valid = vlSelf->data_out_valid;
    vlSelf->data_out = vlSelf->fixed_adder_tree_inst__DOT__data_out;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_buffer_wren 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__fill;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out_wren 
        = (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__load) 
            | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__flow)) 
           | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__flush));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state_next 
        = ((0U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state)
            ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__load)
                ? 1U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state)
            : ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state)
                ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__fill)
                    ? 2U : ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__flow)
                             ? 1U : ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__unload)
                                      ? 0U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state)))
                : ((2U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state)
                    ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__flush)
                        ? 1U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state)
                    : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state)));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__use_buffered_data 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__flush;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_buffer_wren 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__fill;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_out_wren 
        = (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__load) 
            | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__flow)) 
           | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__flush));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state_next 
        = ((0U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state)
            ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__load)
                ? 1U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state)
            : ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state)
                ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__fill)
                    ? 2U : ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__flow)
                             ? 1U : ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__unload)
                                      ? 0U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state)))
                : ((2U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state)
                    ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__flush)
                        ? 1U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state)
                    : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state)));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__use_buffered_data 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__flush;
    vlSelf->fixed_vector_mult_inst__DOT__data_out_ready 
        = vlSelf->fixed_vector_mult_inst__DOT__product_data_out_ready;
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_vector_mult_inst__DOT__product_data_out_ready;
    vlSelf->pv_ready = vlSelf->fixed_vector_mult_inst__DOT__product_data_out_ready;
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_vector_mult_inst__DOT__product_data_out_ready));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__unload 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__fill 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__flow 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state) 
           & (3U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__load 
        = ((0U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__flush 
        = ((2U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__layer__DOT__data_in[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__3__KET____DOT__layer__data_in
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__layer__DOT__data_in[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__3__KET____DOT__layer__data_in
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__layer__DOT__data_out[0U] 
        = (0xfffffU & (((0x80000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__3__KET____DOT__layer__data_in
                                     [0U] << 1U)) | 
                        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__3__KET____DOT__layer__data_in
                        [0U]) + ((0x80000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__3__KET____DOT__layer__data_in
                                              [1U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__3__KET____DOT__layer__data_in
                                 [1U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__layer__DOT__data_in[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__layer__DOT__data_in[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__layer__DOT__data_in[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__layer__DOT__data_out[0U] 
        = (0x7ffffU & (((0x40000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in
                                     [0U] << 1U)) | 
                        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in
                        [0U]) + ((0x40000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in
                                              [2U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in
                                 [2U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__layer__DOT__data_out[1U] 
        = ((0x40000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in
                        [1U] << 1U)) | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in
           [1U]);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_in[4U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
        [4U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_in[3U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
        [3U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_in[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_in[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_in[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_out[0U] 
        = (0x3ffffU & (((0x20000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
                                     [0U] << 1U)) | 
                        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
                        [0U]) + ((0x20000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
                                              [4U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
                                 [4U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_out[1U] 
        = (0x3ffffU & (((0x20000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
                                     [1U] << 1U)) | 
                        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
                        [1U]) + ((0x20000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
                                              [3U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
                                 [3U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_out[2U] 
        = ((0x20000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
                        [2U] << 1U)) | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
           [2U]);
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[9U] 
        = vlSelf->pv[9U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[8U] 
        = vlSelf->pv[8U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[7U] 
        = vlSelf->pv[7U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[6U] 
        = vlSelf->pv[6U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[5U] 
        = vlSelf->pv[5U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[4U] 
        = vlSelf->pv[4U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[3U] 
        = vlSelf->pv[3U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[2U] 
        = vlSelf->pv[2U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[1U] 
        = vlSelf->pv[1U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[0U] 
        = vlSelf->pv[0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__unload 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__fill 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__flow 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state) 
           & (3U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__load 
        = ((0U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__flush 
        = ((2U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in[0U] 
        = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[0U];
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in[1U] 
        = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[1U];
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in[2U] 
        = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[2U];
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in[3U] 
        = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[3U];
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in[4U] 
        = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[4U];
    vlSelf->sum = vlSelf->data_out;
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__unload 
        = ((1U == vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__fill 
        = ((1U == vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__flow 
        = ((1U == vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state) 
           & (3U == (((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__load 
        = ((0U == vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__flush 
        = ((2U == vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_buffer_wren 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__fill;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out_wren 
        = (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__load) 
            | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__flow)) 
           | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__flush));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state_next 
        = ((0U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state)
            ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__load)
                ? 1U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state)
            : ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state)
                ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__fill)
                    ? 2U : ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__flow)
                             ? 1U : ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__unload)
                                      ? 0U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state)))
                : ((2U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state)
                    ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__flush)
                        ? 1U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state)
                    : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state)));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__use_buffered_data 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__flush;
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__3__KET____DOT__layer__data_out[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__layer__DOT__data_out
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__2__KET____DOT__layer__data_out[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__layer__DOT__data_out
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__2__KET____DOT__layer__data_out[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__layer__DOT__data_out
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__1__KET____DOT__layer__data_out[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_out
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__1__KET____DOT__layer__data_out[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_out
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__1__KET____DOT__layer__data_out[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_out
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[9U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [9U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[8U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [8U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[7U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [7U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[6U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [6U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[5U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [5U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[4U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [4U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[3U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [3U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[2U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[1U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[0U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[0U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[1U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[2U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[3U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [3U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[4U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [4U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[5U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [5U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[6U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [6U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[7U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [7U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[8U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [8U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[9U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [9U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_buffer_wren 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__fill;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_out_wren 
        = (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__load) 
            | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__flow)) 
           | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__flush));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state_next 
        = ((0U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state)
            ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__load)
                ? 1U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state)
            : ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state)
                ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__fill)
                    ? 2U : ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__flow)
                             ? 1U : ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__unload)
                                      ? 0U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state)))
                : ((2U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state)
                    ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__flush)
                        ? 1U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state)
                    : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state)));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__use_buffered_data 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__flush;
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_wren 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__fill;
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out_wren 
        = (((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__load) 
            | (IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__flow)) 
           | (IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__flush));
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state_next 
        = ((0U == vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state)
            ? ((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__load)
                ? 1U : vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state)
            : ((1U == vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state)
                ? ((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__fill)
                    ? 2U : ((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__flow)
                             ? 1U : ((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__unload)
                                      ? 0U : vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state)))
                : ((2U == vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state)
                    ? ((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__flush)
                        ? 1U : vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state)
                    : vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state)));
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__use_buffered_data 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__flush;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__sum[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__3__KET____DOT__layer__data_out
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__sum[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__2__KET____DOT__layer__data_out
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__sum[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__2__KET____DOT__layer__data_out
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__sum[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__1__KET____DOT__layer__data_out
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__sum[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__1__KET____DOT__layer__data_out
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__sum[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__1__KET____DOT__layer__data_out
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[9U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [9U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[8U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [8U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[7U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [7U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[6U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [6U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[5U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [5U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[4U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [4U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[3U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [3U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [0U];
    if (vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__use_buffered_data) {
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[0U] 
            = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_out[0U];
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[1U] 
            = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_out[1U];
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[2U] 
            = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_out[2U];
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[3U] 
            = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_out[3U];
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[4U] 
            = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_out[4U];
    } else {
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[0U] 
            = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[0U];
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[1U] 
            = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[1U];
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[2U] 
            = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[2U];
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[3U] 
            = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[3U];
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[4U] 
            = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[4U];
    }
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__cast_sum 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__sum
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__sum
           [0U]);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__cast_sum 
        = (((QData)((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__sum
                            [1U])) << 0x13U) | (QData)((IData)(
                                                               vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__sum
                                                               [0U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_sum 
        = (((QData)((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__sum
                            [2U])) << 0x24U) | (((QData)((IData)(
                                                                 vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__sum
                                                                 [1U])) 
                                                 << 0x12U) 
                                                | (QData)((IData)(
                                                                  vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__sum
                                                                  [0U]))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[9U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [9U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[8U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [8U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[7U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [7U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[6U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [6U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[5U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [5U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[4U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [4U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[3U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [3U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out[0U] 
        = (0x1ffffU & (((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                     [0U] << 1U)) | 
                        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                        [0U]) + ((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                              [9U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                 [9U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out[1U] 
        = (0x1ffffU & (((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                     [1U] << 1U)) | 
                        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                        [1U]) + ((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                              [8U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                 [8U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out[2U] 
        = (0x1ffffU & (((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                     [2U] << 1U)) | 
                        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                        [2U]) + ((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                              [7U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                 [7U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out[3U] 
        = (0x1ffffU & (((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                     [3U] << 1U)) | 
                        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                        [3U]) + ((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                              [6U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                 [6U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out[4U] 
        = (0x1ffffU & (((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                     [4U] << 1U)) | 
                        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                        [4U]) + ((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                              [5U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                 [5U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__cast_sum;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__cast_sum;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__cast_sum);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_sum;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_sum);
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out[4U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out
        [4U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out[3U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out
        [3U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum[4U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out
        [4U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum[3U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out
        [3U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[0U] 
        = (IData)((((QData)((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
                                    [2U])) << 0x22U) 
                   | (((QData)((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
                                       [1U])) << 0x11U) 
                      | (QData)((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
                                        [0U])))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[1U] 
        = ((vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
            [3U] << 0x13U) | (IData)(((((QData)((IData)(
                                                        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
                                                        [2U])) 
                                        << 0x22U) | 
                                       (((QData)((IData)(
                                                         vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
                                                         [1U])) 
                                         << 0x11U) 
                                        | (QData)((IData)(
                                                          vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
                                                          [0U])))) 
                                      >> 0x20U)));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[2U] 
        = ((vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
            [4U] << 4U) | (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
                           [3U] >> 0xdU));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[1U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[2U];
    if (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__use_buffered_data) {
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__selected_data[0U] 
            = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_buffer_out[0U];
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__selected_data[1U] 
            = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_buffer_out[1U];
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__selected_data[2U] 
            = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_buffer_out[2U];
    } else {
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__selected_data[0U] 
            = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[0U];
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__selected_data[1U] 
            = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[1U];
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__selected_data[2U] 
            = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[2U];
    }
}

VL_INLINE_OPT void Vtop_fixed_dot_product__I8_W8_IBa___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__0(Vtop_fixed_dot_product__I8_W8_IBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_fixed_dot_product__I8_W8_IBa___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__0\n"); );
    // Body
    vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in[9U] 
        = vlSelf->data_in[9U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in[8U] 
        = vlSelf->data_in[8U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in[7U] 
        = vlSelf->data_in[7U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in[6U] 
        = vlSelf->data_in[6U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in[5U] 
        = vlSelf->data_in[5U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in[4U] 
        = vlSelf->data_in[4U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in[3U] 
        = vlSelf->data_in[3U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in[2U] 
        = vlSelf->data_in[2U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in[1U] 
        = vlSelf->data_in[1U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in[0U] 
        = vlSelf->data_in[0U];
    vlSelf->sum_ready = vlSelf->data_out_ready;
    vlSelf->__Vcellinp__fixed_vector_mult_inst__weight[9U] 
        = vlSelf->weight[9U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__weight[8U] 
        = vlSelf->weight[8U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__weight[7U] 
        = vlSelf->weight[7U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__weight[6U] 
        = vlSelf->weight[6U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__weight[5U] 
        = vlSelf->weight[5U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__weight[4U] 
        = vlSelf->weight[4U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__weight[3U] 
        = vlSelf->weight[3U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__weight[2U] 
        = vlSelf->weight[2U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__weight[1U] 
        = vlSelf->weight[1U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__weight[0U] 
        = vlSelf->weight[0U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__0__KET____DOT__fixed_mult_inst__DOT__data_a 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [0U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__1__KET____DOT__fixed_mult_inst__DOT__data_a 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [1U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__2__KET____DOT__fixed_mult_inst__DOT__data_a 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [2U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__3__KET____DOT__fixed_mult_inst__DOT__data_a 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [3U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__4__KET____DOT__fixed_mult_inst__DOT__data_a 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [4U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__5__KET____DOT__fixed_mult_inst__DOT__data_a 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [5U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__6__KET____DOT__fixed_mult_inst__DOT__data_a 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [6U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__7__KET____DOT__fixed_mult_inst__DOT__data_a 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [7U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__8__KET____DOT__fixed_mult_inst__DOT__data_a 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [8U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__9__KET____DOT__fixed_mult_inst__DOT__data_a 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [9U];
    vlSelf->fixed_vector_mult_inst__DOT__data_in[9U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [9U];
    vlSelf->fixed_vector_mult_inst__DOT__data_in[8U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [8U];
    vlSelf->fixed_vector_mult_inst__DOT__data_in[7U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [7U];
    vlSelf->fixed_vector_mult_inst__DOT__data_in[6U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [6U];
    vlSelf->fixed_vector_mult_inst__DOT__data_in[5U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [5U];
    vlSelf->fixed_vector_mult_inst__DOT__data_in[4U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [4U];
    vlSelf->fixed_vector_mult_inst__DOT__data_in[3U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [3U];
    vlSelf->fixed_vector_mult_inst__DOT__data_in[2U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [2U];
    vlSelf->fixed_vector_mult_inst__DOT__data_in[1U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [1U];
    vlSelf->fixed_vector_mult_inst__DOT__data_in[0U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__data_out_ready 
        = vlSelf->sum_ready;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__4__KET____DOT__ready 
        = vlSelf->sum_ready;
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__0__KET____DOT__fixed_mult_inst__DOT__data_b 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [0U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__1__KET____DOT__fixed_mult_inst__DOT__data_b 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [1U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__2__KET____DOT__fixed_mult_inst__DOT__data_b 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [2U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__3__KET____DOT__fixed_mult_inst__DOT__data_b 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [3U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__4__KET____DOT__fixed_mult_inst__DOT__data_b 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [4U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__5__KET____DOT__fixed_mult_inst__DOT__data_b 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [5U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__6__KET____DOT__fixed_mult_inst__DOT__data_b 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [6U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__7__KET____DOT__fixed_mult_inst__DOT__data_b 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [7U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__8__KET____DOT__fixed_mult_inst__DOT__data_b 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [8U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__9__KET____DOT__fixed_mult_inst__DOT__data_b 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [9U];
    vlSelf->fixed_vector_mult_inst__DOT__weight[9U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [9U];
    vlSelf->fixed_vector_mult_inst__DOT__weight[8U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [8U];
    vlSelf->fixed_vector_mult_inst__DOT__weight[7U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [7U];
    vlSelf->fixed_vector_mult_inst__DOT__weight[6U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [6U];
    vlSelf->fixed_vector_mult_inst__DOT__weight[5U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [5U];
    vlSelf->fixed_vector_mult_inst__DOT__weight[4U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [4U];
    vlSelf->fixed_vector_mult_inst__DOT__weight[3U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [3U];
    vlSelf->fixed_vector_mult_inst__DOT__weight[2U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [2U];
    vlSelf->fixed_vector_mult_inst__DOT__weight[1U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [1U];
    vlSelf->fixed_vector_mult_inst__DOT__weight[0U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [0U];
    vlSelf->fixed_vector_mult_inst__DOT__product_vector[0U] 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [0U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [0U]))));
    vlSelf->fixed_vector_mult_inst__DOT__product_vector[1U] 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [1U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [1U]))));
    vlSelf->fixed_vector_mult_inst__DOT__product_vector[2U] 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [2U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [2U]))));
    vlSelf->fixed_vector_mult_inst__DOT__product_vector[3U] 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [3U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [3U]))));
    vlSelf->fixed_vector_mult_inst__DOT__product_vector[4U] 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [4U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [4U]))));
    vlSelf->fixed_vector_mult_inst__DOT__product_vector[5U] 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [5U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [5U]))));
    vlSelf->fixed_vector_mult_inst__DOT__product_vector[6U] 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [6U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [6U]))));
    vlSelf->fixed_vector_mult_inst__DOT__product_vector[7U] 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [7U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [7U]))));
    vlSelf->fixed_vector_mult_inst__DOT__product_vector[8U] 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [8U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [8U]))));
    vlSelf->fixed_vector_mult_inst__DOT__product_vector[9U] 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [9U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [9U]))));
    vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__0__KET____DOT__fixed_mult_inst__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [0U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [0U]))));
    vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__1__KET____DOT__fixed_mult_inst__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [1U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [1U]))));
    vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__2__KET____DOT__fixed_mult_inst__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [2U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [2U]))));
    vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__3__KET____DOT__fixed_mult_inst__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [3U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [3U]))));
    vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__4__KET____DOT__fixed_mult_inst__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [4U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [4U]))));
    vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__5__KET____DOT__fixed_mult_inst__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [5U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [5U]))));
    vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__6__KET____DOT__fixed_mult_inst__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [6U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [6U]))));
    vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__7__KET____DOT__fixed_mult_inst__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [7U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [7U]))));
    vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__8__KET____DOT__fixed_mult_inst__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [8U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [8U]))));
    vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__9__KET____DOT__fixed_mult_inst__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [9U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [9U]))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__4__KET____DOT__ready;
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__0__KET____DOT__fixed_mult_inst__DOT__product 
        = vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__0__KET____DOT__fixed_mult_inst__product;
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__1__KET____DOT__fixed_mult_inst__DOT__product 
        = vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__1__KET____DOT__fixed_mult_inst__product;
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__2__KET____DOT__fixed_mult_inst__DOT__product 
        = vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__2__KET____DOT__fixed_mult_inst__product;
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__3__KET____DOT__fixed_mult_inst__DOT__product 
        = vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__3__KET____DOT__fixed_mult_inst__product;
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__4__KET____DOT__fixed_mult_inst__DOT__product 
        = vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__4__KET____DOT__fixed_mult_inst__product;
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__5__KET____DOT__fixed_mult_inst__DOT__product 
        = vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__5__KET____DOT__fixed_mult_inst__product;
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__6__KET____DOT__fixed_mult_inst__DOT__product 
        = vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__6__KET____DOT__fixed_mult_inst__product;
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__7__KET____DOT__fixed_mult_inst__DOT__product 
        = vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__7__KET____DOT__fixed_mult_inst__product;
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__8__KET____DOT__fixed_mult_inst__DOT__product 
        = vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__8__KET____DOT__fixed_mult_inst__product;
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__9__KET____DOT__fixed_mult_inst__DOT__product 
        = vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__9__KET____DOT__fixed_mult_inst__product;
}

VL_INLINE_OPT void Vtop_fixed_dot_product__I8_W8_IBa___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__1(Vtop_fixed_dot_product__I8_W8_IBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_fixed_dot_product__I8_W8_IBa___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__1\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_buffer_out = 0U;
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_buffer_out = 0ULL;
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_buffer_out = 0ULL;
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_buffer_out[0U] = 0U;
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_buffer_out[1U] = 0U;
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_buffer_out[2U] = 0U;
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_out[0U] = 0U;
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_out[1U] = 0U;
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_out[2U] = 0U;
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_out[3U] = 0U;
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_out[4U] = 0U;
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_out = 0U;
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state = 0U;
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state = 0U;
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state = 0U;
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state = 0U;
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state = 0U;
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_out = 0ULL;
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out = 0ULL;
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out[0U] = 0U;
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out[1U] = 0U;
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out[2U] = 0U;
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[0U] = 0U;
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[1U] = 0U;
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[2U] = 0U;
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[3U] = 0U;
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[4U] = 0U;
    } else {
        if (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_buffer_wren) {
            vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_buffer_out 
                = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__cast_sum;
        }
        if (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_buffer_wren) {
            vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_buffer_out 
                = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__cast_sum;
        }
        if (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_buffer_wren) {
            vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_buffer_out 
                = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_sum;
        }
        if (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_buffer_wren) {
            vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_buffer_out[0U] 
                = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[0U];
            vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_buffer_out[1U] 
                = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[1U];
            vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_buffer_out[2U] 
                = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[2U];
        }
        if (vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_wren) {
            vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_out[0U] 
                = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[0U];
            vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_out[1U] 
                = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[1U];
            vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_out[2U] 
                = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[2U];
            vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_out[3U] 
                = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[3U];
            vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_out[4U] 
                = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[4U];
        }
        if (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_out_wren) {
            vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_out 
                = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__selected_data;
        }
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state 
            = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state_next;
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state 
            = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state_next;
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state 
            = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state_next;
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state 
            = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state_next;
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state 
            = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state_next;
        if (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_out_wren) {
            vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_out 
                = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__selected_data;
        }
        if (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out_wren) {
            vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out 
                = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__selected_data;
        }
        if (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out_wren) {
            vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out[0U] 
                = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__selected_data[0U];
            vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out[1U] 
                = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__selected_data[1U];
            vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out[2U] 
                = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__selected_data[2U];
        }
        if (vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out_wren) {
            vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[0U] 
                = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[0U];
            vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[1U] 
                = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[1U];
            vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[2U] 
                = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[2U];
            vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[3U] 
                = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[3U];
            vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[4U] 
                = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[4U];
        }
    }
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_out_valid 
        = ((~ (IData)(vlSelf->rst)) & (0U != vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state_next));
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in_ready 
        = ((~ (IData)(vlSelf->rst)) & (2U != vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state_next));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_in_ready 
        = ((~ (IData)(vlSelf->rst)) & (2U != vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state_next));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_out_valid 
        = ((~ (IData)(vlSelf->rst)) & (0U != vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state_next));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_in_ready 
        = ((~ (IData)(vlSelf->rst)) & (2U != vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state_next));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out_valid 
        = ((~ (IData)(vlSelf->rst)) & (0U != vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state_next));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_in_ready 
        = ((~ (IData)(vlSelf->rst)) & (2U != vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state_next));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out_valid 
        = ((~ (IData)(vlSelf->rst)) & (0U != vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state_next));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in_ready 
        = ((~ (IData)(vlSelf->rst)) & (2U != vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state_next));
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out_valid 
        = ((~ (IData)(vlSelf->rst)) & (0U != vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state_next));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__cast_data 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_out;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__4__KET____DOT__valid 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__cast_data 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_out;
    vlSelf->fixed_vector_mult_inst__DOT__product_data_in_ready 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in_ready;
    vlSelf->weight_ready = ((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in_ready) 
                            & ((~ (IData)(vlSelf->weight_valid)) 
                               | (IData)(vlSelf->data_in_valid)));
    vlSelf->data_in_ready = ((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in_ready) 
                             & ((~ (IData)(vlSelf->data_in_valid)) 
                                | (IData)(vlSelf->weight_valid)));
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_vector_mult_inst__DOT__join_inst__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__ready 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__valid 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__ready 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__valid 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__ready 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__valid 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__ready 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_vector_mult_inst__DOT__data_out_valid 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_data 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out[0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out[1U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out[2U];
    vlSelf->fixed_vector_mult_inst__DOT__product_data_out[0U] 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[0U];
    vlSelf->fixed_vector_mult_inst__DOT__product_data_out[1U] 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[1U];
    vlSelf->fixed_vector_mult_inst__DOT__product_data_out[2U] 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[2U];
    vlSelf->fixed_vector_mult_inst__DOT__product_data_out[3U] 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[3U];
    vlSelf->fixed_vector_mult_inst__DOT__product_data_out[4U] 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[4U];
    vlSelf->fixed_vector_mult_inst__DOT__data_out[0U] 
        = (0xffffU & vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[0U]);
    vlSelf->fixed_vector_mult_inst__DOT__data_out[1U] 
        = (vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[0U] 
           >> 0x10U);
    vlSelf->fixed_vector_mult_inst__DOT__data_out[2U] 
        = (0xffffU & vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[1U]);
    vlSelf->fixed_vector_mult_inst__DOT__data_out[3U] 
        = (vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[1U] 
           >> 0x10U);
    vlSelf->fixed_vector_mult_inst__DOT__data_out[4U] 
        = (0xffffU & vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[2U]);
    vlSelf->fixed_vector_mult_inst__DOT__data_out[5U] 
        = (vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[2U] 
           >> 0x10U);
    vlSelf->fixed_vector_mult_inst__DOT__data_out[6U] 
        = (0xffffU & vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[3U]);
    vlSelf->fixed_vector_mult_inst__DOT__data_out[7U] 
        = (vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[3U] 
           >> 0x10U);
    vlSelf->fixed_vector_mult_inst__DOT__data_out[8U] 
        = (0xffffU & vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[4U]);
    vlSelf->fixed_vector_mult_inst__DOT__data_out[9U] 
        = (vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[4U] 
           >> 0x10U);
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__4__KET____DOT__data[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__cast_data;
    vlSelf->fixed_adder_tree_inst__DOT__data_out_valid 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__4__KET____DOT__valid;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__data[0U] 
        = (0x7ffffU & (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__cast_data));
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__data[1U] 
        = (0x7ffffU & (IData)((vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__cast_data 
                               >> 0x13U)));
    vlSelf->fixed_vector_mult_inst__DOT__join_inst__DOT__data_out_ready 
        = vlSelf->fixed_vector_mult_inst__DOT__product_data_in_ready;
    vlSelf->fixed_vector_mult_inst__DOT__weight_ready 
        = vlSelf->weight_ready;
    vlSelf->fixed_vector_mult_inst__DOT__data_in_ready 
        = vlSelf->data_in_ready;
    vlSelf->fixed_vector_mult_inst__DOT__join_inst__DOT__data_in_ready 
        = (((IData)(vlSelf->weight_ready) << 1U) | (IData)(vlSelf->data_in_ready));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__ready;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__ready));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__valid;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__valid) 
           & (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__ready;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__ready));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__valid;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__valid) 
           & (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__ready;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__ready));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__valid;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__valid) 
           & (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_adder_tree_inst__DOT__data_in_ready 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__ready;
    vlSelf->fixed_adder_tree_inst__DOT__data_in_valid 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out_valid;
    vlSelf->pv_valid = vlSelf->fixed_vector_mult_inst__DOT__data_out_valid;
    vlSelf->fixed_vector_mult_inst__DOT__product_data_out_valid 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__valid 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__data[0U] 
        = (0x3ffffU & (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_data));
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__data[1U] 
        = (0x3ffffU & (IData)((vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_data 
                               >> 0x12U)));
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__data[2U] 
        = (0x3ffffU & (IData)((vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_data 
                               >> 0x24U)));
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data[0U] 
        = (0x1ffffU & vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[0U]);
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data[1U] 
        = (0x1ffffU & ((vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[1U] 
                        << 0xfU) | (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[0U] 
                                    >> 0x11U)));
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data[2U] 
        = (0x1ffffU & (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[1U] 
                       >> 2U));
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data[3U] 
        = (0x1ffffU & ((vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[2U] 
                        << 0xdU) | (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[1U] 
                                    >> 0x13U)));
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data[4U] 
        = (0x1ffffU & (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[2U] 
                       >> 4U));
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[9U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [9U];
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[8U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [8U];
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[7U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [7U];
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[6U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [6U];
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[5U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [5U];
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[4U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [4U];
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[3U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [3U];
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[2U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [2U];
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[1U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [1U];
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[0U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__data_out = 
        vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__4__KET____DOT__data
        [0U];
    vlSelf->data_out_valid = vlSelf->fixed_adder_tree_inst__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__3__KET____DOT__layer__data_in[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__data
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__3__KET____DOT__layer__data_in[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__data
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__unload 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__fill 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__flow 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state) 
           & (3U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__load 
        = ((0U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__flush 
        = ((2U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__unload 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__fill 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__flow 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state) 
           & (3U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__load 
        = ((0U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__flush 
        = ((2U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_vector_mult_inst__DOT__product_data_out_ready 
        = vlSelf->fixed_adder_tree_inst__DOT__data_in_ready;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__valid;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__valid) 
           & (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__data
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__data
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__data
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in[4U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data
        [4U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in[3U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data
        [3U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data
        [0U];
    vlSelf->pv[9U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [9U];
    vlSelf->pv[8U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [8U];
    vlSelf->pv[7U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [7U];
    vlSelf->pv[6U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [6U];
    vlSelf->pv[5U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [5U];
    vlSelf->pv[4U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [4U];
    vlSelf->pv[3U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [3U];
    vlSelf->pv[2U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [2U];
    vlSelf->pv[1U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [1U];
    vlSelf->pv[0U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [0U];
    vlSelf->data_out = vlSelf->fixed_adder_tree_inst__DOT__data_out;
    vlSelf->sum_valid = vlSelf->data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__layer__DOT__data_in[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__3__KET____DOT__layer__data_in
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__layer__DOT__data_in[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__3__KET____DOT__layer__data_in
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__layer__DOT__data_out[0U] 
        = (0xfffffU & (((0x80000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__3__KET____DOT__layer__data_in
                                     [0U] << 1U)) | 
                        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__3__KET____DOT__layer__data_in
                        [0U]) + ((0x80000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__3__KET____DOT__layer__data_in
                                              [1U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__3__KET____DOT__layer__data_in
                                 [1U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_buffer_wren 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__fill;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_out_wren 
        = (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__load) 
            | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__flow)) 
           | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__flush));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state_next 
        = ((0U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state)
            ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__load)
                ? 1U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state)
            : ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state)
                ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__fill)
                    ? 2U : ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__flow)
                             ? 1U : ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__unload)
                                      ? 0U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state)))
                : ((2U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state)
                    ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__flush)
                        ? 1U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state)
                    : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state)));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__use_buffered_data 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__flush;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_buffer_wren 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__fill;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out_wren 
        = (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__load) 
            | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__flow)) 
           | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__flush));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state_next 
        = ((0U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state)
            ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__load)
                ? 1U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state)
            : ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state)
                ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__fill)
                    ? 2U : ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__flow)
                             ? 1U : ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__unload)
                                      ? 0U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state)))
                : ((2U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state)
                    ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__flush)
                        ? 1U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state)
                    : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state)));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__use_buffered_data 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__flush;
    vlSelf->fixed_vector_mult_inst__DOT__data_out_ready 
        = vlSelf->fixed_vector_mult_inst__DOT__product_data_out_ready;
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_vector_mult_inst__DOT__product_data_out_ready;
    vlSelf->pv_ready = vlSelf->fixed_vector_mult_inst__DOT__product_data_out_ready;
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_vector_mult_inst__DOT__product_data_out_ready));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__unload 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__fill 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__flow 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state) 
           & (3U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__load 
        = ((0U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__flush 
        = ((2U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__layer__DOT__data_in[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__layer__DOT__data_in[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__layer__DOT__data_in[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__layer__DOT__data_out[0U] 
        = (0x7ffffU & (((0x40000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in
                                     [0U] << 1U)) | 
                        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in
                        [0U]) + ((0x40000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in
                                              [2U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in
                                 [2U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__layer__DOT__data_out[1U] 
        = ((0x40000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in
                        [1U] << 1U)) | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in
           [1U]);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_in[4U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
        [4U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_in[3U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
        [3U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_in[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_in[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_in[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_out[0U] 
        = (0x3ffffU & (((0x20000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
                                     [0U] << 1U)) | 
                        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
                        [0U]) + ((0x20000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
                                              [4U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
                                 [4U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_out[1U] 
        = (0x3ffffU & (((0x20000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
                                     [1U] << 1U)) | 
                        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
                        [1U]) + ((0x20000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
                                              [3U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
                                 [3U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_out[2U] 
        = ((0x20000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
                        [2U] << 1U)) | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
           [2U]);
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[9U] 
        = vlSelf->pv[9U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[8U] 
        = vlSelf->pv[8U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[7U] 
        = vlSelf->pv[7U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[6U] 
        = vlSelf->pv[6U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[5U] 
        = vlSelf->pv[5U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[4U] 
        = vlSelf->pv[4U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[3U] 
        = vlSelf->pv[3U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[2U] 
        = vlSelf->pv[2U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[1U] 
        = vlSelf->pv[1U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[0U] 
        = vlSelf->pv[0U];
    vlSelf->sum = vlSelf->data_out;
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__3__KET____DOT__layer__data_out[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__layer__DOT__data_out
        [0U];
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__unload 
        = ((1U == vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__fill 
        = ((1U == vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__flow 
        = ((1U == vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state) 
           & (3U == (((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__load 
        = ((0U == vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__flush 
        = ((2U == vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_buffer_wren 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__fill;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out_wren 
        = (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__load) 
            | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__flow)) 
           | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__flush));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state_next 
        = ((0U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state)
            ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__load)
                ? 1U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state)
            : ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state)
                ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__fill)
                    ? 2U : ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__flow)
                             ? 1U : ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__unload)
                                      ? 0U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state)))
                : ((2U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state)
                    ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__flush)
                        ? 1U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state)
                    : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state)));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__use_buffered_data 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__flush;
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__2__KET____DOT__layer__data_out[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__layer__DOT__data_out
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__2__KET____DOT__layer__data_out[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__layer__DOT__data_out
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__1__KET____DOT__layer__data_out[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_out
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__1__KET____DOT__layer__data_out[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_out
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__1__KET____DOT__layer__data_out[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_out
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[9U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [9U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[8U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [8U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[7U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [7U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[6U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [6U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[5U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [5U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[4U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [4U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[3U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [3U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[2U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[1U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[0U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[0U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[1U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[2U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[3U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [3U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[4U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [4U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[5U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [5U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[6U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [6U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[7U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [7U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[8U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [8U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[9U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [9U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__sum[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__3__KET____DOT__layer__data_out
        [0U];
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_wren 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__fill;
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out_wren 
        = (((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__load) 
            | (IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__flow)) 
           | (IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__flush));
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state_next 
        = ((0U == vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state)
            ? ((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__load)
                ? 1U : vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state)
            : ((1U == vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state)
                ? ((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__fill)
                    ? 2U : ((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__flow)
                             ? 1U : ((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__unload)
                                      ? 0U : vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state)))
                : ((2U == vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state)
                    ? ((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__flush)
                        ? 1U : vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state)
                    : vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state)));
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__use_buffered_data 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__flush;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__sum[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__2__KET____DOT__layer__data_out
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__sum[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__2__KET____DOT__layer__data_out
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__sum[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__1__KET____DOT__layer__data_out
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__sum[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__1__KET____DOT__layer__data_out
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__sum[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__1__KET____DOT__layer__data_out
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[9U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [9U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[8U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [8U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[7U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [7U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[6U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [6U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[5U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [5U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[4U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [4U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[3U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [3U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__cast_sum 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__sum
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__cast_sum 
        = (((QData)((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__sum
                            [1U])) << 0x13U) | (QData)((IData)(
                                                               vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__sum
                                                               [0U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_sum 
        = (((QData)((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__sum
                            [2U])) << 0x24U) | (((QData)((IData)(
                                                                 vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__sum
                                                                 [1U])) 
                                                 << 0x12U) 
                                                | (QData)((IData)(
                                                                  vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__sum
                                                                  [0U]))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[9U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [9U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[8U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [8U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[7U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [7U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[6U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [6U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[5U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [5U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[4U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [4U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[3U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [3U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out[0U] 
        = (0x1ffffU & (((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                     [0U] << 1U)) | 
                        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                        [0U]) + ((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                              [9U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                 [9U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out[1U] 
        = (0x1ffffU & (((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                     [1U] << 1U)) | 
                        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                        [1U]) + ((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                              [8U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                 [8U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out[2U] 
        = (0x1ffffU & (((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                     [2U] << 1U)) | 
                        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                        [2U]) + ((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                              [7U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                 [7U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out[3U] 
        = (0x1ffffU & (((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                     [3U] << 1U)) | 
                        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                        [3U]) + ((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                              [6U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                 [6U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out[4U] 
        = (0x1ffffU & (((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                     [4U] << 1U)) | 
                        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                        [4U]) + ((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                              [5U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                 [5U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__cast_sum;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__cast_sum;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__cast_sum);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_sum;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_sum);
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out[4U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out
        [4U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out[3U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out
        [3U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum[4U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out
        [4U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum[3U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out
        [3U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[0U] 
        = (IData)((((QData)((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
                                    [2U])) << 0x22U) 
                   | (((QData)((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
                                       [1U])) << 0x11U) 
                      | (QData)((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
                                        [0U])))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[1U] 
        = ((vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
            [3U] << 0x13U) | (IData)(((((QData)((IData)(
                                                        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
                                                        [2U])) 
                                        << 0x22U) | 
                                       (((QData)((IData)(
                                                         vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
                                                         [1U])) 
                                         << 0x11U) 
                                        | (QData)((IData)(
                                                          vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
                                                          [0U])))) 
                                      >> 0x20U)));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[2U] 
        = ((vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
            [4U] << 4U) | (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
                           [3U] >> 0xdU));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[1U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[2U];
    if (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__use_buffered_data) {
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__selected_data[0U] 
            = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_buffer_out[0U];
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__selected_data[1U] 
            = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_buffer_out[1U];
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__selected_data[2U] 
            = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_buffer_out[2U];
    } else {
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__selected_data[0U] 
            = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[0U];
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__selected_data[1U] 
            = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[1U];
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__selected_data[2U] 
            = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[2U];
    }
}

VL_INLINE_OPT void Vtop_fixed_dot_product__I8_W8_IBa___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__2(Vtop_fixed_dot_product__I8_W8_IBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_fixed_dot_product__I8_W8_IBa___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__2\n"); );
    // Body
    vlSelf->fixed_vector_mult_inst__DOT__product_data_in[0U] 
        = (((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__1__KET____DOT__fixed_mult_inst__product) 
            << 0x10U) | (IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__0__KET____DOT__fixed_mult_inst__product));
    vlSelf->fixed_vector_mult_inst__DOT__product_data_in[1U] 
        = (((0xffffU & (IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__2__KET____DOT__fixed_mult_inst__product)) 
            | ((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__1__KET____DOT__fixed_mult_inst__product) 
               >> 0x10U)) | ((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__3__KET____DOT__fixed_mult_inst__product) 
                             << 0x10U));
    vlSelf->fixed_vector_mult_inst__DOT__product_data_in[2U] 
        = (((0xffffU & (IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__4__KET____DOT__fixed_mult_inst__product)) 
            | ((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__3__KET____DOT__fixed_mult_inst__product) 
               >> 0x10U)) | ((IData)((((QData)((IData)(
                                                       (((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__8__KET____DOT__fixed_mult_inst__product) 
                                                         << 0x10U) 
                                                        | (IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__7__KET____DOT__fixed_mult_inst__product)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__6__KET____DOT__fixed_mult_inst__product) 
                                                                     << 0x10U) 
                                                                    | (IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__5__KET____DOT__fixed_mult_inst__product)))))) 
                             << 0x10U));
    vlSelf->fixed_vector_mult_inst__DOT__product_data_in[3U] 
        = (((IData)((((QData)((IData)((((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__8__KET____DOT__fixed_mult_inst__product) 
                                        << 0x10U) | (IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__7__KET____DOT__fixed_mult_inst__product)))) 
                      << 0x20U) | (QData)((IData)((
                                                   ((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__6__KET____DOT__fixed_mult_inst__product) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__5__KET____DOT__fixed_mult_inst__product)))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    (((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__8__KET____DOT__fixed_mult_inst__product) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__7__KET____DOT__fixed_mult_inst__product)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__6__KET____DOT__fixed_mult_inst__product) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__5__KET____DOT__fixed_mult_inst__product))))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->fixed_vector_mult_inst__DOT__product_data_in[4U] 
        = (((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__9__KET____DOT__fixed_mult_inst__product) 
            << 0x10U) | ((IData)(((((QData)((IData)(
                                                    (((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__8__KET____DOT__fixed_mult_inst__product) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__7__KET____DOT__fixed_mult_inst__product)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__6__KET____DOT__fixed_mult_inst__product) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__5__KET____DOT__fixed_mult_inst__product))))) 
                                  >> 0x20U)) >> 0x10U));
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in[0U] 
        = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[0U];
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in[1U] 
        = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[1U];
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in[2U] 
        = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[2U];
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in[3U] 
        = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[3U];
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in[4U] 
        = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[4U];
}

VL_INLINE_OPT void Vtop_fixed_dot_product__I8_W8_IBa___nba_comb__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__0(Vtop_fixed_dot_product__I8_W8_IBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_fixed_dot_product__I8_W8_IBa___nba_comb__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__0\n"); );
    // Body
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__4__KET____DOT__ready));
    if (vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__use_buffered_data) {
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[0U] 
            = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_out[0U];
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[1U] 
            = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_out[1U];
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[2U] 
            = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_out[2U];
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[3U] 
            = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_out[3U];
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[4U] 
            = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_out[4U];
    } else {
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[0U] 
            = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[0U];
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[1U] 
            = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[1U];
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[2U] 
            = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[2U];
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[3U] 
            = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[3U];
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[4U] 
            = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[4U];
    }
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__unload 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__fill 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__flow 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state) 
           & (3U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__load 
        = ((0U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__flush 
        = ((2U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_buffer_wren 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__fill;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_out_wren 
        = (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__load) 
            | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__flow)) 
           | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__flush));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state_next 
        = ((0U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state)
            ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__load)
                ? 1U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state)
            : ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state)
                ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__fill)
                    ? 2U : ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__flow)
                             ? 1U : ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__unload)
                                      ? 0U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state)))
                : ((2U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state)
                    ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__flush)
                        ? 1U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state)
                    : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state)));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__use_buffered_data 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__flush;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__sum
           [0U]);
}

VL_INLINE_OPT void Vtop_fixed_dot_product__I8_W8_IBa___ico_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst__0(Vtop_fixed_dot_product__I8_W8_IBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_fixed_dot_product__I8_W8_IBa___ico_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst__0\n"); );
    // Init
    CData/*1:0*/ fixed_vector_mult_inst__DOT____Vcellinp__join_inst__data_in_valid;
    fixed_vector_mult_inst__DOT____Vcellinp__join_inst__data_in_valid = 0;
    // Body
    vlSelf->fixed_vector_mult_inst__DOT__product_data_out[0U] 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[0U];
    vlSelf->fixed_vector_mult_inst__DOT__product_data_out[1U] 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[1U];
    vlSelf->fixed_vector_mult_inst__DOT__product_data_out[2U] 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[2U];
    vlSelf->fixed_vector_mult_inst__DOT__product_data_out[3U] 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[3U];
    vlSelf->fixed_vector_mult_inst__DOT__product_data_out[4U] 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[4U];
    vlSelf->fixed_vector_mult_inst__DOT__product_data_in_ready 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__4__KET____DOT__valid 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__cast_data 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_out;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__valid 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__valid 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__ready 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__valid 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__ready 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__ready 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__ready 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_vector_mult_inst__DOT__data_out_valid 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__cast_data 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_out;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_data 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out[0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out[1U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out[2U];
    vlSelf->fixed_vector_mult_inst__DOT__data_out[0U] 
        = (0xffffU & vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[0U]);
    vlSelf->fixed_vector_mult_inst__DOT__data_out[1U] 
        = (vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[0U] 
           >> 0x10U);
    vlSelf->fixed_vector_mult_inst__DOT__data_out[2U] 
        = (0xffffU & vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[1U]);
    vlSelf->fixed_vector_mult_inst__DOT__data_out[3U] 
        = (vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[1U] 
           >> 0x10U);
    vlSelf->fixed_vector_mult_inst__DOT__data_out[4U] 
        = (0xffffU & vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[2U]);
    vlSelf->fixed_vector_mult_inst__DOT__data_out[5U] 
        = (vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[2U] 
           >> 0x10U);
    vlSelf->fixed_vector_mult_inst__DOT__data_out[6U] 
        = (0xffffU & vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[3U]);
    vlSelf->fixed_vector_mult_inst__DOT__data_out[7U] 
        = (vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[3U] 
           >> 0x10U);
    vlSelf->fixed_vector_mult_inst__DOT__data_out[8U] 
        = (0xffffU & vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[4U]);
    vlSelf->fixed_vector_mult_inst__DOT__data_out[9U] 
        = (vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[4U] 
           >> 0x10U);
    vlSelf->fixed_vector_mult_inst__DOT__clk = vlSelf->clk;
    vlSelf->fixed_adder_tree_inst__DOT__clk = vlSelf->clk;
    vlSelf->fixed_vector_mult_inst__DOT__rst = vlSelf->rst;
    vlSelf->fixed_adder_tree_inst__DOT__rst = vlSelf->rst;
    vlSelf->sum_ready = vlSelf->data_out_ready;
    vlSelf->fixed_vector_mult_inst__DOT__weight_valid 
        = vlSelf->weight_valid;
    vlSelf->fixed_vector_mult_inst__DOT__data_in_valid 
        = vlSelf->data_in_valid;
    vlSelf->data_in_ready = ((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in_ready) 
                             & ((~ (IData)(vlSelf->data_in_valid)) 
                                | (IData)(vlSelf->weight_valid)));
    vlSelf->weight_ready = ((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in_ready) 
                            & ((~ (IData)(vlSelf->weight_valid)) 
                               | (IData)(vlSelf->data_in_valid)));
    fixed_vector_mult_inst__DOT____Vcellinp__join_inst__data_in_valid 
        = (((IData)(vlSelf->weight_valid) << 1U) | (IData)(vlSelf->data_in_valid));
    vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in[9U] 
        = vlSelf->data_in[9U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in[8U] 
        = vlSelf->data_in[8U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in[7U] 
        = vlSelf->data_in[7U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in[6U] 
        = vlSelf->data_in[6U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in[5U] 
        = vlSelf->data_in[5U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in[4U] 
        = vlSelf->data_in[4U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in[3U] 
        = vlSelf->data_in[3U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in[2U] 
        = vlSelf->data_in[2U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in[1U] 
        = vlSelf->data_in[1U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in[0U] 
        = vlSelf->data_in[0U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__weight[9U] 
        = vlSelf->weight[9U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__weight[8U] 
        = vlSelf->weight[8U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__weight[7U] 
        = vlSelf->weight[7U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__weight[6U] 
        = vlSelf->weight[6U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__weight[5U] 
        = vlSelf->weight[5U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__weight[4U] 
        = vlSelf->weight[4U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__weight[3U] 
        = vlSelf->weight[3U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__weight[2U] 
        = vlSelf->weight[2U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__weight[1U] 
        = vlSelf->weight[1U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__weight[0U] 
        = vlSelf->weight[0U];
    vlSelf->fixed_vector_mult_inst__DOT__join_inst__DOT__data_out_ready 
        = vlSelf->fixed_vector_mult_inst__DOT__product_data_in_ready;
    vlSelf->fixed_adder_tree_inst__DOT__data_out_valid 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__4__KET____DOT__valid;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__4__KET____DOT__data[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__cast_data;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__valid;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__valid) 
           & (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__valid;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__valid) 
           & (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__ready;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__ready));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__valid;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__valid) 
           & (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__ready;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__ready));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__ready;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__ready));
    vlSelf->fixed_adder_tree_inst__DOT__data_in_ready 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__ready;
    vlSelf->fixed_adder_tree_inst__DOT__data_in_valid 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out_valid;
    vlSelf->pv_valid = vlSelf->fixed_vector_mult_inst__DOT__data_out_valid;
    vlSelf->fixed_vector_mult_inst__DOT__product_data_out_valid 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__valid 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__data[0U] 
        = (0x7ffffU & (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__cast_data));
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__data[1U] 
        = (0x7ffffU & (IData)((vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__cast_data 
                               >> 0x13U)));
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__data[0U] 
        = (0x3ffffU & (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_data));
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__data[1U] 
        = (0x3ffffU & (IData)((vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_data 
                               >> 0x12U)));
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__data[2U] 
        = (0x3ffffU & (IData)((vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_data 
                               >> 0x24U)));
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data[0U] 
        = (0x1ffffU & vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[0U]);
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data[1U] 
        = (0x1ffffU & ((vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[1U] 
                        << 0xfU) | (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[0U] 
                                    >> 0x11U)));
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data[2U] 
        = (0x1ffffU & (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[1U] 
                       >> 2U));
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data[3U] 
        = (0x1ffffU & ((vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[2U] 
                        << 0xdU) | (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[1U] 
                                    >> 0x13U)));
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data[4U] 
        = (0x1ffffU & (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[2U] 
                       >> 4U));
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[9U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [9U];
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[8U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [8U];
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[7U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [7U];
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[6U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [6U];
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[5U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [5U];
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[4U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [4U];
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[3U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [3U];
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[2U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [2U];
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[1U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [1U];
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[0U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [0U];
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__clk 
        = vlSelf->fixed_vector_mult_inst__DOT__clk;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__clk 
        = vlSelf->fixed_adder_tree_inst__DOT__clk;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__clk 
        = vlSelf->fixed_adder_tree_inst__DOT__clk;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__clk 
        = vlSelf->fixed_adder_tree_inst__DOT__clk;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__clk 
        = vlSelf->fixed_adder_tree_inst__DOT__clk;
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__rst 
        = vlSelf->fixed_vector_mult_inst__DOT__rst;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__rst 
        = vlSelf->fixed_adder_tree_inst__DOT__rst;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__rst 
        = vlSelf->fixed_adder_tree_inst__DOT__rst;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__rst 
        = vlSelf->fixed_adder_tree_inst__DOT__rst;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__rst 
        = vlSelf->fixed_adder_tree_inst__DOT__rst;
    vlSelf->fixed_adder_tree_inst__DOT__data_out_ready 
        = vlSelf->sum_ready;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__4__KET____DOT__ready 
        = vlSelf->sum_ready;
    vlSelf->fixed_vector_mult_inst__DOT__data_in_ready 
        = vlSelf->data_in_ready;
    vlSelf->fixed_vector_mult_inst__DOT__weight_ready 
        = vlSelf->weight_ready;
    vlSelf->fixed_vector_mult_inst__DOT__join_inst__DOT__data_in_ready 
        = (((IData)(vlSelf->weight_ready) << 1U) | (IData)(vlSelf->data_in_ready));
    vlSelf->fixed_vector_mult_inst__DOT__join_inst__DOT__data_in_valid 
        = fixed_vector_mult_inst__DOT____Vcellinp__join_inst__data_in_valid;
    vlSelf->fixed_vector_mult_inst__DOT__join_inst__DOT__data_out_valid 
        = (3U == (IData)(fixed_vector_mult_inst__DOT____Vcellinp__join_inst__data_in_valid));
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__0__KET____DOT__fixed_mult_inst__DOT__data_a 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [0U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__1__KET____DOT__fixed_mult_inst__DOT__data_a 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [1U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__2__KET____DOT__fixed_mult_inst__DOT__data_a 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [2U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__3__KET____DOT__fixed_mult_inst__DOT__data_a 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [3U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__4__KET____DOT__fixed_mult_inst__DOT__data_a 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [4U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__5__KET____DOT__fixed_mult_inst__DOT__data_a 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [5U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__6__KET____DOT__fixed_mult_inst__DOT__data_a 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [6U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__7__KET____DOT__fixed_mult_inst__DOT__data_a 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [7U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__8__KET____DOT__fixed_mult_inst__DOT__data_a 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [8U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__9__KET____DOT__fixed_mult_inst__DOT__data_a 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [9U];
    vlSelf->fixed_vector_mult_inst__DOT__data_in[9U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [9U];
    vlSelf->fixed_vector_mult_inst__DOT__data_in[8U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [8U];
    vlSelf->fixed_vector_mult_inst__DOT__data_in[7U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [7U];
    vlSelf->fixed_vector_mult_inst__DOT__data_in[6U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [6U];
    vlSelf->fixed_vector_mult_inst__DOT__data_in[5U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [5U];
    vlSelf->fixed_vector_mult_inst__DOT__data_in[4U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [4U];
    vlSelf->fixed_vector_mult_inst__DOT__data_in[3U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [3U];
    vlSelf->fixed_vector_mult_inst__DOT__data_in[2U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [2U];
    vlSelf->fixed_vector_mult_inst__DOT__data_in[1U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [1U];
    vlSelf->fixed_vector_mult_inst__DOT__data_in[0U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
        [0U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__0__KET____DOT__fixed_mult_inst__DOT__data_b 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [0U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__1__KET____DOT__fixed_mult_inst__DOT__data_b 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [1U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__2__KET____DOT__fixed_mult_inst__DOT__data_b 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [2U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__3__KET____DOT__fixed_mult_inst__DOT__data_b 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [3U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__4__KET____DOT__fixed_mult_inst__DOT__data_b 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [4U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__5__KET____DOT__fixed_mult_inst__DOT__data_b 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [5U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__6__KET____DOT__fixed_mult_inst__DOT__data_b 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [6U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__7__KET____DOT__fixed_mult_inst__DOT__data_b 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [7U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__8__KET____DOT__fixed_mult_inst__DOT__data_b 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [8U];
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__9__KET____DOT__fixed_mult_inst__DOT__data_b 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [9U];
    vlSelf->fixed_vector_mult_inst__DOT__weight[9U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [9U];
    vlSelf->fixed_vector_mult_inst__DOT__weight[8U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [8U];
    vlSelf->fixed_vector_mult_inst__DOT__weight[7U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [7U];
    vlSelf->fixed_vector_mult_inst__DOT__weight[6U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [6U];
    vlSelf->fixed_vector_mult_inst__DOT__weight[5U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [5U];
    vlSelf->fixed_vector_mult_inst__DOT__weight[4U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [4U];
    vlSelf->fixed_vector_mult_inst__DOT__weight[3U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [3U];
    vlSelf->fixed_vector_mult_inst__DOT__weight[2U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [2U];
    vlSelf->fixed_vector_mult_inst__DOT__weight[1U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [1U];
    vlSelf->fixed_vector_mult_inst__DOT__weight[0U] 
        = vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
        [0U];
    vlSelf->fixed_vector_mult_inst__DOT__product_vector[0U] 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [0U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [0U]))));
    vlSelf->fixed_vector_mult_inst__DOT__product_vector[1U] 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [1U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [1U]))));
    vlSelf->fixed_vector_mult_inst__DOT__product_vector[2U] 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [2U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [2U]))));
    vlSelf->fixed_vector_mult_inst__DOT__product_vector[3U] 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [3U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [3U]))));
    vlSelf->fixed_vector_mult_inst__DOT__product_vector[4U] 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [4U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [4U]))));
    vlSelf->fixed_vector_mult_inst__DOT__product_vector[5U] 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [5U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [5U]))));
    vlSelf->fixed_vector_mult_inst__DOT__product_vector[6U] 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [6U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [6U]))));
    vlSelf->fixed_vector_mult_inst__DOT__product_vector[7U] 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [7U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [7U]))));
    vlSelf->fixed_vector_mult_inst__DOT__product_vector[8U] 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [8U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [8U]))));
    vlSelf->fixed_vector_mult_inst__DOT__product_vector[9U] 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [9U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [9U]))));
    vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__0__KET____DOT__fixed_mult_inst__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [0U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [0U]))));
    vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__1__KET____DOT__fixed_mult_inst__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [1U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [1U]))));
    vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__2__KET____DOT__fixed_mult_inst__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [2U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [2U]))));
    vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__3__KET____DOT__fixed_mult_inst__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [3U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [3U]))));
    vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__4__KET____DOT__fixed_mult_inst__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [4U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [4U]))));
    vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__5__KET____DOT__fixed_mult_inst__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [5U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [5U]))));
    vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__6__KET____DOT__fixed_mult_inst__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [6U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [6U]))));
    vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__7__KET____DOT__fixed_mult_inst__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [7U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [7U]))));
    vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__8__KET____DOT__fixed_mult_inst__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [8U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [8U]))));
    vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__9__KET____DOT__fixed_mult_inst__product 
        = (0xffffU & VL_MULS_III(16, (0xffffU & VL_EXTENDS_II(16,8, 
                                                              vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in
                                                              [9U])), 
                                 (0xffffU & VL_EXTENDS_II(16,8, 
                                                          vlSelf->__Vcellinp__fixed_vector_mult_inst__weight
                                                          [9U]))));
    vlSelf->data_out_valid = vlSelf->fixed_adder_tree_inst__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__data_out = 
        vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__4__KET____DOT__data
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__unload 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__fill 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__flow 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state) 
           & (3U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__load 
        = ((0U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__flush 
        = ((2U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__unload 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__fill 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__flow 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state) 
           & (3U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__load 
        = ((0U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__flush 
        = ((2U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_vector_mult_inst__DOT__product_data_out_ready 
        = vlSelf->fixed_adder_tree_inst__DOT__data_in_ready;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__valid;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__valid) 
           & (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__3__KET____DOT__layer__data_in[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__data
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__3__KET____DOT__layer__data_in[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__data
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__data
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__data
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__data
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in[4U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data
        [4U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in[3U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data
        [3U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data
        [0U];
    vlSelf->pv[9U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [9U];
    vlSelf->pv[8U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [8U];
    vlSelf->pv[7U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [7U];
    vlSelf->pv[6U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [6U];
    vlSelf->pv[5U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [5U];
    vlSelf->pv[4U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [4U];
    vlSelf->pv[3U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [3U];
    vlSelf->pv[2U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [2U];
    vlSelf->pv[1U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [1U];
    vlSelf->pv[0U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__4__KET____DOT__ready;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__4__KET____DOT__ready));
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_vector_mult_inst__DOT__join_inst__DOT__data_out_valid;
    vlSelf->fixed_vector_mult_inst__DOT__product_data_in_valid 
        = vlSelf->fixed_vector_mult_inst__DOT__join_inst__DOT__data_out_valid;
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_vector_mult_inst__DOT__join_inst__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__0__KET____DOT__fixed_mult_inst__DOT__product 
        = vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__0__KET____DOT__fixed_mult_inst__product;
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__1__KET____DOT__fixed_mult_inst__DOT__product 
        = vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__1__KET____DOT__fixed_mult_inst__product;
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__2__KET____DOT__fixed_mult_inst__DOT__product 
        = vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__2__KET____DOT__fixed_mult_inst__product;
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__3__KET____DOT__fixed_mult_inst__DOT__product 
        = vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__3__KET____DOT__fixed_mult_inst__product;
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__4__KET____DOT__fixed_mult_inst__DOT__product 
        = vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__4__KET____DOT__fixed_mult_inst__product;
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__5__KET____DOT__fixed_mult_inst__DOT__product 
        = vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__5__KET____DOT__fixed_mult_inst__product;
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__6__KET____DOT__fixed_mult_inst__DOT__product 
        = vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__6__KET____DOT__fixed_mult_inst__product;
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__7__KET____DOT__fixed_mult_inst__DOT__product 
        = vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__7__KET____DOT__fixed_mult_inst__product;
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__8__KET____DOT__fixed_mult_inst__DOT__product 
        = vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__8__KET____DOT__fixed_mult_inst__product;
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__9__KET____DOT__fixed_mult_inst__DOT__product 
        = vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__9__KET____DOT__fixed_mult_inst__product;
    vlSelf->fixed_vector_mult_inst__DOT__product_data_in[0U] 
        = (((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__1__KET____DOT__fixed_mult_inst__product) 
            << 0x10U) | (IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__0__KET____DOT__fixed_mult_inst__product));
    vlSelf->fixed_vector_mult_inst__DOT__product_data_in[1U] 
        = (((0xffffU & (IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__2__KET____DOT__fixed_mult_inst__product)) 
            | ((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__1__KET____DOT__fixed_mult_inst__product) 
               >> 0x10U)) | ((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__3__KET____DOT__fixed_mult_inst__product) 
                             << 0x10U));
    vlSelf->fixed_vector_mult_inst__DOT__product_data_in[2U] 
        = (((0xffffU & (IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__4__KET____DOT__fixed_mult_inst__product)) 
            | ((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__3__KET____DOT__fixed_mult_inst__product) 
               >> 0x10U)) | ((IData)((((QData)((IData)(
                                                       (((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__8__KET____DOT__fixed_mult_inst__product) 
                                                         << 0x10U) 
                                                        | (IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__7__KET____DOT__fixed_mult_inst__product)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__6__KET____DOT__fixed_mult_inst__product) 
                                                                     << 0x10U) 
                                                                    | (IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__5__KET____DOT__fixed_mult_inst__product)))))) 
                             << 0x10U));
    vlSelf->fixed_vector_mult_inst__DOT__product_data_in[3U] 
        = (((IData)((((QData)((IData)((((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__8__KET____DOT__fixed_mult_inst__product) 
                                        << 0x10U) | (IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__7__KET____DOT__fixed_mult_inst__product)))) 
                      << 0x20U) | (QData)((IData)((
                                                   ((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__6__KET____DOT__fixed_mult_inst__product) 
                                                    << 0x10U) 
                                                   | (IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__5__KET____DOT__fixed_mult_inst__product)))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    (((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__8__KET____DOT__fixed_mult_inst__product) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__7__KET____DOT__fixed_mult_inst__product)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__6__KET____DOT__fixed_mult_inst__product) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__5__KET____DOT__fixed_mult_inst__product))))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->fixed_vector_mult_inst__DOT__product_data_in[4U] 
        = (((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__9__KET____DOT__fixed_mult_inst__product) 
            << 0x10U) | ((IData)(((((QData)((IData)(
                                                    (((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__8__KET____DOT__fixed_mult_inst__product) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__7__KET____DOT__fixed_mult_inst__product)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__6__KET____DOT__fixed_mult_inst__product) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__5__KET____DOT__fixed_mult_inst__product))))) 
                                  >> 0x20U)) >> 0x10U));
    vlSelf->sum_valid = vlSelf->data_out_valid;
    vlSelf->data_out = vlSelf->fixed_adder_tree_inst__DOT__data_out;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_buffer_wren 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__fill;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out_wren 
        = (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__load) 
            | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__flow)) 
           | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__flush));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state_next 
        = ((0U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state)
            ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__load)
                ? 1U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state)
            : ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state)
                ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__fill)
                    ? 2U : ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__flow)
                             ? 1U : ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__unload)
                                      ? 0U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state)))
                : ((2U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state)
                    ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__flush)
                        ? 1U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state)
                    : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state)));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__use_buffered_data 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__flush;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_buffer_wren 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__fill;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_out_wren 
        = (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__load) 
            | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__flow)) 
           | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__flush));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state_next 
        = ((0U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state)
            ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__load)
                ? 1U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state)
            : ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state)
                ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__fill)
                    ? 2U : ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__flow)
                             ? 1U : ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__unload)
                                      ? 0U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state)))
                : ((2U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state)
                    ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__flush)
                        ? 1U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state)
                    : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state)));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__use_buffered_data 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__flush;
    vlSelf->fixed_vector_mult_inst__DOT__data_out_ready 
        = vlSelf->fixed_vector_mult_inst__DOT__product_data_out_ready;
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_vector_mult_inst__DOT__product_data_out_ready;
    vlSelf->pv_ready = vlSelf->fixed_vector_mult_inst__DOT__product_data_out_ready;
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_vector_mult_inst__DOT__product_data_out_ready));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__unload 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__fill 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__flow 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state) 
           & (3U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__load 
        = ((0U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__flush 
        = ((2U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__layer__DOT__data_in[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__3__KET____DOT__layer__data_in
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__layer__DOT__data_in[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__3__KET____DOT__layer__data_in
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__layer__DOT__data_out[0U] 
        = (0xfffffU & (((0x80000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__3__KET____DOT__layer__data_in
                                     [0U] << 1U)) | 
                        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__3__KET____DOT__layer__data_in
                        [0U]) + ((0x80000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__3__KET____DOT__layer__data_in
                                              [1U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__3__KET____DOT__layer__data_in
                                 [1U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__layer__DOT__data_in[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__layer__DOT__data_in[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__layer__DOT__data_in[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__layer__DOT__data_out[0U] 
        = (0x7ffffU & (((0x40000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in
                                     [0U] << 1U)) | 
                        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in
                        [0U]) + ((0x40000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in
                                              [2U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in
                                 [2U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__layer__DOT__data_out[1U] 
        = ((0x40000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in
                        [1U] << 1U)) | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in
           [1U]);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_in[4U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
        [4U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_in[3U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
        [3U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_in[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_in[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_in[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_out[0U] 
        = (0x3ffffU & (((0x20000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
                                     [0U] << 1U)) | 
                        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
                        [0U]) + ((0x20000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
                                              [4U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
                                 [4U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_out[1U] 
        = (0x3ffffU & (((0x20000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
                                     [1U] << 1U)) | 
                        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
                        [1U]) + ((0x20000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
                                              [3U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
                                 [3U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_out[2U] 
        = ((0x20000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
                        [2U] << 1U)) | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
           [2U]);
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[9U] 
        = vlSelf->pv[9U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[8U] 
        = vlSelf->pv[8U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[7U] 
        = vlSelf->pv[7U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[6U] 
        = vlSelf->pv[6U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[5U] 
        = vlSelf->pv[5U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[4U] 
        = vlSelf->pv[4U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[3U] 
        = vlSelf->pv[3U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[2U] 
        = vlSelf->pv[2U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[1U] 
        = vlSelf->pv[1U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[0U] 
        = vlSelf->pv[0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__unload 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__fill 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__flow 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state) 
           & (3U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__load 
        = ((0U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__flush 
        = ((2U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in[0U] 
        = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[0U];
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in[1U] 
        = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[1U];
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in[2U] 
        = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[2U];
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in[3U] 
        = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[3U];
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in[4U] 
        = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[4U];
    vlSelf->sum = vlSelf->data_out;
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__unload 
        = ((1U == vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__fill 
        = ((1U == vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__flow 
        = ((1U == vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state) 
           & (3U == (((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__load 
        = ((0U == vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__flush 
        = ((2U == vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_buffer_wren 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__fill;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out_wren 
        = (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__load) 
            | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__flow)) 
           | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__flush));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state_next 
        = ((0U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state)
            ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__load)
                ? 1U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state)
            : ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state)
                ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__fill)
                    ? 2U : ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__flow)
                             ? 1U : ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__unload)
                                      ? 0U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state)))
                : ((2U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state)
                    ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__flush)
                        ? 1U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state)
                    : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state)));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__use_buffered_data 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__flush;
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__3__KET____DOT__layer__data_out[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__layer__DOT__data_out
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__2__KET____DOT__layer__data_out[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__layer__DOT__data_out
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__2__KET____DOT__layer__data_out[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__layer__DOT__data_out
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__1__KET____DOT__layer__data_out[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_out
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__1__KET____DOT__layer__data_out[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_out
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__1__KET____DOT__layer__data_out[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_out
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[9U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [9U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[8U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [8U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[7U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [7U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[6U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [6U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[5U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [5U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[4U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [4U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[3U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [3U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[2U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[1U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[0U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[0U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[1U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[2U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[3U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [3U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[4U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [4U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[5U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [5U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[6U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [6U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[7U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [7U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[8U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [8U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[9U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [9U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_buffer_wren 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__fill;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_out_wren 
        = (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__load) 
            | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__flow)) 
           | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__flush));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state_next 
        = ((0U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state)
            ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__load)
                ? 1U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state)
            : ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state)
                ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__fill)
                    ? 2U : ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__flow)
                             ? 1U : ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__unload)
                                      ? 0U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state)))
                : ((2U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state)
                    ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__flush)
                        ? 1U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state)
                    : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state)));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__use_buffered_data 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__flush;
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_wren 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__fill;
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out_wren 
        = (((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__load) 
            | (IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__flow)) 
           | (IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__flush));
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state_next 
        = ((0U == vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state)
            ? ((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__load)
                ? 1U : vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state)
            : ((1U == vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state)
                ? ((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__fill)
                    ? 2U : ((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__flow)
                             ? 1U : ((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__unload)
                                      ? 0U : vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state)))
                : ((2U == vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state)
                    ? ((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__flush)
                        ? 1U : vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state)
                    : vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state)));
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__use_buffered_data 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__flush;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__sum[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__3__KET____DOT__layer__data_out
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__sum[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__2__KET____DOT__layer__data_out
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__sum[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__2__KET____DOT__layer__data_out
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__sum[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__1__KET____DOT__layer__data_out
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__sum[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__1__KET____DOT__layer__data_out
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__sum[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__1__KET____DOT__layer__data_out
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[9U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [9U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[8U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [8U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[7U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [7U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[6U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [6U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[5U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [5U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[4U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [4U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[3U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [3U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [0U];
    if (vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__use_buffered_data) {
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[0U] 
            = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_out[0U];
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[1U] 
            = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_out[1U];
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[2U] 
            = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_out[2U];
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[3U] 
            = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_out[3U];
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[4U] 
            = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_out[4U];
    } else {
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[0U] 
            = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[0U];
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[1U] 
            = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[1U];
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[2U] 
            = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[2U];
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[3U] 
            = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[3U];
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[4U] 
            = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[4U];
    }
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__cast_sum 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__sum
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__sum
           [0U]);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__cast_sum 
        = (((QData)((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__sum
                            [1U])) << 0x13U) | (QData)((IData)(
                                                               vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__sum
                                                               [0U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_sum 
        = (((QData)((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__sum
                            [2U])) << 0x24U) | (((QData)((IData)(
                                                                 vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__sum
                                                                 [1U])) 
                                                 << 0x12U) 
                                                | (QData)((IData)(
                                                                  vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__sum
                                                                  [0U]))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[9U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [9U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[8U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [8U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[7U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [7U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[6U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [6U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[5U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [5U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[4U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [4U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[3U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [3U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out[0U] 
        = (0x1ffffU & (((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                     [0U] << 1U)) | 
                        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                        [0U]) + ((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                              [9U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                 [9U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out[1U] 
        = (0x1ffffU & (((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                     [1U] << 1U)) | 
                        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                        [1U]) + ((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                              [8U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                 [8U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out[2U] 
        = (0x1ffffU & (((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                     [2U] << 1U)) | 
                        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                        [2U]) + ((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                              [7U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                 [7U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out[3U] 
        = (0x1ffffU & (((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                     [3U] << 1U)) | 
                        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                        [3U]) + ((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                              [6U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                 [6U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out[4U] 
        = (0x1ffffU & (((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                     [4U] << 1U)) | 
                        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                        [4U]) + ((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                              [5U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                 [5U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__cast_sum;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__cast_sum;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__cast_sum);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_sum;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_sum);
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out[4U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out
        [4U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out[3U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out
        [3U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum[4U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out
        [4U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum[3U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out
        [3U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[0U] 
        = (IData)((((QData)((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
                                    [2U])) << 0x22U) 
                   | (((QData)((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
                                       [1U])) << 0x11U) 
                      | (QData)((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
                                        [0U])))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[1U] 
        = ((vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
            [3U] << 0x13U) | (IData)(((((QData)((IData)(
                                                        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
                                                        [2U])) 
                                        << 0x22U) | 
                                       (((QData)((IData)(
                                                         vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
                                                         [1U])) 
                                         << 0x11U) 
                                        | (QData)((IData)(
                                                          vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
                                                          [0U])))) 
                                      >> 0x20U)));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[2U] 
        = ((vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
            [4U] << 4U) | (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
                           [3U] >> 0xdU));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[1U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[2U];
    if (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__use_buffered_data) {
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__selected_data[0U] 
            = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_buffer_out[0U];
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__selected_data[1U] 
            = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_buffer_out[1U];
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__selected_data[2U] 
            = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_buffer_out[2U];
    } else {
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__selected_data[0U] 
            = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[0U];
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__selected_data[1U] 
            = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[1U];
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__selected_data[2U] 
            = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[2U];
    }
}

VL_INLINE_OPT void Vtop_fixed_dot_product__I8_W8_IBa___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst__1(Vtop_fixed_dot_product__I8_W8_IBa* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_fixed_dot_product__I8_W8_IBa___nba_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst__1\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_buffer_out = 0U;
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_buffer_out = 0ULL;
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_buffer_out = 0ULL;
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_buffer_out[0U] = 0U;
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_buffer_out[1U] = 0U;
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_buffer_out[2U] = 0U;
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_out[0U] = 0U;
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_out[1U] = 0U;
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_out[2U] = 0U;
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_out[3U] = 0U;
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_out[4U] = 0U;
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_out = 0U;
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state = 0U;
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state = 0U;
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state = 0U;
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state = 0U;
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state = 0U;
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_out = 0ULL;
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out = 0ULL;
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out[0U] = 0U;
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out[1U] = 0U;
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out[2U] = 0U;
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[0U] = 0U;
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[1U] = 0U;
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[2U] = 0U;
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[3U] = 0U;
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[4U] = 0U;
    } else {
        if (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_buffer_wren) {
            vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_buffer_out 
                = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__cast_sum;
        }
        if (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_buffer_wren) {
            vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_buffer_out 
                = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__cast_sum;
        }
        if (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_buffer_wren) {
            vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_buffer_out 
                = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_sum;
        }
        if (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_buffer_wren) {
            vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_buffer_out[0U] 
                = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[0U];
            vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_buffer_out[1U] 
                = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[1U];
            vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_buffer_out[2U] 
                = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[2U];
        }
        if (vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_wren) {
            vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_out[0U] 
                = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[0U];
            vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_out[1U] 
                = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[1U];
            vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_out[2U] 
                = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[2U];
            vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_out[3U] 
                = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[3U];
            vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_out[4U] 
                = vlSelf->fixed_vector_mult_inst__DOT__product_data_in[4U];
        }
        if (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_out_wren) {
            vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_out 
                = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__selected_data;
        }
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state 
            = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state_next;
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state 
            = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state_next;
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state 
            = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state_next;
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state 
            = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state_next;
        vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state 
            = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state_next;
        if (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_out_wren) {
            vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_out 
                = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__selected_data;
        }
        if (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out_wren) {
            vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out 
                = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__selected_data;
        }
        if (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out_wren) {
            vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out[0U] 
                = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__selected_data[0U];
            vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out[1U] 
                = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__selected_data[1U];
            vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out[2U] 
                = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__selected_data[2U];
        }
        if (vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out_wren) {
            vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[0U] 
                = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[0U];
            vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[1U] 
                = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[1U];
            vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[2U] 
                = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[2U];
            vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[3U] 
                = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[3U];
            vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[4U] 
                = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data[4U];
        }
    }
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_out_valid 
        = ((~ (IData)(vlSelf->rst)) & (0U != vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state_next));
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in_ready 
        = ((~ (IData)(vlSelf->rst)) & (2U != vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state_next));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_in_ready 
        = ((~ (IData)(vlSelf->rst)) & (2U != vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__state_next));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_out_valid 
        = ((~ (IData)(vlSelf->rst)) & (0U != vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state_next));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_in_ready 
        = ((~ (IData)(vlSelf->rst)) & (2U != vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state_next));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out_valid 
        = ((~ (IData)(vlSelf->rst)) & (0U != vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state_next));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_in_ready 
        = ((~ (IData)(vlSelf->rst)) & (2U != vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state_next));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out_valid 
        = ((~ (IData)(vlSelf->rst)) & (0U != vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state_next));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in_ready 
        = ((~ (IData)(vlSelf->rst)) & (2U != vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state_next));
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out_valid 
        = ((~ (IData)(vlSelf->rst)) & (0U != vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state_next));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__cast_data 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_out;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__4__KET____DOT__valid 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__cast_data 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_out;
    vlSelf->fixed_vector_mult_inst__DOT__product_data_in_ready 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in_ready;
    vlSelf->data_in_ready = ((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in_ready) 
                             & ((~ (IData)(vlSelf->data_in_valid)) 
                                | (IData)(vlSelf->weight_valid)));
    vlSelf->weight_ready = ((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in_ready) 
                            & ((~ (IData)(vlSelf->weight_valid)) 
                               | (IData)(vlSelf->data_in_valid)));
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_vector_mult_inst__DOT__join_inst__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__ready 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__valid 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__ready 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__valid 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__ready 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__valid 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__ready 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_vector_mult_inst__DOT__data_out_valid 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_data 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out[0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out[1U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out[2U];
    vlSelf->fixed_vector_mult_inst__DOT__product_data_out[0U] 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[0U];
    vlSelf->fixed_vector_mult_inst__DOT__product_data_out[1U] 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[1U];
    vlSelf->fixed_vector_mult_inst__DOT__product_data_out[2U] 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[2U];
    vlSelf->fixed_vector_mult_inst__DOT__product_data_out[3U] 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[3U];
    vlSelf->fixed_vector_mult_inst__DOT__product_data_out[4U] 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[4U];
    vlSelf->fixed_vector_mult_inst__DOT__data_out[0U] 
        = (0xffffU & vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[0U]);
    vlSelf->fixed_vector_mult_inst__DOT__data_out[1U] 
        = (vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[0U] 
           >> 0x10U);
    vlSelf->fixed_vector_mult_inst__DOT__data_out[2U] 
        = (0xffffU & vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[1U]);
    vlSelf->fixed_vector_mult_inst__DOT__data_out[3U] 
        = (vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[1U] 
           >> 0x10U);
    vlSelf->fixed_vector_mult_inst__DOT__data_out[4U] 
        = (0xffffU & vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[2U]);
    vlSelf->fixed_vector_mult_inst__DOT__data_out[5U] 
        = (vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[2U] 
           >> 0x10U);
    vlSelf->fixed_vector_mult_inst__DOT__data_out[6U] 
        = (0xffffU & vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[3U]);
    vlSelf->fixed_vector_mult_inst__DOT__data_out[7U] 
        = (vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[3U] 
           >> 0x10U);
    vlSelf->fixed_vector_mult_inst__DOT__data_out[8U] 
        = (0xffffU & vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[4U]);
    vlSelf->fixed_vector_mult_inst__DOT__data_out[9U] 
        = (vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out[4U] 
           >> 0x10U);
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__4__KET____DOT__data[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__cast_data;
    vlSelf->fixed_adder_tree_inst__DOT__data_out_valid 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__4__KET____DOT__valid;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__data[0U] 
        = (0x7ffffU & (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__cast_data));
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__data[1U] 
        = (0x7ffffU & (IData)((vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__cast_data 
                               >> 0x13U)));
    vlSelf->fixed_vector_mult_inst__DOT__join_inst__DOT__data_out_ready 
        = vlSelf->fixed_vector_mult_inst__DOT__product_data_in_ready;
    vlSelf->fixed_vector_mult_inst__DOT__data_in_ready 
        = vlSelf->data_in_ready;
    vlSelf->fixed_vector_mult_inst__DOT__weight_ready 
        = vlSelf->weight_ready;
    vlSelf->fixed_vector_mult_inst__DOT__join_inst__DOT__data_in_ready 
        = (((IData)(vlSelf->weight_ready) << 1U) | (IData)(vlSelf->data_in_ready));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__ready;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__ready));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__valid;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__valid) 
           & (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__ready;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__ready));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__valid;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__valid) 
           & (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__ready;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__ready));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__valid;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__valid) 
           & (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_adder_tree_inst__DOT__data_in_ready 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__ready;
    vlSelf->fixed_adder_tree_inst__DOT__data_in_valid 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out_valid;
    vlSelf->pv_valid = vlSelf->fixed_vector_mult_inst__DOT__data_out_valid;
    vlSelf->fixed_vector_mult_inst__DOT__product_data_out_valid 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__valid 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__data[0U] 
        = (0x3ffffU & (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_data));
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__data[1U] 
        = (0x3ffffU & (IData)((vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_data 
                               >> 0x12U)));
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__data[2U] 
        = (0x3ffffU & (IData)((vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_data 
                               >> 0x24U)));
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data[0U] 
        = (0x1ffffU & vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[0U]);
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data[1U] 
        = (0x1ffffU & ((vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[1U] 
                        << 0xfU) | (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[0U] 
                                    >> 0x11U)));
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data[2U] 
        = (0x1ffffU & (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[1U] 
                       >> 2U));
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data[3U] 
        = (0x1ffffU & ((vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[2U] 
                        << 0xdU) | (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[1U] 
                                    >> 0x13U)));
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data[4U] 
        = (0x1ffffU & (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data[2U] 
                       >> 4U));
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[9U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [9U];
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[8U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [8U];
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[7U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [7U];
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[6U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [6U];
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[5U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [5U];
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[4U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [4U];
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[3U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [3U];
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[2U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [2U];
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[1U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [1U];
    vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[0U] 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__data_out = 
        vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__4__KET____DOT__data
        [0U];
    vlSelf->data_out_valid = vlSelf->fixed_adder_tree_inst__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__3__KET____DOT__layer__data_in[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__data
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__3__KET____DOT__layer__data_in[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__data
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__unload 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__fill 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__flow 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state) 
           & (3U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__load 
        = ((0U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__flush 
        = ((2U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__unload 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__fill 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__flow 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state) 
           & (3U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__load 
        = ((0U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__flush 
        = ((2U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_vector_mult_inst__DOT__product_data_out_ready 
        = vlSelf->fixed_adder_tree_inst__DOT__data_in_ready;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__valid;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__valid) 
           & (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__data
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__data
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__data
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in[4U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data
        [4U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in[3U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data
        [3U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data
        [0U];
    vlSelf->pv[9U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [9U];
    vlSelf->pv[8U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [8U];
    vlSelf->pv[7U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [7U];
    vlSelf->pv[6U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [6U];
    vlSelf->pv[5U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [5U];
    vlSelf->pv[4U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [4U];
    vlSelf->pv[3U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [3U];
    vlSelf->pv[2U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [2U];
    vlSelf->pv[1U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [1U];
    vlSelf->pv[0U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [0U];
    vlSelf->data_out = vlSelf->fixed_adder_tree_inst__DOT__data_out;
    vlSelf->sum_valid = vlSelf->data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__layer__DOT__data_in[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__3__KET____DOT__layer__data_in
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__layer__DOT__data_in[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__3__KET____DOT__layer__data_in
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__layer__DOT__data_out[0U] 
        = (0xfffffU & (((0x80000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__3__KET____DOT__layer__data_in
                                     [0U] << 1U)) | 
                        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__3__KET____DOT__layer__data_in
                        [0U]) + ((0x80000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__3__KET____DOT__layer__data_in
                                              [1U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__3__KET____DOT__layer__data_in
                                 [1U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_buffer_wren 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__fill;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_out_wren 
        = (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__load) 
            | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__flow)) 
           | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__flush));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state_next 
        = ((0U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state)
            ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__load)
                ? 1U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state)
            : ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state)
                ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__fill)
                    ? 2U : ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__flow)
                             ? 1U : ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__unload)
                                      ? 0U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state)))
                : ((2U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state)
                    ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__flush)
                        ? 1U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state)
                    : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__state)));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__use_buffered_data 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__flush;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_buffer_wren 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__fill;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out_wren 
        = (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__load) 
            | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__flow)) 
           | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__flush));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state_next 
        = ((0U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state)
            ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__load)
                ? 1U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state)
            : ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state)
                ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__fill)
                    ? 2U : ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__flow)
                             ? 1U : ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__unload)
                                      ? 0U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state)))
                : ((2U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state)
                    ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__flush)
                        ? 1U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state)
                    : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state)));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__use_buffered_data 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__flush;
    vlSelf->fixed_vector_mult_inst__DOT__data_out_ready 
        = vlSelf->fixed_vector_mult_inst__DOT__product_data_out_ready;
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_vector_mult_inst__DOT__product_data_out_ready;
    vlSelf->pv_ready = vlSelf->fixed_vector_mult_inst__DOT__product_data_out_ready;
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_vector_mult_inst__DOT__product_data_out_ready));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__unload 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__fill 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__flow 
        = ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state) 
           & (3U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__load 
        = ((0U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__flush 
        = ((2U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__layer__DOT__data_in[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__layer__DOT__data_in[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__layer__DOT__data_in[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__layer__DOT__data_out[0U] 
        = (0x7ffffU & (((0x40000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in
                                     [0U] << 1U)) | 
                        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in
                        [0U]) + ((0x40000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in
                                              [2U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in
                                 [2U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__layer__DOT__data_out[1U] 
        = ((0x40000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in
                        [1U] << 1U)) | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__2__KET____DOT__layer__data_in
           [1U]);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_in[4U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
        [4U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_in[3U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
        [3U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_in[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_in[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_in[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_out[0U] 
        = (0x3ffffU & (((0x20000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
                                     [0U] << 1U)) | 
                        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
                        [0U]) + ((0x20000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
                                              [4U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
                                 [4U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_out[1U] 
        = (0x3ffffU & (((0x20000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
                                     [1U] << 1U)) | 
                        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
                        [1U]) + ((0x20000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
                                              [3U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
                                 [3U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_out[2U] 
        = ((0x20000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
                        [2U] << 1U)) | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
           [2U]);
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[9U] 
        = vlSelf->pv[9U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[8U] 
        = vlSelf->pv[8U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[7U] 
        = vlSelf->pv[7U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[6U] 
        = vlSelf->pv[6U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[5U] 
        = vlSelf->pv[5U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[4U] 
        = vlSelf->pv[4U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[3U] 
        = vlSelf->pv[3U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[2U] 
        = vlSelf->pv[2U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[1U] 
        = vlSelf->pv[1U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[0U] 
        = vlSelf->pv[0U];
    vlSelf->sum = vlSelf->data_out;
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__3__KET____DOT__layer__data_out[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__layer__DOT__data_out
        [0U];
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__unload 
        = ((1U == vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__fill 
        = ((1U == vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__flow 
        = ((1U == vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state) 
           & (3U == (((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__load 
        = ((0U == vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state) 
           & (2U == (((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__flush 
        = ((2U == vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state) 
           & (1U == (((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__insert) 
                      << 1U) | (IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__remove))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_buffer_wren 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__fill;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out_wren 
        = (((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__load) 
            | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__flow)) 
           | (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__flush));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state_next 
        = ((0U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state)
            ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__load)
                ? 1U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state)
            : ((1U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state)
                ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__fill)
                    ? 2U : ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__flow)
                             ? 1U : ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__unload)
                                      ? 0U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state)))
                : ((2U == vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state)
                    ? ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__flush)
                        ? 1U : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state)
                    : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state)));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__use_buffered_data 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__flush;
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__2__KET____DOT__layer__data_out[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__layer__DOT__data_out
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__2__KET____DOT__layer__data_out[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__layer__DOT__data_out
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__1__KET____DOT__layer__data_out[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_out
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__1__KET____DOT__layer__data_out[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_out
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__1__KET____DOT__layer__data_out[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_out
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[9U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [9U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[8U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [8U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[7U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [7U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[6U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [6U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[5U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [5U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[4U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [4U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[3U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [3U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[2U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[1U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT__data_in[0U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[0U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[1U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[2U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[3U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [3U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[4U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [4U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[5U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [5U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[6U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [6U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[7U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [7U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[8U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [8U];
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[9U] 
        = vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in
        [9U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__sum[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__3__KET____DOT__layer__data_out
        [0U];
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_wren 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__fill;
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out_wren 
        = (((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__load) 
            | (IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__flow)) 
           | (IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__flush));
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state_next 
        = ((0U == vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state)
            ? ((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__load)
                ? 1U : vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state)
            : ((1U == vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state)
                ? ((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__fill)
                    ? 2U : ((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__flow)
                             ? 1U : ((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__unload)
                                      ? 0U : vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state)))
                : ((2U == vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state)
                    ? ((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__flush)
                        ? 1U : vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state)
                    : vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state)));
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__use_buffered_data 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__flush;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__sum[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__2__KET____DOT__layer__data_out
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__sum[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__2__KET____DOT__layer__data_out
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__sum[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__1__KET____DOT__layer__data_out
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__sum[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__1__KET____DOT__layer__data_out
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__sum[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__1__KET____DOT__layer__data_out
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[9U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [9U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[8U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [8U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[7U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [7U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[6U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [6U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[5U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [5U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[4U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [4U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[3U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [3U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__cast_sum 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__sum
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__cast_sum 
        = (((QData)((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__sum
                            [1U])) << 0x13U) | (QData)((IData)(
                                                               vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__sum
                                                               [0U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_sum 
        = (((QData)((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__sum
                            [2U])) << 0x24U) | (((QData)((IData)(
                                                                 vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__sum
                                                                 [1U])) 
                                                 << 0x12U) 
                                                | (QData)((IData)(
                                                                  vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__sum
                                                                  [0U]))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[9U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [9U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[8U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [8U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[7U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [7U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[6U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [6U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[5U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [5U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[4U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [4U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[3U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [3U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out[0U] 
        = (0x1ffffU & (((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                     [0U] << 1U)) | 
                        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                        [0U]) + ((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                              [9U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                 [9U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out[1U] 
        = (0x1ffffU & (((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                     [1U] << 1U)) | 
                        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                        [1U]) + ((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                              [8U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                 [8U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out[2U] 
        = (0x1ffffU & (((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                     [2U] << 1U)) | 
                        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                        [2U]) + ((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                              [7U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                 [7U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out[3U] 
        = (0x1ffffU & (((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                     [3U] << 1U)) | 
                        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                        [3U]) + ((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                              [6U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                 [6U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out[4U] 
        = (0x1ffffU & (((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                     [4U] << 1U)) | 
                        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                        [4U]) + ((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                              [5U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                 [5U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__cast_sum;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__cast_sum;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__cast_sum);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_sum;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_sum);
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out[4U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out
        [4U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out[3U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out
        [3U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum[4U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out
        [4U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum[3U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out
        [3U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out
        [2U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[0U] 
        = (IData)((((QData)((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
                                    [2U])) << 0x22U) 
                   | (((QData)((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
                                       [1U])) << 0x11U) 
                      | (QData)((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
                                        [0U])))));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[1U] 
        = ((vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
            [3U] << 0x13U) | (IData)(((((QData)((IData)(
                                                        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
                                                        [2U])) 
                                        << 0x22U) | 
                                       (((QData)((IData)(
                                                         vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
                                                         [1U])) 
                                         << 0x11U) 
                                        | (QData)((IData)(
                                                          vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
                                                          [0U])))) 
                                      >> 0x20U)));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[2U] 
        = ((vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
            [4U] << 4U) | (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
                           [3U] >> 0xdU));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[1U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in[2U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[2U];
    if (vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__use_buffered_data) {
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__selected_data[0U] 
            = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_buffer_out[0U];
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__selected_data[1U] 
            = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_buffer_out[1U];
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__selected_data[2U] 
            = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_buffer_out[2U];
    } else {
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__selected_data[0U] 
            = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[0U];
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__selected_data[1U] 
            = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[1U];
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__selected_data[2U] 
            = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum[2U];
    }
}
