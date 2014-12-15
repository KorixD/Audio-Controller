`timescale 1ns / 1ps

//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:16:24 06/12/2012 
// Design Name: 
// Module Name:    slave 
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
module slave(
// Global signals
    input wire ACLK,
    input wire ARESETn,
	
// Write address channel signals
    input wire [3:0] AWADDR, // [3] - 0: начать проигрывание, 1: остановить проигрывание; [2:0] - номер канала
    input wire AWVALID,
    
    output reg AWREADY,
    
// Write data channel
    input wire [6:0] WDATA, // номер ноты
    input wire WVALID,
    
    output reg WREADY,
    
// Write response channel signals
    input wire BREADY,
    
    output reg BVALID,
	 
	 output reg [3:0] addr, 
	 output reg [6:0] data
);

	localparam
		RESET = 0,
		READY = 1,
		VALID = 2,
		RESP = 3;
	
	reg AWREADY_next, WREADY_next;
	reg BVALID_next;
		  
	reg [1:0] wstate = RESET;
	reg [1:0] wstate_next = RESET;
	reg [6:0] data_next = 0;
	reg [3:0] addr_next = 0;
	
	wire reset = ~ARESETn;
	
	always@(posedge ACLK, posedge reset)
	begin
		if(reset)
		begin
			BVALID <= 0;
			wstate <= RESET;
		end
		else
		begin		
		
			AWREADY <= AWREADY_next;                
			WREADY  <= WREADY_next;               
			BVALID  <= BVALID_next;
			wstate  <= wstate_next;
			
			data <= data_next;
			addr <= addr_next;
			
		end		
	end
	
	always@*
	begin
		AWREADY_next = AWREADY;
		WREADY_next = WREADY;
		BVALID_next = BVALID;
		
		data_next <= data;
		addr_next <= addr;
            
		wstate_next = wstate;
            
		case(wstate)
			RESET: 
				begin
					wstate_next = READY;
					BVALID_next = 1;
				end
			READY:
				begin
					AWREADY_next = 1;
					WREADY_next = 1;
					BVALID_next = 1;
									
					wstate_next = VALID;
				end
			VALID:if(AWVALID & WVALID)
				begin
					data_next <= WDATA;
					addr_next <= AWADDR;
					BVALID_next = 1;
					AWREADY_next = 0;
					WREADY_next = 0;                          
					wstate_next = RESP;
				end
			RESP: if(BREADY)
				begin
					BVALID_next = 0;
					wstate_next = READY;
				end
		endcase
	end
	
	
endmodule
