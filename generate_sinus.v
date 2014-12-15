`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:09:49 04/02/2012 
// Design Name: 
// Module Name:    generate_sinus 
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
module generate_sinus(
		 input [0:15] freq,
		 input clk,
		 output [0:15] signal
    );
	 
	 //константы для максимльно и минимально возможных значений	фазы
	parameter MAX = 16'b0010000000000000; //001.0000000000000 => +1.0
	parameter MIN = 16'b1110000000000000; //111.0000000000000 => - 1.0
											  
	reg [0:15] phase = MIN;
	
//	reg [0:15] freq_prev;
//	reg [0:31] length_prev;
	
	reg [0:13] step = 0;
	reg [0:10] clk14 = 11'b01111111111;
	
	sinus sig (
		.clk(~clk14[0]), 
		.y_out(signal), 
		.phase_in(phase)
	);
			
	
	always@(posedge clk)
	begin
		if (clk14 < 25)
		begin
			step <= freq[0:13];
			phase <= phase + step;	
			if(phase[0] == 0 && phase > MAX)
				phase <= MIN;	
		end	
		clk14 = clk14 + 25;
	end
	
endmodule
