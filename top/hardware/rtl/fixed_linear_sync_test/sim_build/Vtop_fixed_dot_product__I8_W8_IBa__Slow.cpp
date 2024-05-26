// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_fixed_dot_product__I8_W8_IBa.h"

// Parameter definitions for Vtop_fixed_dot_product__I8_W8_IBa
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::IN_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::IN_SIZE;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::WEIGHT_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::OUT_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::PRODUCT_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_vector_mult_inst__DOT__IN_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_vector_mult_inst__DOT__WEIGHT_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_vector_mult_inst__DOT__OUT_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_vector_mult_inst__DOT__IN_SIZE;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_vector_mult_inst__DOT__PRODUCT_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_vector_mult_inst__DOT__register_slice__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_vector_mult_inst__DOT__parallel_mult__BRA__0__KET____DOT__fixed_mult_inst__DOT__IN_A_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_vector_mult_inst__DOT__parallel_mult__BRA__0__KET____DOT__fixed_mult_inst__DOT__IN_B_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_vector_mult_inst__DOT__parallel_mult__BRA__1__KET____DOT__fixed_mult_inst__DOT__IN_A_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_vector_mult_inst__DOT__parallel_mult__BRA__1__KET____DOT__fixed_mult_inst__DOT__IN_B_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_vector_mult_inst__DOT__parallel_mult__BRA__2__KET____DOT__fixed_mult_inst__DOT__IN_A_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_vector_mult_inst__DOT__parallel_mult__BRA__2__KET____DOT__fixed_mult_inst__DOT__IN_B_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_vector_mult_inst__DOT__parallel_mult__BRA__3__KET____DOT__fixed_mult_inst__DOT__IN_A_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_vector_mult_inst__DOT__parallel_mult__BRA__3__KET____DOT__fixed_mult_inst__DOT__IN_B_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_vector_mult_inst__DOT__parallel_mult__BRA__4__KET____DOT__fixed_mult_inst__DOT__IN_A_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_vector_mult_inst__DOT__parallel_mult__BRA__4__KET____DOT__fixed_mult_inst__DOT__IN_B_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_vector_mult_inst__DOT__parallel_mult__BRA__5__KET____DOT__fixed_mult_inst__DOT__IN_A_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_vector_mult_inst__DOT__parallel_mult__BRA__5__KET____DOT__fixed_mult_inst__DOT__IN_B_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_vector_mult_inst__DOT__parallel_mult__BRA__6__KET____DOT__fixed_mult_inst__DOT__IN_A_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_vector_mult_inst__DOT__parallel_mult__BRA__6__KET____DOT__fixed_mult_inst__DOT__IN_B_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_vector_mult_inst__DOT__parallel_mult__BRA__7__KET____DOT__fixed_mult_inst__DOT__IN_A_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_vector_mult_inst__DOT__parallel_mult__BRA__7__KET____DOT__fixed_mult_inst__DOT__IN_B_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_vector_mult_inst__DOT__parallel_mult__BRA__8__KET____DOT__fixed_mult_inst__DOT__IN_A_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_vector_mult_inst__DOT__parallel_mult__BRA__8__KET____DOT__fixed_mult_inst__DOT__IN_B_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_vector_mult_inst__DOT__parallel_mult__BRA__9__KET____DOT__fixed_mult_inst__DOT__IN_A_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_vector_mult_inst__DOT__parallel_mult__BRA__9__KET____DOT__fixed_mult_inst__DOT__IN_B_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_adder_tree_inst__DOT__IN_SIZE;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_adder_tree_inst__DOT__IN_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_adder_tree_inst__DOT__OUT_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_adder_tree_inst__DOT__LEVELS;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_adder_tree_inst__DOT__vars__BRA__0__KET____DOT__LEVEL_IN_SIZE;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_adder_tree_inst__DOT__vars__BRA__1__KET____DOT__LEVEL_IN_SIZE;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_adder_tree_inst__DOT__vars__BRA__2__KET____DOT__LEVEL_IN_SIZE;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_adder_tree_inst__DOT__vars__BRA__3__KET____DOT__LEVEL_IN_SIZE;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_adder_tree_inst__DOT__vars__BRA__4__KET____DOT__LEVEL_IN_SIZE;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__LEVEL_IN_SIZE;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__NEXT_LEVEL_IN_SIZE;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__LEVEL_IN_SIZE;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__NEXT_LEVEL_IN_SIZE;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__LEVEL_IN_SIZE;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__NEXT_LEVEL_IN_SIZE;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__LEVEL_IN_SIZE;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__NEXT_LEVEL_IN_SIZE;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__IN_SIZE;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__layer__DOT__IN_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_adder_tree_inst__DOT__level__BRA__0__KET____DOT__register_slice__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__IN_SIZE;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__layer__DOT__IN_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_adder_tree_inst__DOT__level__BRA__1__KET____DOT__register_slice__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__layer__DOT__IN_SIZE;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__layer__DOT__IN_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_adder_tree_inst__DOT__level__BRA__2__KET____DOT__register_slice__DOT__DATA_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__layer__DOT__IN_SIZE;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__layer__DOT__IN_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_dot_product__I8_W8_IBa::fixed_adder_tree_inst__DOT__level__BRA__3__KET____DOT__register_slice__DOT__DATA_WIDTH;


void Vtop_fixed_dot_product__I8_W8_IBa___ctor_var_reset(Vtop_fixed_dot_product__I8_W8_IBa* vlSelf);

Vtop_fixed_dot_product__I8_W8_IBa::Vtop_fixed_dot_product__I8_W8_IBa(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_fixed_dot_product__I8_W8_IBa___ctor_var_reset(this);
}

void Vtop_fixed_dot_product__I8_W8_IBa::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_fixed_dot_product__I8_W8_IBa::~Vtop_fixed_dot_product__I8_W8_IBa() {
}
