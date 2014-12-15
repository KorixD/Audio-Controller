`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:34:32 06/15/2012 
// Design Name: 
// Module Name:    dev 
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
module dev(
    input clk,
	 input ARESETn,
    output aud_sig,
	 output reg [6:0] WDATA,
	 output reg [3:0] AWADDR,
	 output reg AWVALID,
	 output reg WVALID
    );
	
	reg AWREADY_m = 1;
	reg WREADY_m = 1;
	reg BVALID_m = 1;

	wire [3:0] AWADDR_m;
	wire AWVALID_m;
	wire [6:0] WDATA_m;
	wire WVALID_m;
	wire BREADY_m;
	
	wire AWREADY_s;
	wire WREADY_s;
	wire BVALID_s;

	reg [3:0] AWADDR_s = 0;
	reg AWVALID_s = 0;
	reg [6:0] WDATA_s = 0;
	reg WVALID_s = 0;
	reg BREADY_s = 1;
	
	reg [4:0] count10 = 0;
	reg clk10 = 0;
	
	controller aud_ctrl (
		.clk(clk10), 
		.ACLK(clk10), 
		.ARESETn(ARESETn), 
		.AWADDR(AWADDR_s), 
		.AWVALID(AWVALID_s), 
		.AWREADY(AWREADY_s), 
		.WDATA(WDATA_s), 
		.WVALID(WVALID_s), 
		.WREADY(WREADY_s), 
		.BREADY(BREADY_s), 
		.BVALID(BVALID_s), 
		.res_signal(aud_sig)
	);

	master_dev master (
		.clk(clk10), 
		.ARESETn(ARESETn), 
		.AWREADY(AWREADY_m), 
		.AWADDR(AWADDR_m), 
		.AWVALID(AWVALID_m), 
		.WREADY(WREADY_m), 
		.WDATA(WDATA_m), 
		.WVALID(WVALID_m), 
		.BVALID(BVALID_m), 
		.BREADY(BREADY_m)
	);
	
	always@(posedge clk)
	begin
	
		if (count10 == 4)
		begin
			count10 <= 0;
			clk10 = ~clk10;
		end
		else
			count10 <= count10 + 1;
			
		AWREADY_m = AWREADY_s;
		WREADY_m = WREADY_s;
		BVALID_m = BVALID_s;

		AWADDR_s = AWADDR_m;
		AWVALID_s = AWVALID_m;
		WDATA_s = WDATA_m;
		WVALID_s = WVALID_m;
		BREADY_s = BREADY_m;
		
		WDATA = WDATA_m;
		AWADDR = AWADDR_m;
		WVALID = WVALID_m;
		AWVALID = WVALID_m;
	end
endmodule
