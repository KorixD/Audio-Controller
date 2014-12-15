`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   07:15:01 06/22/2012
// Design Name:   make_sin_sig
// Module Name:   D:/Audio-Controller/EvenOneMoreAudCtrl/make_sin_sig_test.v
// Project Name:  EvenOneMoreAudCtrl
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: make_sin_sig
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module make_sin_sig_test;

	// Inputs
	reg clk;
	reg [15:0] freq;

	// Outputs
	wire sig;
	wire [15:0] sin;

	// Instantiate the Unit Under Test (UUT)
	make_sin_sig uut (
		.clk(clk), 
		.freq(freq),
		.sig(sig), 
		.sin(sin)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		freq = 261;

		// Wait 100 ns for global reset to finish
		#10;
       forever 
		begin
			#10;
			clk = ~clk;
		end
		// Add stimulus here

	end
      
endmodule

