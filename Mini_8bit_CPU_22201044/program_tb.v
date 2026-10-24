`timescale 1ns / 1ps

module program_rom_tb;

    reg  [3:0]  ADDR;
    wire [11:0] INSTR;

    reg  [11:0] expected [0:15];
    integer errors;
    integer i;
	 // Design under test
    program_rom uut (
        .ADDR(ADDR),
        .INSTR(INSTR)
    );
	 // INSTR expected er sathe milay
    task check;
        input [11:0] exp_val;
        input [8*32-1:0] label;
        begin
            if (INSTR === exp_val)
                $display("PASS  t=%0t  %0s : ADDR=%0d INSTR=%h", $time, label, ADDR, INSTR);
            else begin
                $display("FAIL  t=%0t  %0s : ADDR=%0d INSTR=%h, expected %h",
                         $time, label, ADDR, INSTR, exp_val);
                errors = errors + 1;
            end
        end
    endtask
	 
	  initial begin
        errors = 0;

        // Appendix B (Set 4) expected values
        expected[0]  = 12'h11E;
        expected[1]  = 12'hA00;
        expected[2]  = 12'h222;
        expected[3]  = 12'h460;
        expected[4]  = 12'hB00;
        expected[5]  = 12'h201;
        expected[6]  = 12'h40F;
        expected[7]  = 12'hA00;
		   expected[8]  = 12'h100;
        expected[9]  = 12'hB00;
        expected[10] = 12'h000;
        expected[11] = 12'h000;
        expected[12] = 12'h000;
        expected[13] = 12'h000;
        expected[14] = 12'h000;
        expected[15] = 12'h000;

        $monitor("t=%0t ADDR=%0d INSTR=%h", $time, ADDR, INSTR);
        // Test 1: address 0 theke 9, exact program
        for (i = 0; i <= 9; i = i + 1) begin
            ADDR = i;
            #10;
            check(expected[i], "program location");
        end

        // Test 2: address 10 theke 15, shob 000 (NOP)
        for (i = 10; i <= 15; i = i + 1) begin
            ADDR = i;
            #10;
            check(12'h000, "unused location (NOP)");
        end
		  // Test 3: combinational test. Kono clock nai, tobuo ADDR badlale INSTR sathe sathe badle
        ADDR = 4'd4;
        #1;
        check(12'hB00, "combinational ADDR=4 (LDR)");
        ADDR = 4'd2;
        #1;
        check(12'h222, "combinational ADDR=2 (ADD)");
        ADDR = 4'd0;
        #1;
        check(12'h11E, "combinational ADDR=0 (LDI)");
   // Test 4: ulta order e porha (kono "stored state" nai, shudhu table)
        for (i = 15; i >= 0; i = i - 1) begin
            ADDR = i;
            #10;
            check(expected[i], "reverse order read");
        end

        if (errors == 0)
            $display("=== program_rom_tb: ALL TESTS PASSED ===");
        else
            $display("=== program_rom_tb: %0d TEST(S) FAILED ===", errors);

        $finish;
    end

endmodule