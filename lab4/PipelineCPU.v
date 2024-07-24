module PipelineCPU (
    input clk,
    input start,
    output signed [31:0] r [0:31]
);

// When input start is zero, cpu should reset
// When input start is high, cpu start running

// TODO: connect wire to realize SingleCycleCPU
// The following provides simple template,
// you can modify it as you wish except I/O pin and register module

wire [31:0] PC, PCplus4, inst, imm, ALUOut, shiftimm, branchAddr, muxPC, dataR1, dataR2, memDataOut, writeData, muxALUB, muxAddrA, muxAddrB;
wire [31:0] PCID, instID, PCEX, dataR1EX, dataR2EX, immEX, PCMEM, dataR2MEM, ALUMEM, branchAddrMEM, PCplus4MEM, PCplus4WB, memDataWB, ALUWB;
wire [3:0] ALUCtl;
wire [1:0] memtoReg, memtoRegEX, memtoRegMEM, memtoRegWB;
wire [2:0] ALUOp, ALUOpEX;
wire branch, memRead, memWrite, regWrite, ALUSrcB, zero, PCSel, addrSrcA, addrSrcB;
wire branchEX, memReadEX, memWriteEX, regWriteEX, ALUSrcBEX, addrSrcAEX, addrSrcBEX;
wire branchMEM, memReadMEM, memWriteMEM, regWriteMEM, zeroMEM;
wire regWriteWB;
wire [4:0] instEX, instMEM, instWB;
wire [3:0] func7n3;
wire [4:0] rs1EX, rs2EX, rdEX, rdMEM, rdWB;
wire [1:0] forwardA, forwardB;
wire [31:0] muxForwardA, muxForwardB;
wire stall, flush;

// IF

Mux2to1 #(.size(32)) m_Mux_PC(
    .sel(PCSel),
    .s0(PCplus4),
    .s1(branchAddrMEM),
    .out(muxPC)
);

PC m_PC(
    .clk(clk),
    .rst(start),
    .stall(stall),
    .pc_i(muxPC),
    .pc_o(PC)
);


Adder m_PCadder(
    .a(PC),
    .b(4),
    .sum(PCplus4)
);

InstructionMemory m_InstMem(
    .readAddr(PC),
    .inst(inst)
);


// IF/ID
IFIDPipeReg #(.size(32)) PC_ID(
    .clk(clk),
    .rst(start),
    .data_i(PC),
    .stall(stall),
    .flush(flush),
    .data_o(PCID)
);

IFIDPipeReg #(.size(32)) inst_ID(
    .clk(clk),
    .rst(start),
    .data_i(inst),
    .stall(stall),
    .flush(flush),
    .data_o(instID)
);


// ID

// For Student: 
// Do not change the Register instance name!
// Or you will fail validation.

Register m_Register(
    .clk(clk),
    .rst(start),
    .regWrite(regWriteWB),
    .readReg1(instID[19:15]),   // rs1
    .readReg2(instID[24:20]),   // rs2
    .writeReg(instWB),    // rd (address)
    .writeData(writeData),
    .readData1(dataR1),
    .readData2(dataR2)
);

// ======= for validation ======= 
// == Dont change this section ==
assign r = m_Register.regs;
// ======= for vaildation =======

ImmGen m_ImmGen(
    .inst(instID),
    .imm(imm)
);


Control m_Control(
    .opcode(instID[6:0]),
    .stall(stall),
    .branch(branch),
    .memRead(memRead),
    .memtoReg(memtoReg),
    .ALUOp(ALUOp),
    .memWrite(memWrite),
    .ALUSrcB(ALUSrcB),
    .regWrite(regWrite),
    .addrSrcA(addrSrcA),
    .addrSrcB(addrSrcB)
);

HazardDetectionUnit m_hazardDetectionUnit(
    .memReadEX(memReadEX),
    .rdEX(rdEX),
    .rs1(instID[19:15]),
    .rs2(instID[24:20]),
    .stall(stall)
);

FlushUnit m_flushUnit(
    .branch(PCSel),
    .flush(flush)
);

// ID/EX

IDEXMEMPipeReg #(.size(32)) PC_EX(
    .clk(clk),
    .rst(start),
    .data_i(PCID),
    .flush(flush),
    .data_o(PCEX)
);

IDEXMEMPipeReg #(.size(32)) dtR1_EX(
    .clk(clk),
    .rst(start),
    .data_i(dataR1),
    .flush(flush),
    .data_o(dataR1EX)
);

IDEXMEMPipeReg #(.size(32)) dtR2_EX(
    .clk(clk),
    .rst(start),
    .data_i(dataR2),
    .flush(flush),
    .data_o(dataR2EX)
);

