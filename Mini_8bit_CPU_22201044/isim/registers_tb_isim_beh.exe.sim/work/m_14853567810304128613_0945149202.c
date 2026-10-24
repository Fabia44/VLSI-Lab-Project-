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
static const char *ng0 = "/home/ise/xilinix/Mini_8bit_CPU_22201044/registers_tb.v";
static const char *ng1 = "PASS  t=%0t  %0s : ACC=%h R=%h Z=%b";
static const char *ng2 = "FAIL  t=%0t  %0s : ACC=%h R=%h Z=%b, expected ACC=%h R=%h Z=%b";
static int ng3[] = {1, 0};
static const char *ng4 = "t=%0t CLK=%b RST=%b ACC_WE=%b R_WE=%b Z_WE=%b ACC_D=%h | ACC=%h R=%h Z=%b";
static unsigned int ng5[] = {0U, 0U};
static int ng6[] = {0, 0};
static unsigned int ng7[] = {255U, 0U};
static unsigned int ng8[] = {1U, 0U};
static int ng9[] = {1819633011, 0, 1948284513, 0, 1919251301, 0, 5517600, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng10[] = {30U, 0U};
static int ng11[] = {542784816, 0, 1868653612, 0, 1128472684, 0, 1412571201, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng12[] = {170U, 0U};
static int ng13[] = {1935764837, 0, 1127176736, 0, 740311363, 0, 1027687235, 0, 1094328402, 0, 857756500, 0, 84, 0, 0, 0};
static unsigned int ng14[] = {85U, 0U};
static int ng15[] = {1752132708, 0, 807419168, 0, 1818587936, 0, 1701732706, 0, 1634495520, 0, 5518368, 0, 0, 0, 0, 0};
static unsigned int ng16[] = {64U, 0U};
static int ng17[] = {1935764837, 0, 740315680, 0, 1128084528, 0, 891306307, 0, 84, 0, 0, 0, 0, 0, 0, 0};
static int ng18[] = {542784816, 0, 1128092204, 0, 975192387, 0, 541869138, 0, 21558, 0, 0, 0, 0, 0, 0, 0};
static int ng19[] = {542784817, 0, 1026568236, 0, 541147971, 0, 21559, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng20[] = {15U, 0U};
static int ng21[] = {1635018084, 0, 544567396, 0, 544108404, 0, 809115738, 0, 1599554877, 0, 1412964442, 0, 0, 0, 0, 0};
static unsigned int ng22[] = {5U, 0U};
static int ng23[] = {1635018099, 0, 544567396, 0, 1819877466, 0, 958426990, 0, 84, 0, 0, 0, 0, 0, 0, 0};
static int ng24[] = {1379741766, 0, 1413560864, 0, 825237587, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng25[] = {119U, 0U};
static int ng26[] = {1701078885, 0, 544105831, 0, 1696620916, 0, 1751215719, 0, 1852776547, 0, 825319712, 0, 84, 0, 0, 0};
static int ng27[] = {1701078885, 0, 544239475, 0, 1679843700, 0, 1684108389, 0, 1646294384, 0, 5517617, 0, 0, 0, 0, 0};
static int ng28[] = {544826740, 0, 1701078885, 0, 544108320, 0, 1413296428, 0, 1380275013, 0, 825385248, 0, 84, 0, 0, 0};
static int ng29[] = {1701078885, 0, 544239475, 0, 1948279156, 0, 1919251301, 0, 825385504, 0, 84, 0, 0, 0, 0, 0};
static unsigned int ng30[] = {60U, 0U};
static int ng31[] = {1702061428, 0, 1701978226, 0, 543254132, 0, 1869769587, 0, 825434231, 0, 84, 0, 0, 0, 0, 0};
static const char *ng32 = "=== registers_tb: ALL TESTS PASSED ===";
static const char *ng33 = "=== registers_tb: %0d TEST(S) FAILED ===";

void Monitor_70_3(char *);
void Monitor_70_3(char *);


static int sp_check(char *t1, char *t2)
{
    char t9[8];
    char t12[8];
    char t28[8];
    char t31[8];
    char t39[8];
    char t71[8];
    char t87[8];
    char t90[8];
    char t98[8];
    char t136[16];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t88;
    char *t89;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    int t122;
    int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t137;
    char *t138;
    char *t139;
    char *t140;
    char *t141;
    char *t142;
    char *t143;
    char *t144;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t5 = (t1 + 1912U);
    t6 = *((char **)t5);
    t5 = (t1 + 3752);
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

LAB8:    memset(t12, 0, 8);
    t13 = (t9 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t9);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t13) != 0)
        goto LAB11;

LAB12:    t20 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t20);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB13;

LAB14:    memcpy(t39, t12, 8);

LAB15:    memset(t71, 0, 8);
    t72 = (t39 + 4);
    t73 = *((unsigned int *)t72);
    t74 = (~(t73));
    t75 = *((unsigned int *)t39);
    t76 = (t75 & t74);
    t77 = (t76 & 1U);
    if (t77 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t72) != 0)
        goto LAB28;

LAB29:    t79 = (t71 + 4);
    t80 = *((unsigned int *)t71);
    t81 = *((unsigned int *)t79);
    t82 = (t80 || t81);
    if (t82 > 0)
        goto LAB30;

LAB31:    memcpy(t98, t71, 8);

LAB32:    t130 = (t98 + 4);
    t131 = *((unsigned int *)t130);
    t132 = (~(t131));
    t133 = *((unsigned int *)t98);
    t134 = (t133 & t132);
    t135 = (t134 != 0);
    if (t135 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(42, ng0);

LAB46:    xsi_set_current_line(43, ng0);
    t4 = xsi_vlog_time(t136, 1000.0000000000000, 1000.0000000000000);
    t5 = (t1 + 4232);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 1912U);
    t10 = *((char **)t8);
    t8 = (t1 + 2072U);
    t11 = *((char **)t8);
    t8 = (t1 + 2232U);
    t13 = *((char **)t8);
    t8 = (t1 + 3752);
    t19 = (t8 + 56U);
    t20 = *((char **)t19);
    t24 = (t1 + 3912);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t1 + 4072);
    t29 = (t27 + 56U);
    t30 = *((char **)t29);
    t32 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng2, 9, t32, (char)118, t136, 64, (char)118, t7, 256, (char)118, t10, 8, (char)118, t11, 8, (char)118, t13, 1, (char)118, t20, 8, (char)118, t26, 8, (char)118, t30, 1);
    xsi_set_current_line(45, ng0);
    t4 = (t1 + 3592);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 3592);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);

