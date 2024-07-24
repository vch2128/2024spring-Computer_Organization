module IFIDPipeReg #(
    parameter size = 32
) 
(
    input clk,
    input rst,
    input signed [size-1:0] data_i,
    input stall,
    input flush,
    output reg signed [size-1:0] data_o
);
    always@(posedge clk, negedge rst) begin
    	if (~rst || flush == 1)
          begin
    		data_o <= 0;
          end
    	else if (stall == 1'b0)    // no stall
          begin
    		data_o <= data_i;
          end
    end
    
endmodule

