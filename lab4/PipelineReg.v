module PipelineReg #(
    parameter size = 32
) 
(
    input clk,
    input rst,
    input signed [size-1:0] data_i,
    output reg signed [size-1:0] data_o
);
    always@(posedge clk, negedge rst) begin
    	if(~rst)
    		data_o <= 0;
    	else
    		data_o <= data_i;
    end
    
endmodule

