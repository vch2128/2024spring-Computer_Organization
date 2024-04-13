//`include "fullAdder.v"
module alu(
    input [3:0] a,
    input [3:0] b,
    input [2:0] s,
    output reg [3:0] y
); 
    // alu has two input operand a and b.
    // It executes different operation over input a and b based on input s
    // then generate result to output y
    
    // TODO: implement your 4bits ALU design here and using your own fulladder module in this module
    reg [3:0] ad,su;
    wire c1,c2,c3,c4,b1,b2,b3,b4;
    wire [3:0] b_complement;
    
    
	fullAdder add1(.cin(1'b0),.a(a[0]),.b(b[0]),.s(ad[0]),.cout(c1));
	fullAdder add2(.cin(c1),.a(a[1]),.b(b[1]),.s(ad[1]),.cout(c2));
	fullAdder add3(.cin(c2),.a(a[2]),.b(b[2]),.s(ad[2]),.cout(c3));
	fullAdder add4(.cin(c3),.a(a[3]),.b(b[3]),.s(ad[3]),.cout(c4));
    
    
    
	assign b_complement = ~b + 4'b0001;
	fullAdder sub1(.cin(1'b0),.a(a[0]),.b(b_complement[0]),.s(su[0]),.cout(b1));
	fullAdder sub2(.cin(b1),.a(a[1]),.b(b_complement[1]),.s(su[1]),.cout(b2));
	fullAdder sub3(.cin(b2),.a(a[2]),.b(b_complement[2]),.s(su[2]),.cout(b3));
	fullAdder sub4(.cin(b3),.a(a[3]),.b(b_complement[3]),.s(su[3]),.cout(b4));
    
    
always@(*)
begin
    case(s)
	//add
	3'b000:
		//y=a+b;
	   	y=ad;
	    
	//sub
	3'b001:
		//y=a-b;
		y=su;
	
	//not
	3'b010:
		y = ~a;
	
	//and
	3'b011:
		y = a & b;
	
	//or
	3'b100:
		y = a | b;
	
	//xor
	3'b101:
		y = a ^ b;
	
	//greater
	3'b110:
		y = (a > b)? 4'd1:4'd0;
	
	//equal
	3'b111:
		y = (a == b)? 4'd1:4'd0;
    endcase
end
endmodule

module fullAdder(input cin, input a, input b, output s, output cout);
    // FullAdder compute addition of input cin, a and b,
    // then output result to s and carry bit to cout.

    // TODO: implement your fullAdder design here
    wire s1,c1,c2;
    xor(s1,a,b);
    xor(s,s1,cin);
    and(c2,a,b);
    and(c1,s1,cin);
    or(cout,c1,c2);
    // For testbench verifying, do not modify input and output pin

endmodule
