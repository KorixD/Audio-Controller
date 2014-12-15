`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:38:41 06/15/2012
// Design Name:   controller
// Module Name:   D:/Audio-Controller/OneMoreAudCtrl/ctrl_test.v
// Project Name:  OneMoreAudCtrl
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: controller
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ctrl_test;

	// Inputs
	reg clk;
	reg ACLK;
	reg ARESETn;
	reg [3:0] AWADDR;
	reg AWVALID;
	reg [6:0] WDATA;
	reg WVALID;
	reg BREADY;

	// Outputs
	wire AWREADY;
	wire WREADY;
	wire BVALID;
	wire res_signal;
	wire [15:0] signal;
	wire [15:0] sign_sin;
	/*wire [16:0] temp;
	wire [16:0] temp_pos;
	wire [16:0] temp_neg;
	wire [3:0] count;*/
	
	// Instantiate the Unit Under Test (UUT)
	controller uut (
		.clk(clk), 
		.ACLK(ACLK), 
		.ARESETn(ARESETn), 
		.AWADDR(AWADDR), 
		.AWVALID(AWVALID), 
		.AWREADY(AWREADY), 
		.WDATA(WDATA), 
		.WVALID(WVALID), 
		.WREADY(WREADY), 
		.BREADY(BREADY), 
		.BVALID(BVALID), 
		.res_signal(res_signal)
		/*.signal(signal),
		.sign_sin(sign_sin)
		/*.temp(temp),
		.temp_pos(temp_pos),
		.temp_neg(temp_neg),
		.count(count)*/
	);

	integer i = 0;

	initial begin
		// Initialize Inputs
		clk = 0;
		ACLK = 0;
		ARESETn = 1;
		AWADDR = 8;
		AWVALID = 1;
		WDATA = 60;
		WVALID = 1;
		BREADY = 1;

		// Wait 100 ns for global reset to finish
		// Add stimulus here
		
		for (i = 0; i < 20; i = i + 1)
		begin
			#100;
			clk = ~clk;
			ACLK = ~ACLK;
		end
		/*	AWADDR = 9;
			WDATA = 96;*/
		forever 
		begin
			#100;
			ACLK = ~ACLK;
			clk = ~clk;
		end
        
		
	end
      
endmodule

