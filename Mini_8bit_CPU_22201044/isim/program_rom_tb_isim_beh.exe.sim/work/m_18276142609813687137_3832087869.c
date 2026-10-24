/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/xilinix/Mini_8bit_CPU_22201044/program_tb.v";
static const char *ng1 = "PASS  t=%0t  %0s : ADDR=%0d INSTR=%h";
static const char *ng2 = "FAIL  t=%0t  %0s : ADDR=%0d INSTR=%h, expected %h";
static int ng3[] = {1, 0};
static const char *ng4 = "t=%0t ADDR=%0d INSTR=%h";
static int ng5[] = {0, 0};
static unsigned int ng6[] = {286U, 0U};
static unsigned int ng7[] = {2560U, 0U};
static unsigned int ng8[] = {546U, 0U};
static int ng9[] = {2, 0};
static unsigned int ng10[] = {1120U, 0U};
static int ng11[] = {3, 0};
static unsigned int ng12[] = {2816U, 0U};
static int ng13[] = {4, 0};
static unsigned int ng14[] = {513U, 0U};
static int ng15[] = {5, 0};
static unsigned int ng16[] = {1039U, 0U};
static int ng17[] = {6, 0};
static int ng18[] = {7, 0};
static unsigned int ng19[] = {256U, 0U};
static int ng20[] = {8, 0};
static int ng21[] = {9, 0};
static unsigned int ng22[] = {0U, 0U};
static int ng23[] = {10, 0};
static int ng24[] = {11, 0};
static int ng25[] = {12, 0};
static int ng26[] = {13, 0};
static int ng27[] = {14, 0};
static int ng28[] = {15, 0};
static int ng29[] = {1953066862, 0, 1819239265, 0, 1918987552, 0, 1886547815, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng30[] = {1313820713, 0, 1869488168, 0, 1667331177, 0, 1679846511, 0, 1853191013, 0, 117, 0, 0, 0, 0, 0};
static unsigned int ng31[] = {4U, 0U};
static int ng32[] = {1279545897, 0, 1026826280, 0, 1094992978, 0, 1851878432, 0, 1635019119, 0, 1835166062, 0, 25455, 0, 0, 0};
static unsigned int ng33[] = {2U, 0U};
static int ng34[] = {1094992937, 0, 1026695208, 0, 1094992978, 0, 1851878432, 0, 1635019119, 0, 1835166062, 0, 25455, 0, 0, 0};
static int ng35[] = {1279543593, 0, 1026564136, 0, 1094992978, 0, 1851878432, 0, 1635019119, 0, 1835166062, 0, 25455, 0, 0, 0};
static int ng36[] = {1919246692, 0, 1684369952, 0, 1696624498, 0, 1986359923, 0, 29285, 0, 0, 0, 0, 0, 0, 0};
static const char *ng37 = "=== program_rom_tb: ALL TESTS PASSED ===";
static const char *ng38 = "=== program_rom_tb: %0d TEST(S) FAILED ===";

void Monitor_52_1(char *);
void Monitor_52_1(char *);


static int sp_check(char *t1, char *t2)
{
    char t9[8];
    char t18[16];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(20, ng0);

LAB5:    xsi_set_current_line(21, ng0);
    t5 = (t1 + 1480U);
    t6 = *((char **)t5);
    t5 = (t1 + 2520);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    if (*((unsigned int *)t6) != *((unsigned int *)t8))
        goto LAB8;

LAB6:    t10 = (t6 + 4);
    t11 = (t8 + 4);
    if (*((unsigned int *)t10) != *((unsigned int *)t11))
        goto LAB8;

LAB7:    *((unsigned int *)t9) = 1;

LAB8:    t12 = (t9 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t9);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(23, ng0);

LAB12:    xsi_set_current_line(24, ng0);
    t4 = xsi_vlog_time(t18, 1000.0000000000000, 1000.0000000000000);
    t5 = (t1 + 2680);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 1880);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t12 = (t1 + 1480U);
    t19 = *((char **)t12);
    t12 = (t1 + 2520);
    t20 = (t12 + 56U);
    t21 = *((char **)t20);
    t22 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng2, 6, t22, (char)118, t18, 64, (char)118, t7, 256, (char)118, t11, 4, (char)118, t19, 12, (char)118, t21, 12);
    xsi_set_current_line(26, ng0);
    t4 = (t1 + 2200);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 2200);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);

