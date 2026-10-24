`timescale 1ns / 1ps

module alu_tb;

    reg  [7:0] A;
    reg  [7:0] B;
    reg        ALU_OP;
    wire [7:0] RESULT;

    integer errors;

    // Design under test
    alu uut (
        .A(A),
        .B(B),
        .ALU_OP(ALU_OP),
        .RESULT(RESULT)
    );
	  // Input dei, 10 ns opekkha kori, RESULT expected er sathe milai
    task run_test;
        input        op;
        input [7:0]  a_in;
        input [7:0]  b_in;
        input [7:0]  expected;
        input [8*24-1:0] label;
        begin
            ALU_OP = op;
            A      = a_in;
            B      = b_in;
            #10;
		
		
		 if (RESULT === expected)
                $display("PASS  t=%0t  %0s : A=%h B=%h OP=%b RESULT=%h",
                         $time, label, A, B, ALU_OP, RESULT);
            else begin
                $display("FAIL  t=%0t  %0s : A=%h B=%h OP=%b RESULT=%h, expected %h",
                         $time, label, A, B, ALU_OP, RESULT, expected);
                errors = errors + 1;
            end
        end
    endtask
	 
  initial begin
        errors = 0;
        $monitor("t=%0t OP=%b A=%h B=%h RESULT=%h", $time, ALU_OP, A, B, RESULT);

        // ---------- ADD (ALU_OP = 0) ----------
        run_test(1'b0, 8'h1E, 8'h22, 8'h40, "ADD 1E+22 (program)");
        run_test(1'b0, 8'h1E, 8'h01, 8'h1F, "ADD 1E+01");
        run_test(1'b0, 8'h00, 8'h00, 8'h00, "ADD zero result");
        run_test(1'b0, 8'h0F, 8'h01, 8'h10, "ADD nibble carry");		
		   run_test(1'b0, 8'hFF, 8'h01, 8'h00, "ADD overflow FF+01");
        run_test(1'b0, 8'hF0, 8'h20, 8'h10, "ADD overflow F0+20");
        run_test(1'b0, 8'hFF, 8'hFF, 8'hFE, "ADD overflow FF+FF");
        run_test(1'b0, 8'h80, 8'h80, 8'h00, "ADD 80+80 = 00");

		 // ---------- AND (ALU_OP = 1) ----------
        run_test(1'b1, 8'h40, 8'h60, 8'h40, "AND 40&60 (program)");
        run_test(1'b1, 8'h1F, 8'h0F, 8'h0F, "AND 1F&0F (program)");
        run_test(1'b1, 8'hFF, 8'h00, 8'h00, "AND with 00");
        run_test(1'b1, 8'hAA, 8'h55, 8'h00, "AND AA&55 = 00");
        run_test(1'b1, 8'hFF, 8'hFF, 8'hFF, "AND FF&FF");
        run_test(1'b1, 8'hF0, 8'h3C, 8'h30, "AND F0&3C");

		  // ---------- Operation switch (combinational check) ----------
        run_test(1'b0, 8'h0C, 8'h0A, 8'h16, "switch to ADD 0C+0A");
        run_test(1'b1, 8'h0C, 8'h0A, 8'h08, "switch to AND 0C&0A");

        if (errors == 0)
            $display("=== alu_tb: ALL TESTS PASSED ===");
        else
            $display("=== alu_tb: %0d TEST(S) FAILED ===", errors);

        $finish;
    end

endmodule
		
		
		
		
		
		
		
		
		
		