IDEXMEMPipeReg #(.size(32)) imm_EX(
    .clk(clk),
    .rst(start),
    .data_i(imm),
    .flush(flush),
    .data_o(immEX)
);

IDEXMEMPipeReg #(.size(5)) instWrite_EX(
    .clk(clk),
    .rst(start),
    .data_i(instID[11:7]),
    .flush(flush),
    .data_o(instEX)
);

IDEXMEMPipeReg #(.size(4)) func_EX( .clk(clk), .rst(start), .data_i({instID[30],instID[14:12]}), .flush(flush), .data_o(func7n3) );

IDEXMEMPipeReg #(.size(1)) addrSrcA_EX( .clk(clk), .rst(start), .data_i(addrSrcA), .flush(flush), .data_o(addrSrcAEX) );
IDEXMEMPipeReg #(.size(1)) addrSrcB_EX( .clk(clk), .rst(start), .data_i(addrSrcB), .flush(flush), .data_o(addrSrcBEX) );
IDEXMEMPipeReg #(.size(1)) ALUSrcB_EX( .clk(clk), .rst(start), .data_i(ALUSrcB), .flush(flush), .data_o(ALUSrcBEX) );
IDEXMEMPipeReg #(.size(3)) ALUOp_EX( .clk(clk), .rst(start), .data_i(ALUOp), .flush(flush), .data_o(ALUOpEX) );

IDEXMEMPipeReg #(.size(1)) branch_EX( .clk(clk), .rst(start), .data_i(branch), .flush(flush), .data_o(branchEX) );
IDEXMEMPipeReg #(.size(1)) memWrite_EX( .clk(clk), .rst(start), .data_i(memWrite), .flush(flush), .data_o(memWriteEX) );
IDEXMEMPipeReg #(.size(1)) memRead_EX( .clk(clk), .rst(start), .data_i(memRead), .flush(flush), .data_o(memReadEX) );

IDEXMEMPipeReg #(.size(2)) memtoReg_EX( .clk(clk), .rst(start), .data_i(memtoReg), .flush(flush), .data_o(memtoRegEX) );
IDEXMEMPipeReg #(.size(1)) regWrite_EX( .clk(clk), .rst(start), .data_i(regWrite), .flush(flush), .data_o(regWriteEX) );

IDEXMEMPipeReg #(.size(5)) rs1_EX( .clk(clk), .rst(start), .data_i(instID[19:15]), .flush(flush), .data_o(rs1EX) );
IDEXMEMPipeReg #(.size(5)) rs2_EX( .clk(clk), .rst(start), .data_i(instID[24:20]), .flush(flush), .data_o(rs2EX) );
IDEXMEMPipeReg #(.size(5)) rd_EX( .clk(clk), .rst(start), .data_i(instID[11:7]), .flush(flush), .data_o(rdEX) );

// EX

ForwardingUnit m_forwardingUnit(
    .rs1(rs1EX),
    .rs2(rs2EX),
    .rdMEM(rdMEM),
    .rdWB(rdWB),
    .regWriteMEM(regWriteMEM),
    .regWriteWB(regWriteWB),
    .forwardA(forwardA),
    .forwardB(forwardB)
);

ShiftLeftOne m_ShiftLeftOne(
    .i(immEX),
    .o(shiftimm)
);

Mux2to1 #(.size(32)) m_Mux_AddrA(
    .sel(addrSrcAEX),
    .s0(PCEX),
    .s1(muxForwardA),
    .out(muxAddrA)
);

Mux2to1 #(.size(32)) m_Mux_AddrB(
    .sel(addrSrcBEX),
    .s0(shiftimm),
    .s1(immEX),
    .out(muxAddrB)
);

Adder m_Adder_addr(
    .a(muxAddrA),
    .b(muxAddrB),
    .sum(branchAddr)
);

Mux3to1 #(.size(32)) m_Mux_forwardA(
    .sel(forwardA),
    .s0(dataR1EX),
    .s1(ALUMEM),
    .s2(writeData),
    .out(muxForwardA)
);

Mux3to1 #(.size(32)) m_Mux_forwardB(
    .sel(forwardB),
    .s0(dataR2EX),
    .s1(ALUMEM),
    .s2(writeData),
    .out(muxForwardB)
);

Mux2to1 #(.size(32)) m_Mux_ALU(
    .sel(ALUSrcBEX),
    .s0(muxForwardB),
    .s1(immEX),
    .out(muxALUB)
);

ALUCtrl m_ALUCtrl(
    .ALUOp(ALUOpEX),
    .funct7(func7n3[3]),
    .funct3(func7n3[2:0]),
    .ALUCtl(ALUCtl)
);

