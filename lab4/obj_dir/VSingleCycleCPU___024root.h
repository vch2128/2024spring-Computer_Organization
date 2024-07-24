// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSingleCycleCPU.h for the primary calling header

#ifndef VERILATED_VSINGLECYCLECPU___024ROOT_H_
#define VERILATED_VSINGLECYCLECPU___024ROOT_H_  // guard

#include "verilated.h"

class VSingleCycleCPU__Syms;

class VSingleCycleCPU___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(start,0,0);
        CData/*0:0*/ SingleCycleCPU__DOT__memReadMEM;
        CData/*3:0*/ SingleCycleCPU__DOT__ALUCtl;
        CData/*1:0*/ SingleCycleCPU__DOT__memtoRegEX;
        CData/*1:0*/ SingleCycleCPU__DOT__memtoRegMEM;
        CData/*1:0*/ SingleCycleCPU__DOT__memtoRegWB;
        CData/*2:0*/ SingleCycleCPU__DOT__ALUOpEX;
        CData/*0:0*/ SingleCycleCPU__DOT__branchEX;
        CData/*0:0*/ SingleCycleCPU__DOT__memReadEX;
        CData/*0:0*/ SingleCycleCPU__DOT__memWriteEX;
        CData/*0:0*/ SingleCycleCPU__DOT__regWriteEX;
        CData/*0:0*/ SingleCycleCPU__DOT__ALUSrcBEX;
        CData/*0:0*/ SingleCycleCPU__DOT__addrSrcAEX;
        CData/*0:0*/ SingleCycleCPU__DOT__addrSrcBEX;
        CData/*0:0*/ SingleCycleCPU__DOT__branchMEM;
        CData/*0:0*/ SingleCycleCPU__DOT__memWriteMEM;
        CData/*0:0*/ SingleCycleCPU__DOT__regWriteMEM;
        CData/*0:0*/ SingleCycleCPU__DOT__zeroMEM;
        CData/*0:0*/ SingleCycleCPU__DOT__regWriteWB;
        CData/*4:0*/ SingleCycleCPU__DOT__instEX;
        CData/*4:0*/ SingleCycleCPU__DOT__instMEM;
        CData/*4:0*/ SingleCycleCPU__DOT__instWB;
        CData/*3:0*/ SingleCycleCPU__DOT__func7n3;
        CData/*6:0*/ __Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        CData/*7:0*/ __Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        CData/*0:0*/ __Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        CData/*6:0*/ __Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        CData/*7:0*/ __Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        CData/*6:0*/ __Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        CData/*7:0*/ __Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        CData/*6:0*/ __Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3;
        CData/*7:0*/ __Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3;
        CData/*0:0*/ __Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v4;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __Vtrigrprev__TOP__start;
        CData/*0:0*/ __Vtrigrprev__TOP__SingleCycleCPU__DOT__memReadMEM;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*11:0*/ SingleCycleCPU__DOT__m_Control__DOT__ctrl;
        IData/*31:0*/ SingleCycleCPU__DOT__PC;
        IData/*31:0*/ SingleCycleCPU__DOT__imm;
        IData/*31:0*/ SingleCycleCPU__DOT__ALUOut;
        IData/*31:0*/ SingleCycleCPU__DOT__muxPC;
        IData/*31:0*/ SingleCycleCPU__DOT__memDataOut;
        IData/*31:0*/ SingleCycleCPU__DOT__muxALUB;
        IData/*31:0*/ SingleCycleCPU__DOT__PCID;
        IData/*31:0*/ SingleCycleCPU__DOT__instID;
        IData/*31:0*/ SingleCycleCPU__DOT__PCEX;
        IData/*31:0*/ SingleCycleCPU__DOT__dataR1EX;
        IData/*31:0*/ SingleCycleCPU__DOT__dataR2EX;
        IData/*31:0*/ SingleCycleCPU__DOT__immEX;
        IData/*31:0*/ SingleCycleCPU__DOT__PCMEM;
        IData/*31:0*/ SingleCycleCPU__DOT__dataR2MEM;
        IData/*31:0*/ SingleCycleCPU__DOT__ALUMEM;
        IData/*31:0*/ SingleCycleCPU__DOT__branchAddrMEM;
        IData/*31:0*/ SingleCycleCPU__DOT__PCplus4WB;
        IData/*31:0*/ SingleCycleCPU__DOT__memDataWB;
        IData/*31:0*/ SingleCycleCPU__DOT__ALUWB;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __Vtrigrprev__TOP__SingleCycleCPU__DOT__ALUMEM;
        IData/*31:0*/ __VactIterCount;
        VL_OUT(r[32],31,0);
        VlUnpacked<CData/*7:0*/, 128> SingleCycleCPU__DOT__m_InstMem__DOT__insts;
    };
    struct {
        VlUnpacked<IData/*31:0*/, 32> SingleCycleCPU__DOT__m_Register__DOT__regs;
        VlUnpacked<CData/*7:0*/, 128> SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    VSingleCycleCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSingleCycleCPU___024root(VSingleCycleCPU__Syms* symsp, const char* v__name);
    ~VSingleCycleCPU___024root();
    VL_UNCOPYABLE(VSingleCycleCPU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