LAB45:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    *((unsigned int *)t12) = 1;
    goto LAB12;

LAB11:    t19 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB12;

LAB13:    t24 = (t1 + 2072U);
    t25 = *((char **)t24);
    t24 = (t1 + 3912);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    memset(t28, 0, 8);
    if (*((unsigned int *)t25) != *((unsigned int *)t27))
        goto LAB18;

LAB16:    t29 = (t25 + 4);
    t30 = (t27 + 4);
    if (*((unsigned int *)t29) != *((unsigned int *)t30))
        goto LAB18;

LAB17:    *((unsigned int *)t28) = 1;

LAB18:    memset(t31, 0, 8);
    t32 = (t28 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t28);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t32) != 0)
        goto LAB21;

LAB22:    t40 = *((unsigned int *)t12);
    t41 = *((unsigned int *)t31);
    t42 = (t40 & t41);
    *((unsigned int *)t39) = t42;
    t43 = (t12 + 4);
    t44 = (t31 + 4);
    t45 = (t39 + 4);
    t46 = *((unsigned int *)t43);
    t47 = *((unsigned int *)t44);
    t48 = (t46 | t47);
    *((unsigned int *)t45) = t48;
    t49 = *((unsigned int *)t45);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB15;

LAB19:    *((unsigned int *)t31) = 1;
    goto LAB22;

LAB21:    t38 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB22;

LAB23:    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t39) = (t51 | t52);
    t53 = (t12 + 4);
    t54 = (t31 + 4);
    t55 = *((unsigned int *)t12);
    t56 = (~(t55));
    t57 = *((unsigned int *)t53);
    t58 = (~(t57));
    t59 = *((unsigned int *)t31);
    t60 = (~(t59));
    t61 = *((unsigned int *)t54);
    t62 = (~(t61));
    t63 = (t56 & t58);
    t64 = (t60 & t62);
    t65 = (~(t63));
    t66 = (~(t64));
    t67 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t67 & t65);
    t68 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t68 & t66);
    t69 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t69 & t65);
    t70 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t70 & t66);
    goto LAB25;

LAB26:    *((unsigned int *)t71) = 1;
    goto LAB29;

LAB28:    t78 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t78) = 1;
    goto LAB29;

LAB30:    t83 = (t1 + 2232U);
    t84 = *((char **)t83);
    t83 = (t1 + 4072);
    t85 = (t83 + 56U);
    t86 = *((char **)t85);
    memset(t87, 0, 8);
    if (*((unsigned int *)t84) != *((unsigned int *)t86))
        goto LAB35;

LAB33:    t88 = (t84 + 4);
    t89 = (t86 + 4);
    if (*((unsigned int *)t88) != *((unsigned int *)t89))
        goto LAB35;

LAB34:    *((unsigned int *)t87) = 1;

