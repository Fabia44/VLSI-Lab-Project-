`timescale 1ns / 1ps

module pc_tb;

    reg        CLK;
    reg        RESET;
    wire [3:0] PC;

    integer errors;
    integer i;
    reg [3:0] saved;

    // Design under test
    pc uut (
        .CLK(CLK),
        .RESET(RESET),
        .PC(PC)
    ); // 10 ns clock: rising edge 5, 15, 25 ... ns e
    initial CLK = 1'b0;
    always #5 CLK = ~CLK;

    // PC expected value er sathe milay
    task check;
        input [3:0] expected;
        input [8*32-1:0] label;
        begin
		       if (PC === expected)
                $display("PASS  t=%0t  %0s : PC = %0d", $time, label, PC);
            else begin
                $display("FAIL  t=%0t  %0s : PC = %0d, expected %0d", $time, label, PC, expected);
                errors = errors + 1;
            end
        end
    endtask
	  initial begin
        errors = 0;
        RESET  = 1'b1;
        $monitor("t=%0t CLK=%b RESET=%b PC=%0d", $time, CLK, RESET, PC);

        // Test 1: reset 1 ta rising edge e PC = 0 kore
        @(posedge CLK); #1;
        check(4'd0, "reset at first posedge");// Test 2: reset chere dile PC 1,2,3...15 hobe
        RESET = 1'b0;
        for (i = 1; i <= 15; i = i + 1) begin
            @(posedge CLK); #1;
            check(i[3:0], "sequential increment");
        end

        // Test 3: 15 theke 0 te rollover
        @(posedge CLK); #1;
        check(4'd0, "rollover 15 -> 0");
        // Test 4: falling edge e PC change hoy na
        @(posedge CLK); #1;
        saved = PC;
        @(negedge CLK); #1;
        check(saved, "no change on falling edge");

        // Test 5: reset synchronous. Clock low thakte RESET dile PC ekhoni change hobe na
        RESET = 1'b1;
        #1;
        check(saved, "RESET=1 but no clock edge yet");
        @(posedge CLK); #1;
        check(4'd0, "reset applied at next posedge");
  // Test 6: reset er por abar count shuru
        RESET = 1'b0;
        @(posedge CLK); #1;
        check(4'd1, "count restarts after reset");

        if (errors == 0)
            $display("=== pc_tb: ALL TESTS PASSED ===");
        else
            $display("=== pc_tb: %0d TEST(S) FAILED ===", errors);

        $finish;
    end

endmodule