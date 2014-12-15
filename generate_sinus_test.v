`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   07:43:50 04/02/2012
// Design Name:   generate_sinus
// Module Name:   D:/AudioController/generate_sinus_test.v
// Project Name:  AudioController
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: generate_sinus
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module generate_sinus_test;

	// Inputs
	reg [0:15] freq;
	reg clk;
	reg [0:31] length;

	// Outputs
	wire [0:15] signal;
	//wire [0:15] phase_out;
	wire played;

	// Instantiate the Unit Under Test (UUT)
	generate_sinus uut (
		 .freq(freq),
		 .clk(clk),
		 .signal(signal)
	);

	initial begin
		// Initialize    Inputs
		freq = 261;
		clk = 0;
		// Wait 100 ns for global reset to finish
		#100;
		forever #100
			begin
			clk = ~clk;
			//phase_in = phase_in + 1;
		end
	end
      
endmodule

