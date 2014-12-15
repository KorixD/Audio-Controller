`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:00:55 06/15/2012
// Design Name:   dev
// Module Name:   D:/Audio-Controller/OneMoreAudCtrl/dev_test.v
// Project Name:  OneMoreAudCtrl
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: dev
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module dev_test;

	// Inputs
	reg clk;
	reg ARESETn;

	// Outputs
	wire aud_sig;
	 wire [6:0] WDATA;
	 wire [3:0] AWADDR;
	 wire AWVALID;
	 wire WVALID;

	// Instantiate the Unit Under Test (UUT)
	dev uut (
		.ARESETn(ARESETn),
		.clk(clk), 
		.aud_sig(aud_sig),
	 .WDATA(WDATA),
	 .AWADDR(AWADDR),
	 .AWVALID(AWVALID),
	 .WVALID(WVALID)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		ARESETn = 0;

		#10;
      clk = ~clk;
		#10;
      clk = ~clk;
		#10;
      clk = ~clk;
		#10;
      clk = ~clk;
		#10;
      clk = ~clk;
		#10;
      clk = ~clk;
		#10;
      clk = ~clk;
		#10;
      clk = ~clk;
		#10;
      clk = ~clk;
		#10;
      clk = ~clk;
		#10;
      clk = ~clk;
		#10;
      clk = ~clk;
		#10;
      clk = ~clk;
		#10;
      clk = ~clk;
		#10;
      clk = ~clk;
		#10;
      clk = ~clk;
		#10;
      clk = ~clk;
		#10;
      clk = ~clk;
		#10;
      clk = ~clk;
		#10;
      clk = ~clk;
		#10;
      clk = ~clk;
		#10;
      clk = ~clk;
		#10;
      clk = ~clk;
		#10;
      clk = ~clk;
		#10;
      clk = ~clk;
		ARESETn = 1;
		// Wait 100 ns for global reset to finish
		forever begin
		#10;
      clk = ~clk;
		end
		// Add stimulus here

	end
      
endmodule

