`timescale 1ns / 1ps

module cpu_tb;

    reg        CLK;
    reg        RESET;
    wire [7:0] Q;
    wire       Z;
    wire [3:0] PC;
    wire [7:0] R;
	 
 // Appendix B expected values (index = cycle number 0..10)
    reg [7:0] exp_acc [0:10];
    reg       exp_z   [0:10];
    reg [7:0] exp_r   [0:10];
    reg [3:0] exp_pc  [0:10];     // next PC (edge er por)

    integer errors;
    integer n;
    reg [11:0] exec_instr;        // je instruction ei edge e execute holo
    reg [3:0]  exec_pc;           // oi instruction er address	 
	 
  // Design under test
    cpu uut (
        .CLK(CLK),
        .RESET(RESET),
        .Q(Q),
        .Z(Z),
        .PC(PC),
        .R(R)
    );

    // 10 ns clock: rising edge 5, 15, 25 ... ns e
    initial CLK = 1'b0;
    always #5 CLK = ~CLK;	
	 // Cycle n er por ACC, Z, R, PC expected er sathe milay
    task check_cycle;
        input integer c;
        begin
            if (Q === exp_acc[c] && Z === exp_z[c] &&
                R === exp_r[c]   && PC === exp_pc[c])
                $display("PASS cycle %0d | exec PC=%0d instr=%h | ACC=%h Z=%b R=%h nextPC=%0d",
                         c, exec_pc, exec_instr, Q, Z, R, PC);
            else begin 
	  $display("FAIL cycle %0d | exec PC=%0d instr=%h | ACC=%h Z=%b R=%h nextPC=%0d",
                         c, exec_pc, exec_instr, Q, Z, R, PC);
                $display("     expected          | ACC=%h Z=%b R=%h nextPC=%0d",
                         exp_acc[c], exp_z[c], exp_r[c], exp_pc[c]);
                errors = errors + 1;
            end
        end
    endtask

 initial begin
        errors = 0;

        // ---- Appendix B (Set 4) expected table ----
        exp_acc[0]  = 8'h00; exp_z[0]  = 1; exp_r[0]  = 8'h00; exp_pc[0]  = 4'd0;  // RESET
        exp_acc[1]  = 8'h1E; exp_z[1]  = 0; exp_r[1]  = 8'h00; exp_pc[1]  = 4'd1;  // LDI 0x1E
        exp_acc[2]  = 8'h1E; exp_z[2]  = 0; exp_r[2]  = 8'h1E; exp_pc[2]  = 4'd2;  // STA
        exp_acc[3]  = 8'h40; exp_z[3]  = 0; exp_r[3]  = 8'h1E; exp_pc[3]  = 4'd3;  // ADD 0x22
	     exp_acc[4]  = 8'h40; exp_z[4]  = 0; exp_r[4]  = 8'h1E; exp_pc[4]  = 4'd4;  // AND 0x60
        exp_acc[5]  = 8'h1E; exp_z[5]  = 0; exp_r[5]  = 8'h1E; exp_pc[5]  = 4'd5;  // LDR
        exp_acc[6]  = 8'h1F; exp_z[6]  = 0; exp_r[6]  = 8'h1E; exp_pc[6]  = 4'd6;  // ADD 0x01
        exp_acc[7]  = 8'h0F; exp_z[7]  = 0; exp_r[7]  = 8'h1E; exp_pc[7]  = 4'd7;  // AND 0x0F
	     exp_acc[8]  = 8'h0F; exp_z[8]  = 0; exp_r[8]  = 8'h0F; exp_pc[8]  = 4'd8;  // STA
        exp_acc[9]  = 8'h00; exp_z[9]  = 1; exp_r[9]  = 8'h0F; exp_pc[9]  = 4'd9;  // LDI 0x00
        exp_acc[10] = 8'h0F; exp_z[10] = 0; exp_r[10] = 8'h0F; exp_pc[10] = 4'd10; // LDR
	 
	 // ---- Cycle 0: RESET = 1 for one rising edge ----
        RESET = 1'b1;
        @(posedge CLK); #1;
        exec_pc = 4'd0; exec_instr = 12'h000;   // reset cycle, kono instruction execute hoy na
        check_cycle(0);
        RESET = 1'b0; 
	 
	  // ---- Cycle 1..10: ekta rising edge = ekta instruction ----
        for (n = 1; n <= 10; n = n + 1) begin
            @(negedge CLK);                     // edge er age instruction ar PC dhori
            exec_instr = uut.instr;
            exec_pc    = PC;
            @(posedge CLK); #1;                 // edge er por result dekhi
            check_cycle(n);
        end
 // ---- Final result (spec er shorto) ----
        if (Q === 8'h0F && R === 8'h0F && Z === 1'b0 && PC === 4'd10)
            $display("FINAL OK: ACC=0F R=0F Z=0 PC=10");
        else begin
            $display("FINAL FAIL: ACC=%h R=%h Z=%b PC=%0d", Q, R, Z, PC);
            errors = errors + 1;
        end
		 
	  // ---- Extra: ROM[10] = NOP. Ek cycle e PC +1, baki shob unchanged ----
        @(posedge CLK); #1;
        if (Q === 8'h0F && R === 8'h0F && Z === 1'b0 && PC === 4'd11)
            $display("EXTRA PASS: NOP at PC=10 changed only PC (now 11)");
        else begin
            $display("EXTRA FAIL: ACC=%h R=%h Z=%b PC=%0d", Q, R, Z, PC);
            errors = errors + 1;
        end
		  
	  if (errors == 0)
            $display("=== cpu_tb: ALL TESTS PASSED (matches Appendix B) ===");
        else
            $display("=== cpu_tb: %0d TEST(S) FAILED ===", errors);

        $finish;
    end

endmodule	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 