module ALUCtrl (
    input [1:0] ALUOp,
    input funct7,
    input [2:0] funct3,
    output reg [3:0] ALUCtl
);

    // TODO: implement your ALU control here
    // For testbench verifying, Do not modify input and output pin
    // Hint: using ALUOp, funct7, funct3 to select exact operation
    always@(*) begin
    	case(ALUOp)
    	    2'b00:  // R-type
    	    	case({funct7,funct3})    
    	    		4'b0000: ALUCtl = 4'b0000;  // add
    	    		4'b1000: ALUCtl = 4'b0001;  // sub
    	    		4'b0010: ALUCtl = 4'b0100;  // slt
    	    		4'b0110: ALUCtl = 4'b0011;  // or
    	    		4'b0111: ALUCtl = 4'b0010;  // and
    	    		default: ALUCtl = 4'bxxxx;
    	    	endcase
    	    2'b01:  // I-type
    	        case(funct3)    
    	    		3'b000: ALUCtl = 4'b0000;  // addi
    	    		3'b010: ALUCtl = 4'b0100;  // slti
    	    		3'b110: ALUCtl = 4'b0011;  // ori
    	    		3'b111: ALUCtl = 4'b0010;  // andi
    	    		default: ALUCtl = 4'bxxxx;
    	    	endcase
    	    2'b10: ALUCtl = 4'b0000;  // lw, sw, 
    	    2'b11: ALUCtl = 4'b0101;  // beq
    	endcase
    end
endmodule

