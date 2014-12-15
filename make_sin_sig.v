`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:10:13 06/22/2012 
// Design Name: 
// Module Name:    make_sin_sig 
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
module make_sin_sig(
    input clk,
	 input [15:0] freq,
	 output [15:0] sin,
    output sig
    );

	reg [4:0] count10 = 0;
	reg clk10 = 0;

	reg [15:0] signal;
	wire [15:0] sin;
	
	generate_sinus sig8 (
		.freq(freq), 
		.clk(clk10), 
		.signal(sin)
	);	
	
	make_sig uut (
		.clk(clk10), 
		.sin(signal), 
		.sig(sig)
	);
	
	
	always@(posedge clk)
	begin
		signal = sin;
		if (count10 == 4)
		begin
			count10 <= 0;
			clk10 = ~clk10;
		end
		else
			count10 <= count10 + 1;
	end
	
endmodule
