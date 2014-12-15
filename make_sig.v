`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:46:12 06/16/2012 
// Design Name: 
// Module Name:    make_sig 
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
module make_sig(
    input clk,
    input [15:0] sin,
    output reg sig
    );
	
	reg [13:0] curr_length = 0;
	reg [13:0] pos_length = 0;
	
	always@*
	begin
		if (sin[15:14] == 0)
			pos_length = 16'h1FFF + sin[13:1];
		else
			pos_length = (16'h1FFF << 2) - sin[13:1];
	end
	
	always@(posedge clk)
	begin
		curr_length <= curr_length + 200;
		if (curr_length < pos_length)
			sig <= 1;
		else
			sig <= 0;
		if (curr_length > 16'h3fff)
			curr_length <= 0;
	end
	
endmodule
