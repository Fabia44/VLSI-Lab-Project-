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
static const char *ng0 = "/home/ise/xilinix/Mini_8bit_CPU_22201044/alu_tb.v";
static const char *ng1 = "PASS  t=%0t  %0s : A=%h B=%h OP=%b RESULT=%h";
static const char *ng2 = "FAIL  t=%0t  %0s : A=%h B=%h OP=%b RESULT=%h, expected %h";
static int ng3[] = {1, 0};
static const char *ng4 = "t=%0t OP=%b A=%h B=%h RESULT=%h";
static int ng5[] = {0, 0};
static unsigned int ng6[] = {0U, 0U};
static unsigned int ng7[] = {30U, 0U};
static unsigned int ng8[] = {34U, 0U};
static unsigned int ng9[] = {64U, 0U};
static int ng10[] = {1918987561, 0, 1886547815, 0, 842145832, 0, 540099883, 0, 4277316, 0, 0, 0};
static unsigned int ng11[] = {1U, 0U};
static unsigned int ng12[] = {31U, 0U};
static int ng13[] = {1160458289, 0, 1145315377, 0, 65, 0, 0, 0, 0, 0, 0, 0};
static int ng14[] = {1937075316, 0, 1864397413, 0, 544892274, 0, 4277316, 0, 0, 0, 0, 0};
static unsigned int ng15[] = {15U, 0U};
static unsigned int ng16[] = {16U, 0U};
static int ng17[] = {1634890361, 0, 1818566755, 0, 1852400226, 0, 1094992928, 0, 0, 0, 0, 0};
static unsigned int ng18[] = {255U, 0U};
static int ng19[] = {1177235505, 0, 1870078022, 0, 1701996140, 0, 1142976374, 0, 16708, 0, 0, 0};
static unsigned int ng20[] = {240U, 0U};
static unsigned int ng21[] = {32U, 0U};
static int ng22[] = {808137264, 0, 1870078022, 0, 1701996140, 0, 1142976374, 0, 16708, 0, 0, 0};
static unsigned int ng23[] = {254U, 0U};
static int ng24[] = {1177241158, 0, 1870078022, 0, 1701996140, 0, 1142976374, 0, 16708, 0, 0, 0};
static unsigned int ng25[] = {128U, 0U};
static int ng26[] = {1025519664, 0, 725102624, 0, 1142962224, 0, 16708, 0, 0, 0, 0, 0};
static unsigned int ng27[] = {96U, 0U};
static int ng28[] = {1918987561, 0, 1886547815, 0, 909123624, 0, 540291110, 0, 4279876, 0, 0, 0};
static int ng29[] = {1918987561, 0, 1886547815, 0, 809902120, 0, 540100134, 0, 4279876, 0, 0, 0};
static int ng30[] = {1746939952, 0, 544696692, 0, 4279876, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng31[] = {170U, 0U};
static unsigned int ng32[] = {85U, 0U};
static int ng33[] = {1025519664, 0, 641021216, 0, 1142964545, 0, 16718, 0, 0, 0, 0, 0};
static int ng34[] = {1176913478, 0, 1313087558, 0, 65, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng35[] = {60U, 0U};
static unsigned int ng36[] = {48U, 0U};
static int ng37[] = {807809859, 0, 1313087558, 0, 65, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng38[] = {12U, 0U};
static unsigned int ng39[] = {10U, 0U};
static unsigned int ng40[] = {22U, 0U};
static int ng41[] = {1126903873, 0, 1145315376, 0, 1953439809, 0, 1952671776, 0, 7567209, 0, 0, 0};
static unsigned int ng42[] = {8U, 0U};
static int ng43[] = {1126576193, 0, 1313087536, 0, 1953439809, 0, 1952671776, 0, 7567209, 0, 0, 0};
static const char *ng44 = "=== alu_tb: ALL TESTS PASSED ===";
static const char *ng45 = "=== alu_tb: %0d TEST(S) FAILED ===";

void Monitor_46_1(char *);
void Monitor_46_1(char *);


static int sp_run_test(char *t1, char *t2)
{
    char t9[8];
    char t17[16];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

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
    t5 = (t1 + 2520);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 2200);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(28, ng0);
    t4 = (t1 + 2680);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 1880);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(29, ng0);
    t4 = (t1 + 2840);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 2040);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(30, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 10000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(33, ng0);
    t4 = (t1 + 1480U);
    t5 = *((char **)t4);
    t4 = (t1 + 3000);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t9, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t7))
        goto LAB9;

