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

