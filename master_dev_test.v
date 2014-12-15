`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:20:58 06/15/2012
// Design Name:   master_dev
// Module Name:   D:/Audio-Controller/OneMoreAudCtrl/master_dev_test.v
// Project Name:  OneMoreAudCtrl
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: master_dev
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module master_dev_test;

	// Inputs
	reg clk;
	reg ARESETn;
	reg AWREADY;
	reg WREADY;
	reg BVALID;

	// Outputs
	wire [3:0] AWADDR;
	wire AWVALID;
	wire [6:0] WDATA;
	wire WVALID;
	wire BREADY;

	// Instantiate the Unit Under Test (UUT)
	master_dev uut (
		.clk(clk), 
		.ARESETn(ARESETn), 
		.AWREADY(AWREADY), 
		.AWADDR(AWADDR), 
		.AWVALID(AWVALID), 
		.WREADY(WREADY), 
		.WDATA(WDATA), 
		.WVALID(WVALID), 
		.BVALID(BVALID), 
		.BREADY(BREADY)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		ARESETn = 0;
		AWREADY = 1;
		WREADY = 1;
		BVALID = 1;			
		
		#100; 
		clk = ~clk;
		#100; 
		clk = ~clk;
		#100; 
		clk = ~clk;
		#100; 
		clk = ~clk;
		#100; 
		clk = ~clk;
		#100; 
		clk = ~clk;
		#100; 
		clk = ~clk;
		
		ARESETn = 1;
		
		forever begin #100;
        clk = ~clk;
		end
	end
      
endmodule

