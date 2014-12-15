`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:09:20 06/22/2012
// Design Name:   controller_test
// Module Name:   D:/Audio-Controller/EvenOneMoreAudCtrl/test.v
// Project Name:  EvenOneMoreAudCtrl
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: controller_test
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg clk;

	// Outputs
	wire aud;

	// Instantiate the Unit Under Test (UUT)
	controller_test uut (
		.clk(clk), 
		.aud(aud)
	);

	initial begin
		// Initialize Inputs
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        forever
		  begin
			  #100;
			  clk = ~clk;
		  end
		// Add stimulus here

	end
      
endmodule

