// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VfullAdder.h"
#include "VfullAdder__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VfullAdder::VfullAdder(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VfullAdder__Syms(contextp(), _vcname__, this)}
    , cin{vlSymsp->TOP.cin}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , s{vlSymsp->TOP.s}
    , cout{vlSymsp->TOP.cout}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VfullAdder::VfullAdder(const char* _vcname__)
    : VfullAdder(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VfullAdder::~VfullAdder() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VfullAdder___024root___eval_debug_assertions(VfullAdder___024root* vlSelf);
#endif  // VL_DEBUG
void VfullAdder___024root___eval_static(VfullAdder___024root* vlSelf);
void VfullAdder___024root___eval_initial(VfullAdder___024root* vlSelf);
void VfullAdder___024root___eval_settle(VfullAdder___024root* vlSelf);
void VfullAdder___024root___eval(VfullAdder___024root* vlSelf);

void VfullAdder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VfullAdder::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VfullAdder___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VfullAdder___024root___eval_static(&(vlSymsp->TOP));
        VfullAdder___024root___eval_initial(&(vlSymsp->TOP));
        VfullAdder___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VfullAdder___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VfullAdder::eventsPending() { return false; }

uint64_t VfullAdder::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VfullAdder::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VfullAdder___024root___eval_final(VfullAdder___024root* vlSelf);

VL_ATTR_COLD void VfullAdder::final() {
    VfullAdder___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VfullAdder::hierName() const { return vlSymsp->name(); }
const char* VfullAdder::modelName() const { return "VfullAdder"; }
unsigned VfullAdder::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VfullAdder::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VfullAdder___024root__trace_init_top(VfullAdder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VfullAdder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VfullAdder___024root*>(voidSelf);
    VfullAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VfullAdder___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VfullAdder___024root__trace_register(VfullAdder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VfullAdder::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VfullAdder::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VfullAdder___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
