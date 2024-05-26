// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop_fixed_dot_product__I8_W8_IB4.h"

VL_ATTR_COLD void Vtop_fixed_dot_product__I8_W8_IB4___stl_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__0(Vtop_fixed_dot_product__I8_W8_IB4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_fixed_dot_product__I8_W8_IB4___stl_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__0__KET____DOT__fdp_inst__0\n"); );
    // Init
    CData/*1:0*/ fixed_vector_mult_inst__DOT____Vcellinp__join_inst__data_in_valid;
    fixed_vector_mult_inst__DOT____Vcellinp__join_inst__data_in_valid = 0;
    // Body
    vlSelf->fixed_vector_mult_inst__DOT__product_data_out 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_vector_mult_inst__DOT__product_data_in_ready 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__valid 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_data 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__valid 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__ready 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__ready 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_vector_mult_inst__DOT__data_out_valid 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out;
    vlSelf->fixed_vector_mult_inst__DOT__data_out[0U] 
        = (0xffffU & (IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out));
    vlSelf->fixed_vector_mult_inst__DOT__data_out[1U] 
        = (0xffffU & (IData)((vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out 
                              >> 0x10U)));
    vlSelf->fixed_vector_mult_inst__DOT__data_out[2U] 
        = (0xffffU & (IData)((vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out 
                              >> 0x20U)));
    vlSelf->fixed_vector_mult_inst__DOT__data_out[3U] 
        = (0xffffU & (IData)((vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out 
                              >> 0x30U)));
    vlSelf->fixed_vector_mult_inst__DOT__rst = vlSelf->rst;
    vlSelf->fixed_adder_tree_inst__DOT__rst = vlSelf->rst;
    vlSelf->fixed_vector_mult_inst__DOT__clk = vlSelf->clk;
    vlSelf->fixed_adder_tree_inst__DOT__clk = vlSelf->clk;
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
    vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in[3U] 
        = vlSelf->data_in[3U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in[2U] 
        = vlSelf->data_in[2U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in[1U] 
        = vlSelf->data_in[1U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in[0U] 
        = vlSelf->data_in[0U];
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
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__valid;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__data[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_data;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__valid;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__valid) 
           & (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__ready;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__ready));
    vlSelf->fixed_adder_tree_inst__DOT__data_in_ready 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__ready;
    vlSelf->fixed_adder_tree_inst__DOT__data_in_valid 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out_valid;
    vlSelf->pv_valid = vlSelf->fixed_vector_mult_inst__DOT__data_out_valid;
    vlSelf->fixed_vector_mult_inst__DOT__product_data_out_valid 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__valid 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data[0U] 
        = (0x1ffffU & (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data));
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data[1U] 
        = (0x1ffffU & (IData)((vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data 
                               >> 0x11U)));
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
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__rst 
        = vlSelf->fixed_vector_mult_inst__DOT__rst;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__rst 
        = vlSelf->fixed_adder_tree_inst__DOT__rst;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__rst 
        = vlSelf->fixed_adder_tree_inst__DOT__rst;
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__clk 
        = vlSelf->fixed_vector_mult_inst__DOT__clk;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__clk 
        = vlSelf->fixed_adder_tree_inst__DOT__clk;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__clk 
        = vlSelf->fixed_adder_tree_inst__DOT__clk;
    vlSelf->fixed_adder_tree_inst__DOT__data_out_ready 
        = vlSelf->sum_ready;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__ready 
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
    vlSelf->data_out_valid = vlSelf->fixed_adder_tree_inst__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__data_out = 
        vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__data
        [0U];
    vlSelf->fixed_vector_mult_inst__DOT__product_data_out_ready 
        = vlSelf->fixed_adder_tree_inst__DOT__data_in_ready;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__valid;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__valid) 
           & (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data
        [0U];
    vlSelf->pv[3U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [3U];
    vlSelf->pv[2U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [2U];
    vlSelf->pv[1U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [1U];
    vlSelf->pv[0U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__ready;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__ready));
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
    vlSelf->fixed_vector_mult_inst__DOT__product_data_in 
        = (((QData)((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__3__KET____DOT__fixed_mult_inst__product)) 
            << 0x30U) | (((QData)((IData)((((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__2__KET____DOT__fixed_mult_inst__product) 
                                            << 0x10U) 
                                           | (IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__1__KET____DOT__fixed_mult_inst__product)))) 
                          << 0x10U) | (QData)((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__0__KET____DOT__fixed_mult_inst__product))));
    vlSelf->sum_valid = vlSelf->data_out_valid;
    vlSelf->data_out = vlSelf->fixed_adder_tree_inst__DOT__data_out;
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
                                              [1U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
                                 [1U])));
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[3U] 
        = vlSelf->pv[3U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[2U] 
        = vlSelf->pv[2U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[1U] 
        = vlSelf->pv[1U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[0U] 
        = vlSelf->pv[0U];
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
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_vector_mult_inst__DOT__product_data_in;
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
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__1__KET____DOT__layer__data_out[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_out
        [0U];
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
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__sum[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__1__KET____DOT__layer__data_out
        [0U];
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
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_vector_mult_inst__DOT__product_data_in);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_sum 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__sum
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__sum
           [0U]);
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
                                              [3U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                 [3U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out[1U] 
        = (0x1ffffU & (((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                     [1U] << 1U)) | 
                        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                        [1U]) + ((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                              [2U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                 [2U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_sum;
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum 
        = (((QData)((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
                            [1U])) << 0x11U) | (QData)((IData)(
                                                               vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
                                                               [0U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum);
}

VL_ATTR_COLD void Vtop_fixed_dot_product__I8_W8_IB4___stl_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst__0(Vtop_fixed_dot_product__I8_W8_IB4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_fixed_dot_product__I8_W8_IB4___stl_sequent__TOP__fixed_linear_sync_top__DOT__fc1_inst__DOT__linear__BRA__1__KET____DOT__fdp_inst__0\n"); );
    // Init
    CData/*1:0*/ fixed_vector_mult_inst__DOT____Vcellinp__join_inst__data_in_valid;
    fixed_vector_mult_inst__DOT____Vcellinp__join_inst__data_in_valid = 0;
    // Body
    vlSelf->fixed_vector_mult_inst__DOT__product_data_out 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out;
    vlSelf->fixed_vector_mult_inst__DOT__product_data_in_ready 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__valid 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_data 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__valid 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__ready 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__ready 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in_ready;
    vlSelf->fixed_vector_mult_inst__DOT__data_out_valid 
        = vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out;
    vlSelf->fixed_vector_mult_inst__DOT__data_out[0U] 
        = (0xffffU & (IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out));
    vlSelf->fixed_vector_mult_inst__DOT__data_out[1U] 
        = (0xffffU & (IData)((vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out 
                              >> 0x10U)));
    vlSelf->fixed_vector_mult_inst__DOT__data_out[2U] 
        = (0xffffU & (IData)((vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out 
                              >> 0x20U)));
    vlSelf->fixed_vector_mult_inst__DOT__data_out[3U] 
        = (0xffffU & (IData)((vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out 
                              >> 0x30U)));
    vlSelf->fixed_vector_mult_inst__DOT__rst = vlSelf->rst;
    vlSelf->fixed_adder_tree_inst__DOT__rst = vlSelf->rst;
    vlSelf->fixed_vector_mult_inst__DOT__clk = vlSelf->clk;
    vlSelf->fixed_adder_tree_inst__DOT__clk = vlSelf->clk;
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
    vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in[3U] 
        = vlSelf->data_in[3U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in[2U] 
        = vlSelf->data_in[2U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in[1U] 
        = vlSelf->data_in[1U];
    vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in[0U] 
        = vlSelf->data_in[0U];
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
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__valid;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__data[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_data;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__valid;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__valid) 
           & (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__ready;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__ready));
    vlSelf->fixed_adder_tree_inst__DOT__data_in_ready 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__ready;
    vlSelf->fixed_adder_tree_inst__DOT__data_in_valid 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out_valid;
    vlSelf->pv_valid = vlSelf->fixed_vector_mult_inst__DOT__data_out_valid;
    vlSelf->fixed_vector_mult_inst__DOT__product_data_out_valid 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__valid 
        = vlSelf->fixed_vector_mult_inst__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data[0U] 
        = (0x1ffffU & (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data));
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data[1U] 
        = (0x1ffffU & (IData)((vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data 
                               >> 0x11U)));
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
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__rst 
        = vlSelf->fixed_vector_mult_inst__DOT__rst;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__rst 
        = vlSelf->fixed_adder_tree_inst__DOT__rst;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__rst 
        = vlSelf->fixed_adder_tree_inst__DOT__rst;
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__clk 
        = vlSelf->fixed_vector_mult_inst__DOT__clk;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__clk 
        = vlSelf->fixed_adder_tree_inst__DOT__clk;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__clk 
        = vlSelf->fixed_adder_tree_inst__DOT__clk;
    vlSelf->fixed_adder_tree_inst__DOT__data_out_ready 
        = vlSelf->sum_ready;
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__ready 
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
    vlSelf->data_out_valid = vlSelf->fixed_adder_tree_inst__DOT__data_out_valid;
    vlSelf->fixed_adder_tree_inst__DOT__data_out = 
        vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__data
        [0U];
    vlSelf->fixed_vector_mult_inst__DOT__product_data_out_ready 
        = vlSelf->fixed_adder_tree_inst__DOT__data_in_ready;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in_valid 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__valid;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__insert 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__valid) 
           & (IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in_ready));
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data
        [0U];
    vlSelf->pv[3U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [3U];
    vlSelf->pv[2U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [2U];
    vlSelf->pv[1U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [1U];
    vlSelf->pv[0U] = vlSelf->__Vcellout__fixed_vector_mult_inst__data_out
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out_ready 
        = vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__ready;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__remove 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out_valid) 
           & (IData)(vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__ready));
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
    vlSelf->fixed_vector_mult_inst__DOT__product_data_in 
        = (((QData)((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__3__KET____DOT__fixed_mult_inst__product)) 
            << 0x30U) | (((QData)((IData)((((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__2__KET____DOT__fixed_mult_inst__product) 
                                            << 0x10U) 
                                           | (IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__1__KET____DOT__fixed_mult_inst__product)))) 
                          << 0x10U) | (QData)((IData)(vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__0__KET____DOT__fixed_mult_inst__product))));
    vlSelf->sum_valid = vlSelf->data_out_valid;
    vlSelf->data_out = vlSelf->fixed_adder_tree_inst__DOT__data_out;
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
                                              [1U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in
                                 [1U])));
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[3U] 
        = vlSelf->pv[3U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[2U] 
        = vlSelf->pv[2U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[1U] 
        = vlSelf->pv[1U];
    vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[0U] 
        = vlSelf->pv[0U];
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
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_vector_mult_inst__DOT__product_data_in;
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
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__1__KET____DOT__layer__data_out[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_out
        [0U];
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
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__sum[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__1__KET____DOT__layer__data_out
        [0U];
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
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_vector_mult_inst__DOT__product_data_in);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_sum 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__sum
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__sum
           [0U]);
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
                                              [3U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                 [3U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out[1U] 
        = (0x1ffffU & (((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                     [1U] << 1U)) | 
                        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                        [1U]) + ((0x10000U & (vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                              [2U] 
                                              << 1U)) 
                                 | vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in
                                 [2U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_sum;
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum[1U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out
        [1U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum[0U] 
        = vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out
        [0U];
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum 
        = (((QData)((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
                            [1U])) << 0x11U) | (QData)((IData)(
                                                               vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum
                                                               [0U])));
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in 
        = vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__selected_data 
        = ((IData)(vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__use_buffered_data)
            ? vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_buffer_out
            : vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum);
}

VL_ATTR_COLD void Vtop_fixed_dot_product__I8_W8_IB4___ctor_var_reset(Vtop_fixed_dot_product__I8_W8_IB4* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_fixed_dot_product__I8_W8_IB4___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->data_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->data_in_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->weight_valid = VL_RAND_RESET_I(1);
    vlSelf->weight_ready = VL_RAND_RESET_I(1);
    vlSelf->data_out = VL_RAND_RESET_I(18);
    vlSelf->data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->data_out_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->pv[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->pv_valid = VL_RAND_RESET_I(1);
    vlSelf->pv_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellout__fixed_vector_mult_inst__data_out[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__fixed_vector_mult_inst__weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__fixed_vector_mult_inst__data_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->sum = VL_RAND_RESET_I(18);
    vlSelf->sum_valid = VL_RAND_RESET_I(1);
    vlSelf->sum_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vcellinp__fixed_adder_tree_inst__data_in[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->fixed_vector_mult_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_vector_mult_inst__DOT__rst = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_vector_mult_inst__DOT__data_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->fixed_vector_mult_inst__DOT__data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_vector_mult_inst__DOT__data_in_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_vector_mult_inst__DOT__weight[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->fixed_vector_mult_inst__DOT__weight_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_vector_mult_inst__DOT__weight_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_vector_mult_inst__DOT__data_out[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->fixed_vector_mult_inst__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_vector_mult_inst__DOT__data_out_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_vector_mult_inst__DOT__product_vector[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->fixed_vector_mult_inst__DOT__product_data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_vector_mult_inst__DOT__product_data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_vector_mult_inst__DOT__product_data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_vector_mult_inst__DOT__product_data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_vector_mult_inst__DOT__product_data_in = VL_RAND_RESET_Q(64);
    vlSelf->fixed_vector_mult_inst__DOT__product_data_out = VL_RAND_RESET_Q(64);
    vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__0__KET____DOT__fixed_mult_inst__product = VL_RAND_RESET_I(16);
    vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__1__KET____DOT__fixed_mult_inst__product = VL_RAND_RESET_I(16);
    vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__2__KET____DOT__fixed_mult_inst__product = VL_RAND_RESET_I(16);
    vlSelf->fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__3__KET____DOT__fixed_mult_inst__product = VL_RAND_RESET_I(16);
    vlSelf->fixed_vector_mult_inst__DOT__join_inst__DOT__data_in_valid = VL_RAND_RESET_I(2);
    vlSelf->fixed_vector_mult_inst__DOT__join_inst__DOT__data_in_ready = VL_RAND_RESET_I(2);
    vlSelf->fixed_vector_mult_inst__DOT__join_inst__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_vector_mult_inst__DOT__join_inst__DOT__data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in = VL_RAND_RESET_Q(64);
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out = VL_RAND_RESET_Q(64);
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_out = VL_RAND_RESET_Q(64);
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__data_out_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__use_buffered_data = VL_RAND_RESET_I(1);
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data = VL_RAND_RESET_Q(64);
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state = 0;
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__state_next = 0;
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__insert = VL_RAND_RESET_I(1);
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__remove = VL_RAND_RESET_I(1);
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__load = VL_RAND_RESET_I(1);
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__flow = VL_RAND_RESET_I(1);
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__fill = VL_RAND_RESET_I(1);
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->fixed_vector_mult_inst__DOT__register_slice__DOT__unload = VL_RAND_RESET_I(1);
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__0__KET____DOT__fixed_mult_inst__DOT__data_a = VL_RAND_RESET_I(8);
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__0__KET____DOT__fixed_mult_inst__DOT__data_b = VL_RAND_RESET_I(8);
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__0__KET____DOT__fixed_mult_inst__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__1__KET____DOT__fixed_mult_inst__DOT__data_a = VL_RAND_RESET_I(8);
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__1__KET____DOT__fixed_mult_inst__DOT__data_b = VL_RAND_RESET_I(8);
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__1__KET____DOT__fixed_mult_inst__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__2__KET____DOT__fixed_mult_inst__DOT__data_a = VL_RAND_RESET_I(8);
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__2__KET____DOT__fixed_mult_inst__DOT__data_b = VL_RAND_RESET_I(8);
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__2__KET____DOT__fixed_mult_inst__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__3__KET____DOT__fixed_mult_inst__DOT__data_a = VL_RAND_RESET_I(8);
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__3__KET____DOT__fixed_mult_inst__DOT__data_b = VL_RAND_RESET_I(8);
    vlSelf->fixed_vector_mult_inst__DOT__parallel_mult__BRA__3__KET____DOT__fixed_mult_inst__DOT__product = VL_RAND_RESET_I(16);
    vlSelf->fixed_adder_tree_inst__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_adder_tree_inst__DOT__rst = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_adder_tree_inst__DOT__data_in[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->fixed_adder_tree_inst__DOT__data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_adder_tree_inst__DOT__data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_adder_tree_inst__DOT__data_out = VL_RAND_RESET_I(18);
    vlSelf->fixed_adder_tree_inst__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_adder_tree_inst__DOT__data_out_ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data[__Vi0] = VL_RAND_RESET_I(17);
    }
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__data[__Vi0] = VL_RAND_RESET_I(18);
    }
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__ready = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum = VL_RAND_RESET_Q(34);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data = VL_RAND_RESET_Q(34);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__sum[__Vi0] = VL_RAND_RESET_I(18);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->fixed_adder_tree_inst__DOT____Vcellout__level__BRA__1__KET____DOT__layer__data_out[__Vi0] = VL_RAND_RESET_I(18);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in[__Vi0] = VL_RAND_RESET_I(17);
    }
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_sum = VL_RAND_RESET_I(18);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_data = VL_RAND_RESET_I(18);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out[__Vi0] = VL_RAND_RESET_I(17);
    }
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in = VL_RAND_RESET_Q(34);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out = VL_RAND_RESET_Q(34);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_buffer_out = VL_RAND_RESET_Q(34);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_buffer_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__use_buffered_data = VL_RAND_RESET_I(1);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__selected_data = VL_RAND_RESET_Q(34);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state = 0;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state_next = 0;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__insert = VL_RAND_RESET_I(1);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__remove = VL_RAND_RESET_I(1);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__load = VL_RAND_RESET_I(1);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__flow = VL_RAND_RESET_I(1);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__fill = VL_RAND_RESET_I(1);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__unload = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_in[__Vi0] = VL_RAND_RESET_I(17);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_out[__Vi0] = VL_RAND_RESET_I(18);
    }
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_in = VL_RAND_RESET_I(18);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_in_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_in_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out = VL_RAND_RESET_I(18);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out_valid = VL_RAND_RESET_I(1);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out_ready = VL_RAND_RESET_I(1);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_buffer_out = VL_RAND_RESET_I(18);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_buffer_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out_wren = VL_RAND_RESET_I(1);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__use_buffered_data = VL_RAND_RESET_I(1);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__selected_data = VL_RAND_RESET_I(18);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state = 0;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state_next = 0;
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__insert = VL_RAND_RESET_I(1);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__remove = VL_RAND_RESET_I(1);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__load = VL_RAND_RESET_I(1);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__flow = VL_RAND_RESET_I(1);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__fill = VL_RAND_RESET_I(1);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__flush = VL_RAND_RESET_I(1);
    vlSelf->fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__unload = VL_RAND_RESET_I(1);
}
