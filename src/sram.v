`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    21:56:58 12/05/2021
// Design Name:
// Module Name:    sram
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
module sram(input wire reset,
            output wire [7:0] mem_address,
            output [7:0] o_data);
    
    reg [7:0] memory_array [0:255];
    always @(posedge reset)
    begin
        memory_array[2]  = 8'h80;
        memory_array[3]  = 8'h01;
        memory_array[4]  = 8'h81;
        memory_array[5]  = 8'h01;
        memory_array[6]  = 8'h82;
        memory_array[7]  = 8'h08;
        memory_array[8]  = 8'h41;
        memory_array[9]  = 8'h44;
        memory_array[10] = 8'h92;
    end
    
    assign o_data = memory_array[mem_address];
    
endmodule
