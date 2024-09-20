`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    22:31:09 12/05/2021
// Design Name:
// Module Name:    seven_seg
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
module seven_seg(input clock_100Mhz,              // 100 Mhz clock source on Basys 3 FPGA
                 input [7:0] b,
                 input [7:0] a,
                 output reg [3:0] Anode_Activate, // anode signals of the 7-segment LED display
                 output reg [6:0] LED_out);
    
    reg [3:0] LED_BCD;
    reg [1:0] count      = 0;
    reg [10:0] mycounter = 0;
    
    always@(posedge clock_100Mhz)
    begin
        if (mycounter == 0)
        begin
            if (count == 0)
            begin
                LED_BCD        = a[7:4];
                Anode_Activate = 4'b0111;
            end
            else if (count == 1)
            begin
                LED_BCD        = a[3:0];
                Anode_Activate = 4'b1011;
            end
            else if (count == 2)
            begin
                LED_BCD        = b[7:4];
                Anode_Activate = 4'b1101;
            end
            else
            begin
                LED_BCD        = b[3:0];
                Anode_Activate = 4'b1110;
            end
            count = count + 1;
        end
        mycounter = mycounter + 1;
    end
    
    // Cathode patterns of the 7-segment LED display
    always @(*)
    begin
        case(LED_BCD)
            4'b0000: LED_out = 7'b0000001; // "0"
            4'b0001: LED_out = 7'b1001111; // "1"
            4'b0010: LED_out = 7'b0010010; // "2"
            4'b0011: LED_out = 7'b0000110; // "3"
            4'b0100: LED_out = 7'b1001100; // "4"
            4'b0101: LED_out = 7'b0100100; // "5"
            4'b0110: LED_out = 7'b0100000; // "6"
            4'b0111: LED_out = 7'b0001111; // "7"
            4'b1000: LED_out = 7'b0000000; // "8"
            4'b1001: LED_out = 7'b0000100; // "9"
            4'b1010: LED_out = 7'b0001000; // "A"
            4'b1011: LED_out = 7'b1100000; // "b"
            4'b1100: LED_out = 7'b0110001; // "C"
            4'b1101: LED_out = 7'b1000010; // "d"
            4'b1110: LED_out = 7'b0110000; // "E"
            default: LED_out = 7'b0111000; // "F"
        endcase
    end
endmodule
