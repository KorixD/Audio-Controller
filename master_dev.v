`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:51:02 06/15/2012 
// Design Name: 
// Module Name:    master_dev 
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
module master_dev(
// Global signals
    input wire clk,
    input wire ARESETn,
	
// Write address channel signals
    input wire AWREADY,

    output reg [3:0] AWADDR,
    output reg AWVALID,
    
// Write data channel
    input wire WREADY,
    output reg [6:0] WDATA,
    output reg WVALID,
    
// Write response channel signals
    input wire BVALID,
    output reg BREADY
    );
	
	reg [8:0] addra = 0;
	wire [12:0] douta;
	
	reg [31:0] curr_length = 0;
	
	wire [3:0] AWADDR_buf;
	wire [6:0] WDATA_buf;
	wire BREADY_buf;
	reg AWVALID_buf = 0, WVALID_buf = 0;
	wire AWVALID_amba, WVALID_amba;

	wire reset = ~ARESETn;
	 
	master amba_master (
		.ACLK(clk), 
		.ARESETn(ARESETn), 
		.AWREADY(AWREADY), 
		.AWADDR(AWADDR_buf),  
		.WREADY(WREADY), 
		.WDATA(WDATA_buf), 
		.BVALID(BVALID), 
		.BREADY(BREADY_buf), 
		.WVALID(WVALID_amba),
		.AWVALID(AWVALID_amba),
		.addr(douta[11:8]), 
		.data(douta[6:0])
	);
	
		mel_mem melody_mem (
		.clka(clk), 
		.addra(addra), 
		.douta(douta)
	);
	
	always@(posedge clk, posedge reset)
	begin
		if (reset)
		begin 
			AWVALID_buf <= 0;
			WVALID_buf <= 0;
			curr_length <= 0;
			addra <= 0;
		end
		else
		begin
			if (douta[12] == 1)
			begin
				if (curr_length < 10)
				begin
					curr_length <= curr_length + 1;
				end
				else
				begin
					curr_length <= 5;
					if (AWVALID_amba & WVALID_amba)
					begin
						curr_length <= 0;
						addra <= addra + 1;
					end
				end
				if (WDATA_buf == douta[6:0])
				begin
					AWVALID_buf <= 1;
					WVALID_buf <= 1;
				end
				else
				begin
					AWVALID_buf <= 0;
					WVALID_buf <= 0;
				end
			end
			else
			begin
				if (curr_length == douta[3:0] << 19) // douta ~= 1/8c
				begin
					addra <= addra + 1;
					curr_length <= 0;
				end
				else
				begin
					curr_length <= curr_length + 1;
				end
				AWVALID_buf <= 0;
				WVALID_buf <= 0;
			end
			AWADDR = AWADDR_buf;
			WDATA = WDATA_buf;
			BREADY = BREADY_buf;
			AWVALID = (AWVALID_buf & AWVALID_amba);
			WVALID = (WVALID_buf & WVALID_amba);
		end
	end
	
	
endmodule