LAB35:    memset(t90, 0, 8);
    t91 = (t87 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t87);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t91) != 0)
        goto LAB38;

LAB39:    t99 = *((unsigned int *)t71);
    t100 = *((unsigned int *)t90);
    t101 = (t99 & t100);
    *((unsigned int *)t98) = t101;
    t102 = (t71 + 4);
    t103 = (t90 + 4);
    t104 = (t98 + 4);
    t105 = *((unsigned int *)t102);
    t106 = *((unsigned int *)t103);
    t107 = (t105 | t106);
    *((unsigned int *)t104) = t107;
    t108 = *((unsigned int *)t104);
    t109 = (t108 != 0);
    if (t109 == 1)
        goto LAB40;

LAB41:
LAB42:    goto LAB32;

LAB36:    *((unsigned int *)t90) = 1;
    goto LAB39;

LAB38:    t97 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB39;

LAB40:    t110 = *((unsigned int *)t98);
    t111 = *((unsigned int *)t104);
    *((unsigned int *)t98) = (t110 | t111);
    t112 = (t71 + 4);
    t113 = (t90 + 4);
    t114 = *((unsigned int *)t71);
    t115 = (~(t114));
    t116 = *((unsigned int *)t112);
    t117 = (~(t116));
    t118 = *((unsigned int *)t90);
    t119 = (~(t118));
    t120 = *((unsigned int *)t113);
    t121 = (~(t120));
    t122 = (t115 & t117);
    t123 = (t119 & t121);
    t124 = (~(t122));
    t125 = (~(t123));
    t126 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t126 & t124);
    t127 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t127 & t125);
    t128 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t128 & t124);
    t129 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t129 & t125);
    goto LAB42;

LAB43:    xsi_set_current_line(41, ng0);
    t137 = xsi_vlog_time(t136, 1000.0000000000000, 1000.0000000000000);
    t138 = (t1 + 4232);
    t139 = (t138 + 56U);
    t140 = *((char **)t139);
    t141 = (t1 + 1912U);
    t142 = *((char **)t141);
    t141 = (t1 + 2072U);
    t143 = *((char **)t141);
    t141 = (t1 + 2232U);
    t144 = *((char **)t141);
    t141 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 6, t141, (char)118, t136, 64, (char)118, t140, 256, (char)118, t142, 8, (char)118, t143, 8, (char)118, t144, 1);
    goto LAB45;

}

static int sp_apply(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(57, ng0);

LAB5:    xsi_set_current_line(58, ng0);
    t5 = (t1 + 4392);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 2792);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t4 = (t1 + 4552);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 2952);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t4 = (t1 + 4712);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3112);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t4 = (t1 + 4872);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3272);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t4 = (t1 + 5032);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3432);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(63, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 0U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(64, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;
    goto LAB1;

LAB7:    goto LAB4;

}

static void Monitor_70_3_Func(char *t0)
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
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 2632);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2792);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 2952);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 3112);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t0 + 3272);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t0 + 3432);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t0 + 1912U);
    t22 = *((char **)t21);
    t21 = (t0 + 2072U);
    t23 = *((char **)t21);
    t21 = (t0 + 2232U);
    t24 = *((char **)t21);
    xsi_vlogfile_write(1, 0, 3, ng4, 11, t0, (char)118, t1, 64, (char)118, t5, 1, (char)118, t8, 1, (char)118, t11, 1, (char)118, t14, 1, (char)118, t17, 1, (char)118, t20, 8, (char)118, t22, 8, (char)118, t23, 8, (char)118, t24, 1);

LAB1:    return;
}

static void Initial_29_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(29, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 2632);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_30_1(char *t0)
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

LAB0:    t1 = (t0 + 6192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 6000);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 2632);
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
    t24 = (t0 + 2632);
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

static void Initial_67_2(char *t0)
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

LAB0:    t1 = (t0 + 6440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);

LAB4:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3592);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3272);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3432);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(70, ng0);
    Monitor_70_3(t0);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng3)));
    t3 = ((char*)((ng3)));
    t4 = ((char*)((ng3)));
    t5 = ((char*)((ng3)));
    t6 = ((char*)((ng7)));
    t7 = (t0 + 6248);
    t8 = (t0 + 1280);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 4392);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    t11 = (t0 + 4552);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 1);
    t12 = (t0 + 4712);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 1);
    t13 = (t0 + 4872);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 1);
    t14 = (t0 + 5032);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 8);

LAB7:    t15 = (t0 + 6344);
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

LAB5:    t16 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t16);