LAB11:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    xsi_set_current_line(22, ng0);
    t19 = xsi_vlog_time(t18, 1000.0000000000000, 1000.0000000000000);
    t20 = (t1 + 2680);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t1 + 1880);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t1 + 1480U);
    t27 = *((char **)t26);
    t26 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 5, t26, (char)118, t18, 64, (char)118, t22, 256, (char)118, t25, 4, (char)118, t27, 12);
    goto LAB11;

}

static void Monitor_52_1_Func(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1880);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 1480U);
    t7 = *((char **)t6);
    xsi_vlogfile_write(1, 0, 3, ng4, 4, t0, (char)118, t1, 64, (char)118, t5, 4, (char)118, t7, 12);

LAB1:    return;
}

static void Initial_31_0(char *t0)
{
    char t4[8];
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    int t15;
    char *t16;
    unsigned int t17;
    int t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    int t22;
    int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;

LAB0:    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);

LAB4:    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2040);
    t6 = (t0 + 2040);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2040);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB5;

LAB6:    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2040);
    t6 = (t0 + 2040);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2040);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2040);
    t6 = (t0 + 2040);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2040);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng9)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2040);
    t6 = (t0 + 2040);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2040);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng11)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2040);
    t6 = (t0 + 2040);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2040);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng13)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 2040);
    t6 = (t0 + 2040);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2040);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng15)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 2040);
    t6 = (t0 + 2040);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2040);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng17)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2040);
    t6 = (t0 + 2040);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2040);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng18)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2040);
    t6 = (t0 + 2040);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2040);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng20)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 2040);
    t6 = (t0 + 2040);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2040);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng21)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 2040);
    t6 = (t0 + 2040);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2040);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng23)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB25;

LAB26:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 2040);
    t6 = (t0 + 2040);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2040);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng24)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB27;

LAB28:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 2040);
    t6 = (t0 + 2040);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2040);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng25)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 2040);
    t6 = (t0 + 2040);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2040);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng26)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB31;

LAB32:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 2040);
    t6 = (t0 + 2040);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2040);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng27)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB33;

LAB34:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 2040);
    t6 = (t0 + 2040);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2040);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng28)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB35;

LAB36:    xsi_set_current_line(52, ng0);
    Monitor_52_1(t0);
    xsi_set_current_line(54, ng0);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB37:    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng21)));
    memset(t4, 0, 8);
    xsi_vlog_signed_leq(t4, 32, t6, 32, t7, 32);
    t8 = (t4 + 4);
    t14 = *((unsigned int *)t8);
    t17 = (~(t14));
    t20 = *((unsigned int *)t4);
    t21 = (t20 & t17);
    t24 = (t21 != 0);
    if (t24 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(61, ng0);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB48:    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng28)));
    memset(t4, 0, 8);
    xsi_vlog_signed_leq(t4, 32, t6, 32, t7, 32);
    t8 = (t4 + 4);
    t14 = *((unsigned int *)t8);
    t17 = (~(t14));
    t20 = *((unsigned int *)t4);
    t21 = (t20 & t17);
    t24 = (t21 != 0);
    if (t24 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng31)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3400);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB59;

LAB1:    return;
LAB5:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB6;

LAB7:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB8;

LAB9:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB10;

LAB11:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB12;

LAB13:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB14;

LAB15:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB16;

LAB17:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB18;

LAB19:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB20;

LAB21:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB22;

LAB23:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB24;

LAB25:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB26;

LAB27:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB28;

LAB29:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB30;

LAB31:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB32;

LAB33:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB34;

LAB35:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB36;

LAB38:    xsi_set_current_line(54, ng0);

LAB40:    xsi_set_current_line(55, ng0);
    t9 = (t0 + 2360);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 1880);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 4);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3400);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB41:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 2040);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2040);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 2360);
    t16 = (t13 + 56U);
    t25 = *((char **)t16);
    xsi_vlog_generic_get_array_select_value(t4, 12, t6, t9, t12, 2, 1, t25, 32, 1);
    t26 = ((char*)((ng29)));
    t27 = (t0 + 3400);
    t28 = (t0 + 848);
    t29 = xsi_create_subprogram_invocation(t27, 0, t0, t28, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t28, t29);
    t30 = (t0 + 2520);
    xsi_vlogvar_assign_value(t30, t4, 0, 0, 12);
    t31 = (t0 + 2680);
    xsi_vlogvar_assign_value(t31, t26, 0, 0, 256);