LAB7:    t8 = (t5 + 4);
    t10 = (t7 + 4);
    if (*((unsigned int *)t8) != *((unsigned int *)t10))
        goto LAB9;

LAB8:    *((unsigned int *)t9) = 1;

LAB9:    t11 = (t9 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t9);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(36, ng0);

LAB13:    xsi_set_current_line(37, ng0);
    t4 = xsi_vlog_time(t17, 1000.0000000000000, 1000.0000000000000);
    t5 = (t1 + 3160);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 1880);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t18 = (t1 + 2040);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t1 + 2200);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t1 + 1480U);
    t25 = *((char **)t24);
    t24 = (t1 + 3000);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    t28 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng2, 8, t28, (char)118, t17, 64, (char)118, t7, 192, (char)118, t11, 8, (char)118, t20, 8, (char)118, t23, 1, (char)118, t25, 8, (char)118, t27, 8);
    xsi_set_current_line(39, ng0);
    t4 = (t1 + 2360);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 2360);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);

LAB12:    goto LAB4;

LAB10:    xsi_set_current_line(34, ng0);
    t18 = xsi_vlog_time(t17, 1000.0000000000000, 1000.0000000000000);
    t19 = (t1 + 3160);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t1 + 1880);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t1 + 2040);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t1 + 2200);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t1 + 1480U);
    t32 = *((char **)t31);
    t31 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 7, t31, (char)118, t17, 64, (char)118, t21, 192, (char)118, t24, 8, (char)118, t27, 8, (char)118, t30, 1, (char)118, t32, 8);
    goto LAB12;

}

static void Monitor_46_1_Func(char *t0)
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
    char *t11;
    char *t12;
    char *t13;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 2200);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 1880);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 2040);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 1480U);
    t13 = *((char **)t12);
    xsi_vlogfile_write(1, 0, 3, ng4, 6, t0, (char)118, t1, 64, (char)118, t5, 1, (char)118, t8, 8, (char)118, t11, 8, (char)118, t13, 8);

LAB1:    return;
}

static void Initial_44_0(char *t0)
{
    char t28[8];
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
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;

LAB0:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);

LAB4:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(46, ng0);
    Monitor_46_1(t0);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng7)));
    t4 = ((char*)((ng8)));
    t5 = ((char*)((ng9)));
    t6 = ((char*)((ng10)));
    t7 = (t0 + 3880);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 2520);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    t11 = (t0 + 2680);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 8);
    t12 = (t0 + 2840);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);
    t13 = (t0 + 3000);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 8);
    t14 = (t0 + 3160);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 192);

LAB7:    t15 = (t0 + 3976);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB9:    if (t23 != 0)
        goto LAB10;

LAB5:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB6:    t24 = (t0 + 3976);
    t25 = *((char **)t24);
    t24 = (t0 + 848);
    t26 = (t0 + 3880);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng7)));
    t4 = ((char*)((ng11)));
    t5 = ((char*)((ng12)));
    t6 = ((char*)((ng13)));
    t7 = (t0 + 3880);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 2520);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    t11 = (t0 + 2680);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 8);
    t12 = (t0 + 2840);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);
    t13 = (t0 + 3000);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 8);
    t14 = (t0 + 3160);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 192);

LAB13:    t15 = (t0 + 3976);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB15:    if (t23 != 0)
        goto LAB16;

LAB11:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB12:    t24 = (t0 + 3976);
    t25 = *((char **)t24);
    t24 = (t0 + 848);
    t26 = (t0 + 3880);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng6)));
    t4 = ((char*)((ng6)));
    t5 = ((char*)((ng6)));
    t6 = ((char*)((ng14)));
    t7 = (t0 + 3880);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 2520);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    t11 = (t0 + 2680);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 8);
    t12 = (t0 + 2840);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);
    t13 = (t0 + 3000);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 8);
    t14 = (t0 + 3160);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 192);

