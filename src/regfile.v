`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    23:11:52 12/05/2021
// Design Name:
// Module Name:    regfile
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
module regfile (input [1:0] readreg1, readreg2, writereg,
                input [7:0] data,
                input clk, regwrite,
                output [7:0] read1, read2, v1, v2);
                
reg [7:0] registerfile [3:0]; // 8 by 4
initial 
begin
    registerfile[2'd0] <= 8'b0;
    registerfile[2'd1] <= 8'b0;
    registerfile[2'd2] <= 8'b0;
    registerfile[2'd3] <= 8'b0;
end
always @(negedge clk)
begin
    if (regwrite == 1)
        registerfile[writereg] <= data;
end
    
assign read1 = (regwrite && readreg1 == writereg)? data: registerfile[readreg1];
assign read2 = (regwrite && readreg2 == writereg)? data: registerfile[readreg2];
assign v1    = registerfile[0];
assign v2    = registerfile[1];

endmodule