LAB44:    t32 = (t0 + 3496);
    t33 = *((char **)t32);
    t34 = (t33 + 80U);
    t35 = *((char **)t34);
    t36 = (t35 + 272U);
    t37 = *((char **)t36);
    t38 = (t37 + 0U);
    t39 = *((char **)t38);
    t15 = ((int  (*)(char *, char *))t39)(t0, t33);

LAB46:    if (t15 != 0)
        goto LAB47;

LAB42:    t33 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t33);

LAB43:    t40 = (t0 + 3496);
    t41 = *((char **)t40);
    t40 = (t0 + 848);
    t42 = (t0 + 3400);
    t43 = 0;
    xsi_delete_subprogram_invocation(t40, t41, t0, t42, t43);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t7, 32);
    t8 = (t0 + 2360);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 32);
    goto LAB37;

LAB45:;
LAB47:    t32 = (t0 + 3592U);
    *((char **)t32) = &&LAB44;
    goto LAB1;

LAB49:    xsi_set_current_line(61, ng0);

LAB51:    xsi_set_current_line(62, ng0);
    t9 = (t0 + 2360);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 1880);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 4);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3400);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB52;
    goto LAB1;

LAB52:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng22)));
    t3 = ((char*)((ng30)));
    t6 = (t0 + 3400);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 2520);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 12);
    t10 = (t0 + 2680);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 256);

LAB55:    t11 = (t0 + 3496);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t16 = *((char **)t13);
    t25 = (t16 + 272U);
    t26 = *((char **)t25);
    t27 = (t26 + 0U);
    t28 = *((char **)t27);
    t15 = ((int  (*)(char *, char *))t28)(t0, t12);

LAB57:    if (t15 != 0)
        goto LAB58;

LAB53:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB54:    t29 = (t0 + 3496);
    t30 = *((char **)t29);
    t29 = (t0 + 848);
    t31 = (t0 + 3400);
    t32 = 0;
    xsi_delete_subprogram_invocation(t29, t30, t0, t31, t32);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t7, 32);
    t8 = (t0 + 2360);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 32);
    goto LAB48;

LAB56:;
LAB58:    t11 = (t0 + 3592U);
    *((char **)t11) = &&LAB55;
    goto LAB1;

LAB59:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng12)));
    t3 = ((char*)((ng32)));
    t6 = (t0 + 3400);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 2520);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 12);
    t10 = (t0 + 2680);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 256);

LAB62:    t11 = (t0 + 3496);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t16 = *((char **)t13);
    t25 = (t16 + 272U);
    t26 = *((char **)t25);
    t27 = (t26 + 0U);
    t28 = *((char **)t27);
    t15 = ((int  (*)(char *, char *))t28)(t0, t12);

LAB64:    if (t15 != 0)
        goto LAB65;

LAB60:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB61:    t29 = (t0 + 3496);
    t30 = *((char **)t29);
    t29 = (t0 + 848);
    t31 = (t0 + 3400);
    t32 = 0;
    xsi_delete_subprogram_invocation(t29, t30, t0, t31, t32);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng33)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3400);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB66;
    goto LAB1;

LAB63:;
LAB65:    t11 = (t0 + 3592U);
    *((char **)t11) = &&LAB62;
    goto LAB1;

LAB66:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng8)));
    t3 = ((char*)((ng34)));
    t6 = (t0 + 3400);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 2520);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 12);
    t10 = (t0 + 2680);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 256);

LAB69:    t11 = (t0 + 3496);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t16 = *((char **)t13);
    t25 = (t16 + 272U);
    t26 = *((char **)t25);
    t27 = (t26 + 0U);
    t28 = *((char **)t27);
    t15 = ((int  (*)(char *, char *))t28)(t0, t12);

LAB71:    if (t15 != 0)
        goto LAB72;

LAB67:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB68:    t29 = (t0 + 3496);
    t30 = *((char **)t29);
    t29 = (t0 + 848);
    t31 = (t0 + 3400);
    t32 = 0;
    xsi_delete_subprogram_invocation(t29, t30, t0, t31, t32);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 1880);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3400);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB73;
    goto LAB1;

LAB70:;
LAB72:    t11 = (t0 + 3592U);
    *((char **)t11) = &&LAB69;
    goto LAB1;

