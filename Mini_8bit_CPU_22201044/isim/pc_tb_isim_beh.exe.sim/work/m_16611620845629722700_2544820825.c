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
static const char *ng0 = "/home/ise/xilinix/Mini_8bit_CPU_22201044/pc_tb.v";
static const char *ng1 = "PASS  t=%0t  %0s : PC = %0d";
static const char *ng2 = "FAIL  t=%0t  %0s : PC = %0d, expected %0d";
static int ng3[] = {1, 0};
static const char *ng4 = "t=%0t CLK=%b RESET=%b PC=%0d";
static unsigned int ng5[] = {0U, 0U};
static int ng6[] = {0, 0};
static unsigned int ng7[] = {1U, 0U};
static int ng8[] = {1701078885, 0, 544239475, 0, 1769108340, 0, 1635000422, 0, 1936028704, 0, 29285, 0, 0, 0, 0, 0};
static int ng9[] = {15, 0};
static int ng10[] = {1835363956, 0, 1852011109, 0, 1634476137, 0, 1701737577, 0, 1936028021, 0, 0, 0, 0, 0, 0, 0};
static int ng11[] = {759046192, 0, 540095776, 0, 1870030194, 0, 1919904876, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng12[] = {1701078885, 0, 1768843040, 0, 1717660780, 0, 544173600, 0, 1634625381, 0, 1864393576, 0, 110, 0, 0, 0};
static int ng13[] = {544826740, 0, 1701078885, 0, 1868786464, 0, 1864393580, 0, 1970544750, 0, 1026629730, 0, 1163085140, 0, 82, 0};
static int ng14[] = {1701078885, 0, 544239475, 0, 1852143732, 0, 543257632, 0, 1818846564, 0, 543256688, 0, 1702061428, 0, 114, 0};
static int ng15[] = {1702061428, 0, 1701978226, 0, 543254132, 0, 1634890867, 0, 1919251316, 0, 1970172960, 0, 25455, 0, 0, 0};
static const char *ng16 = "=== pc_tb: ALL TESTS PASSED ===";
static const char *ng17 = "=== pc_tb: %0d TEST(S) FAILED ===";

void Monitor_38_3(char *);
void Monitor_38_3(char *);


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

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(26, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t5 = (t1 + 1480U);
    t6 = *((char **)t5);
    t5 = (t1 + 2680);
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

LAB10:    xsi_set_current_line(29, ng0);

LAB12:    xsi_set_current_line(30, ng0);
    t4 = xsi_vlog_time(t18, 1000.0000000000000, 1000.0000000000000);
    t5 = (t1 + 2840);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 1480U);
    t10 = *((char **)t8);
    t8 = (t1 + 2680);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    t19 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng2, 5, t19, (char)118, t18, 64, (char)118, t7, 256, (char)118, t10, 4, (char)118, t12, 4);
    xsi_set_current_line(31, ng0);
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
LAB9:    xsi_set_current_line(28, ng0);
    t19 = xsi_vlog_time(t18, 1000.0000000000000, 1000.0000000000000);
    t20 = (t1 + 2840);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t1 + 1480U);
    t24 = *((char **)t23);
    t23 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 4, t23, (char)118, t18, 64, (char)118, t22, 256, (char)118, t24, 4);
    goto LAB11;

}

static void Monitor_38_3_Func(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1880);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2040);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 1480U);
    t10 = *((char **)t9);
    xsi_vlogfile_write(1, 0, 3, ng4, 5, t0, (char)118, t1, 64, (char)118, t5, 1, (char)118, t8, 1, (char)118, t10, 4);

LAB1:    return;
}

static void Initial_19_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(19, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 1880);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_20_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 4000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 3808);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(20, ng0);
    t4 = (t0 + 1880);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1880);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Initial_35_2(char *t0)
{
    char t22[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 4248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);

LAB4:    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2200);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(38, ng0);
    Monitor_38_3(t0);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 4816);
    *((int *)t2) = 1;
    t3 = (t0 + 4280);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 4056);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng5)));
    t3 = ((char*)((ng8)));
    t4 = (t0 + 4056);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2680);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 2840);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 256);

LAB9:    t9 = (t0 + 4152);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB11:    if (t17 != 0)
        goto LAB12;

LAB7:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB8:    t18 = (t0 + 4152);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 4056);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB13:    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t22, 0, 8);
    xsi_vlog_signed_leq(t22, 32, t4, 32, t5, 32);
    t6 = (t22 + 4);
    t23 = *((unsigned int *)t6);
    t24 = (~(t23));
    t25 = *((unsigned int *)t22);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 4848);
    *((int *)t2) = 1;
    t3 = (t0 + 4280);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB10:;
LAB12:    t9 = (t0 + 4248U);
    *((char **)t9) = &&LAB9;
    goto LAB1;

LAB14:    xsi_set_current_line(44, ng0);

LAB16:    xsi_set_current_line(45, ng0);
    t7 = (t0 + 4832);
    *((int *)t7) = 1;
    t8 = (t0 + 4280);
    *((char **)t8) = t7;
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 4056);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t22, 0, 8);
    t5 = (t22 + 4);
    t6 = (t4 + 4);
    t23 = *((unsigned int *)t4);
    t24 = (t23 >> 0);
    *((unsigned int *)t22) = t24;
    t25 = *((unsigned int *)t6);
    t26 = (t25 >> 0);
    *((unsigned int *)t5) = t26;
    t27 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t27 & 15U);
    t28 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t28 & 15U);
    t7 = ((char*)((ng10)));
    t8 = (t0 + 4056);
    t9 = (t0 + 848);
    t10 = xsi_create_subprogram_invocation(t8, 0, t0, t9, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t9, t10);
    t11 = (t0 + 2680);
    xsi_vlogvar_assign_value(t11, t22, 0, 0, 4);
    t12 = (t0 + 2840);
    xsi_vlogvar_assign_value(t12, t7, 0, 0, 256);

