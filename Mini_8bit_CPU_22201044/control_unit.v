// Control Unit (Set 4: LDI, ADD, AND, STA, LDR)
// Purely combinational. INSTR dekhe enable ar select signal toiri kore.
// SRC_SEL: 00 = ALU result, 01 = immediate (LDI), 10 = R (LDR)
// ALU_OP : 0 = ADD, 1 = AND
module control_unit (
    input  wire [11:0] INSTR,
    output wire [7:0]  IMM,
    output reg         ACC_WE,
    output reg         R_WE,
    output reg         Z_WE,
    output reg         ALU_OP,
    output reg  [1:0]  SRC_SEL
);wire [3:0] opcode;

    assign opcode = INSTR[11:8];
    assign IMM    = INSTR[7:0];

    always @(*) begin
        // Default = NOP. Kono register likha hobe na, tai latch-o hobe na.
        ACC_WE  = 1'b0;
        R_WE    = 1'b0;
        Z_WE    = 1'b0;
        ALU_OP  = 1'b0;
        SRC_SEL = 2'b00;

        case (opcode)
            4'b0001: begin                 // LDI imm : ACC <- imm
                ACC_WE  = 1'b1;
                Z_WE    = 1'b1;
                SRC_SEL = 2'b01;
            end
   4'b0010: begin                 // ADD imm : ACC <- ACC + imm
                ACC_WE  = 1'b1;
                Z_WE    = 1'b1;
                ALU_OP  = 1'b0;
                SRC_SEL = 2'b00;
            end
            4'b0100: begin                 // AND imm : ACC <- ACC & imm
                ACC_WE  = 1'b1;
                Z_WE    = 1'b1;
                ALU_OP  = 1'b1;
                SRC_SEL = 2'b00;
            end		
			  4'b1010: begin                 // STA : R <- ACC (ACC, Z unchanged)
                R_WE    = 1'b1;
            end
            4'b1011: begin                 // LDR : ACC <- R
                ACC_WE  = 1'b1;
                Z_WE    = 1'b1;
                SRC_SEL = 2'b10;
            end
				
				
            default: begin                 // 0000 ar onno shob opcode = NOP
                ACC_WE  = 1'b0;
                R_WE    = 1'b0;
                Z_WE    = 1'b0;
                ALU_OP  = 1'b0;
                SRC_SEL = 2'b00;
            end
        endcase
    end

endmodule				
				
				