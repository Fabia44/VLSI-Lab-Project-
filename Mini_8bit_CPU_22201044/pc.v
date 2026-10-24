// 4-bit Program Counter
// Synchronous, active-high reset. Every rising edge: PC <= PC + 1.
// 4-bit hoyar karone 15 er por abar 0 e ghure ashe (wraparound).
module pc (
    input  wire       CLK,
    input  wire       RESET,
    output reg  [3:0] PC
);

    always @(posedge CLK) begin
        if (RESET)
            PC <= 4'd0;          // reset shobar upore priority pay
        else
            PC <= PC + 4'd1;     // Set 4 e JZ nai, tai shob somoy +1
    end

endmodule