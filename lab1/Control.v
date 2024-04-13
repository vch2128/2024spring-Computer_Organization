module Control (
    input [6:0] opcode,
    output reg branch,
    output reg memRead,
    output reg memtoReg,
    output reg [1:0] ALUOp,
    output reg memWrite,
    output reg ALUSrc,
    output reg regWrite
);

    // TODO: implement your Control here
    // Hint: follow the Architecture (figure in spec) to set output signal
    
    reg[7:0] ctrl;
    assign {branch, memRead, memtoReg, memWrite, ALUSrc, regWrite, ALUOp} = ctrl;
    // ALUSrc: 0->register, 1->imm
    
    always@(*)begin
    	case(opcode)
    	    7'b1100011: ctrl = 8'b11x00011;  //B-type (beq)
            7'b0000011: ctrl = 8'b01001110;  //I-type (lw)
            7'b0100011: ctrl = 8'b00x11010;  //S-type (sw)
            7'b0010011: ctrl = 8'b00101101;  //I-type (addi, slti, ori, andi)
            7'b0110011: ctrl = 8'b00100100;  //R-type (add, sub, slt, or, and)
            default: ctrl = 8'bxxxxxxxx;
        endcase
    end

endmodule

