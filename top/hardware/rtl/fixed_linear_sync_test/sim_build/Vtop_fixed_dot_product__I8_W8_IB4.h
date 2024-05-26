// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_FIXED_DOT_PRODUCT__I8_W8_IB4_H_
#define VERILATED_VTOP_FIXED_DOT_PRODUCT__I8_W8_IB4_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop_fixed_dot_product__I8_W8_IB4 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(data_in_valid,0,0);
        VL_OUT8(data_in_ready,0,0);
        VL_IN8(weight_valid,0,0);
        VL_OUT8(weight_ready,0,0);
        VL_OUT8(data_out_valid,0,0);
        VL_IN8(data_out_ready,0,0);
        CData/*0:0*/ pv_valid;
        CData/*0:0*/ pv_ready;
        CData/*0:0*/ sum_valid;
        CData/*0:0*/ sum_ready;
        CData/*0:0*/ fixed_vector_mult_inst__DOT__clk;
        CData/*0:0*/ fixed_vector_mult_inst__DOT__rst;
        CData/*0:0*/ fixed_vector_mult_inst__DOT__data_in_valid;
        CData/*0:0*/ fixed_vector_mult_inst__DOT__data_in_ready;
        CData/*0:0*/ fixed_vector_mult_inst__DOT__weight_valid;
        CData/*0:0*/ fixed_vector_mult_inst__DOT__weight_ready;
        CData/*0:0*/ fixed_vector_mult_inst__DOT__data_out_valid;
        CData/*0:0*/ fixed_vector_mult_inst__DOT__data_out_ready;
        CData/*0:0*/ fixed_vector_mult_inst__DOT__product_data_in_valid;
        CData/*0:0*/ fixed_vector_mult_inst__DOT__product_data_in_ready;
        CData/*0:0*/ fixed_vector_mult_inst__DOT__product_data_out_valid;
        CData/*0:0*/ fixed_vector_mult_inst__DOT__product_data_out_ready;
        CData/*1:0*/ fixed_vector_mult_inst__DOT__join_inst__DOT__data_in_valid;
        CData/*1:0*/ fixed_vector_mult_inst__DOT__join_inst__DOT__data_in_ready;
        CData/*0:0*/ fixed_vector_mult_inst__DOT__join_inst__DOT__data_out_valid;
        CData/*0:0*/ fixed_vector_mult_inst__DOT__join_inst__DOT__data_out_ready;
        CData/*0:0*/ fixed_vector_mult_inst__DOT__register_slice__DOT__clk;
        CData/*0:0*/ fixed_vector_mult_inst__DOT__register_slice__DOT__rst;
        CData/*0:0*/ fixed_vector_mult_inst__DOT__register_slice__DOT__data_in_valid;
        CData/*0:0*/ fixed_vector_mult_inst__DOT__register_slice__DOT__data_in_ready;
        CData/*0:0*/ fixed_vector_mult_inst__DOT__register_slice__DOT__data_out_valid;
        CData/*0:0*/ fixed_vector_mult_inst__DOT__register_slice__DOT__data_out_ready;
        CData/*0:0*/ fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_wren;
        CData/*0:0*/ fixed_vector_mult_inst__DOT__register_slice__DOT__data_out_wren;
        CData/*0:0*/ fixed_vector_mult_inst__DOT__register_slice__DOT__use_buffered_data;
        CData/*0:0*/ fixed_vector_mult_inst__DOT__register_slice__DOT__insert;
        CData/*0:0*/ fixed_vector_mult_inst__DOT__register_slice__DOT__remove;
        CData/*0:0*/ fixed_vector_mult_inst__DOT__register_slice__DOT__load;
        CData/*0:0*/ fixed_vector_mult_inst__DOT__register_slice__DOT__flow;
        CData/*0:0*/ fixed_vector_mult_inst__DOT__register_slice__DOT__fill;
        CData/*0:0*/ fixed_vector_mult_inst__DOT__register_slice__DOT__flush;
        CData/*0:0*/ fixed_vector_mult_inst__DOT__register_slice__DOT__unload;
        CData/*7:0*/ fixed_vector_mult_inst__DOT__parallel_mult__BRA__0__KET____DOT__fixed_mult_inst__DOT__data_a;
        CData/*7:0*/ fixed_vector_mult_inst__DOT__parallel_mult__BRA__0__KET____DOT__fixed_mult_inst__DOT__data_b;
        CData/*7:0*/ fixed_vector_mult_inst__DOT__parallel_mult__BRA__1__KET____DOT__fixed_mult_inst__DOT__data_a;
        CData/*7:0*/ fixed_vector_mult_inst__DOT__parallel_mult__BRA__1__KET____DOT__fixed_mult_inst__DOT__data_b;
        CData/*7:0*/ fixed_vector_mult_inst__DOT__parallel_mult__BRA__2__KET____DOT__fixed_mult_inst__DOT__data_a;
        CData/*7:0*/ fixed_vector_mult_inst__DOT__parallel_mult__BRA__2__KET____DOT__fixed_mult_inst__DOT__data_b;
        CData/*7:0*/ fixed_vector_mult_inst__DOT__parallel_mult__BRA__3__KET____DOT__fixed_mult_inst__DOT__data_a;
        CData/*7:0*/ fixed_vector_mult_inst__DOT__parallel_mult__BRA__3__KET____DOT__fixed_mult_inst__DOT__data_b;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__clk;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__rst;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__data_in_valid;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__data_in_ready;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__data_out_valid;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__data_out_ready;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__valid;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__ready;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__valid;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__ready;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__valid;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__ready;
    };
    struct {
        CData/*0:0*/ fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__clk;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__rst;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in_valid;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in_ready;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out_valid;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out_ready;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_buffer_wren;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out_wren;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__use_buffered_data;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__insert;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__remove;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__load;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__flow;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__fill;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__flush;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__unload;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__clk;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__rst;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_in_valid;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_in_ready;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out_valid;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out_ready;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_buffer_wren;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out_wren;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__use_buffered_data;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__insert;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__remove;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__load;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__flow;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__fill;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__flush;
        CData/*0:0*/ fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__unload;
        SData/*15:0*/ fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__0__KET____DOT__fixed_mult_inst__product;
        SData/*15:0*/ fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__1__KET____DOT__fixed_mult_inst__product;
        SData/*15:0*/ fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__2__KET____DOT__fixed_mult_inst__product;
        SData/*15:0*/ fixed_vector_mult_inst__DOT____Vcellout__parallel_mult__BRA__3__KET____DOT__fixed_mult_inst__product;
        SData/*15:0*/ fixed_vector_mult_inst__DOT__parallel_mult__BRA__0__KET____DOT__fixed_mult_inst__DOT__product;
        SData/*15:0*/ fixed_vector_mult_inst__DOT__parallel_mult__BRA__1__KET____DOT__fixed_mult_inst__DOT__product;
        SData/*15:0*/ fixed_vector_mult_inst__DOT__parallel_mult__BRA__2__KET____DOT__fixed_mult_inst__DOT__product;
        SData/*15:0*/ fixed_vector_mult_inst__DOT__parallel_mult__BRA__3__KET____DOT__fixed_mult_inst__DOT__product;
        VL_OUT(data_out,17,0);
        IData/*17:0*/ sum;
        IData/*31:0*/ fixed_vector_mult_inst__DOT__register_slice__DOT__state;
        IData/*31:0*/ fixed_vector_mult_inst__DOT__register_slice__DOT__state_next;
        IData/*17:0*/ fixed_adder_tree_inst__DOT__data_out;
        IData/*17:0*/ fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_sum;
        IData/*17:0*/ fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__cast_data;
        IData/*31:0*/ fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state;
        IData/*31:0*/ fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__state_next;
        IData/*17:0*/ fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_in;
        IData/*17:0*/ fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_out;
        IData/*17:0*/ fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__data_buffer_out;
        IData/*17:0*/ fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__selected_data;
        IData/*31:0*/ fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state;
        IData/*31:0*/ fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__state_next;
        QData/*63:0*/ fixed_vector_mult_inst__DOT__product_data_in;
        QData/*63:0*/ fixed_vector_mult_inst__DOT__product_data_out;
        QData/*63:0*/ fixed_vector_mult_inst__DOT__register_slice__DOT__data_in;
        QData/*63:0*/ fixed_vector_mult_inst__DOT__register_slice__DOT__data_out;
        QData/*63:0*/ fixed_vector_mult_inst__DOT__register_slice__DOT__data_buffer_out;
        QData/*63:0*/ fixed_vector_mult_inst__DOT__register_slice__DOT__selected_data;
        QData/*33:0*/ fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_sum;
        QData/*33:0*/ fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__cast_data;
        QData/*33:0*/ fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_in;
    };
    struct {
        QData/*33:0*/ fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_out;
        QData/*33:0*/ fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__data_buffer_out;
        QData/*33:0*/ fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__selected_data;
        VL_IN8(data_in[4],7,0);
        VL_IN8(weight[4],7,0);
        VlUnpacked<SData/*15:0*/, 4> pv;
        VlUnpacked<SData/*15:0*/, 4> __Vcellout__fixed_vector_mult_inst__data_out;
        VlUnpacked<CData/*7:0*/, 4> __Vcellinp__fixed_vector_mult_inst__weight;
        VlUnpacked<CData/*7:0*/, 4> __Vcellinp__fixed_vector_mult_inst__data_in;
        VlUnpacked<SData/*15:0*/, 4> __Vcellinp__fixed_adder_tree_inst__data_in;
        VlUnpacked<CData/*7:0*/, 4> fixed_vector_mult_inst__DOT__data_in;
        VlUnpacked<CData/*7:0*/, 4> fixed_vector_mult_inst__DOT__weight;
        VlUnpacked<SData/*15:0*/, 4> fixed_vector_mult_inst__DOT__data_out;
        VlUnpacked<SData/*15:0*/, 4> fixed_vector_mult_inst__DOT__product_vector;
        VlUnpacked<SData/*15:0*/, 4> fixed_adder_tree_inst__DOT__data_in;
        VlUnpacked<SData/*15:0*/, 4> fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__data;
        VlUnpacked<IData/*16:0*/, 2> fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__data;
        VlUnpacked<IData/*17:0*/, 1> fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__data;
        VlUnpacked<IData/*16:0*/, 2> fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__sum;
        VlUnpacked<IData/*16:0*/, 2> fixed_adder_tree_inst__DOT____Vcellout__level__BRA__0__KET____DOT__layer__data_out;
        VlUnpacked<SData/*15:0*/, 4> fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__0__KET____DOT__layer__data_in;
        VlUnpacked<IData/*17:0*/, 1> fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__sum;
        VlUnpacked<IData/*17:0*/, 1> fixed_adder_tree_inst__DOT____Vcellout__level__BRA__1__KET____DOT__layer__data_out;
        VlUnpacked<IData/*16:0*/, 2> fixed_adder_tree_inst__DOT____Vcellinp__level__BRA__1__KET____DOT__layer__data_in;
        VlUnpacked<SData/*15:0*/, 4> fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_in;
        VlUnpacked<IData/*16:0*/, 2> fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__data_out;
        VlUnpacked<IData/*16:0*/, 2> fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_in;
        VlUnpacked<IData/*17:0*/, 1> fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__data_out;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ IN_WIDTH = 8U;
    static constexpr IData/*31:0*/ IN_SIZE = 4U;
    static constexpr IData/*31:0*/ WEIGHT_WIDTH = 8U;
    static constexpr IData/*31:0*/ OUT_WIDTH = 0x00000012U;
    static constexpr IData/*31:0*/ PRODUCT_WIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ fixed_vector_mult_inst__DOT__IN_WIDTH = 8U;
    static constexpr IData/*31:0*/ fixed_vector_mult_inst__DOT__WEIGHT_WIDTH = 8U;
    static constexpr IData/*31:0*/ fixed_vector_mult_inst__DOT__OUT_WIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ fixed_vector_mult_inst__DOT__IN_SIZE = 4U;
    static constexpr IData/*31:0*/ fixed_vector_mult_inst__DOT__PRODUCT_WIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ fixed_vector_mult_inst__DOT__register_slice__DOT__DATA_WIDTH = 0x00000040U;
    static constexpr IData/*31:0*/ fixed_vector_mult_inst__DOT__parallel_mult__BRA__0__KET____DOT__fixed_mult_inst__DOT__IN_A_WIDTH = 8U;
    static constexpr IData/*31:0*/ fixed_vector_mult_inst__DOT__parallel_mult__BRA__0__KET____DOT__fixed_mult_inst__DOT__IN_B_WIDTH = 8U;
    static constexpr IData/*31:0*/ fixed_vector_mult_inst__DOT__parallel_mult__BRA__1__KET____DOT__fixed_mult_inst__DOT__IN_A_WIDTH = 8U;
    static constexpr IData/*31:0*/ fixed_vector_mult_inst__DOT__parallel_mult__BRA__1__KET____DOT__fixed_mult_inst__DOT__IN_B_WIDTH = 8U;
    static constexpr IData/*31:0*/ fixed_vector_mult_inst__DOT__parallel_mult__BRA__2__KET____DOT__fixed_mult_inst__DOT__IN_A_WIDTH = 8U;
    static constexpr IData/*31:0*/ fixed_vector_mult_inst__DOT__parallel_mult__BRA__2__KET____DOT__fixed_mult_inst__DOT__IN_B_WIDTH = 8U;
    static constexpr IData/*31:0*/ fixed_vector_mult_inst__DOT__parallel_mult__BRA__3__KET____DOT__fixed_mult_inst__DOT__IN_A_WIDTH = 8U;
    static constexpr IData/*31:0*/ fixed_vector_mult_inst__DOT__parallel_mult__BRA__3__KET____DOT__fixed_mult_inst__DOT__IN_B_WIDTH = 8U;
    static constexpr IData/*31:0*/ fixed_adder_tree_inst__DOT__IN_SIZE = 4U;
    static constexpr IData/*31:0*/ fixed_adder_tree_inst__DOT__IN_WIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ fixed_adder_tree_inst__DOT__OUT_WIDTH = 0x00000012U;
    static constexpr IData/*31:0*/ fixed_adder_tree_inst__DOT__LEVELS = 2U;
    static constexpr IData/*31:0*/ fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__LEVEL_IN_SIZE = 4U;
    static constexpr IData/*31:0*/ fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__LEVEL_IN_SIZE = 2U;
    static constexpr IData/*31:0*/ fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__LEVEL_IN_SIZE = 1U;
    static constexpr IData/*31:0*/ fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__LEVEL_IN_SIZE = 4U;
    static constexpr IData/*31:0*/ fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__NEXT_LEVEL_IN_SIZE = 2U;
    static constexpr IData/*31:0*/ fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__LEVEL_IN_SIZE = 2U;
    static constexpr IData/*31:0*/ fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__NEXT_LEVEL_IN_SIZE = 1U;
    static constexpr IData/*31:0*/ fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__IN_SIZE = 4U;
    static constexpr IData/*31:0*/ fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__IN_WIDTH = 0x00000010U;
    static constexpr IData/*31:0*/ fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__DATA_WIDTH = 0x00000022U;
    static constexpr IData/*31:0*/ fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__IN_SIZE = 2U;
    static constexpr IData/*31:0*/ fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__IN_WIDTH = 0x00000011U;
    static constexpr IData/*31:0*/ fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__DATA_WIDTH = 0x00000012U;

    // CONSTRUCTORS
    Vtop_fixed_dot_product__I8_W8_IB4(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_fixed_dot_product__I8_W8_IB4();
    VL_UNCOPYABLE(Vtop_fixed_dot_product__I8_W8_IB4);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
