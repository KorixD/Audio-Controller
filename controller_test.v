`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:06:37 06/22/2012 
// Design Name: 
// Module Name:    controller_test 
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
module controller_test(
    input clk,
    output aud
    );

	reg ARESETn = 1;
	reg [3:0] AWADDR = 8;
	reg AWVALID = 1;
	reg [6:0] WDATA = 69;
	reg WVALID = 1;
	reg BREADY = 1;
	reg clk10;
	reg [4:0] count10;

	// Outputs
	wire AWREADY;
	wire WREADY;
	wire BVALID;

	// Instantiate the Unit Under Test (UUT)
	controller uut (
		.clk(clk10), 
		.ACLK(clk10), 
		.ARESETn(1'b1), 
		.AWADDR(4'h8), 
		.AWVALID(1'b1), 
		.AWREADY(AWREADY), 
		.WDATA(7'd60), 
		.WVALID(1'b1), 
		.WREADY(WREADY), 
		.BREADY(1'b1), 
		.BVALID(BVALID), 
		.res_signal(aud)
	);
	
	always@(posedge clk)
	begin
		if (count10 == 9)
		begin
			count10 <= 0;
			clk10 = ~clk10;
		end
		count10 <= count10 + 1;
	end
	
endmodule
