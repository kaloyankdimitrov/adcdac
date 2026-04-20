// Automatically generated .v file on Sun Apr 19 17:58:33 2026
//

module digital ( clk, in, out ) ;
// You will probably want to flush out the nature of these port declarations:
   input logic clk;
   input logic [31:0]in;
   output logic [31:0]out;
   initial out = 32'b0;
   logic [31:0]a = 32'b0;

   always @ (posedge clk) begin
      a <= in;
   end

   always @ (negedge clk) begin
      out <= a;
   end


endmodule
