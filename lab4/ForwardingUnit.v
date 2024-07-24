module ForwardingUnit (
    input [4:0] rs1,
    input [4:0] rs2,
    input [4:0] rdMEM,
    input [4:0] rdWB,
    input regWriteMEM,
    input regWriteWB,
    output reg [1:0] forwardA,
    output reg [1:0] forwardB
);
    
    always@(*)begin
        // source 1
        if ( (rdMEM == rs1) && (regWriteMEM == 1 && rdMEM !=0))   // EX hazard
          begin
          	forwardA = 2'b01;
          end
      	else
          begin 
            // MEM hazard 
            if ((rdWB == rs1) && (regWriteWB == 1 && rdWB != 0) && ~( (rdMEM == rs1) && (regWriteMEM == 1 && rdMEM !=0) ) )
              begin
                forwardA = 2'b10;
              end
            else
              begin
                forwardA = 2'b00;
              end
          end

        // source 2
        if ( (rdMEM == rs2) && (regWriteMEM == 1 && rdMEM !=0))   // EX hazard
          begin
          	forwardB = 2'b01;
          end
      	else
          begin 
            // MEM hazard 
            if ((rdWB == rs2) && (regWriteWB == 1 && rdWB != 0) && ~( (rdMEM == rs2) && (regWriteMEM == 1 && rdMEM !=0) ) )
              begin
                forwardB = 2'b10;
              end
            else
              begin
                forwardB = 2'b00;
              end
          end
    	
    end
    	
endmodule

