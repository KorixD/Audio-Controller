`timescale 1ns / 1ps

module master
(

// Global signals
    input wire ACLK,
    input wire ARESETn,
	
// Write address channel signals
    input wire AWREADY,

    output reg [3:0] AWADDR,
    
// Write data channel
    input wire WREADY,
    
    output reg [6:0] WDATA,
    
// Write response channel signals
    input wire BVALID,
    
    output reg WVALID,
    output reg AWVALID,
    output reg BREADY,
    
	 input wire [3:0] addr,
	 input wire [6:0] data
);

    localparam
        RESET = 0,
        VALID = 1,
        READY = 2,
        RESP = 3;
// Write FSM
    wire reset = ~ARESETn;

    reg [3:0] AWADDR_next;
    reg [6:0] WDATA_next;
    reg WVALID_next, BREADY_next, AWVALID_next;
    
    reg [1:0] wstate = RESET;
	 reg [1:0] wstate_next;
    

    always@(posedge reset, posedge ACLK)
        if(reset)
            begin
                AWVALID <= 0;
                WVALID <= 0;
                AWADDR <= 0;
                wstate <= RESET;
            end
        else
            begin
                AWADDR  <= AWADDR_next;
                
                WDATA   <= WDATA_next;
    
                BREADY  <= BREADY_next;
                WVALID  <= WVALID_next;
                AWVALID  <= AWVALID_next;
                
                wstate  <= wstate_next;
            end

    always@*
        begin
            AWADDR_next = AWADDR;
                
            WDATA_next = WDATA;
    
            BREADY_next = BREADY;
            WVALID_next = WVALID;
            AWVALID_next = AWVALID;
            
            wstate_next = wstate;
            
            case(wstate)
                RESET: wstate_next = VALID;
                VALID: begin
                        AWADDR_next = addr;
                        
                        WDATA_next = data;
                                                
                        BREADY_next = 1;
                        WVALID_next = 1;
                        AWVALID_next = 1;
                        
                        wstate_next = READY;
                    end
                READY: if(AWREADY & WREADY)
                    begin                        
                        wstate_next = RESP;
                    end             
                RESP: if(BVALID)
                    begin
                        // обрабатываем ответ 
                        BREADY_next = 0;
                        wstate_next = VALID;
                    end
            endcase
        end

endmodule
