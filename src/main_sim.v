`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:23:46 12/09/2021
// Design Name:   main
// Module Name:   C:/Users/Ramesh/Documents/ISE/COA/main_sim.v
// Project Name:  COA
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: main
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module main_sim;

	// Inputs
	reg clk;
	reg reset;
	reg interrupt;

	// Outputs
	wire [7:0] idata;
	wire [7:0] datamem_address;
	wire [3:0] anode;
	wire [6:0] data;
    wire [7:0] value1;
    wire [7:0] value2;

	// Instantiate the Unit Under Test (UUT)
	main uut (
		.clk(clk), 
		.reset(reset), 
		.interrupt(interrupt), 
		.idata(idata), 
		.datamem_address(datamem_address), 
		.anode(anode), 
		.data(data)
	);

	initial
    begin
       clk = 1'b0;
       reset = 1'b1;
       interrupt = 1'b0;
       repeat(4) #10 clk = !clk;
       reset = 1'b0;
       #1;
       reset = 1'b1;
       #1;
       reset = 0'b0;
       #1;
    end
    always
        #1 clk = !clk;
      
endmodule