LAB73:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng35)));
    t6 = (t0 + 3400);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 2520);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 12);
    t10 = (t0 + 2680);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 256);

LAB76:    t11 = (t0 + 3496);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t16 = *((char **)t13);
    t25 = (t16 + 272U);
    t26 = *((char **)t25);
    t27 = (t26 + 0U);
    t28 = *((char **)t27);
    t15 = ((int  (*)(char *, char *))t28)(t0, t12);

LAB78:    if (t15 != 0)
        goto LAB79;

LAB74:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB75:    t29 = (t0 + 3496);
    t30 = *((char **)t29);
    t29 = (t0 + 848);
    t31 = (t0 + 3400);
    t32 = 0;
    xsi_delete_subprogram_invocation(t29, t30, t0, t31, t32);
    xsi_set_current_line(77, ng0);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng28)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB80:    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_signed_greatereq(t4, 32, t6, 32, t7, 32);
    t8 = (t4 + 4);
    t14 = *((unsigned int *)t8);
    t17 = (~(t14));
    t20 = *((unsigned int *)t4);
    t21 = (t20 & t17);
    t24 = (t21 != 0);
    if (t24 > 0)
        goto LAB81;

LAB82:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t6, 32, t7, 32);
    t8 = (t4 + 4);
    t14 = *((unsigned int *)t8);
    t17 = (~(t14));
    t20 = *((unsigned int *)t4);
    t21 = (t20 & t17);
    t24 = (t21 != 0);
    if (t24 > 0)
        goto LAB91;

LAB92:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng38, 2, t0, (char)119, t6, 32);

LAB93:    xsi_set_current_line(88, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB77:;
LAB79:    t11 = (t0 + 3592U);
    *((char **)t11) = &&LAB76;
    goto LAB1;

LAB81:    xsi_set_current_line(77, ng0);

LAB83:    xsi_set_current_line(78, ng0);
    t9 = (t0 + 2360);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 1880);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 4);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3400);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB84;
    goto LAB1;

LAB84:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 2040);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2040);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 2360);
    t16 = (t13 + 56U);
    t25 = *((char **)t16);
    xsi_vlog_generic_get_array_select_value(t4, 12, t6, t9, t12, 2, 1, t25, 32, 1);
    t26 = ((char*)((ng36)));
    t27 = (t0 + 3400);
    t28 = (t0 + 848);
    t29 = xsi_create_subprogram_invocation(t27, 0, t0, t28, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t28, t29);
    t30 = (t0 + 2520);
    xsi_vlogvar_assign_value(t30, t4, 0, 0, 12);
    t31 = (t0 + 2680);
    xsi_vlogvar_assign_value(t31, t26, 0, 0, 256);

LAB87:    t32 = (t0 + 3496);
    t33 = *((char **)t32);
    t34 = (t33 + 80U);
    t35 = *((char **)t34);
    t36 = (t35 + 272U);
    t37 = *((char **)t36);
    t38 = (t37 + 0U);
    t39 = *((char **)t38);
    t15 = ((int  (*)(char *, char *))t39)(t0, t33);

LAB89:    if (t15 != 0)
        goto LAB90;

LAB85:    t33 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t33);

LAB86:    t40 = (t0 + 3496);
    t41 = *((char **)t40);
    t40 = (t0 + 848);
    t42 = (t0 + 3400);
    t43 = 0;
    xsi_delete_subprogram_invocation(t40, t41, t0, t42, t43);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_signed_minus(t4, 32, t6, 32, t7, 32);
    t8 = (t0 + 2360);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 32);
    goto LAB80;

LAB88:;
LAB90:    t32 = (t0 + 3592U);
    *((char **)t32) = &&LAB87;
    goto LAB1;

LAB91:    xsi_set_current_line(84, ng0);
    xsi_vlogfile_write(1, 0, 0, ng37, 1, t0);
    goto LAB93;

}

void Monitor_52_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 3648);
    t2 = (t0 + 4160);
    xsi_vlogfile_monitor((void *)Monitor_52_1_Func, t1, t2);

LAB1:    return;
}


extern void work_m_18276142609813687137_3832087869_init()
{
	static char *pe[] = {(void *)Initial_31_0,(void *)Monitor_52_1};
	static char *se[] = {(void *)sp_check};
	xsi_register_didat("work_m_18276142609813687137_3832087869", "isim/program_rom_tb_isim_beh.exe.sim/work/m_18276142609813687137_3832087869.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