LAB19:    t15 = (t0 + 3976);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB21:    if (t23 != 0)
        goto LAB22;

LAB17:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB18:    t24 = (t0 + 3976);
    t25 = *((char **)t24);
    t24 = (t0 + 848);
    t26 = (t0 + 3880);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng15)));
    t4 = ((char*)((ng11)));
    t5 = ((char*)((ng16)));
    t6 = ((char*)((ng17)));
    t7 = (t0 + 3880);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 2520);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    t11 = (t0 + 2680);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 8);
    t12 = (t0 + 2840);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);
    t13 = (t0 + 3000);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 8);
    t14 = (t0 + 3160);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 192);

LAB25:    t15 = (t0 + 3976);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB27:    if (t23 != 0)
        goto LAB28;

LAB23:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB24:    t24 = (t0 + 3976);
    t25 = *((char **)t24);
    t24 = (t0 + 848);
    t26 = (t0 + 3880);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng18)));
    t4 = ((char*)((ng11)));
    t5 = ((char*)((ng6)));
    t6 = ((char*)((ng19)));
    t7 = (t0 + 3880);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 2520);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    t11 = (t0 + 2680);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 8);
    t12 = (t0 + 2840);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);
    t13 = (t0 + 3000);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 8);
    t14 = (t0 + 3160);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 192);

LAB31:    t15 = (t0 + 3976);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB33:    if (t23 != 0)
        goto LAB34;

LAB29:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB30:    t24 = (t0 + 3976);
    t25 = *((char **)t24);
    t24 = (t0 + 848);
    t26 = (t0 + 3880);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng20)));
    t4 = ((char*)((ng21)));
    t5 = ((char*)((ng16)));
    t6 = ((char*)((ng22)));
    t7 = (t0 + 3880);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 2520);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    t11 = (t0 + 2680);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 8);
    t12 = (t0 + 2840);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);
    t13 = (t0 + 3000);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 8);
    t14 = (t0 + 3160);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 192);

LAB37:    t15 = (t0 + 3976);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB39:    if (t23 != 0)
        goto LAB40;

LAB35:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB36:    t24 = (t0 + 3976);
    t25 = *((char **)t24);
    t24 = (t0 + 848);
    t26 = (t0 + 3880);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng18)));
    t4 = ((char*)((ng18)));
    t5 = ((char*)((ng23)));
    t6 = ((char*)((ng24)));
    t7 = (t0 + 3880);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 2520);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    t11 = (t0 + 2680);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 8);
    t12 = (t0 + 2840);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);
    t13 = (t0 + 3000);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 8);
    t14 = (t0 + 3160);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 192);

LAB43:    t15 = (t0 + 3976);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB45:    if (t23 != 0)
        goto LAB46;

LAB41:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB42:    t24 = (t0 + 3976);
    t25 = *((char **)t24);
    t24 = (t0 + 848);
    t26 = (t0 + 3880);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng25)));
    t4 = ((char*)((ng25)));
    t5 = ((char*)((ng6)));
    t6 = ((char*)((ng26)));
    t7 = (t0 + 3880);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 2520);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    t11 = (t0 + 2680);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 8);
    t12 = (t0 + 2840);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);
    t13 = (t0 + 3000);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 8);
    t14 = (t0 + 3160);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 192);

LAB49:    t15 = (t0 + 3976);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB51:    if (t23 != 0)
        goto LAB52;

LAB47:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB48:    t24 = (t0 + 3976);
    t25 = *((char **)t24);
    t24 = (t0 + 848);
    t26 = (t0 + 3880);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng11)));
    t3 = ((char*)((ng9)));
    t4 = ((char*)((ng27)));
    t5 = ((char*)((ng9)));
    t6 = ((char*)((ng28)));
    t7 = (t0 + 3880);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 2520);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    t11 = (t0 + 2680);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 8);
    t12 = (t0 + 2840);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);
    t13 = (t0 + 3000);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 8);
    t14 = (t0 + 3160);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 192);

LAB55:    t15 = (t0 + 3976);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB57:    if (t23 != 0)
        goto LAB58;

