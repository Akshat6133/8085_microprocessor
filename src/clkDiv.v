`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    23:17:02 12/05/2021
// Design Name:
// Module Name:    clkDiv
// Project Name:
// Target Devices:
// Tool versions:
// Description:
//
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//
//////////////////////////////////////////////////////////////////////////////////
module clkDiv(input clk_in,
              input reset,
              output reg clk_out,
              output reg [7:0] value1,
              output reg [7:0] value2);
    
    reg [32:0] count;
    
    always @(posedge clk_in) 
    begin
        if (reset == 1)
        begin
            count <= 0;
        end 
        else 
        begin
            count <= count + 1;
            if (count == 300000000)
            begin
                count   <= 0;
                clk_out <= !clk_out;
            end
        end
    end
endmodule
