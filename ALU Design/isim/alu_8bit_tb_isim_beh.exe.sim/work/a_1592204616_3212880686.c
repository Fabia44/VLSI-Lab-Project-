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
static const char *ng0 = "/home/ise/22201044/computer/alu_8bit.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

char *ieee_p_1242562249_sub_1701011461141717515_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1701011461141789389_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_16439767405979520975_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_16439989832805790689_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_16439989833707593767_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_207919886985903570_503743352(char *, char *, char *, char *);


static void work_a_1592204616_3212880686_p_0(char *t0)
{
    char t20[16];
    char t23[16];
    char t28[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    int t9;
    int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    int t16;
    char *t17;
    int t19;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned char t38;

LAB0:    xsi_set_current_line(22, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t3 = (t0 + 3344);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(23, ng0);
    t1 = (t0 + 3408);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(24, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 5204);
    t8 = xsi_mem_cmp(t1, t2, 3U);
    if (t8 == 1)
        goto LAB3;

LAB10:    t4 = (t0 + 5207);
    t9 = xsi_mem_cmp(t4, t2, 3U);
    if (t9 == 1)
        goto LAB4;

LAB11:    t6 = (t0 + 5210);
    t10 = xsi_mem_cmp(t6, t2, 3U);
    if (t10 == 1)
        goto LAB5;

LAB12:    t11 = (t0 + 5213);
    t13 = xsi_mem_cmp(t11, t2, 3U);
    if (t13 == 1)
        goto LAB6;

LAB13:    t14 = (t0 + 5216);
    t16 = xsi_mem_cmp(t14, t2, 3U);
    if (t16 == 1)
        goto LAB7;

LAB14:    t17 = (t0 + 5219);
    t19 = xsi_mem_cmp(t17, t2, 3U);
    if (t19 == 1)
        goto LAB8;

LAB15:
LAB9:    xsi_set_current_line(46, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t3 = (t0 + 3344);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 3408);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t1 = (t0 + 3264);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(27, ng0);
    t21 = (t0 + 1032U);
    t22 = *((char **)t21);
    t24 = ((IEEE_P_2592010699) + 4000);
    t25 = (t0 + 5088U);
    t21 = xsi_base_array_concat(t21, t23, t24, (char)99, (unsigned char)2, (char)97, t22, t25, (char)101);
    t26 = (t0 + 1192U);
    t27 = *((char **)t26);
    t29 = ((IEEE_P_2592010699) + 4000);
    t30 = (t0 + 5104U);
    t26 = xsi_base_array_concat(t26, t28, t29, (char)99, (unsigned char)2, (char)97, t27, t30, (char)101);
    t31 = ieee_p_1242562249_sub_1701011461141717515_1035706684(IEEE_P_1242562249, t20, t21, t23, t26, t28);
    t32 = (t0 + 1968U);
    t33 = *((char **)t32);
    t32 = (t33 + 0);
    t34 = (t20 + 12U);
    t35 = *((unsigned int *)t34);
    t36 = (1U * t35);
    memcpy(t32, t31, t36);
    xsi_set_current_line(28, ng0);
    t1 = (t0 + 1968U);
    t2 = *((char **)t1);
    t35 = (8 - 7);
    t36 = (t35 * 1U);
    t37 = (0 + t36);
    t1 = (t2 + t37);
    t3 = (t0 + 3344);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(29, ng0);
    t1 = (t0 + 1968U);
    t2 = *((char **)t1);
    t8 = (8 - 8);
    t35 = (t8 * -1);
    t36 = (1U * t35);
    t37 = (0 + t36);
    t1 = (t2 + t37);
    t38 = *((unsigned char *)t1);
    t3 = (t0 + 3408);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t38;
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB4:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5088U);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t3 = (t0 + 5104U);
    t5 = ieee_p_1242562249_sub_1701011461141789389_1035706684(IEEE_P_1242562249, t20, t2, t1, t4, t3);
    t6 = (t0 + 3344);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t5, 8U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB2;

LAB5:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5088U);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t3 = (t0 + 5104U);
    t5 = ieee_p_2592010699_sub_16439989832805790689_503743352(IEEE_P_2592010699, t20, t2, t1, t4, t3);
    t6 = (t20 + 12U);
    t35 = *((unsigned int *)t6);
    t36 = (1U * t35);
    t38 = (8U != t36);
    if (t38 == 1)
        goto LAB17;

LAB18:    t7 = (t0 + 3344);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t5, 8U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB2;

LAB6:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5088U);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t3 = (t0 + 5104U);
    t5 = ieee_p_2592010699_sub_16439767405979520975_503743352(IEEE_P_2592010699, t20, t2, t1, t4, t3);
    t6 = (t20 + 12U);
    t35 = *((unsigned int *)t6);
    t36 = (1U * t35);
    t38 = (8U != t36);
    if (t38 == 1)
        goto LAB19;

LAB20:    t7 = (t0 + 3344);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t5, 8U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB2;

LAB7:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5088U);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t3 = (t0 + 5104U);
    t5 = ieee_p_2592010699_sub_16439989833707593767_503743352(IEEE_P_2592010699, t20, t2, t1, t4, t3);
    t6 = (t20 + 12U);
    t35 = *((unsigned int *)t6);
    t36 = (1U * t35);
    t38 = (8U != t36);
    if (t38 == 1)
        goto LAB21;

LAB22:    t7 = (t0 + 3344);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t5, 8U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB2;

LAB8:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5088U);
    t3 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t20, t2, t1);
    t4 = (t20 + 12U);
    t35 = *((unsigned int *)t4);
    t36 = (1U * t35);
    t38 = (8U != t36);
    if (t38 == 1)
        goto LAB23;

LAB24:    t5 = (t0 + 3344);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB2;

LAB16:;
LAB17:    xsi_size_not_matching(8U, t36, 0);
    goto LAB18;

LAB19:    xsi_size_not_matching(8U, t36, 0);
    goto LAB20;

LAB21:    xsi_size_not_matching(8U, t36, 0);
    goto LAB22;

LAB23:    xsi_size_not_matching(8U, t36, 0);
    goto LAB24;

}


extern void work_a_1592204616_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1592204616_3212880686_p_0};
	xsi_register_didat("work_a_1592204616_3212880686", "isim/alu_8bit_tb_isim_beh.exe.sim/work/a_1592204616_3212880686.didat");
	xsi_register_executes(pe);
}
