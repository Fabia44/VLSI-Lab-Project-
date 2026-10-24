// ACC (8-bit), R (8-bit), Z (1-bit) register block
// Shob register ek-i CLK e chole. RESET synchronous ar active-high.
// Reset: ACC = 00, R = 00, Z = 1  (reset shobar upore priority pay)
// ACC_WE = 1 : ACC <= ACC_D
// R_WE   = 1 : R   <= ACC   (STA)
// Z_WE   = 1 : Z   <= (ACC_D == 0)
// Enable 0 hole register nijer man dhore rakhe.
module registers (
            input  wire       CLK,
    input  wire       RESET,
    input  wire       ACC_WE,
    input  wire       R_WE,
    input  wire       Z_WE,
    input  wire [7:0] ACC_D,
    output reg  [7:0] ACC,
    output reg  [7:0] R,
    output reg        Z
);

 always @(posedge CLK) begin
        if (RESET) begin
            ACC <= 8'h00;
            R   <= 8'h00;
            Z   <= 1'b1;
        end
        else begin
            if (ACC_WE)
                ACC <= ACC_D;
            if (R_WE)
                R <= ACC;                    // purono ACC copy hoy
            if (Z_WE)
                Z <= (ACC_D == 8'h00);       // ACC te ja likha hocche tar zero check
        end
    end

endmodule