ALU m_ALU(
    .ALUctl(ALUCtl),
    .A(muxForwardA),
    .B(muxALUB),
    .ALUOut(ALUOut),
    .zero(zero)
);

// EX/MEM

IDEXMEMPipeReg #(.size(32)) PC_MEM(
    .clk(clk),
    .rst(start),
    .data_i(PCEX),
    .flush(flush), 
    .data_o(PCMEM)
);

IDEXMEMPipeReg #(.size(32)) dtR2_MEM(
    .clk(clk),
    .rst(start),
    .data_i(muxForwardB),
    .flush(flush), 
    .data_o(dataR2MEM)
);

IDEXMEMPipeReg #(.size(32)) ALU_MEM(
    .clk(clk),
    .rst(start),
    .data_i(ALUOut),
    .flush(flush), 
    .data_o(ALUMEM)
);

IDEXMEMPipeReg #(.size(5)) instWrite_MEM(
    .clk(clk),
    .rst(start),
    .data_i(instEX),
    .flush(flush), 
    .data_o(instMEM)
);

IDEXMEMPipeReg #(.size(32)) branchAddr_MEM(
    .clk(clk),
    .rst(start),
    .data_i(branchAddr),
    .flush(flush), 
    .data_o(branchAddrMEM)
);

IDEXMEMPipeReg #(.size(1)) branch_MEM( .clk(clk), .rst(start), .data_i(branchEX), .flush(flush), .data_o(branchMEM) );
IDEXMEMPipeReg #(.size(1)) memWrite_MEM( .clk(clk), .rst(start), .data_i(memWriteEX), .flush(flush), .data_o(memWriteMEM) );
IDEXMEMPipeReg #(.size(1)) memRead_MEM( .clk(clk), .rst(start), .data_i(memReadEX), .flush(flush), .data_o(memReadMEM) );
IDEXMEMPipeReg #(.size(1)) zero_MEM( .clk(clk), .rst(start), .data_i(zero), .flush(flush), .data_o(zeroMEM) );

IDEXMEMPipeReg #(.size(2)) memtoReg_MEM( .clk(clk), .rst(start), .data_i(memtoRegEX), .flush(flush), .data_o(memtoRegMEM) );
IDEXMEMPipeReg #(.size(1)) regWrite_MEM( .clk(clk), .rst(start), .data_i(regWriteEX), .flush(flush), .data_o(regWriteMEM) );

IDEXMEMPipeReg #(.size(5)) rd_MEM( .clk(clk), .rst(start), .data_i(rdEX), .flush(flush), .data_o(rdMEM) );

// MEM

DataMemory m_DataMemory(
    .rst(start),
    .clk(clk),
    .memWrite(memWriteMEM),
    .memRead(memReadMEM),
    .address(ALUMEM),
    .writeData(dataR2MEM),
    .readData(memDataOut)
);

Adder m_PCadder_MEM(
    .a(PCMEM),
    .b(4),
    .sum(PCplus4MEM)
);

and A1(PCSel, branchMEM, zeroMEM);  // B-type and satisfy condition
// 0 -> no branch, 1 -> take branch

// MEM/WB

PipelineReg #(.size(32)) PCplus4_WB(
    .clk(clk),
    .rst(start),
    .data_i(PCplus4MEM),
    .data_o(PCplus4WB)
);

PipelineReg #(.size(32)) ALU_WB(
    .clk(clk),
    .rst(start),
    .data_i(ALUMEM),
    .data_o(ALUWB)
);

PipelineReg #(.size(32)) DataMem_WB(
    .clk(clk),
    .rst(start),
    .data_i(memDataOut),
    .data_o(memDataWB)
);

PipelineReg #(.size(5)) instWrite_WB(
    .clk(clk),
    .rst(start),
    .data_i(instMEM),
    .data_o(instWB)
);

PipelineReg #(.size(2)) memtoReg_WB( .clk(clk), .rst(start), .data_i(memtoRegMEM), .data_o(memtoRegWB) );
PipelineReg #(.size(1)) regWrite_WB( .clk(clk), .rst(start), .data_i(regWriteMEM), .data_o(regWriteWB) );

PipelineReg #(.size(5)) rd_WB( .clk(clk), .rst(start), .data_i(rdMEM), .data_o(rdWB) );

// WB

Mux3to1 #(.size(32)) m_Mux_WriteData(
    .sel(memtoRegWB),
    .s0(memDataWB),
    .s1(ALUWB),
    .s2(PCplus4WB),
    .out(writeData)
);

endmodule

