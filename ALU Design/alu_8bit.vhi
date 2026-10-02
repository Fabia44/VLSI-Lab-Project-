
-- VHDL Instantiation Created from source file alu_8bit.vhd -- 09:56:03 09/27/2026
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT alu_8bit
	PORT(
		A : IN std_logic_vector(7 downto 0);
		B : IN std_logic_vector(7 downto 0);
		SEL : IN std_logic_vector(2 downto 0);          
		RESULT : OUT std_logic_vector(7 downto 0);
		CARRY : OUT std_logic
		);
	END COMPONENT;

	Inst_alu_8bit: alu_8bit PORT MAP(
		A => ,
		B => ,
		SEL => ,
		RESULT => ,
		CARRY => 
	);


