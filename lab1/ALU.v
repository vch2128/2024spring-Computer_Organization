module ALU (
    input [3:0] ALUctl,
    input signed [31:0] A,B,
    output reg signed [31:0] ALUOut,
    output zero
);
    // ALU has two operand, it execute different operator based on ALUctl wire 
    // output zero is for determining taking branch or not (or you can change the design as you wish)

    // TODO: implement your ALU here
    // Hint: you can use operator to implement
    always@(*)begin
    	case(ALUctl)
    	    4'b0000: ALUOut = A+B;  //add
    	    4'b0001: ALUOut = A-B;  //sub
    	    4'b0010: ALUOut = A&B;  //and
    	    4'b0011: ALUOut = A|B;  //or
    	    4'b0100: ALUOut = (A < B) ? 32'b1 : 32'b0; //lt
    	    4'b0101: ALUOut = (A == B) ? 32'b1 : 32'b0; //eq
    	    default: ALUOut = {32{1'bx}};
    	endcase
    end
    
    assign zero = (ALUOut == 32'b0)? 1'b0:1'b1;
    	
endmodule

