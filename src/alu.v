`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    23:13:12 12/05/2021
// Design Name:
// Module Name:    alu
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
module alu (input [7:0] b, a,
            input [3:0] opcode,
            output reg [7:0] y);

reg [7:0] o, an, n, x, add, sub, rsn;

// Decode the instruction
always @* 
begin
    o   <= a | b;
    an  <= a & b;
    n   <= ~a;
    x   <= a ^ b;
    add <= a + b;
    sub <= a - b;
    rsn <= a >> b;
    case (opcode)
        4'h0 /* OR */:   y    <= o;
        4'h1 /* AND */:   y   <= an;
        4'h2 /* NOT */:   y   <= n;
        4'h3 /* XOR */:   y   <= x;
        4'h4 /* ADD */:   y   <= add;
        4'h5 /* SUB */:   y   <= sub;
        4'h6 /* TX */: y      <= b;
        4'h7 /* RSHIFTN */: y <= rsn;
        default: y            <= 8'bZ;
    endcase
end
endmodule 
