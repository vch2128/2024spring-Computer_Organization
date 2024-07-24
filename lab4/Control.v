module Control (
    input [6:0] opcode,
    input stall,
    output reg branch,
    output reg memRead,
    output reg [1:0] memtoReg,
    output reg [2:0] ALUOp,
    output reg memWrite,
    output reg ALUSrcB,
    output reg regWrite,
    output reg addrSrcA,
    output reg addrSrcB
);

    // TODO: implement your Control here
    // Hint: follow the Architecture (figure in spec) to set output signal
    
    reg[11:0] ctrl;
    assign {branch, memRead, memtoReg, memWrite, ALUSrcB, regWrite, ALUOp, addrSrcA, addrSrcB} = ctrl;
    // ALUSrcB: 0->register, 1->imm
    
    always@(*)begin
        if (stall == 1'b1) begin
            ctrl = 12'b000000000000;
        end
        else begin
            case(opcode)
                7'b1100011: ctrl = 12'b11xx00001100;  //B-type (beq, bne, blt, bge)
                7'b0000011: ctrl = 12'b0100011010xx;  //I-type (lw)
                7'b0100011: ctrl = 12'b00xx110010xx;  //S-type (sw)
                7'b0010011: ctrl = 12'b0001011001xx;  //I-type (addi, slti, ori, andi)
                7'b0110011: ctrl = 12'b0001001000xx;  //R-type (add, sub, slt, or, and)
                7'b1101111: ctrl = 12'b111001110000;  //UJ-type (jal)
                7'b1100111: ctrl = 12'b111001110011;  //UJ-type (jalr)
                default: ctrl = 12'bxxxxxxxxxxxx;
            endcase
        end
    end

endmodule

