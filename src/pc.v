`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    22:49:27 12/05/2021
// Design Name:
// Module Name:    pc
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
module pc(input clk, reset, jump, freeze,
          input [7:0] jmpaddr,
          output reg [7:0] data);
    
always @(posedge clk)
begin
    if (reset == 1)
    begin
        data <= 8'b0;
    end
    else if (reset == 0)
    begin
        if (jump == 1)
            data <= jmpaddr;
        else
            data <= freeze? data : data + 1;
    end
end
endmodule
        