LAB6:    t24 = (t0 + 6344);
    t25 = *((char **)t24);
    t24 = (t0 + 1280);
    t26 = (t0 + 6248);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng5)));
    t3 = ((char*)((ng5)));
    t4 = ((char*)((ng8)));
    t5 = ((char*)((ng9)));
    t6 = (t0 + 6248);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 3752);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 8);
    t10 = (t0 + 3912);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 4072);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 1);
    t12 = (t0 + 4232);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 256);

LAB13:    t13 = (t0 + 6344);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t23 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB15:    if (t23 != 0)
        goto LAB16;

LAB11:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB12:    t21 = (t0 + 6344);
    t22 = *((char **)t21);
    t21 = (t0 + 848);
    t24 = (t0 + 6248);
    t25 = 0;
    xsi_delete_subprogram_invocation(t21, t22, t0, t24, t25);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng3)));
    t4 = ((char*)((ng6)));
    t5 = ((char*)((ng3)));
    t6 = ((char*)((ng10)));
    t7 = (t0 + 6248);
    t8 = (t0 + 1280);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 4392);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    t11 = (t0 + 4552);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 1);
    t12 = (t0 + 4712);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 1);
    t13 = (t0 + 4872);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 1);
    t14 = (t0 + 5032);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 8);

LAB19:    t15 = (t0 + 6344);
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

LAB17:    t16 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t16);

LAB18:    t24 = (t0 + 6344);
    t25 = *((char **)t24);
    t24 = (t0 + 1280);
    t26 = (t0 + 6248);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng10)));
    t3 = ((char*)((ng5)));
    t4 = ((char*)((ng5)));
    t5 = ((char*)((ng11)));
    t6 = (t0 + 6248);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 3752);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 8);
    t10 = (t0 + 3912);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 4072);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 1);
    t12 = (t0 + 4232);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 256);

LAB25:    t13 = (t0 + 6344);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t23 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB27:    if (t23 != 0)
        goto LAB28;

LAB23:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB24:    t21 = (t0 + 6344);
    t22 = *((char **)t21);
    t21 = (t0 + 848);
    t24 = (t0 + 6248);
    t25 = 0;
    xsi_delete_subprogram_invocation(t21, t22, t0, t24, t25);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng6)));
    t4 = ((char*)((ng3)));
    t5 = ((char*)((ng6)));
    t6 = ((char*)((ng12)));
    t7 = (t0 + 6248);
    t8 = (t0 + 1280);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 4392);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    t11 = (t0 + 4552);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 1);
    t12 = (t0 + 4712);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 1);
    t13 = (t0 + 4872);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 1);
    t14 = (t0 + 5032);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 8);

LAB31:    t15 = (t0 + 6344);
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

LAB29:    t16 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t16);

LAB30:    t24 = (t0 + 6344);
    t25 = *((char **)t24);
    t24 = (t0 + 1280);
    t26 = (t0 + 6248);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng10)));
    t3 = ((char*)((ng10)));
    t4 = ((char*)((ng5)));
    t5 = ((char*)((ng13)));
    t6 = (t0 + 6248);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 3752);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 8);
    t10 = (t0 + 3912);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 4072);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 1);
    t12 = (t0 + 4232);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 256);

LAB37:    t13 = (t0 + 6344);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t23 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB39:    if (t23 != 0)
        goto LAB40;

LAB35:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB36:    t21 = (t0 + 6344);
    t22 = *((char **)t21);
    t21 = (t0 + 848);
    t24 = (t0 + 6248);
    t25 = 0;
    xsi_delete_subprogram_invocation(t21, t22, t0, t24, t25);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng6)));
    t4 = ((char*)((ng6)));
    t5 = ((char*)((ng6)));
    t6 = ((char*)((ng14)));
    t7 = (t0 + 6248);
    t8 = (t0 + 1280);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 4392);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    t11 = (t0 + 4552);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 1);
    t12 = (t0 + 4712);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 1);
    t13 = (t0 + 4872);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 1);
    t14 = (t0 + 5032);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 8);

LAB43:    t15 = (t0 + 6344);
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

LAB41:    t16 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t16);

LAB42:    t24 = (t0 + 6344);
    t25 = *((char **)t24);
    t24 = (t0 + 1280);
    t26 = (t0 + 6248);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng10)));
    t3 = ((char*)((ng10)));
    t4 = ((char*)((ng5)));
    t5 = ((char*)((ng15)));
    t6 = (t0 + 6248);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 3752);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 8);
    t10 = (t0 + 3912);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 4072);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 1);
    t12 = (t0 + 4232);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 256);

LAB49:    t13 = (t0 + 6344);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t23 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB51:    if (t23 != 0)
        goto LAB52;

