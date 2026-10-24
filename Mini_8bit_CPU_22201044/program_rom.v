// Program ROM: 16 location x 12 bit
// ADDR (PC) dile INSTR sathe sathe change hoy. Kono clock lage na (combinational read).
// Set 4 er Appendix B program. Unused location (10-15) = 12'h000 (NOP).
module program_rom (
    input  wire [3:0]  ADDR,
    output reg  [11:0] INSTR
);

    always @(*) begin
        case (ADDR)
            4'd0:    INSTR = 12'h11E;  // LDI 0x1E
            4'd1:    INSTR = 12'hA00;  // STA
				4'd2:    INSTR = 12'h222;  // ADD 0x22
            4'd3:    INSTR = 12'h460;  // AND 0x60
            4'd4:    INSTR = 12'hB00;  // LDR
            4'd5:    INSTR = 12'h201;  // ADD 0x01
            4'd6:    INSTR = 12'h40F;  // AND 0x0F
            4'd7:    INSTR = 12'hA00;  // STA
            4'd8:    INSTR = 12'h100;  // LDI 0x00
            4'd9:    INSTR = 12'hB00;  // LDR
            default: INSTR = 12'h000;  // 10-15: NOP
        endcase
    end

endmodule