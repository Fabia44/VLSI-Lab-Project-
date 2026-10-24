// 8-bit combinational ALU (Set 4: shudhu ADD ar AND)
// ALU_OP = 0 : RESULT = A + B  (8-bit, carry fele deya hoy)
// ALU_OP = 1 : RESULT = A & B  (bitwise AND)
// LDI ar LDR ei module e nai. Oigulo cpu.v er data mux diye hoy.
module alu (
    input  wire [7:0] A,
    input  wire [7:0] B,
    input  wire       ALU_OP,
    output reg  [7:0] RESULT
);

    always @(*) begin
        RESULT = 8'h00;              // default, jate latch toiri na hoy
        case (ALU_OP)
            1'b0:    RESULT = A + B; // 8-bit e rakhle carry nijei bad jay
            1'b1:    RESULT = A & B;
            default: RESULT = 8'h00;
        endcase
    end

endmodule