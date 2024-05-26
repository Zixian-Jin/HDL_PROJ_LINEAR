// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP_FIXED_ACCUMULATOR__IB12_I5_H_
#define VERILATED_VTOP_FIXED_ACCUMULATOR__IB12_I5_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop_fixed_accumulator__IB12_I5 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(data_in_valid,0,0);
    VL_OUT8(data_in_ready,0,0);
    VL_OUT8(data_out_valid,0,0);
    VL_IN8(data_out_ready,0,0);
    CData/*0:0*/ reg_in_valid;
    CData/*0:0*/ reg_in_ready;
    CData/*3:0*/ counter;
    CData/*0:0*/ register_slice__DOT__clk;
    CData/*0:0*/ register_slice__DOT__rst;
    CData/*0:0*/ register_slice__DOT__data_in_valid;
    CData/*0:0*/ register_slice__DOT__data_in_ready;
    CData/*0:0*/ register_slice__DOT__data_out_valid;
    CData/*0:0*/ register_slice__DOT__data_out_ready;
    CData/*0:0*/ register_slice__DOT__data_buffer_wren;
    CData/*0:0*/ register_slice__DOT__data_out_wren;
    CData/*0:0*/ register_slice__DOT__use_buffered_data;
    CData/*0:0*/ register_slice__DOT__insert;
    CData/*0:0*/ register_slice__DOT__remove;
    CData/*0:0*/ register_slice__DOT__load;
    CData/*0:0*/ register_slice__DOT__flow;
    CData/*0:0*/ register_slice__DOT__fill;
    CData/*0:0*/ register_slice__DOT__flush;
    CData/*0:0*/ register_slice__DOT__unload;
    VL_IN(data_in,17,0);
    VL_OUT(data_out,20,0);
    IData/*20:0*/ reg_in;
    IData/*20:0*/ data_in_sext;
    IData/*20:0*/ register_slice__DOT__data_in;
    IData/*20:0*/ register_slice__DOT__data_out;
    IData/*20:0*/ register_slice__DOT__data_buffer_out;
    IData/*20:0*/ register_slice__DOT__selected_data;
    IData/*31:0*/ register_slice__DOT__state;
    IData/*31:0*/ register_slice__DOT__state_next;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ IN_DEPTH = 5U;
    static constexpr IData/*31:0*/ IN_WIDTH = 0x00000012U;
    static constexpr IData/*31:0*/ OUT_WIDTH = 0x00000015U;
    static constexpr IData/*31:0*/ COUNTER_WIDTH = 3U;
    static constexpr IData/*31:0*/ register_slice__DOT__DATA_WIDTH = 0x00000015U;

    // CONSTRUCTORS
    Vtop_fixed_accumulator__IB12_I5(Vtop__Syms* symsp, const char* v__name);
    ~Vtop_fixed_accumulator__IB12_I5();
    VL_UNCOPYABLE(Vtop_fixed_accumulator__IB12_I5);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