LAB47:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB48:    t21 = (t0 + 6344);
    t22 = *((char **)t21);
    t21 = (t0 + 848);
    t24 = (t0 + 6248);
    t25 = 0;
    xsi_delete_subprogram_invocation(t21, t22, t0, t24, t25);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng3)));
    t4 = ((char*)((ng6)));
    t5 = ((char*)((ng3)));
    t6 = ((char*)((ng16)));
    t7 = (t0 + 6248);
    t8 = (t0 + 1280);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 4392);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    t11 = (t0 + 4552);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 1);
    t12 = (t0 + 4712);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 1);
    t13 = (t0 + 4872);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 1);
    t14 = (t0 + 5032);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 8);

LAB55:    t15 = (t0 + 6344);
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

LAB53:    t16 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t16);

LAB54:    t24 = (t0 + 6344);
    t25 = *((char **)t24);
    t24 = (t0 + 1280);
    t26 = (t0 + 6248);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng16)));
    t3 = ((char*)((ng10)));
    t4 = ((char*)((ng5)));
    t5 = ((char*)((ng17)));
    t6 = (t0 + 6248);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 3752);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 8);
    t10 = (t0 + 3912);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 4072);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 1);
    t12 = (t0 + 4232);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 256);

LAB61:    t13 = (t0 + 6344);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t23 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB63:    if (t23 != 0)
        goto LAB64;

LAB59:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB60:    t21 = (t0 + 6344);
    t22 = *((char **)t21);
    t21 = (t0 + 848);
    t24 = (t0 + 6248);
    t25 = 0;
    xsi_delete_subprogram_invocation(t21, t22, t0, t24, t25);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng3)));
    t4 = ((char*)((ng6)));
    t5 = ((char*)((ng3)));
    t6 = ((char*)((ng10)));
    t7 = (t0 + 6248);
    t8 = (t0 + 1280);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 4392);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    t11 = (t0 + 4552);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 1);
    t12 = (t0 + 4712);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 1);
    t13 = (t0 + 4872);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 1);
    t14 = (t0 + 5032);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 8);

LAB67:    t15 = (t0 + 6344);
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

LAB65:    t16 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t16);

LAB66:    t24 = (t0 + 6344);
    t25 = *((char **)t24);
    t24 = (t0 + 1280);
    t26 = (t0 + 6248);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng10)));
    t3 = ((char*)((ng10)));
    t4 = ((char*)((ng5)));
    t5 = ((char*)((ng18)));
    t6 = (t0 + 6248);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 3752);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 8);
    t10 = (t0 + 3912);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 4072);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 1);
    t12 = (t0 + 4232);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 256);

LAB73:    t13 = (t0 + 6344);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t23 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB75:    if (t23 != 0)
        goto LAB76;

LAB71:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB72:    t21 = (t0 + 6344);
    t22 = *((char **)t21);
    t21 = (t0 + 848);
    t24 = (t0 + 6248);
    t25 = 0;
    xsi_delete_subprogram_invocation(t21, t22, t0, t24, t25);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng3)));
    t4 = ((char*)((ng6)));
    t5 = ((char*)((ng3)));
    t6 = ((char*)((ng5)));
    t7 = (t0 + 6248);
    t8 = (t0 + 1280);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 4392);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    t11 = (t0 + 4552);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 1);
    t12 = (t0 + 4712);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 1);
    t13 = (t0 + 4872);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 1);
    t14 = (t0 + 5032);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 8);

LAB79:    t15 = (t0 + 6344);
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

LAB77:    t16 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t16);

LAB78:    t24 = (t0 + 6344);
    t25 = *((char **)t24);
    t24 = (t0 + 1280);
    t26 = (t0 + 6248);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng5)));
    t3 = ((char*)((ng10)));
    t4 = ((char*)((ng8)));
    t5 = ((char*)((ng19)));
    t6 = (t0 + 6248);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 3752);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 8);
    t10 = (t0 + 3912);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 4072);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 1);
    t12 = (t0 + 4232);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 256);

LAB85:    t13 = (t0 + 6344);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t23 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB87:    if (t23 != 0)
        goto LAB88;

LAB83:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB84:    t21 = (t0 + 6344);
    t22 = *((char **)t21);
    t21 = (t0 + 848);
    t24 = (t0 + 6248);
    t25 = 0;
    xsi_delete_subprogram_invocation(t21, t22, t0, t24, t25);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng3)));
    t4 = ((char*)((ng6)));
    t5 = ((char*)((ng6)));
    t6 = ((char*)((ng20)));
    t7 = (t0 + 6248);
    t8 = (t0 + 1280);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 4392);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    t11 = (t0 + 4552);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 1);
    t12 = (t0 + 4712);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 1);
    t13 = (t0 + 4872);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 1);
    t14 = (t0 + 5032);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 8);