LAB53:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB54:    t24 = (t0 + 3976);
    t25 = *((char **)t24);
    t24 = (t0 + 848);
    t26 = (t0 + 3880);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng11)));
    t3 = ((char*)((ng12)));
    t4 = ((char*)((ng15)));
    t5 = ((char*)((ng15)));
    t6 = ((char*)((ng29)));
    t7 = (t0 + 3880);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 2520);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    t11 = (t0 + 2680);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 8);
    t12 = (t0 + 2840);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);
    t13 = (t0 + 3000);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 8);
    t14 = (t0 + 3160);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 192);

LAB61:    t15 = (t0 + 3976);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB63:    if (t23 != 0)
        goto LAB64;

LAB59:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB60:    t24 = (t0 + 3976);
    t25 = *((char **)t24);
    t24 = (t0 + 848);
    t26 = (t0 + 3880);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng11)));
    t3 = ((char*)((ng18)));
    t4 = ((char*)((ng6)));
    t5 = ((char*)((ng6)));
    t6 = ((char*)((ng30)));
    t7 = (t0 + 3880);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 2520);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    t11 = (t0 + 2680);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 8);
    t12 = (t0 + 2840);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);
    t13 = (t0 + 3000);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 8);
    t14 = (t0 + 3160);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 192);

LAB67:    t15 = (t0 + 3976);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB69:    if (t23 != 0)
        goto LAB70;

LAB65:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB66:    t24 = (t0 + 3976);
    t25 = *((char **)t24);
    t24 = (t0 + 848);
    t26 = (t0 + 3880);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng11)));
    t3 = ((char*)((ng31)));
    t4 = ((char*)((ng32)));
    t5 = ((char*)((ng6)));
    t6 = ((char*)((ng33)));
    t7 = (t0 + 3880);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 2520);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    t11 = (t0 + 2680);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 8);
    t12 = (t0 + 2840);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);
    t13 = (t0 + 3000);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 8);
    t14 = (t0 + 3160);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 192);

LAB73:    t15 = (t0 + 3976);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB75:    if (t23 != 0)
        goto LAB76;

LAB71:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB72:    t24 = (t0 + 3976);
    t25 = *((char **)t24);
    t24 = (t0 + 848);
    t26 = (t0 + 3880);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng11)));
    t3 = ((char*)((ng18)));
    t4 = ((char*)((ng18)));
    t5 = ((char*)((ng18)));
    t6 = ((char*)((ng34)));
    t7 = (t0 + 3880);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 2520);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    t11 = (t0 + 2680);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 8);
    t12 = (t0 + 2840);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);
    t13 = (t0 + 3000);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 8);
    t14 = (t0 + 3160);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 192);

LAB79:    t15 = (t0 + 3976);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB81:    if (t23 != 0)
        goto LAB82;

LAB77:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB78:    t24 = (t0 + 3976);
    t25 = *((char **)t24);
    t24 = (t0 + 848);
    t26 = (t0 + 3880);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng11)));
    t3 = ((char*)((ng20)));
    t4 = ((char*)((ng35)));
    t5 = ((char*)((ng36)));
    t6 = ((char*)((ng37)));
    t7 = (t0 + 3880);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 2520);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    t11 = (t0 + 2680);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 8);
    t12 = (t0 + 2840);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);
    t13 = (t0 + 3000);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 8);
    t14 = (t0 + 3160);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 192);

LAB85:    t15 = (t0 + 3976);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB87:    if (t23 != 0)
        goto LAB88;

LAB83:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB84:    t24 = (t0 + 3976);
    t25 = *((char **)t24);
    t24 = (t0 + 848);
    t26 = (t0 + 3880);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng38)));
    t4 = ((char*)((ng39)));
    t5 = ((char*)((ng40)));
    t6 = ((char*)((ng41)));
    t7 = (t0 + 3880);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 2520);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    t11 = (t0 + 2680);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 8);
    t12 = (t0 + 2840);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);
    t13 = (t0 + 3000);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 8);
    t14 = (t0 + 3160);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 192);

LAB91:    t15 = (t0 + 3976);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB93:    if (t23 != 0)
        goto LAB94;

