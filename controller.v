`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:56:55 05/13/2012 
// Design Name: 
// Module Name:    controller 
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

`timescale 1ns / 1ps

module controller
(
input wire clk,

// Global signals
    input wire ACLK,
    input wire ARESETn,
	
// Write address channel signals
    input wire [3:0] AWADDR,
    input wire AWVALID,
    
    output reg AWREADY,
    
// Write data channel
    input wire [6:0] WDATA,
    input wire WVALID,
    
    output reg WREADY,
    
// Write response channel signals
    input wire BREADY,
    
    output reg BVALID,
    	 
// Audio signal
	output reg res_signal
);

	reg [6:0] addra;
	wire [15:0] douta;
	wire [3:0] channel;
	wire [6:0] note;
		
   wire AWREADY_buf;
   wire WREADY_buf;
   wire BVALID_buf;

	reg [15:0] freq [7:0];
	wire [15:0] signals [7:0];
	reg [0:15] signal = 0;
	wire res_sig;
   
	mem memory (
		.clka(clk), 
		.addra(addra),
		.douta(douta)
	);
	

   slave amba_slave (
		.ACLK(ACLK), 
		.ARESETn(ARESETn), 
		.AWADDR(AWADDR), 
		.AWVALID(AWVALID), 
		.AWREADY(AWREADY_buf), 
		.WDATA(WDATA), 
		.WVALID(WVALID), 
		.WREADY(WREADY_buf), 
		.BREADY(BREADY), 
		.BVALID(BVALID_buf), 
		.addr(channel), 
		.data(note)
	);
	
	generate_sinus sig1 (
		.freq(freq[0]), 
		.clk(clk), 
		.signal(signals[0])
	);	
	/*
	generate_sinus sig2 (
		.freq(freq[1]), 
		.clk(clk), 
		.signal(signals[1])
	);	
	
	generate_sinus sig3 (
		.freq(freq[2]), 
		.clk(clk), 
		.signal(signals[2])
	);	
	
	generate_sinus sig4 (
		.freq(freq[3]), 
		.clk(clk), 
		.signal(signals[3])
	);	
	
	generate_sinus sig5 (
		.freq(freq[4]), 
		.clk(clk), 
		.signal(signals[4])
	);	
	
	generate_sinus sig6 (
		.freq(freq[5]), 
		.clk(clk), 
		.signal(signals[5])
	);	
	
	generate_sinus sig7 (
		.freq(freq[6]), 
		.clk(clk), 
		.signal(signals[6])
	);
	
	generate_sinus sig8 (
		.freq(freq[7]), 
		.clk(clk), 
		.signal(signals[7])
	);
	*/
	make_sig uut (
		.clk(clk), 
		.sin(signal), 
		.sig(res_sig)
	);
	
	integer i;
	
	initial
	begin
			for (i = 0; i < 8; i = i + 1)
				freq[i] = 0;
	end
	
	integer temp_pos;
	integer temp_neg;
	integer count;
	integer temp;
	reg [13:0] res;
	reg [10:0] clk14 = 11'b01111111111;
	
	always@(posedge clk)
	begin	
		freq[channel[2:0]] <= douta;
			count = 0;
			temp_pos = 0;
			temp_neg = 0;
			for(i = 0; i < 8; i = i + 1)
			begin
				if (freq[i] != 0)
				begin
					if (signals[i][15:14] == 3)
						temp_neg = temp_neg + signals[i][13:0];
					else
						temp_pos = temp_pos + signals[i][14:0];
					count = count + 1;
				end
			end
			temp = (temp_pos >= temp_neg) ? (temp_pos - temp_neg) : (temp_neg - temp_pos);
			
			case (count)
				0:	res <= 0;
				1: res <= temp;
				2:	res <= temp >> 1;
				3:	res <= (temp + temp >> 1) >> 2;
				4:	res <= temp >> 2;
				5:	res <= (temp + temp >> 2 + temp >> 1) >> 3;
				6:	res <= (temp + temp >> 1) >> 3;
				7:	res <= (temp + temp >> 2) >> 3;
				8:	res <= temp >> 3;
			endcase
		
		if (clk14 < 25)
		begin
			
			if (temp_pos >= temp_neg)
				signal <= res;
			else
				signal <= 16'hc000 + res;
		end	
		clk14 = clk14 + 25;
		
		AWREADY <= AWREADY_buf;
		WREADY <= WREADY_buf;
		BVALID <= BVALID_buf;
		res_signal = res_sig;
		
	end
	
	
	always@*
	begin
		if(channel[3])
		begin
			addra <= note; // выставляем на адресный вход памяти № ноты, соотвествующий номеру в midi-формате
		end
		else
		begin
			addra <= 0;
		end
	end
		
endmodule