LAB91:    t15 = (t0 + 6344);
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

LAB89:    t16 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t16);

LAB90:    t24 = (t0 + 6344);
    t25 = *((char **)t24);
    t24 = (t0 + 1280);
    t26 = (t0 + 6248);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng20)));
    t3 = ((char*)((ng10)));
    t4 = ((char*)((ng8)));
    t5 = ((char*)((ng21)));
    t6 = (t0 + 6248);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 3752);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 8);
    t10 = (t0 + 3912);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 4072);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 1);
    t12 = (t0 + 4232);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 256);

LAB97:    t13 = (t0 + 6344);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t23 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB99:    if (t23 != 0)
        goto LAB100;

LAB95:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB96:    t21 = (t0 + 6344);
    t22 = *((char **)t21);
    t21 = (t0 + 848);
    t24 = (t0 + 6248);
    t25 = 0;
    xsi_delete_subprogram_invocation(t21, t22, t0, t24, t25);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng6)));
    t4 = ((char*)((ng6)));
    t5 = ((char*)((ng3)));
    t6 = ((char*)((ng22)));
    t7 = (t0 + 6248);
    t8 = (t0 + 1280);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 4392);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    t11 = (t0 + 4552);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 1);
    t12 = (t0 + 4712);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 1);
    t13 = (t0 + 4872);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 1);
    t14 = (t0 + 5032);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 8);

LAB103:    t15 = (t0 + 6344);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB105:    if (t23 != 0)
        goto LAB106;

LAB101:    t16 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t16);

LAB102:    t24 = (t0 + 6344);
    t25 = *((char **)t24);
    t24 = (t0 + 1280);
    t26 = (t0 + 6248);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng20)));
    t3 = ((char*)((ng10)));
    t4 = ((char*)((ng5)));
    t5 = ((char*)((ng23)));
    t6 = (t0 + 6248);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 3752);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 8);
    t10 = (t0 + 3912);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 4072);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 1);
    t12 = (t0 + 4232);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 256);

LAB109:    t13 = (t0 + 6344);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t23 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB111:    if (t23 != 0)
        goto LAB112;

LAB107:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB108:    t21 = (t0 + 6344);
    t22 = *((char **)t21);
    t21 = (t0 + 848);
    t24 = (t0 + 6248);
    t25 = 0;
    xsi_delete_subprogram_invocation(t21, t22, t0, t24, t25);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng6)));
    t4 = ((char*)((ng3)));
    t5 = ((char*)((ng6)));
    t6 = ((char*)((ng5)));
    t7 = (t0 + 6248);
    t8 = (t0 + 1280);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 4392);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    t11 = (t0 + 4552);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 1);
    t12 = (t0 + 4712);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 1);
    t13 = (t0 + 4872);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 1);
    t14 = (t0 + 5032);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 8);

LAB115:    t15 = (t0 + 6344);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB117:    if (t23 != 0)
        goto LAB118;

LAB113:    t16 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t16);

LAB114:    t24 = (t0 + 6344);
    t25 = *((char **)t24);
    t24 = (t0 + 1280);
    t26 = (t0 + 6248);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng20)));
    t3 = ((char*)((ng20)));
    t4 = ((char*)((ng5)));
    t5 = ((char*)((ng24)));
    t6 = (t0 + 6248);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 3752);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 8);
    t10 = (t0 + 3912);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 4072);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 1);
    t12 = (t0 + 4232);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 256);

LAB121:    t13 = (t0 + 6344);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t23 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB123:    if (t23 != 0)
        goto LAB124;

