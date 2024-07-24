module HazardDetectionUnit(
    input memReadEX,
    input [4:0] rdEX,
    input [4:0] rs1,
    input [4:0] rs2,
    output reg stall
);

    initial
        begin
            stall = 1'b0;
        end
    
    always @(*)
        begin
            if (memReadEX == 1'b1 && ((rdEX == rs1) || (rdEX == rs2)))
                stall = 1'b1;
            else
                stall = 1'b0;
        end

endmodule