LAB21:    t13 = (t0 + 4152);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t18 = (t16 + 272U);
    t19 = *((char **)t18);
    t20 = (t19 + 0U);
    t21 = *((char **)t20);
    t17 = ((int  (*)(char *, char *))t21)(t0, t14);

LAB23:    if (t17 != 0)
        goto LAB24;

LAB19:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB20:    t29 = (t0 + 4152);
    t30 = *((char **)t29);
    t29 = (t0 + 848);
    t31 = (t0 + 4056);
    t32 = 0;
    xsi_delete_subprogram_invocation(t29, t30, t0, t31, t32);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t22, 0, 8);
    xsi_vlog_signed_add(t22, 32, t4, 32, t5, 32);
    t6 = (t0 + 2360);
    xsi_vlogvar_assign_value(t6, t22, 0, 0, 32);
    goto LAB13;

LAB22:;
LAB24:    t13 = (t0 + 4248U);
    *((char **)t13) = &&LAB21;
    goto LAB1;

LAB25:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 4056);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB26:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng5)));
    t3 = ((char*)((ng11)));
    t4 = (t0 + 4056);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2680);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 2840);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 256);

LAB29:    t9 = (t0 + 4152);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB31:    if (t17 != 0)
        goto LAB32;

LAB27:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB28:    t18 = (t0 + 4152);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 4056);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 4864);
    *((int *)t2) = 1;
    t3 = (t0 + 4280);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB30:;
LAB32:    t9 = (t0 + 4248U);
    *((char **)t9) = &&LAB29;
    goto LAB1;

LAB33:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 4056);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB34:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = (t0 + 2520);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 4880);
    *((int *)t2) = 1;
    t3 = (t0 + 4280);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB35:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 4056);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB36:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng12)));
    t6 = (t0 + 4056);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t4, 0, 0, 4);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t5, 0, 0, 256);

LAB39:    t11 = (t0 + 4152);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t18 = (t16 + 0U);
    t19 = *((char **)t18);
    t17 = ((int  (*)(char *, char *))t19)(t0, t12);

LAB41:    if (t17 != 0)
        goto LAB42;

LAB37:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB38:    t20 = (t0 + 4152);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t29 = (t0 + 4056);
    t30 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t29, t30);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 4056);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB40:;
LAB42:    t11 = (t0 + 4248U);
    *((char **)t11) = &&LAB39;
    goto LAB1;

LAB43:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng13)));
    t6 = (t0 + 4056);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 2680);
    xsi_vlogvar_assign_value(t9, t4, 0, 0, 4);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t5, 0, 0, 256);

LAB46:    t11 = (t0 + 4152);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t18 = (t16 + 0U);
    t19 = *((char **)t18);
    t17 = ((int  (*)(char *, char *))t19)(t0, t12);

LAB48:    if (t17 != 0)
        goto LAB49;

LAB44:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB45:    t20 = (t0 + 4152);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t29 = (t0 + 4056);
    t30 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t29, t30);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 4896);
    *((int *)t2) = 1;
    t3 = (t0 + 4280);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB50;
    goto LAB1;

LAB47:;
LAB49:    t11 = (t0 + 4248U);
    *((char **)t11) = &&LAB46;
    goto LAB1;

LAB50:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 4056);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB51:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng5)));
    t3 = ((char*)((ng14)));
    t4 = (t0 + 4056);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2680);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 2840);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 256);

LAB54:    t9 = (t0 + 4152);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB56:    if (t17 != 0)
        goto LAB57;

LAB52:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB53:    t18 = (t0 + 4152);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 4056);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 4912);
    *((int *)t2) = 1;
    t3 = (t0 + 4280);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB58;
    goto LAB1;

LAB55:;
LAB57:    t9 = (t0 + 4248U);
    *((char **)t9) = &&LAB54;
    goto LAB1;

LAB58:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 4056);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB59;
    goto LAB1;

LAB59:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng7)));
    t3 = ((char*)((ng15)));
    t4 = (t0 + 4056);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2680);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 2840);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 256);

LAB62:    t9 = (t0 + 4152);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB64:    if (t17 != 0)
        goto LAB65;

LAB60:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB61:    t18 = (t0 + 4152);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 4056);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t22, 0, 8);
    xsi_vlog_signed_equal(t22, 32, t4, 32, t5, 32);
    t6 = (t22 + 4);
    t23 = *((unsigned int *)t6);
    t24 = (~(t23));
    t25 = *((unsigned int *)t22);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng17, 2, t0, (char)119, t4, 32);

LAB68:    xsi_set_current_line(74, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB63:;
LAB65:    t9 = (t0 + 4248U);
    *((char **)t9) = &&LAB62;
    goto LAB1;

LAB66:    xsi_set_current_line(70, ng0);
    xsi_vlogfile_write(1, 0, 0, ng16, 1, t0);
    goto LAB68;

}

void Monitor_38_3(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 4304);
    t2 = (t0 + 4928);
    xsi_vlogfile_monitor((void *)Monitor_38_3_Func, t1, t2);

LAB1:    return;
}


extern void work_m_16611620845629722700_2544820825_init()
{
	static char *pe[] = {(void *)Initial_19_0,(void *)Always_20_1,(void *)Initial_35_2,(void *)Monitor_38_3};
	static char *se[] = {(void *)sp_check};
	xsi_register_didat("work_m_16611620845629722700_2544820825", "isim/pc_tb_isim_beh.exe.sim/work/m_16611620845629722700_2544820825.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
