// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_fixed_accumulator__IB12_I5.h"

// Parameter definitions for Vtop_fixed_accumulator__IB12_I5
constexpr IData/*31:0*/ Vtop_fixed_accumulator__IB12_I5::IN_DEPTH;
constexpr IData/*31:0*/ Vtop_fixed_accumulator__IB12_I5::IN_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_accumulator__IB12_I5::OUT_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_accumulator__IB12_I5::COUNTER_WIDTH;
constexpr IData/*31:0*/ Vtop_fixed_accumulator__IB12_I5::register_slice__DOT__DATA_WIDTH;


void Vtop_fixed_accumulator__IB12_I5___ctor_var_reset(Vtop_fixed_accumulator__IB12_I5* vlSelf);

Vtop_fixed_accumulator__IB12_I5::Vtop_fixed_accumulator__IB12_I5(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop_fixed_accumulator__IB12_I5___ctor_var_reset(this);
}

void Vtop_fixed_accumulator__IB12_I5::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop_fixed_accumulator__IB12_I5::~Vtop_fixed_accumulator__IB12_I5() {
}
