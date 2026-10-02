library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity alu_8bit_tb is
end alu_8bit_tb;

architecture Behavioral of alu_8bit_tb is

    component alu_8bit
        Port (
            A      : in  STD_LOGIC_VECTOR (7 downto 0);
            B      : in  STD_LOGIC_VECTOR (7 downto 0);
            SEL    : in  STD_LOGIC_VECTOR (2 downto 0);
            RESULT : out STD_LOGIC_VECTOR (7 downto 0);
            CARRY  : out STD_LOGIC
        );
    end component;
 signal A      : STD_LOGIC_VECTOR (7 downto 0) := (others => '0');
    signal B      : STD_LOGIC_VECTOR (7 downto 0) := (others => '0');
    signal SEL    : STD_LOGIC_VECTOR (2 downto 0) := (others => '0');
    signal RESULT : STD_LOGIC_VECTOR (7 downto 0);
    signal CARRY  : STD_LOGIC;

begin

    UUT: alu_8bit
        port map (
            A => A,
            B => B,
            SEL => SEL,
            RESULT => RESULT,
            CARRY => CARRY
        );

    process
    begin
        -- ADD: 5 + 3 = 8
        A <= "00000101";
        B <= "00000011";
        SEL <= "000";
        wait for 100 ns;

        -- SUB: 5 - 3 = 2
        SEL <= "001";
        wait for 100 ns;

        -- AND
        SEL <= "010";
        wait for 100 ns;

        -- OR
        SEL <= "011";
        wait for 100 ns;

-- XOR
        SEL <= "100";
        wait for 100 ns;

        -- NOT A
        SEL <= "101";
        wait for 100 ns;

        wait;
    end process;

end Behavioral;