LAB119:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB120:    t21 = (t0 + 6344);
    t22 = *((char **)t21);
    t21 = (t0 + 848);
    t24 = (t0 + 6248);
    t25 = 0;
    xsi_delete_subprogram_invocation(t21, t22, t0, t24, t25);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3272);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 3432);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 7024);
    *((int *)t2) = 1;
    t3 = (t0 + 6472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB125;

LAB1:    return;
LAB8:;
LAB10:    t15 = (t0 + 6440U);
    *((char **)t15) = &&LAB7;
    goto LAB1;

LAB14:;
LAB16:    t13 = (t0 + 6440U);
    *((char **)t13) = &&LAB13;
    goto LAB1;

LAB20:;
LAB22:    t15 = (t0 + 6440U);
    *((char **)t15) = &&LAB19;
    goto LAB1;

LAB26:;
LAB28:    t13 = (t0 + 6440U);
    *((char **)t13) = &&LAB25;
    goto LAB1;

LAB32:;
LAB34:    t15 = (t0 + 6440U);
    *((char **)t15) = &&LAB31;
    goto LAB1;

LAB38:;
LAB40:    t13 = (t0 + 6440U);
    *((char **)t13) = &&LAB37;
    goto LAB1;

LAB44:;
LAB46:    t15 = (t0 + 6440U);
    *((char **)t15) = &&LAB43;
    goto LAB1;

LAB50:;
LAB52:    t13 = (t0 + 6440U);
    *((char **)t13) = &&LAB49;
    goto LAB1;

LAB56:;
LAB58:    t15 = (t0 + 6440U);
    *((char **)t15) = &&LAB55;
    goto LAB1;

LAB62:;
LAB64:    t13 = (t0 + 6440U);
    *((char **)t13) = &&LAB61;
    goto LAB1;

LAB68:;
LAB70:    t15 = (t0 + 6440U);
    *((char **)t15) = &&LAB67;
    goto LAB1;

LAB74:;
LAB76:    t13 = (t0 + 6440U);
    *((char **)t13) = &&LAB73;
    goto LAB1;

LAB80:;
LAB82:    t15 = (t0 + 6440U);
    *((char **)t15) = &&LAB79;
    goto LAB1;

LAB86:;
LAB88:    t13 = (t0 + 6440U);
    *((char **)t13) = &&LAB85;
    goto LAB1;

LAB92:;
LAB94:    t15 = (t0 + 6440U);
    *((char **)t15) = &&LAB91;
    goto LAB1;

LAB98:;
LAB100:    t13 = (t0 + 6440U);
    *((char **)t13) = &&LAB97;
    goto LAB1;

LAB104:;
LAB106:    t15 = (t0 + 6440U);
    *((char **)t15) = &&LAB103;
    goto LAB1;

LAB110:;
LAB112:    t13 = (t0 + 6440U);
    *((char **)t13) = &&LAB109;
    goto LAB1;

LAB116:;
LAB118:    t15 = (t0 + 6440U);
    *((char **)t15) = &&LAB115;
    goto LAB1;

LAB122:;
LAB124:    t13 = (t0 + 6440U);
    *((char **)t13) = &&LAB121;
    goto LAB1;

LAB125:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 6248);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB126;
    goto LAB1;

LAB126:    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng20)));
    t3 = ((char*)((ng20)));
    t4 = ((char*)((ng5)));
    t5 = ((char*)((ng26)));
    t6 = (t0 + 6248);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 3752);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 8);
    t10 = (t0 + 3912);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 4072);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 1);
    t12 = (t0 + 4232);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 256);

LAB129:    t13 = (t0 + 6344);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t23 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB131:    if (t23 != 0)
        goto LAB132;

LAB127:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB128:    t21 = (t0 + 6344);
    t22 = *((char **)t21);
    t21 = (t0 + 848);
    t24 = (t0 + 6248);
    t25 = 0;
    xsi_delete_subprogram_invocation(t21, t22, t0, t24, t25);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 7040);
    *((int *)t2) = 1;
    t3 = (t0 + 6472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB133;
    goto LAB1;

LAB130:;
LAB132:    t13 = (t0 + 6440U);
    *((char **)t13) = &&LAB129;
    goto LAB1;

LAB133:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 6248);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB134;
    goto LAB1;

LAB134:    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng25)));
    t3 = ((char*)((ng20)));
    t4 = ((char*)((ng5)));
    t5 = ((char*)((ng27)));
    t6 = (t0 + 6248);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 3752);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 8);
    t10 = (t0 + 3912);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 4072);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 1);
    t12 = (t0 + 4232);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 256);

LAB137:    t13 = (t0 + 6344);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t23 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB139:    if (t23 != 0)
        goto LAB140;

LAB135:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB136:    t21 = (t0 + 6344);
    t22 = *((char **)t21);
    t21 = (t0 + 848);
    t24 = (t0 + 6248);
    t25 = 0;
    xsi_delete_subprogram_invocation(t21, t22, t0, t24, t25);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3272);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3432);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 7056);
    *((int *)t2) = 1;
    t3 = (t0 + 6472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB141;
    goto LAB1;

LAB138:;
LAB140:    t13 = (t0 + 6440U);
    *((char **)t13) = &&LAB137;
    goto LAB1;

LAB141:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 6248);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB142;
    goto LAB1;

LAB142:    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng25)));
    t3 = ((char*)((ng20)));
    t4 = ((char*)((ng5)));
    t5 = ((char*)((ng28)));
    t6 = (t0 + 6248);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 3752);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 8);
    t10 = (t0 + 3912);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 4072);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 1);
    t12 = (t0 + 4232);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 256);

LAB145:    t13 = (t0 + 6344);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t23 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB147:    if (t23 != 0)
        goto LAB148;

