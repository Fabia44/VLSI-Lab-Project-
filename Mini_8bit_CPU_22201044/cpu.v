// Top-level: 8-bit single-cycle accumulator CPU (Set 4)
// Instructions: LDI, ADD, AND, STA, LDR  (baki shob NOP)
module cpu (
    input  wire       CLK,
    input  wire       RESET,
    output wire [7:0] Q,      // ACC value
    output wire       Z,      // zero flag
    output wire [3:0] PC,     // program counter
    output wire [7:0] R       // holding register (verification er jonno)
);
    wire [11:0] instr;        // ROM theke ashe
    wire [7:0]  imm;          // instruction er operand
    wire        acc_we, r_we, z_we;
    wire        alu_op;
    wire [1:0]  src_sel;
    wire [7:0]  alu_result;
    wire [7:0]  acc_d;        // ACC te likhar notun man
    wire [7:0]  acc_q;        // registers er ACC output

    // Program Counter
    pc u_pc (
        .CLK(CLK),
        .RESET(RESET),
        .PC(PC)
    );
	 // Program ROM (combinational read)
    program_rom u_rom (
        .ADDR(PC),
        .INSTR(instr)
    );

    // Control Unit
    control_unit u_ctrl (
        .INSTR(instr),
        .IMM(imm),
        .ACC_WE(acc_we),
        .R_WE(r_we),
        .Z_WE(z_we),
        .ALU_OP(alu_op),
        .SRC_SEL(src_sel)
    );
   // ALU: A = ACC, B = immediate
    alu u_alu (
        .A(acc_q),
        .B(imm),
        .ALU_OP(alu_op),
        .RESULT(alu_result)
    );

    // ACC data mux: 00 = ALU, 01 = IMM (LDI), 10 = R (LDR)
    assign acc_d = (src_sel == 2'b01) ? imm :
                   (src_sel == 2'b10) ? R   :
                                        alu_result;
	 
	  // ACC, R, Z registers
    registers u_regs (
        .CLK(CLK),
        .RESET(RESET),
        .ACC_WE(acc_we),
        .R_WE(r_we),
        .Z_WE(z_we),
        .ACC_D(acc_d),
        .ACC(acc_q),
        .R(R),
        .Z(Z)
    );

    assign Q = acc_q;

endmodule
	 
	 
	 
	 
	 