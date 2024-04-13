module SingleCycleCPU (
    input clk,
    input start,
    output signed [31:0] r [0:31]
);

// When input start is zero, cpu should reset
// When input start is high, cpu start running

// TODO: connect wire to realize SingleCycleCPU
// The following provides simple template,
// you can modify it as you wish except I/O pin and register module

wire [31:0] PC, PCplus4, inst, imm, ALUOut, shiftimm, branchAddr, muxPC, dataR1, dataR2, memDataOut, writeData, muxALU;
wire [3:0] ALUCtl;
wire [1:0] ALUOp;
wire branch, memRead, memtoReg, memWrite, regWrite, ALUSrc, PCSel, zero;

PC m_PC(
    .clk(clk),
    .rst(start),
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

Control m_Control(
    .opcode(inst[6:0]),
    .branch(branch),
    .memRead(memRead),
    .memtoReg(memtoReg),
    .ALUOp(ALUOp),
    .memWrite(memWrite),
    .ALUSrc(ALUSrc),
    .regWrite(regWrite)
);

// For Student: 
// Do not change the Register instance name!
// Or you will fail validation.

Register m_Register(
    .clk(clk),
    .rst(start),
    .regWrite(regWrite),
    .readReg1(inst[19:15]),
    .readReg2(inst[24:20]),
    .writeReg(inst[11:7]),
    .writeData(writeData),
    .readData1(dataR1),
    .readData2(dataR2)
);

// ======= for validation ======= 
// == Dont change this section ==
assign r = m_Register.regs;
// ======= for vaildation =======

ImmGen m_ImmGen(
    .inst(inst),
    .imm(imm)
);

ShiftLeftOne m_ShiftLeftOne(
    .i(imm),
    .o(shiftimm)
);

Adder m_Adder_addr(
    .a(PC),
    .b(shiftimm),
    .sum(branchAddr)
);

and A1(PCSel, branch, zero);  // B-type and satisfy condition

Mux2to1 #(.size(32)) m_Mux_PC(
    .sel(PCSel),
    .s0(PCplus4),
    .s1(branchAddr),
    .out(muxPC)
);

Mux2to1 #(.size(32)) m_Mux_ALU(
    .sel(ALUSrc),
    .s0(dataR2),
    .s1(imm),
    .out(muxALU)
);

ALUCtrl m_ALUCtrl(
    .ALUOp(ALUOp),
    .funct7(inst[30]),
    .funct3(inst[14:12]),
    .ALUCtl(ALUCtl)
);

ALU m_ALU(
    .ALUctl(ALUCtl),
    .A(dataR1),
    .B(muxALU),
    .ALUOut(ALUOut),
    .zero(zero)
);

DataMemory m_DataMemory(
    .rst(start),
    .clk(clk),
    .memWrite(memWrite),
    .memRead(memRead),
    .address(ALUOut),
    .writeData(dataR2),
    .readData(memDataOut)
);

Mux2to1 #(.size(32)) m_Mux_WriteData(
    .sel(memtoReg),
    .s0(memDataOut),
    .s1(ALUOut),
    .out(writeData)
);

endmodule

