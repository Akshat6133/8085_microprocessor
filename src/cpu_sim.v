`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:05:35 12/09/2021
// Design Name:   cpu
// Module Name:   C:/Users/Ramesh/Documents/ISE/COA/cpu_sim.v
// Project Name:  COA
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: cpu
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module programmem(input [7:0] pgmaddr, output [7:0] pgmdata);
    reg [7:0] pmemory[255:0];
    assign pgmdata=pmemory[pgmaddr];

    initial
    begin
        pmemory[0]=8'h80;
        pmemory[1]=8'h04;
        pmemory[2]=8'h81;
        pmemory[3]=8'h02;
        pmemory[4]=8'h41;
    end
endmodule

// Simple user memory for simulation
module usermem(input clk, 
               input [7:0] uaddr, 
               input [7:0] udata_i,
               input rw,
               output [7:0] udata_o);

    reg [7:0] umemory[255:0];
    assign udata_o = rw ? 8'bZ : umemory[uaddr];
    always @(negedge clk) 
    begin
        if (rw==1) 
            umemory[uaddr] <= udata_i;
	end
    initial
    begin
        umemory[0]<=8'h00;
        umemory[1]<=8'h00;
        umemory[2]<=8'h00;
		  umemory[255]<=8'hde;
    end
endmodule

module cpu_sim;

	// Inputs
	reg clk;
	reg reset;
	reg interrupt;
	wire [7:0] datamem_data;
	wire [7:0] usermem_data_in;

	// Outputs
	wire [7:0] datamem_address;
	wire [7:0] usermem_address;
	wire [7:0] usermem_data_out;
	wire rw;
	wire [7:0] v1;
	wire [7:0] v2;
   wire [7:0] idata;

	programmem pgm(datamem_address, idata);
	usermem umem(clk, usermem_address,usermem_data_out, usermem_data_in, rw);

	// Instantiate the Unit Under Test (UUT)
	cpu uut (
		.clk(clk), 
		.reset(reset), 
		.interrupt(interrupt), 
		.datamem_data(datamem_data), 
		.usermem_data_in(usermem_data_in), 
		.datamem_address(datamem_address), 
		.usermem_address(usermem_address), 
		.usermem_data_out(usermem_data_out), 
		.rw(rw), 
		.v1(v1), 
		.v2(v2)
	);

	initial 
    begin
		// Initialize Inputs
		clk = 1'b0;
		reset = 1'b1;
		interrupt = 1'b0;
        @(posedge clk);
        @(posedge clk);
        reset = 1'b0;
    end
    always 
    begin
        forever 
        begin
            #1 clk = !clk;
        end
    end
      
endmodule

