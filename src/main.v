`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    21:36:28 12/05/2021
// Design Name:
// Module Name:    main
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
module main(input clk,
            input reset,
            input interrupt,
            output [7:0] idata,
            output [7:0] datamem_address,
            output [3:0] anode,
            output [6:0] data);
    
    wire clk, clk_out, reset, interrupt, rw;
    wire [7:0] datamem_data, usermem_data_in, usermem_data_out, datamem_address, usermem_address, idata;
    wire [7:0] value1, value2;
    
    sram sram0(reset, datamem_address, i_data);
    seven_seg seven_seg0(clk, value2, value1, anode,data);
    clkDiv clkDiv0(clk, reset, clk_out);
    
endmodule