LAB143:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB144:    t21 = (t0 + 6344);
    t22 = *((char **)t21);
    t21 = (t0 + 848);
    t24 = (t0 + 6248);
    t25 = 0;
    xsi_delete_subprogram_invocation(t21, t22, t0, t24, t25);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 7072);
    *((int *)t2) = 1;
    t3 = (t0 + 6472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB149;
    goto LAB1;

LAB146:;
LAB148:    t13 = (t0 + 6440U);
    *((char **)t13) = &&LAB145;
    goto LAB1;

LAB149:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 6248);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB150;
    goto LAB1;

LAB150:    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng5)));
    t3 = ((char*)((ng5)));
    t4 = ((char*)((ng8)));
    t5 = ((char*)((ng29)));
    t6 = (t0 + 6248);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 3752);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 8);
    t10 = (t0 + 3912);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 4072);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 1);
    t12 = (t0 + 4232);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 256);

LAB153:    t13 = (t0 + 6344);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t23 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB155:    if (t23 != 0)
        goto LAB156;

LAB151:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB152:    t21 = (t0 + 6344);
    t22 = *((char **)t21);
    t21 = (t0 + 848);
    t24 = (t0 + 6248);
    t25 = 0;
    xsi_delete_subprogram_invocation(t21, t22, t0, t24, t25);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng3)));
    t4 = ((char*)((ng6)));
    t5 = ((char*)((ng3)));
    t6 = ((char*)((ng30)));
    t7 = (t0 + 6248);
    t8 = (t0 + 1280);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 4392);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 1);
    t11 = (t0 + 4552);
    xsi_vlogvar_assign_value(t11, t3, 0, 0, 1);
    t12 = (t0 + 4712);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 1);
    t13 = (t0 + 4872);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 1);
    t14 = (t0 + 5032);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 8);

LAB159:    t15 = (t0 + 6344);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);

LAB161:    if (t23 != 0)
        goto LAB162;

LAB157:    t16 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t16);

LAB158:    t24 = (t0 + 6344);
    t25 = *((char **)t24);
    t24 = (t0 + 1280);
    t26 = (t0 + 6248);
    t27 = 0;
    xsi_delete_subprogram_invocation(t24, t25, t0, t26, t27);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng30)));
    t3 = ((char*)((ng5)));
    t4 = ((char*)((ng5)));
    t5 = ((char*)((ng31)));
    t6 = (t0 + 6248);
    t7 = (t0 + 848);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);
    t9 = (t0 + 3752);
    xsi_vlogvar_assign_value(t9, t2, 0, 0, 8);
    t10 = (t0 + 3912);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 8);
    t11 = (t0 + 4072);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 1);
    t12 = (t0 + 4232);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 256);

LAB165:    t13 = (t0 + 6344);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t23 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB167:    if (t23 != 0)
        goto LAB168;

LAB163:    t14 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t14);

LAB164:    t21 = (t0 + 6344);
    t22 = *((char **)t21);
    t21 = (t0 + 848);
    t24 = (t0 + 6248);
    t25 = 0;
    xsi_delete_subprogram_invocation(t21, t22, t0, t24, t25);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 3592);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t28, 0, 8);
    xsi_vlog_signed_equal(t28, 32, t4, 32, t5, 32);
    t6 = (t28 + 4);
    t29 = *((unsigned int *)t6);
    t30 = (~(t29));
    t31 = *((unsigned int *)t28);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB169;

LAB170:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 3592);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng33, 2, t0, (char)119, t4, 32);

LAB171:    xsi_set_current_line(133, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB154:;
LAB156:    t13 = (t0 + 6440U);
    *((char **)t13) = &&LAB153;
    goto LAB1;

LAB160:;
LAB162:    t15 = (t0 + 6440U);
    *((char **)t15) = &&LAB159;
    goto LAB1;

LAB166:;
LAB168:    t13 = (t0 + 6440U);
    *((char **)t13) = &&LAB165;
    goto LAB1;

LAB169:    xsi_set_current_line(129, ng0);
    xsi_vlogfile_write(1, 0, 0, ng32, 1, t0);
    goto LAB171;

}

void Monitor_70_3(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 6496);
    t2 = (t0 + 7088);
    xsi_vlogfile_monitor((void *)Monitor_70_3_Func, t1, t2);

LAB1:    return;
}


extern void work_m_14853567810304128613_0945149202_init()
{
	static char *pe[] = {(void *)Initial_29_0,(void *)Always_30_1,(void *)Initial_67_2,(void *)Monitor_70_3};
	static char *se[] = {(void *)sp_check,(void *)sp_apply};
	xsi_register_didat("work_m_14853567810304128613_0945149202", "isim/registers_tb_isim_beh.exe.sim/work/m_14853567810304128613_0945149202.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