LAB89:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB90:    t24 = (t0 + 3976);
    t25 = *((char **)t24);
    t24 = (t0 + 848);
    t26 = (t0 + 3880);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng11)));
    t3 = ((char*)((ng38)));
    t4 = ((char*)((ng39)));
    t5 = ((char*)((ng42)));
    t6 = ((char*)((ng43)));
    t7 = (t0 + 3880);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 2520);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    t11 = (t0 + 2680);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 8);
    t12 = (t0 + 2840);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 8);
    t13 = (t0 + 3000);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 8);
    t14 = (t0 + 3160);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 192);

LAB97:    t15 = (t0 + 3976);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB99:    if (t23 != 0)
        goto LAB100;

LAB95:    t16 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t16);

LAB96:    t24 = (t0 + 3976);
    t25 = *((char **)t24);
    t24 = (t0 + 848);
    t26 = (t0 + 3880);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t28, 0, 8);
    xsi_vlog_signed_equal(t28, 32, t4, 32, t5, 32);
    t6 = (t28 + 4);
    t29 = *((unsigned int *)t6);
    t30 = (~(t29));
    t31 = *((unsigned int *)t28);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB101;

LAB102:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng45, 2, t0, (char)119, t4, 32);

LAB103:    xsi_set_current_line(75, ng0);
    xsi_vlog_finish(1);

LAB1:    return;
LAB8:;
LAB10:    t15 = (t0 + 4072U);
    *((char **)t15) = &&LAB7;
    goto LAB1;

LAB14:;
LAB16:    t15 = (t0 + 4072U);
    *((char **)t15) = &&LAB13;
    goto LAB1;

LAB20:;
LAB22:    t15 = (t0 + 4072U);
    *((char **)t15) = &&LAB19;
    goto LAB1;

LAB26:;
LAB28:    t15 = (t0 + 4072U);
    *((char **)t15) = &&LAB25;
    goto LAB1;

LAB32:;
LAB34:    t15 = (t0 + 4072U);
    *((char **)t15) = &&LAB31;
    goto LAB1;

LAB38:;
LAB40:    t15 = (t0 + 4072U);
    *((char **)t15) = &&LAB37;
    goto LAB1;

LAB44:;
LAB46:    t15 = (t0 + 4072U);
    *((char **)t15) = &&LAB43;
    goto LAB1;

LAB50:;
LAB52:    t15 = (t0 + 4072U);
    *((char **)t15) = &&LAB49;
    goto LAB1;

LAB56:;
LAB58:    t15 = (t0 + 4072U);
    *((char **)t15) = &&LAB55;
    goto LAB1;

LAB62:;
LAB64:    t15 = (t0 + 4072U);
    *((char **)t15) = &&LAB61;
    goto LAB1;

LAB68:;
LAB70:    t15 = (t0 + 4072U);
    *((char **)t15) = &&LAB67;
    goto LAB1;

LAB74:;
LAB76:    t15 = (t0 + 4072U);
    *((char **)t15) = &&LAB73;
    goto LAB1;

LAB80:;
LAB82:    t15 = (t0 + 4072U);
    *((char **)t15) = &&LAB79;
    goto LAB1;

LAB86:;
LAB88:    t15 = (t0 + 4072U);
    *((char **)t15) = &&LAB85;
    goto LAB1;

LAB92:;
LAB94:    t15 = (t0 + 4072U);
    *((char **)t15) = &&LAB91;
    goto LAB1;

LAB98:;
LAB100:    t15 = (t0 + 4072U);
    *((char **)t15) = &&LAB97;
    goto LAB1;

LAB101:    xsi_set_current_line(71, ng0);
    xsi_vlogfile_write(1, 0, 0, ng44, 1, t0);
    goto LAB103;

}

void Monitor_46_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 4128);
    t2 = (t0 + 4640);
    xsi_vlogfile_monitor((void *)Monitor_46_1_Func, t1, t2);

LAB1:    return;
}


extern void work_m_11102498064209607702_2598182923_init()
{
	static char *pe[] = {(void *)Initial_44_0,(void *)Monitor_46_1};
	static char *se[] = {(void *)sp_run_test};
	xsi_register_didat("work_m_11102498064209607702_2598182923", "isim/alu_tb_isim_beh.exe.sim/work/m_11102498064209607702_2598182923.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
