`timescale 1ns / 1ps

module control_unit_tb;

    reg  [11:0] INSTR;
    wire [7:0]  IMM;
    wire        ACC_WE;
    wire        R_WE;
    wire        Z_WE;
    wire        ALU_OP;
    wire [1:0]  SRC_SEL;

    integer errors;
    integer i;
    reg [3:0] opc;
 // Design under test
    control_unit uut (
        .INSTR(INSTR),
        .IMM(IMM),
        .ACC_WE(ACC_WE),
        .R_WE(R_WE),
        .Z_WE(Z_WE),
        .ALU_OP(ALU_OP),
        .SRC_SEL(SRC_SEL)
    );
	 
	  // Instruction dei, 10 ns pore shob output expected er sathe milai
    task run_test;
        input [11:0] instr_in;
        input        e_acc_we;
        input        e_r_we;
        input        e_z_we;
        input        e_alu_op;
        input [1:0]  e_src;
        input [8*28-1:0] label;
        begin
	 
 INSTR = instr_in;
            #10;
            if ( (ACC_WE  === e_acc_we) && (R_WE === e_r_we) &&
                 (Z_WE    === e_z_we)   && (ALU_OP === e_alu_op) &&
                 (SRC_SEL === e_src)    && (IMM === instr_in[7:0]) )
                $display("PASS  t=%0t  %0s : INSTR=%h ACC_WE=%b R_WE=%b Z_WE=%b ALU_OP=%b SRC=%b IMM=%h",
                         $time, label, INSTR, ACC_WE, R_WE, Z_WE, ALU_OP, SRC_SEL, IMM);
            else begin	 
	 
	  $display("FAIL  t=%0t  %0s : INSTR=%h ACC_WE=%b R_WE=%b Z_WE=%b ALU_OP=%b SRC=%b IMM=%h",
                         $time, label, INSTR, ACC_WE, R_WE, Z_WE, ALU_OP, SRC_SEL, IMM);
                $display("      expected          : ACC_WE=%b R_WE=%b Z_WE=%b ALU_OP=%b SRC=%b IMM=%h",
                         e_acc_we, e_r_we, e_z_we, e_alu_op, e_src, instr_in[7:0]);
                errors = errors + 1;
            end
	  end
    endtask

    initial begin
        errors = 0;
        $monitor("t=%0t INSTR=%h | ACC_WE=%b R_WE=%b Z_WE=%b ALU_OP=%b SRC_SEL=%b IMM=%h",
                 $time, INSTR, ACC_WE, R_WE, Z_WE, ALU_OP, SRC_SEL, IMM);

	  // ---------- 5 ta supported instruction (program er asol value) ----------
        //        instr    ACC R  Z  OP  SRC
        run_test(12'h11E, 1, 0, 1, 0, 2'b01, "LDI 0x1E");
        run_test(12'h100, 1, 0, 1, 0, 2'b01, "LDI 0x00");
        run_test(12'h222, 1, 0, 1, 0, 2'b00, "ADD 0x22");
        run_test(12'h201, 1, 0, 1, 0, 2'b00, "ADD 0x01");
        run_test(12'h460, 1, 0, 1, 1, 2'b00, "AND 0x60");
        run_test(12'h40F, 1, 0, 1, 1, 2'b00, "AND 0x0F");
	 
	 
  // STA: shudhu R_WE = 1. ACC_WE ar Z_WE 0 (ACC ar Z unchanged)
        run_test(12'hA00, 0, 1, 0, 0, 2'b00, "STA");

        // LDR: ACC_WE = 1, Z_WE = 1, source = R
        run_test(12'hB00, 1, 0, 1, 0, 2'b10, "LDR");

        // ---------- NOP: 0000 ----------
        run_test(12'h000, 0, 0, 0, 0, 2'b00, "NOP 0000");	 
	 
	  // ---------- STA/LDR er operand ignore hoy, tai operand dileo same ----------
        run_test(12'hA5A, 0, 1, 0, 0, 2'b00, "STA with junk operand");
        run_test(12'hB3C, 1, 0, 1, 0, 2'b10, "LDR with junk operand");

        // ---------- Unsupported opcode gulo (0,3,5,6,7,8,9,C,D,E,F) shob NOP ----------
        for (i = 0; i <= 15; i = i + 1) begin
	             opc = i;
            if (!(opc == 4'h1 || opc == 4'h2 || opc == 4'h4 ||
                  opc == 4'hA || opc == 4'hB)) begin
                run_test({opc, 8'hA5}, 0, 0, 0, 0, 2'b00, "unsupported opcode = NOP");
            end
        end  
	 
	 
  if (errors == 0)
            $display("=== control_unit_tb: ALL TESTS PASSED ===");
        else
            $display("=== control_unit_tb: %0d TEST(S) FAILED ===", errors);

        $finish;
    end

endmodule	 
	 
	 
	 