library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity alu_8bit is
    Port (
        A      : in  STD_LOGIC_VECTOR(7 downto 0);
        B      : in  STD_LOGIC_VECTOR(7 downto 0);
        SEL    : in  STD_LOGIC_VECTOR(2 downto 0);
        RESULT : out STD_LOGIC_VECTOR(7 downto 0);
        CARRY  : out STD_LOGIC
    );
end alu_8bit;
architecture Behavioral of alu_8bit is

begin

    process(A, B, SEL)
        variable TEMP : unsigned(8 downto 0);
    begin

        RESULT <= (others => '0');
        CARRY <= '0';
case SEL is

            when "000" =>
                TEMP := unsigned('0' & A) + unsigned('0' & B);
                RESULT <= std_logic_vector(TEMP(7 downto 0));
                CARRY <= TEMP(8);

            when "001" =>
                RESULT <= std_logic_vector(unsigned(A) - unsigned(B));

            when "010" =>
                RESULT <= A and B;

            when "011" =>
                RESULT <= A or B;
 when "100" =>
                RESULT <= A xor B;

            when "101" =>
                RESULT <= not A;

            when others =>
                RESULT <= (others => '0');
                CARRY <= '0';

        end case;

    end process;

end Behavioral;