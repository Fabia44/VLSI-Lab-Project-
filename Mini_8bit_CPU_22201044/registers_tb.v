`timescale 1ns / 1ps

module registers_tb;

    reg        CLK;
    reg        RESET;
    reg        ACC_WE;
    reg        R_WE;
    reg        Z_WE;
    reg  [7:0] ACC_D;
    wire [7:0] ACC;
    wire [7:0] R;
    wire       Z;

    integer errors;
	  // Design under test
    registers uut (
        .CLK(CLK),
        .RESET(RESET),
        .ACC_WE(ACC_WE),
        .R_WE(R_WE),
        .Z_WE(Z_WE),
        .ACC_D(ACC_D),
        .ACC(ACC),
        .R(R),
        .Z(Z)
    );
	 // 10 ns clock: rising edge 5, 15, 25 ... ns e
    initial CLK = 1'b0;
    always #5 CLK = ~CLK;

    // ACC, R, Z ekshathe expected er sathe milay
    task check;
        input [7:0] e_acc;
        input [7:0] e_r;
        input       e_z;
        input [8*32-1:0] label;
        begin
		  
	 if (ACC === e_acc && R === e_r && Z === e_z)
                $display("PASS  t=%0t  %0s : ACC=%h R=%h Z=%b", $time, label, ACC, R, Z);
            else begin
                $display("FAIL  t=%0t  %0s : ACC=%h R=%h Z=%b, expected ACC=%h R=%h Z=%b",
                         $time, label, ACC, R, Z, e_acc, e_r, e_z);
                errors = errors + 1;
            end
        end
    endtask
	 
	   // Input set kore, 1 ta rising edge er por 1 ns opekkha kore
    task apply;
        input       rst;
        input       acc_we;
        input       r_we;
        input       z_we;
        input [7:0] acc_d;
        begin
            RESET  = rst;
            ACC_WE = acc_we;
            R_WE   = r_we;
            Z_WE   = z_we;
            ACC_D  = acc_d;
            @(posedge CLK);
            #1;
        end
    endtask
 initial begin
        errors = 0;
        RESET = 0; ACC_WE = 0; R_WE = 0; Z_WE = 0; ACC_D = 8'h00;
        $monitor("t=%0t CLK=%b RST=%b ACC_WE=%b R_WE=%b Z_WE=%b ACC_D=%h | ACC=%h R=%h Z=%b",
                 $time, CLK, RESET, ACC_WE, R_WE, Z_WE, ACC_D, ACC, R, Z);

        // Test 1: reset. Enable gulo 1 dileo reset jite (priority)
        apply(1, 1, 1, 1, 8'hFF);
        check(8'h00, 8'h00, 1'b1, "T1 reset values");	 
	  // Test 2: ACC load + Z update (LDI 0x1E er moto)
        apply(0, 1, 0, 1, 8'h1E);
        check(8'h1E, 8'h00, 1'b0, "T2 ACC load, Z=0");

        // Test 3: STA. R <- ACC. ACC ar Z unchanged (ACC_D te junk dilam, tobuo ACC bodlabe na)
        apply(0, 0, 1, 0, 8'hAA);
        check(8'h1E, 8'h1E, 1'b0, "T3 STA: R=ACC, ACC/Z same");

	  // Test 4: shob enable 0. Kichu bodlabe na
        apply(0, 0, 0, 0, 8'h55);
        check(8'h1E, 8'h1E, 1'b0, "T4 all enables 0 = hold");

        // Test 5: ADD result load (0x40)
        apply(0, 1, 0, 1, 8'h40);
        check(8'h40, 8'h1E, 1'b0, "T5 ACC=40, R same");

        // Test 6: LDR. cpu.v er mux R er man (1E) ACC_D te dey
        apply(0, 1, 0, 1, 8'h1E);
        check(8'h1E, 8'h1E, 1'b0, "T6 LDR: ACC=R, Z=0");
       // Test 7: zero load hole Z = 1
        apply(0, 1, 0, 1, 8'h00);
        check(8'h00, 8'h1E, 1'b1, "T7 ACC=00, Z=1");

        // Test 8: ACC likhi kintu Z_WE=0. Z purono man (1) e thakbe
        apply(0, 1, 0, 0, 8'h0F);
        check(8'h0F, 8'h1E, 1'b1, "T8 Z_WE=0: Z not updated");

        // Test 9: shudhu Z_WE=1, ACC_WE=0. ACC thakbe, Z update hobe
        apply(0, 0, 0, 1, 8'h05);
        check(8'h0F, 8'h1E, 1'b0, "T9 only Z updates");
	   
	  // Test 10: STA abar. R <- 0F
        apply(0, 0, 1, 0, 8'h00);
        check(8'h0F, 8'h0F, 1'b0, "T10 STA: R=0F");

        // Test 11: falling edge e kichu bodlabe na
        ACC_WE = 1; R_WE = 0; Z_WE = 1; ACC_D = 8'h77;
        @(negedge CLK); #1;
        check(8'h0F, 8'h0F, 1'b0, "T11a no change at negedge");
        @(posedge CLK); #1;
        check(8'h77, 8'h0F, 1'b0, "T11b updated at posedge");
	 
	  // Test 12: synchronous reset. Clock edge er age kichu hobe na, edge e reset jite
        RESET = 1; ACC_WE = 1; R_WE = 1; Z_WE = 1; ACC_D = 8'hFF;
        @(negedge CLK); #1;
        check(8'h77, 8'h0F, 1'b0, "T12a RESET=1, no edge yet");
        @(posedge CLK); #1;
        check(8'h00, 8'h00, 1'b1, "T12b reset at posedge");
     // Test 13: reset chere dile abar normal kaj
        apply(0, 1, 0, 1, 8'h3C);
        check(8'h3C, 8'h00, 1'b0, "T13 works after reset");

        if (errors == 0)
            $display("=== registers_tb: ALL TESTS PASSED ===");
        else
            $display("=== registers_tb: %0d TEST(S) FAILED ===", errors);

        $finish;
    end

endmodule	 