// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSingleCycleCPU__Syms.h"


VL_ATTR_COLD void VSingleCycleCPU___024root__trace_init_sub__TOP__0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+103+i*1,"r", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("SingleCycleCPU ");
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+103+i*1,"r", true,(i+0), 31,0);
    }
    tracep->declBus(c+83,"PC", false,-1, 31,0);
    tracep->declBus(c+84,"PCplus4", false,-1, 31,0);
    tracep->declBus(c+85,"inst", false,-1, 31,0);
    tracep->declBus(c+1,"imm", false,-1, 31,0);
    tracep->declBus(c+86,"ALUOut", false,-1, 31,0);
    tracep->declBus(c+2,"shiftimm", false,-1, 31,0);
    tracep->declBus(c+3,"branchAddr", false,-1, 31,0);
    tracep->declBus(c+135,"muxPC", false,-1, 31,0);
    tracep->declBus(c+4,"dataR1", false,-1, 31,0);
    tracep->declBus(c+5,"dataR2", false,-1, 31,0);
    tracep->declBus(c+136,"memDataOut", false,-1, 31,0);
    tracep->declBus(c+6,"writeData", false,-1, 31,0);
    tracep->declBus(c+7,"muxALUB", false,-1, 31,0);
    tracep->declBus(c+8,"muxAddrA", false,-1, 31,0);
    tracep->declBus(c+9,"muxAddrB", false,-1, 31,0);
    tracep->declBus(c+10,"PCID", false,-1, 31,0);
    tracep->declBus(c+11,"instID", false,-1, 31,0);
    tracep->declBus(c+12,"PCEX", false,-1, 31,0);
    tracep->declBus(c+13,"dataR1EX", false,-1, 31,0);
    tracep->declBus(c+14,"dataR2EX", false,-1, 31,0);
    tracep->declBus(c+15,"immEX", false,-1, 31,0);
    tracep->declBus(c+16,"PCMEM", false,-1, 31,0);
    tracep->declBus(c+17,"dataR2MEM", false,-1, 31,0);
    tracep->declBus(c+87,"ALUMEM", false,-1, 31,0);
    tracep->declBus(c+18,"branchAddrMEM", false,-1, 31,0);
    tracep->declBus(c+19,"PCplus4MEM", false,-1, 31,0);
    tracep->declBus(c+20,"PCplus4WB", false,-1, 31,0);
    tracep->declBus(c+21,"memDataWB", false,-1, 31,0);
    tracep->declBus(c+22,"ALUWB", false,-1, 31,0);
    tracep->declBus(c+23,"ALUCtl", false,-1, 3,0);
    tracep->declBus(c+88,"memtoReg", false,-1, 1,0);
    tracep->declBus(c+24,"memtoRegEX", false,-1, 1,0);
    tracep->declBus(c+25,"memtoRegMEM", false,-1, 1,0);
    tracep->declBus(c+26,"memtoRegWB", false,-1, 1,0);
    tracep->declBus(c+89,"ALUOp", false,-1, 2,0);
    tracep->declBus(c+27,"ALUOpEX", false,-1, 2,0);
    tracep->declBit(c+90,"branch", false,-1);
    tracep->declBit(c+91,"memRead", false,-1);
    tracep->declBit(c+92,"memWrite", false,-1);
    tracep->declBit(c+93,"regWrite", false,-1);
    tracep->declBit(c+94,"ALUSrcB", false,-1);
    tracep->declBit(c+95,"zero", false,-1);
    tracep->declBit(c+28,"PCSel", false,-1);
    tracep->declBit(c+96,"addrSrcA", false,-1);
    tracep->declBit(c+97,"addrSrcB", false,-1);
    tracep->declBit(c+29,"branchEX", false,-1);
    tracep->declBit(c+98,"memReadEX", false,-1);
    tracep->declBit(c+30,"memWriteEX", false,-1);
    tracep->declBit(c+31,"regWriteEX", false,-1);
    tracep->declBit(c+32,"ALUSrcBEX", false,-1);
    tracep->declBit(c+33,"addrSrcAEX", false,-1);
    tracep->declBit(c+34,"addrSrcBEX", false,-1);
    tracep->declBit(c+35,"branchMEM", false,-1);
    tracep->declBit(c+99,"memReadMEM", false,-1);
    tracep->declBit(c+36,"memWriteMEM", false,-1);
    tracep->declBit(c+37,"regWriteMEM", false,-1);
    tracep->declBit(c+38,"zeroMEM", false,-1);
    tracep->declBit(c+39,"regWriteWB", false,-1);
    tracep->declBus(c+40,"instEX", false,-1, 4,0);
    tracep->declBus(c+41,"instMEM", false,-1, 4,0);
    tracep->declBus(c+42,"instWB", false,-1, 4,0);
    tracep->declBus(c+43,"func7n3", false,-1, 3,0);
    tracep->pushNamePrefix("ALUOp_EX ");
    tracep->declBus(c+137,"size", false,-1, 31,0);
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBus(c+89,"data_i", false,-1, 2,0);
    tracep->declBus(c+27,"data_o", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALUSrcB_EX ");
    tracep->declBus(c+138,"size", false,-1, 31,0);
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBus(c+94,"data_i", false,-1, 0,0);
    tracep->declBus(c+32,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_MEM ");
    tracep->declBus(c+139,"size", false,-1, 31,0);
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBus(c+86,"data_i", false,-1, 31,0);
    tracep->declBus(c+87,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALU_WB ");
    tracep->declBus(c+139,"size", false,-1, 31,0);
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBus(c+87,"data_i", false,-1, 31,0);
    tracep->declBus(c+22,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DataMem_WB ");
    tracep->declBus(c+139,"size", false,-1, 31,0);
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBus(c+136,"data_i", false,-1, 31,0);
    tracep->declBus(c+21,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC_EX ");
    tracep->declBus(c+139,"size", false,-1, 31,0);
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBus(c+10,"data_i", false,-1, 31,0);
    tracep->declBus(c+12,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC_ID ");
    tracep->declBus(c+139,"size", false,-1, 31,0);
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBus(c+83,"data_i", false,-1, 31,0);
    tracep->declBus(c+10,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC_MEM ");
    tracep->declBus(c+139,"size", false,-1, 31,0);
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBus(c+12,"data_i", false,-1, 31,0);
    tracep->declBus(c+16,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCplus4_WB ");
    tracep->declBus(c+139,"size", false,-1, 31,0);
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBus(c+19,"data_i", false,-1, 31,0);
    tracep->declBus(c+20,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("addrSrcA_EX ");
    tracep->declBus(c+138,"size", false,-1, 31,0);
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBus(c+96,"data_i", false,-1, 0,0);
    tracep->declBus(c+33,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("addrSrcB_EX ");
    tracep->declBus(c+138,"size", false,-1, 31,0);
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBus(c+97,"data_i", false,-1, 0,0);
    tracep->declBus(c+34,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("branchAddr_MEM ");
    tracep->declBus(c+139,"size", false,-1, 31,0);
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBus(c+3,"data_i", false,-1, 31,0);
    tracep->declBus(c+18,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("branch_EX ");
    tracep->declBus(c+138,"size", false,-1, 31,0);
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBus(c+90,"data_i", false,-1, 0,0);
    tracep->declBus(c+29,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("branch_MEM ");
    tracep->declBus(c+138,"size", false,-1, 31,0);
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBus(c+29,"data_i", false,-1, 0,0);
    tracep->declBus(c+35,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dtR1_EX ");
    tracep->declBus(c+139,"size", false,-1, 31,0);
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBus(c+4,"data_i", false,-1, 31,0);
    tracep->declBus(c+13,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dtR2_EX ");
    tracep->declBus(c+139,"size", false,-1, 31,0);
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBus(c+5,"data_i", false,-1, 31,0);
    tracep->declBus(c+14,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("dtR2_MEM ");
    tracep->declBus(c+139,"size", false,-1, 31,0);
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBus(c+14,"data_i", false,-1, 31,0);
    tracep->declBus(c+17,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("func_EX ");
    tracep->declBus(c+140,"size", false,-1, 31,0);
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBus(c+44,"data_i", false,-1, 3,0);
    tracep->declBus(c+43,"data_o", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imm_EX ");
    tracep->declBus(c+139,"size", false,-1, 31,0);
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBus(c+1,"data_i", false,-1, 31,0);
    tracep->declBus(c+15,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instWrite_EX ");
    tracep->declBus(c+141,"size", false,-1, 31,0);
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBus(c+45,"data_i", false,-1, 4,0);
    tracep->declBus(c+40,"data_o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instWrite_MEM ");
    tracep->declBus(c+141,"size", false,-1, 31,0);
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBus(c+40,"data_i", false,-1, 4,0);
    tracep->declBus(c+41,"data_o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("instWrite_WB ");
    tracep->declBus(c+141,"size", false,-1, 31,0);
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBus(c+41,"data_i", false,-1, 4,0);
    tracep->declBus(c+42,"data_o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst_ID ");
    tracep->declBus(c+139,"size", false,-1, 31,0);
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBus(c+85,"data_i", false,-1, 31,0);
    tracep->declBus(c+11,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALU ");
    tracep->declBus(c+23,"ALUctl", false,-1, 3,0);
    tracep->declBus(c+13,"A", false,-1, 31,0);
    tracep->declBus(c+7,"B", false,-1, 31,0);
    tracep->declBus(c+86,"ALUOut", false,-1, 31,0);
    tracep->declBit(c+95,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALUCtrl ");
    tracep->declBus(c+27,"ALUOp", false,-1, 2,0);
    tracep->declBit(c+46,"funct7", false,-1);
    tracep->declBus(c+47,"funct3", false,-1, 2,0);
    tracep->declBus(c+23,"ALUCtl", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_addr ");
    tracep->declBus(c+8,"a", false,-1, 31,0);
    tracep->declBus(c+9,"b", false,-1, 31,0);
    tracep->declBus(c+3,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Control ");
    tracep->declBus(c+48,"opcode", false,-1, 6,0);
    tracep->declBit(c+90,"branch", false,-1);
    tracep->declBit(c+91,"memRead", false,-1);
    tracep->declBus(c+88,"memtoReg", false,-1, 1,0);
    tracep->declBus(c+89,"ALUOp", false,-1, 2,0);
    tracep->declBit(c+92,"memWrite", false,-1);
    tracep->declBit(c+94,"ALUSrcB", false,-1);
    tracep->declBit(c+93,"regWrite", false,-1);
    tracep->declBit(c+96,"addrSrcA", false,-1);
    tracep->declBit(c+97,"addrSrcB", false,-1);
    tracep->declBus(c+100,"ctrl", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_DataMemory ");
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+36,"memWrite", false,-1);
    tracep->declBit(c+99,"memRead", false,-1);
    tracep->declBus(c+87,"address", false,-1, 31,0);
    tracep->declBus(c+17,"writeData", false,-1, 31,0);
    tracep->declBus(c+136,"readData", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ImmGen ");
    tracep->declBus(c+11,"inst", false,-1, 31,0);
    tracep->declBus(c+1,"imm", false,-1, 31,0);
    tracep->declBus(c+48,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_InstMem ");
    tracep->declBus(c+83,"readAddr", false,-1, 31,0);
    tracep->declBus(c+85,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_ALU ");
    tracep->declBus(c+139,"size", false,-1, 31,0);
    tracep->declBit(c+32,"sel", false,-1);
    tracep->declBus(c+14,"s0", false,-1, 31,0);
    tracep->declBus(c+15,"s1", false,-1, 31,0);
    tracep->declBus(c+7,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_AddrA ");
    tracep->declBus(c+139,"size", false,-1, 31,0);
    tracep->declBit(c+33,"sel", false,-1);
    tracep->declBus(c+12,"s0", false,-1, 31,0);
    tracep->declBus(c+13,"s1", false,-1, 31,0);
    tracep->declBus(c+8,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_AddrB ");
    tracep->declBus(c+139,"size", false,-1, 31,0);
    tracep->declBit(c+34,"sel", false,-1);
    tracep->declBus(c+2,"s0", false,-1, 31,0);
    tracep->declBus(c+15,"s1", false,-1, 31,0);
    tracep->declBus(c+9,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_PC ");
    tracep->declBus(c+139,"size", false,-1, 31,0);
    tracep->declBit(c+28,"sel", false,-1);
    tracep->declBus(c+84,"s0", false,-1, 31,0);
    tracep->declBus(c+18,"s1", false,-1, 31,0);
    tracep->declBus(c+135,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_WriteData ");
    tracep->declBus(c+139,"size", false,-1, 31,0);
    tracep->declBus(c+26,"sel", false,-1, 1,0);
    tracep->declBus(c+21,"s0", false,-1, 31,0);
    tracep->declBus(c+22,"s1", false,-1, 31,0);
    tracep->declBus(c+20,"s2", false,-1, 31,0);
    tracep->declBus(c+6,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_PC ");
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBus(c+135,"pc_i", false,-1, 31,0);
    tracep->declBus(c+83,"pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_PCadder ");
    tracep->declBus(c+83,"a", false,-1, 31,0);
    tracep->declBus(c+140,"b", false,-1, 31,0);
    tracep->declBus(c+84,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_PCadder_MEM ");
    tracep->declBus(c+16,"a", false,-1, 31,0);
    tracep->declBus(c+140,"b", false,-1, 31,0);
    tracep->declBus(c+19,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Register ");
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBit(c+39,"regWrite", false,-1);
    tracep->declBus(c+49,"readReg1", false,-1, 4,0);
    tracep->declBus(c+50,"readReg2", false,-1, 4,0);
    tracep->declBus(c+42,"writeReg", false,-1, 4,0);
    tracep->declBus(c+6,"writeData", false,-1, 31,0);
    tracep->declBus(c+4,"readData1", false,-1, 31,0);
    tracep->declBus(c+5,"readData2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+51+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ShiftLeftOne ");
    tracep->declBus(c+15,"i", false,-1, 31,0);
    tracep->declBus(c+2,"o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memRead_EX ");
    tracep->declBus(c+138,"size", false,-1, 31,0);
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBus(c+91,"data_i", false,-1, 0,0);
    tracep->declBus(c+98,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memRead_MEM ");
    tracep->declBus(c+138,"size", false,-1, 31,0);
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBus(c+98,"data_i", false,-1, 0,0);
    tracep->declBus(c+99,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memWrite_EX ");
    tracep->declBus(c+138,"size", false,-1, 31,0);
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBus(c+92,"data_i", false,-1, 0,0);
    tracep->declBus(c+30,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memWrite_MEM ");
    tracep->declBus(c+138,"size", false,-1, 31,0);
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBus(c+30,"data_i", false,-1, 0,0);
    tracep->declBus(c+36,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memtoReg_EX ");
    tracep->declBus(c+142,"size", false,-1, 31,0);
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBus(c+88,"data_i", false,-1, 1,0);
    tracep->declBus(c+24,"data_o", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memtoReg_MEM ");
    tracep->declBus(c+142,"size", false,-1, 31,0);
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBus(c+24,"data_i", false,-1, 1,0);
    tracep->declBus(c+25,"data_o", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("memtoReg_WB ");
    tracep->declBus(c+142,"size", false,-1, 31,0);
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBus(c+25,"data_i", false,-1, 1,0);
    tracep->declBus(c+26,"data_o", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regWrite_EX ");
    tracep->declBus(c+138,"size", false,-1, 31,0);
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBus(c+93,"data_i", false,-1, 0,0);
    tracep->declBus(c+31,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regWrite_MEM ");
    tracep->declBus(c+138,"size", false,-1, 31,0);
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBus(c+31,"data_i", false,-1, 0,0);
    tracep->declBus(c+37,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regWrite_WB ");
    tracep->declBus(c+138,"size", false,-1, 31,0);
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBus(c+37,"data_i", false,-1, 0,0);
    tracep->declBus(c+39,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("zero_MEM ");
    tracep->declBus(c+138,"size", false,-1, 31,0);
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBus(c+95,"data_i", false,-1, 0,0);
    tracep->declBus(c+38,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_init_top(VSingleCycleCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_init_top\n"); );
    // Body
    VSingleCycleCPU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSingleCycleCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSingleCycleCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_register(VSingleCycleCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VSingleCycleCPU___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VSingleCycleCPU___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VSingleCycleCPU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_full_sub_0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_full_top_0\n"); );
    // Init
    VSingleCycleCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingleCycleCPU___024root*>(voidSelf);
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VSingleCycleCPU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_full_sub_0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->SingleCycleCPU__DOT__imm),32);
    bufp->fullIData(oldp+2,((vlSelf->SingleCycleCPU__DOT__immEX 
                             << 1U)),32);
    bufp->fullIData(oldp+3,((((IData)(vlSelf->SingleCycleCPU__DOT__addrSrcAEX)
                               ? vlSelf->SingleCycleCPU__DOT__dataR1EX
                               : vlSelf->SingleCycleCPU__DOT__PCEX) 
                             + ((IData)(vlSelf->SingleCycleCPU__DOT__addrSrcBEX)
                                 ? vlSelf->SingleCycleCPU__DOT__immEX
                                 : (vlSelf->SingleCycleCPU__DOT__immEX 
                                    << 1U)))),32);
    bufp->fullIData(oldp+4,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                            [(0x1fU & (vlSelf->SingleCycleCPU__DOT__instID 
                                       >> 0xfU))]),32);
    bufp->fullIData(oldp+5,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                            [(0x1fU & (vlSelf->SingleCycleCPU__DOT__instID 
                                       >> 0x14U))]),32);
    bufp->fullIData(oldp+6,(((0U == (IData)(vlSelf->SingleCycleCPU__DOT__memtoRegWB))
                              ? vlSelf->SingleCycleCPU__DOT__memDataWB
                              : ((1U == (IData)(vlSelf->SingleCycleCPU__DOT__memtoRegWB))
                                  ? vlSelf->SingleCycleCPU__DOT__ALUWB
                                  : ((2U == (IData)(vlSelf->SingleCycleCPU__DOT__memtoRegWB))
                                      ? vlSelf->SingleCycleCPU__DOT__PCplus4WB
                                      : vlSelf->SingleCycleCPU__DOT__memDataWB)))),32);
    bufp->fullIData(oldp+7,(vlSelf->SingleCycleCPU__DOT__muxALUB),32);
    bufp->fullIData(oldp+8,(((IData)(vlSelf->SingleCycleCPU__DOT__addrSrcAEX)
                              ? vlSelf->SingleCycleCPU__DOT__dataR1EX
                              : vlSelf->SingleCycleCPU__DOT__PCEX)),32);
    bufp->fullIData(oldp+9,(((IData)(vlSelf->SingleCycleCPU__DOT__addrSrcBEX)
                              ? vlSelf->SingleCycleCPU__DOT__immEX
                              : (vlSelf->SingleCycleCPU__DOT__immEX 
                                 << 1U))),32);
    bufp->fullIData(oldp+10,(vlSelf->SingleCycleCPU__DOT__PCID),32);
    bufp->fullIData(oldp+11,(vlSelf->SingleCycleCPU__DOT__instID),32);
    bufp->fullIData(oldp+12,(vlSelf->SingleCycleCPU__DOT__PCEX),32);
    bufp->fullIData(oldp+13,(vlSelf->SingleCycleCPU__DOT__dataR1EX),32);
    bufp->fullIData(oldp+14,(vlSelf->SingleCycleCPU__DOT__dataR2EX),32);
    bufp->fullIData(oldp+15,(vlSelf->SingleCycleCPU__DOT__immEX),32);
    bufp->fullIData(oldp+16,(vlSelf->SingleCycleCPU__DOT__PCMEM),32);
    bufp->fullIData(oldp+17,(vlSelf->SingleCycleCPU__DOT__dataR2MEM),32);
    bufp->fullIData(oldp+18,(vlSelf->SingleCycleCPU__DOT__branchAddrMEM),32);
    bufp->fullIData(oldp+19,(((IData)(4U) + vlSelf->SingleCycleCPU__DOT__PCMEM)),32);
    bufp->fullIData(oldp+20,(vlSelf->SingleCycleCPU__DOT__PCplus4WB),32);
    bufp->fullIData(oldp+21,(vlSelf->SingleCycleCPU__DOT__memDataWB),32);
    bufp->fullIData(oldp+22,(vlSelf->SingleCycleCPU__DOT__ALUWB),32);
    bufp->fullCData(oldp+23,(vlSelf->SingleCycleCPU__DOT__ALUCtl),4);
    bufp->fullCData(oldp+24,(vlSelf->SingleCycleCPU__DOT__memtoRegEX),2);
    bufp->fullCData(oldp+25,(vlSelf->SingleCycleCPU__DOT__memtoRegMEM),2);
    bufp->fullCData(oldp+26,(vlSelf->SingleCycleCPU__DOT__memtoRegWB),2);
    bufp->fullCData(oldp+27,(vlSelf->SingleCycleCPU__DOT__ALUOpEX),3);
    bufp->fullBit(oldp+28,(((IData)(vlSelf->SingleCycleCPU__DOT__branchMEM) 
                            & (IData)(vlSelf->SingleCycleCPU__DOT__zeroMEM))));
    bufp->fullBit(oldp+29,(vlSelf->SingleCycleCPU__DOT__branchEX));
    bufp->fullBit(oldp+30,(vlSelf->SingleCycleCPU__DOT__memWriteEX));
    bufp->fullBit(oldp+31,(vlSelf->SingleCycleCPU__DOT__regWriteEX));
    bufp->fullBit(oldp+32,(vlSelf->SingleCycleCPU__DOT__ALUSrcBEX));
    bufp->fullBit(oldp+33,(vlSelf->SingleCycleCPU__DOT__addrSrcAEX));
    bufp->fullBit(oldp+34,(vlSelf->SingleCycleCPU__DOT__addrSrcBEX));
    bufp->fullBit(oldp+35,(vlSelf->SingleCycleCPU__DOT__branchMEM));
    bufp->fullBit(oldp+36,(vlSelf->SingleCycleCPU__DOT__memWriteMEM));
    bufp->fullBit(oldp+37,(vlSelf->SingleCycleCPU__DOT__regWriteMEM));
    bufp->fullBit(oldp+38,(vlSelf->SingleCycleCPU__DOT__zeroMEM));
    bufp->fullBit(oldp+39,(vlSelf->SingleCycleCPU__DOT__regWriteWB));
    bufp->fullCData(oldp+40,(vlSelf->SingleCycleCPU__DOT__instEX),5);
    bufp->fullCData(oldp+41,(vlSelf->SingleCycleCPU__DOT__instMEM),5);
    bufp->fullCData(oldp+42,(vlSelf->SingleCycleCPU__DOT__instWB),5);
    bufp->fullCData(oldp+43,(vlSelf->SingleCycleCPU__DOT__func7n3),4);
    bufp->fullCData(oldp+44,(((8U & (vlSelf->SingleCycleCPU__DOT__instID 
                                     >> 0x1bU)) | (7U 
                                                   & (vlSelf->SingleCycleCPU__DOT__instID 
                                                      >> 0xcU)))),4);
    bufp->fullCData(oldp+45,((0x1fU & (vlSelf->SingleCycleCPU__DOT__instID 
                                       >> 7U))),5);
    bufp->fullBit(oldp+46,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__func7n3) 
                                  >> 3U))));
    bufp->fullCData(oldp+47,((7U & (IData)(vlSelf->SingleCycleCPU__DOT__func7n3))),3);
    bufp->fullCData(oldp+48,((0x7fU & vlSelf->SingleCycleCPU__DOT__instID)),7);
    bufp->fullCData(oldp+49,((0x1fU & (vlSelf->SingleCycleCPU__DOT__instID 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+50,((0x1fU & (vlSelf->SingleCycleCPU__DOT__instID 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+51,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0]),32);
    bufp->fullIData(oldp+52,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[1]),32);
    bufp->fullIData(oldp+53,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[2]),32);
    bufp->fullIData(oldp+54,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[3]),32);
    bufp->fullIData(oldp+55,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[4]),32);
    bufp->fullIData(oldp+56,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[5]),32);
    bufp->fullIData(oldp+57,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[6]),32);
    bufp->fullIData(oldp+58,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[7]),32);
    bufp->fullIData(oldp+59,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[8]),32);
    bufp->fullIData(oldp+60,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[9]),32);
    bufp->fullIData(oldp+61,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[10]),32);
    bufp->fullIData(oldp+62,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[11]),32);
    bufp->fullIData(oldp+63,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[12]),32);
    bufp->fullIData(oldp+64,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[13]),32);
    bufp->fullIData(oldp+65,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[14]),32);
    bufp->fullIData(oldp+66,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[15]),32);
    bufp->fullIData(oldp+67,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[16]),32);
    bufp->fullIData(oldp+68,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[17]),32);
    bufp->fullIData(oldp+69,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[18]),32);
    bufp->fullIData(oldp+70,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[19]),32);
    bufp->fullIData(oldp+71,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[20]),32);
    bufp->fullIData(oldp+72,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[21]),32);
    bufp->fullIData(oldp+73,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[22]),32);
    bufp->fullIData(oldp+74,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[23]),32);
    bufp->fullIData(oldp+75,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[24]),32);
    bufp->fullIData(oldp+76,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[25]),32);
    bufp->fullIData(oldp+77,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[26]),32);
    bufp->fullIData(oldp+78,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[27]),32);
    bufp->fullIData(oldp+79,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[28]),32);
    bufp->fullIData(oldp+80,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[29]),32);
    bufp->fullIData(oldp+81,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[30]),32);
    bufp->fullIData(oldp+82,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[31]),32);
    bufp->fullIData(oldp+83,(vlSelf->SingleCycleCPU__DOT__PC),32);
    bufp->fullIData(oldp+84,(((IData)(4U) + vlSelf->SingleCycleCPU__DOT__PC)),32);
    bufp->fullIData(oldp+85,(((0x80U <= vlSelf->SingleCycleCPU__DOT__PC)
                               ? 0U : ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                        [(0x7fU & vlSelf->SingleCycleCPU__DOT__PC)] 
                                        << 0x18U) | 
                                       ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                         [(0x7fU & 
                                           ((IData)(1U) 
                                            + vlSelf->SingleCycleCPU__DOT__PC))] 
                                         << 0x10U) 
                                        | ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                            [(0x7fU 
                                              & ((IData)(2U) 
                                                 + vlSelf->SingleCycleCPU__DOT__PC))] 
                                            << 8U) 
                                           | vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                           [(0x7fU 
                                             & ((IData)(3U) 
                                                + vlSelf->SingleCycleCPU__DOT__PC))]))))),32);
    bufp->fullIData(oldp+86,(vlSelf->SingleCycleCPU__DOT__ALUOut),32);
    bufp->fullIData(oldp+87,(vlSelf->SingleCycleCPU__DOT__ALUMEM),32);
    bufp->fullCData(oldp+88,((3U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                    >> 8U))),2);
    bufp->fullCData(oldp+89,((7U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                    >> 2U))),3);
    bufp->fullBit(oldp+90,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                  >> 0xbU))));
    bufp->fullBit(oldp+91,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                  >> 0xaU))));
    bufp->fullBit(oldp+92,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                  >> 7U))));
    bufp->fullBit(oldp+93,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                  >> 5U))));
    bufp->fullBit(oldp+94,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                  >> 6U))));
    bufp->fullBit(oldp+95,((0U != vlSelf->SingleCycleCPU__DOT__ALUOut)));
    bufp->fullBit(oldp+96,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                  >> 1U))));
    bufp->fullBit(oldp+97,((1U & (IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl))));
    bufp->fullBit(oldp+98,(vlSelf->SingleCycleCPU__DOT__memReadEX));
    bufp->fullBit(oldp+99,(vlSelf->SingleCycleCPU__DOT__memReadMEM));
    bufp->fullSData(oldp+100,(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl),12);
    bufp->fullBit(oldp+101,(vlSelf->clk));
    bufp->fullBit(oldp+102,(vlSelf->start));
    bufp->fullIData(oldp+103,(vlSelf->r[0]),32);
    bufp->fullIData(oldp+104,(vlSelf->r[1]),32);
    bufp->fullIData(oldp+105,(vlSelf->r[2]),32);
    bufp->fullIData(oldp+106,(vlSelf->r[3]),32);
    bufp->fullIData(oldp+107,(vlSelf->r[4]),32);
    bufp->fullIData(oldp+108,(vlSelf->r[5]),32);
    bufp->fullIData(oldp+109,(vlSelf->r[6]),32);
    bufp->fullIData(oldp+110,(vlSelf->r[7]),32);
    bufp->fullIData(oldp+111,(vlSelf->r[8]),32);
    bufp->fullIData(oldp+112,(vlSelf->r[9]),32);
    bufp->fullIData(oldp+113,(vlSelf->r[10]),32);
    bufp->fullIData(oldp+114,(vlSelf->r[11]),32);
    bufp->fullIData(oldp+115,(vlSelf->r[12]),32);
    bufp->fullIData(oldp+116,(vlSelf->r[13]),32);
    bufp->fullIData(oldp+117,(vlSelf->r[14]),32);
    bufp->fullIData(oldp+118,(vlSelf->r[15]),32);
    bufp->fullIData(oldp+119,(vlSelf->r[16]),32);
    bufp->fullIData(oldp+120,(vlSelf->r[17]),32);
    bufp->fullIData(oldp+121,(vlSelf->r[18]),32);
    bufp->fullIData(oldp+122,(vlSelf->r[19]),32);
    bufp->fullIData(oldp+123,(vlSelf->r[20]),32);
    bufp->fullIData(oldp+124,(vlSelf->r[21]),32);
    bufp->fullIData(oldp+125,(vlSelf->r[22]),32);
    bufp->fullIData(oldp+126,(vlSelf->r[23]),32);
    bufp->fullIData(oldp+127,(vlSelf->r[24]),32);
    bufp->fullIData(oldp+128,(vlSelf->r[25]),32);
    bufp->fullIData(oldp+129,(vlSelf->r[26]),32);
    bufp->fullIData(oldp+130,(vlSelf->r[27]),32);
    bufp->fullIData(oldp+131,(vlSelf->r[28]),32);
    bufp->fullIData(oldp+132,(vlSelf->r[29]),32);
    bufp->fullIData(oldp+133,(vlSelf->r[30]),32);
    bufp->fullIData(oldp+134,(vlSelf->r[31]),32);
    bufp->fullIData(oldp+135,((((IData)(vlSelf->SingleCycleCPU__DOT__branchMEM) 
                                & (IData)(vlSelf->SingleCycleCPU__DOT__zeroMEM))
                                ? vlSelf->SingleCycleCPU__DOT__branchAddrMEM
                                : ((IData)(4U) + vlSelf->SingleCycleCPU__DOT__PC))),32);
    bufp->fullIData(oldp+136,(vlSelf->SingleCycleCPU__DOT__memDataOut),32);
    bufp->fullIData(oldp+137,(3U),32);
    bufp->fullIData(oldp+138,(1U),32);
    bufp->fullIData(oldp+139,(0x20U),32);
    bufp->fullIData(oldp+140,(4U),32);
    bufp->fullIData(oldp+141,(5U),32);
    bufp->fullIData(oldp+142,(2U),32);
}
