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
static const char *ng0 = "/home/ise/xilinix/Mini_8bit_CPU_22201044/cpu_tb.v";
static const char *ng1 = "PASS cycle %0d | exec PC=%0d instr=%h | ACC=%h Z=%b R=%h nextPC=%0d";
static const char *ng2 = "FAIL cycle %0d | exec PC=%0d instr=%h | ACC=%h Z=%b R=%h nextPC=%0d";
static const char *ng3 = "     expected          | ACC=%h Z=%b R=%h nextPC=%0d";
static int ng4[] = {1, 0};
static unsigned int ng5[] = {0U, 0U};
static int ng6[] = {0, 0};
static unsigned int ng7[] = {30U, 0U};
static unsigned int ng8[] = {1U, 0U};
static int ng9[] = {2, 0};
static unsigned int ng10[] = {2U, 0U};
static unsigned int ng11[] = {64U, 0U};
static int ng12[] = {3, 0};
static unsigned int ng13[] = {3U, 0U};
static int ng14[] = {4, 0};
static unsigned int ng15[] = {4U, 0U};
static int ng16[] = {5, 0};
static unsigned int ng17[] = {5U, 0U};
static unsigned int ng18[] = {31U, 0U};
static int ng19[] = {6, 0};
static unsigned int ng20[] = {6U, 0U};
static unsigned int ng21[] = {15U, 0U};
static int ng22[] = {7, 0};
static unsigned int ng23[] = {7U, 0U};
static int ng24[] = {8, 0};
static unsigned int ng25[] = {8U, 0U};
static int ng26[] = {9, 0};
static unsigned int ng27[] = {9U, 0U};
static int ng28[] = {10, 0};
static unsigned int ng29[] = {10U, 0U};
static const char *ng30 = "FINAL OK: ACC=0F R=0F Z=0 PC=10";
static const char *ng31 = "FINAL FAIL: ACC=%h R=%h Z=%b PC=%0d";
static unsigned int ng32[] = {11U, 0U};
static const char *ng33 = "EXTRA PASS: NOP at PC=10 changed only PC (now 11)";
static const char *ng34 = "EXTRA FAIL: ACC=%h R=%h Z=%b PC=%0d";
static const char *ng35 = "=== cpu_tb: ALL TESTS PASSED (matches Appendix B) ===";
static const char *ng36 = "=== cpu_tb: %0d TEST(S) FAILED ===";



static int sp_check_cycle(char *t1, char *t2)
{
    char t9[8];
    char t19[8];
    char t22[8];
    char t38[8];
    char t48[8];
    char t51[8];
    char t59[8];
    char t91[8];
    char t107[8];
    char t117[8];
    char t120[8];
    char t128[8];
    char t160[8];
    char t176[8];
    char t186[8];
    char t189[8];
    char t197[8];
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
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    int t83;
    int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t108;
    char *t109;
    char *t110;
    char *t111;
    char *t112;
    char *t113;
    char *t114;
    char *t115;
    char *t116;
    char *t118;
    char *t119;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    char *t133;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;
    char *t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    int t152;
    int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    char *t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    char *t167;
    char *t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    char *t172;
    char *t173;
    char *t174;
    char *t175;
    char *t177;
    char *t178;
    char *t179;
    char *t180;
    char *t181;
    char *t182;
    char *t183;
    char *t184;
    char *t185;
    char *t187;
    char *t188;
    char *t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    char *t196;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    char *t201;
    char *t202;
    char *t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    char *t211;
    char *t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    int t221;
    int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    char *t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    char *t235;
    char *t236;
    char *t237;
    char *t238;
    char *t239;
    char *t240;
    char *t241;
    char *t242;
    char *t243;
    char *t244;
    char *t245;
    char *t246;
    char *t247;
    char *t248;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t5 = (t1 + 1480U);
    t6 = *((char **)t5);
    t5 = (t1 + 2680);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t10 = (t1 + 2680);
    t11 = (t10 + 72U);
    t12 = *((char **)t11);
    t13 = (t1 + 2680);
    t14 = (t13 + 64U);
    t15 = *((char **)t14);
    t16 = (t1 + 3960);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    xsi_vlog_generic_get_array_select_value(t9, 8, t8, t12, t15, 2, 1, t18, 32, 1);
    memset(t19, 0, 8);
    if (*((unsigned int *)t6) != *((unsigned int *)t9))
        goto LAB8;

LAB6:    t20 = (t6 + 4);
    t21 = (t9 + 4);
    if (*((unsigned int *)t20) != *((unsigned int *)t21))
        goto LAB8;

LAB7:    *((unsigned int *)t19) = 1;

LAB8:    memset(t22, 0, 8);
    t23 = (t19 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t23) != 0)
        goto LAB11;

LAB12:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB13;

LAB14:    memcpy(t59, t22, 8);

LAB15:    memset(t91, 0, 8);
    t92 = (t59 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t59);
    t96 = (t95 & t94);
    t97 = (t96 & 1U);
    if (t97 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t92) != 0)
        goto LAB28;

LAB29:    t99 = (t91 + 4);
    t100 = *((unsigned int *)t91);
    t101 = *((unsigned int *)t99);
    t102 = (t100 || t101);
    if (t102 > 0)
        goto LAB30;

LAB31:    memcpy(t128, t91, 8);

LAB32:    memset(t160, 0, 8);
    t161 = (t128 + 4);
    t162 = *((unsigned int *)t161);
    t163 = (~(t162));
    t164 = *((unsigned int *)t128);
    t165 = (t164 & t163);
    t166 = (t165 & 1U);
    if (t166 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t161) != 0)
        goto LAB45;

LAB46:    t168 = (t160 + 4);
    t169 = *((unsigned int *)t160);
    t170 = *((unsigned int *)t168);
    t171 = (t169 || t170);
    if (t171 > 0)
        goto LAB47;

LAB48:    memcpy(t197, t160, 8);

LAB49:    t229 = (t197 + 4);
    t230 = *((unsigned int *)t229);
    t231 = (~(t230));
    t232 = *((unsigned int *)t197);
    t233 = (t232 & t231);
    t234 = (t233 != 0);
    if (t234 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(44, ng0);

LAB63:    xsi_set_current_line(45, ng0);
    t4 = (t1 + 3960);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3800);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    t11 = (t1 + 3640);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t1 + 1480U);
    t15 = *((char **)t14);
    t14 = (t1 + 1640U);
    t16 = *((char **)t14);
    t14 = (t1 + 1960U);
    t17 = *((char **)t14);
    t14 = (t1 + 1800U);
    t18 = *((char **)t14);
    t14 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng2, 8, t14, (char)119, t6, 32, (char)118, t10, 4, (char)118, t13, 12, (char)118, t15, 8, (char)118, t16, 1, (char)118, t17, 8, (char)118, t18, 4);
    xsi_set_current_line(47, ng0);
    t4 = (t1 + 2680);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 2680);
    t8 = (t7 + 72U);
    t10 = *((char **)t8);
    t11 = (t1 + 2680);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t1 + 3960);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    xsi_vlog_generic_get_array_select_value(t9, 8, t6, t10, t13, 2, 1, t16, 32, 1);
    t17 = (t1 + 2840);
    t18 = (t17 + 56U);
    t20 = *((char **)t18);
    t21 = (t1 + 2840);
    t23 = (t21 + 72U);
    t29 = *((char **)t23);
    t30 = (t1 + 2840);
    t34 = (t30 + 64U);
    t35 = *((char **)t34);
    t36 = (t1 + 3960);
    t37 = (t36 + 56U);
    t39 = *((char **)t37);
    xsi_vlog_generic_get_array_select_value(t19, 1, t20, t29, t35, 2, 1, t39, 32, 1);
    t40 = (t1 + 3000);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = (t1 + 3000);
    t44 = (t43 + 72U);
    t45 = *((char **)t44);
    t46 = (t1 + 3000);
    t47 = (t46 + 64U);
    t49 = *((char **)t47);
    t50 = (t1 + 3960);
    t52 = (t50 + 56U);
    t58 = *((char **)t52);
    xsi_vlog_generic_get_array_select_value(t22, 8, t42, t45, t49, 2, 1, t58, 32, 1);
    t63 = (t1 + 3160);
    t64 = (t63 + 56U);
    t65 = *((char **)t64);
    t73 = (t1 + 3160);
    t74 = (t73 + 72U);
    t92 = *((char **)t74);
    t98 = (t1 + 3160);
    t99 = (t98 + 64U);
    t103 = *((char **)t99);
    t104 = (t1 + 3960);
    t105 = (t104 + 56U);
    t106 = *((char **)t105);
    xsi_vlog_generic_get_array_select_value(t38, 4, t65, t92, t103, 2, 1, t106, 32, 1);
    t108 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng3, 5, t108, (char)118, t9, 8, (char)118, t19, 1, (char)118, t22, 8, (char)118, t38, 4);
    xsi_set_current_line(49, ng0);
    t4 = (t1 + 3320);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 3320);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);

LAB62:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    *((unsigned int *)t22) = 1;
    goto LAB12;

LAB11:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB12;

LAB13:    t34 = (t1 + 1640U);
    t35 = *((char **)t34);
    t34 = (t1 + 2840);
    t36 = (t34 + 56U);
    t37 = *((char **)t36);
    t39 = (t1 + 2840);
    t40 = (t39 + 72U);
    t41 = *((char **)t40);
    t42 = (t1 + 2840);
    t43 = (t42 + 64U);
    t44 = *((char **)t43);
    t45 = (t1 + 3960);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    xsi_vlog_generic_get_array_select_value(t38, 1, t37, t41, t44, 2, 1, t47, 32, 1);
    memset(t48, 0, 8);
    if (*((unsigned int *)t35) != *((unsigned int *)t38))
        goto LAB18;

LAB16:    t49 = (t35 + 4);
    t50 = (t38 + 4);
    if (*((unsigned int *)t49) != *((unsigned int *)t50))
        goto LAB18;

LAB17:    *((unsigned int *)t48) = 1;

LAB18:    memset(t51, 0, 8);
    t52 = (t48 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (~(t53));
    t55 = *((unsigned int *)t48);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t52) != 0)
        goto LAB21;

LAB22:    t60 = *((unsigned int *)t22);
    t61 = *((unsigned int *)t51);
    t62 = (t60 & t61);
    *((unsigned int *)t59) = t62;
    t63 = (t22 + 4);
    t64 = (t51 + 4);
    t65 = (t59 + 4);
    t66 = *((unsigned int *)t63);
    t67 = *((unsigned int *)t64);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB15;

LAB19:    *((unsigned int *)t51) = 1;
    goto LAB22;

LAB21:    t58 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB22;

LAB23:    t71 = *((unsigned int *)t59);
    t72 = *((unsigned int *)t65);
    *((unsigned int *)t59) = (t71 | t72);
    t73 = (t22 + 4);
    t74 = (t51 + 4);
    t75 = *((unsigned int *)t22);
    t76 = (~(t75));
    t77 = *((unsigned int *)t73);
    t78 = (~(t77));
    t79 = *((unsigned int *)t51);
    t80 = (~(t79));
    t81 = *((unsigned int *)t74);
    t82 = (~(t81));
    t83 = (t76 & t78);
    t84 = (t80 & t82);
    t85 = (~(t83));
    t86 = (~(t84));
    t87 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t87 & t85);
    t88 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t88 & t86);
    t89 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t89 & t85);
    t90 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t90 & t86);
    goto LAB25;

LAB26:    *((unsigned int *)t91) = 1;
    goto LAB29;

LAB28:    t98 = (t91 + 4);
    *((unsigned int *)t91) = 1;
    *((unsigned int *)t98) = 1;
    goto LAB29;

LAB30:    t103 = (t1 + 1960U);
    t104 = *((char **)t103);
    t103 = (t1 + 3000);
    t105 = (t103 + 56U);
    t106 = *((char **)t105);
    t108 = (t1 + 3000);
    t109 = (t108 + 72U);
    t110 = *((char **)t109);
    t111 = (t1 + 3000);
    t112 = (t111 + 64U);
    t113 = *((char **)t112);
    t114 = (t1 + 3960);
    t115 = (t114 + 56U);
    t116 = *((char **)t115);
    xsi_vlog_generic_get_array_select_value(t107, 8, t106, t110, t113, 2, 1, t116, 32, 1);
    memset(t117, 0, 8);
    if (*((unsigned int *)t104) != *((unsigned int *)t107))
        goto LAB35;

LAB33:    t118 = (t104 + 4);
    t119 = (t107 + 4);
    if (*((unsigned int *)t118) != *((unsigned int *)t119))
        goto LAB35;

LAB34:    *((unsigned int *)t117) = 1;

LAB35:    memset(t120, 0, 8);
    t121 = (t117 + 4);
    t122 = *((unsigned int *)t121);
    t123 = (~(t122));
    t124 = *((unsigned int *)t117);
    t125 = (t124 & t123);
    t126 = (t125 & 1U);
    if (t126 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t121) != 0)
        goto LAB38;

LAB39:    t129 = *((unsigned int *)t91);
    t130 = *((unsigned int *)t120);
    t131 = (t129 & t130);
    *((unsigned int *)t128) = t131;
    t132 = (t91 + 4);
    t133 = (t120 + 4);
    t134 = (t128 + 4);
    t135 = *((unsigned int *)t132);
    t136 = *((unsigned int *)t133);
    t137 = (t135 | t136);
    *((unsigned int *)t134) = t137;
    t138 = *((unsigned int *)t134);
    t139 = (t138 != 0);
    if (t139 == 1)
        goto LAB40;

LAB41:
LAB42:    goto LAB32;

LAB36:    *((unsigned int *)t120) = 1;
    goto LAB39;

LAB38:    t127 = (t120 + 4);
    *((unsigned int *)t120) = 1;
    *((unsigned int *)t127) = 1;
    goto LAB39;

LAB40:    t140 = *((unsigned int *)t128);
    t141 = *((unsigned int *)t134);
    *((unsigned int *)t128) = (t140 | t141);
    t142 = (t91 + 4);
    t143 = (t120 + 4);
    t144 = *((unsigned int *)t91);
    t145 = (~(t144));
    t146 = *((unsigned int *)t142);
    t147 = (~(t146));
    t148 = *((unsigned int *)t120);
    t149 = (~(t148));
    t150 = *((unsigned int *)t143);
    t151 = (~(t150));
    t152 = (t145 & t147);
    t153 = (t149 & t151);
    t154 = (~(t152));
    t155 = (~(t153));
    t156 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t156 & t154);
    t157 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t157 & t155);
    t158 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t158 & t154);
    t159 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t159 & t155);
    goto LAB42;

LAB43:    *((unsigned int *)t160) = 1;
    goto LAB46;

LAB45:    t167 = (t160 + 4);
    *((unsigned int *)t160) = 1;
    *((unsigned int *)t167) = 1;
    goto LAB46;

LAB47:    t172 = (t1 + 1800U);
    t173 = *((char **)t172);
    t172 = (t1 + 3160);
    t174 = (t172 + 56U);
    t175 = *((char **)t174);
    t177 = (t1 + 3160);
    t178 = (t177 + 72U);
    t179 = *((char **)t178);
    t180 = (t1 + 3160);
    t181 = (t180 + 64U);
    t182 = *((char **)t181);
    t183 = (t1 + 3960);
    t184 = (t183 + 56U);
    t185 = *((char **)t184);
    xsi_vlog_generic_get_array_select_value(t176, 4, t175, t179, t182, 2, 1, t185, 32, 1);
    memset(t186, 0, 8);
    if (*((unsigned int *)t173) != *((unsigned int *)t176))
        goto LAB52;

LAB50:    t187 = (t173 + 4);
    t188 = (t176 + 4);
    if (*((unsigned int *)t187) != *((unsigned int *)t188))
        goto LAB52;

LAB51:    *((unsigned int *)t186) = 1;

LAB52:    memset(t189, 0, 8);
    t190 = (t186 + 4);
    t191 = *((unsigned int *)t190);
    t192 = (~(t191));
    t193 = *((unsigned int *)t186);
    t194 = (t193 & t192);
    t195 = (t194 & 1U);
    if (t195 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t190) != 0)
        goto LAB55;

LAB56:    t198 = *((unsigned int *)t160);
    t199 = *((unsigned int *)t189);
    t200 = (t198 & t199);
    *((unsigned int *)t197) = t200;
    t201 = (t160 + 4);
    t202 = (t189 + 4);
    t203 = (t197 + 4);
    t204 = *((unsigned int *)t201);
    t205 = *((unsigned int *)t202);
    t206 = (t204 | t205);
    *((unsigned int *)t203) = t206;
    t207 = *((unsigned int *)t203);
    t208 = (t207 != 0);
    if (t208 == 1)
        goto LAB57;

LAB58:
LAB59:    goto LAB49;

LAB53:    *((unsigned int *)t189) = 1;
    goto LAB56;

LAB55:    t196 = (t189 + 4);
    *((unsigned int *)t189) = 1;
    *((unsigned int *)t196) = 1;
    goto LAB56;

LAB57:    t209 = *((unsigned int *)t197);
    t210 = *((unsigned int *)t203);
    *((unsigned int *)t197) = (t209 | t210);
    t211 = (t160 + 4);
    t212 = (t189 + 4);
    t213 = *((unsigned int *)t160);
    t214 = (~(t213));
    t215 = *((unsigned int *)t211);
    t216 = (~(t215));
    t217 = *((unsigned int *)t189);
    t218 = (~(t217));
    t219 = *((unsigned int *)t212);
    t220 = (~(t219));
    t221 = (t214 & t216);
    t222 = (t218 & t220);
    t223 = (~(t221));
    t224 = (~(t222));
    t225 = *((unsigned int *)t203);
    *((unsigned int *)t203) = (t225 & t223);
    t226 = *((unsigned int *)t203);
    *((unsigned int *)t203) = (t226 & t224);
    t227 = *((unsigned int *)t197);
    *((unsigned int *)t197) = (t227 & t223);
    t228 = *((unsigned int *)t197);
    *((unsigned int *)t197) = (t228 & t224);
    goto LAB59;

LAB60:    xsi_set_current_line(42, ng0);
    t235 = (t1 + 3960);
    t236 = (t235 + 56U);
    t237 = *((char **)t236);
    t238 = (t1 + 3800);
    t239 = (t238 + 56U);
    t240 = *((char **)t239);
    t241 = (t1 + 3640);
    t242 = (t241 + 56U);
    t243 = *((char **)t242);
    t244 = (t1 + 1480U);
    t245 = *((char **)t244);
    t244 = (t1 + 1640U);
    t246 = *((char **)t244);
    t244 = (t1 + 1960U);
    t247 = *((char **)t244);
    t244 = (t1 + 1800U);
    t248 = *((char **)t244);
    t244 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 8, t244, (char)119, t237, 32, (char)118, t240, 4, (char)118, t243, 12, (char)118, t245, 8, (char)118, t246, 1, (char)118, t247, 8, (char)118, t248, 4);
    goto LAB62;

}

static void Initial_34_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(34, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 2360);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_35_1(char *t0)
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

LAB0:    t1 = (t0 + 5120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 4928);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 2360);
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
    t24 = (t0 + 2360);
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

static void Initial_54_2(char *t0)
{
    char t4[8];
    char t5[8];
    char t36[8];
    char t37[8];
    char t43[8];
    char t68[8];
    char t81[8];
    char t84[8];
    char t92[8];
    char t122[8];
    char t136[8];
    char t139[8];
    char t147[8];
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
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    char *t82;
    char *t83;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t129;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    char *t135;
    char *t137;
    char *t138;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    char *t151;
    char *t152;
    char *t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    char *t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;

LAB0:    t1 = (t0 + 5368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);

LAB4:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2680);
    t6 = (t0 + 2680);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2680);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng6)));
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

LAB6:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2840);
    t6 = (t0 + 2840);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2840);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng6)));
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

LAB8:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3000);
    t6 = (t0 + 3000);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3000);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng6)));
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

LAB10:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3160);
    t6 = (t0 + 3160);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3160);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng6)));
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

LAB12:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2680);
    t6 = (t0 + 2680);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2680);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng4)));
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

LAB14:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2840);
    t6 = (t0 + 2840);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2840);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng4)));
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

LAB16:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3000);
    t6 = (t0 + 3000);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3000);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng4)));
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

LAB18:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3160);
    t6 = (t0 + 3160);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3160);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng4)));
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

LAB20:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2680);
    t6 = (t0 + 2680);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2680);
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
        goto LAB21;

LAB22:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2840);
    t6 = (t0 + 2840);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2840);
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
        goto LAB23;

LAB24:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3000);
    t6 = (t0 + 3000);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3000);
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
        goto LAB25;

LAB26:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3160);
    t6 = (t0 + 3160);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3160);
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
        goto LAB27;

LAB28:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2680);
    t6 = (t0 + 2680);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2680);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng12)));
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

LAB30:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2840);
    t6 = (t0 + 2840);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2840);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng12)));
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

LAB32:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3000);
    t6 = (t0 + 3000);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3000);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng12)));
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

LAB34:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 3160);
    t6 = (t0 + 3160);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3160);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng12)));
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

LAB36:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2680);
    t6 = (t0 + 2680);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2680);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng14)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB37;

LAB38:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2840);
    t6 = (t0 + 2840);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2840);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng14)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB39;

LAB40:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3000);
    t6 = (t0 + 3000);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3000);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng14)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB41;

LAB42:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 3160);
    t6 = (t0 + 3160);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3160);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng14)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB43;

LAB44:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2680);
    t6 = (t0 + 2680);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2680);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng16)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB45;

LAB46:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2840);
    t6 = (t0 + 2840);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2840);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng16)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB47;

LAB48:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3000);
    t6 = (t0 + 3000);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3000);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng16)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB49;

LAB50:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3160);
    t6 = (t0 + 3160);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3160);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng16)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB51;

LAB52:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 2680);
    t6 = (t0 + 2680);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2680);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng19)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB53;

LAB54:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2840);
    t6 = (t0 + 2840);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2840);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng19)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB55;

LAB56:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3000);
    t6 = (t0 + 3000);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3000);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng19)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB57;

LAB58:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 3160);
    t6 = (t0 + 3160);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3160);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng19)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB59;

LAB60:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 2680);
    t6 = (t0 + 2680);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2680);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng22)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB61;

LAB62:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2840);
    t6 = (t0 + 2840);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2840);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng22)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB63;

LAB64:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3000);
    t6 = (t0 + 3000);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3000);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng22)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB65;

LAB66:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 3160);
    t6 = (t0 + 3160);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3160);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng22)));
    xsi_vlog_generic_convert_array_indices(t4, t5, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = (t5 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (!(t17));
    t19 = (t15 && t18);
    if (t19 == 1)
        goto LAB67;

LAB68:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 2680);
    t6 = (t0 + 2680);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2680);
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
        goto LAB69;

LAB70:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2840);
    t6 = (t0 + 2840);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2840);
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
        goto LAB71;

LAB72:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 3000);
    t6 = (t0 + 3000);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3000);
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
        goto LAB73;

LAB74:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 3160);
    t6 = (t0 + 3160);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3160);
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
        goto LAB75;

LAB76:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2680);
    t6 = (t0 + 2680);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2680);
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
        goto LAB77;

LAB78:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2840);
    t6 = (t0 + 2840);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2840);
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
        goto LAB79;

LAB80:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 3000);
    t6 = (t0 + 3000);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3000);
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
        goto LAB81;

LAB82:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng27)));
    t3 = (t0 + 3160);
    t6 = (t0 + 3160);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3160);
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
        goto LAB83;

LAB84:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 2680);
    t6 = (t0 + 2680);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2680);
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
        goto LAB85;

LAB86:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2840);
    t6 = (t0 + 2840);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2840);
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
        goto LAB87;

LAB88:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 3000);
    t6 = (t0 + 3000);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3000);
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
        goto LAB89;

LAB90:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng29)));
    t3 = (t0 + 3160);
    t6 = (t0 + 3160);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 3160);
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
        goto LAB91;

LAB92:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 5688);
    *((int *)t2) = 1;
    t3 = (t0 + 5400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB93;

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

LAB37:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB38;

LAB39:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB40;

LAB41:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB42;

LAB43:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB44;

LAB45:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB46;

LAB47:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB48;

LAB49:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB50;

LAB51:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB52;

LAB53:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB54;

LAB55:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB56;

LAB57:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB58;

LAB59:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB60;

LAB61:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB62;

LAB63:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB64;

LAB65:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB66;

LAB67:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB68;

LAB69:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB70;

LAB71:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB72;

LAB73:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB74;

LAB75:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB76;

LAB77:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB78;

LAB79:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB80;

LAB81:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB82;

LAB83:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB84;

LAB85:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB86;

LAB87:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB88;

LAB89:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB90;

LAB91:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t5);
    t22 = (t20 - t21);
    t23 = (t22 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t5), t23);
    goto LAB92;

LAB93:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 5176);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB94;
    goto LAB1;

LAB94:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3800);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3640);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 5176);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t3, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 3960);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 32);

LAB97:    t9 = (t0 + 5272);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t16 = *((char **)t13);
    t24 = (t16 + 0U);
    t25 = *((char **)t24);
    t15 = ((int  (*)(char *, char *))t25)(t0, t10);

LAB99:    if (t15 != 0)
        goto LAB100;

LAB95:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB96:    t26 = (t0 + 5272);
    t27 = *((char **)t26);
    t26 = (t0 + 848);
    t28 = (t0 + 5176);
    t29 = 0;
    xsi_delete_subprogram_invocation(t26, t27, t0, t28, t29);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3480);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB101:    t2 = (t0 + 3480);
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
    t30 = (t21 != 0);
    if (t30 > 0)
        goto LAB102;

LAB103:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng21)));
    memset(t4, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB116;

LAB114:    t6 = (t3 + 4);
    t7 = (t2 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB116;

LAB115:    *((unsigned int *)t4) = 1;

LAB116:    memset(t5, 0, 8);
    t8 = (t4 + 4);
    t14 = *((unsigned int *)t8);
    t17 = (~(t14));
    t20 = *((unsigned int *)t4);
    t21 = (t20 & t17);
    t30 = (t21 & 1U);
    if (t30 != 0)
        goto LAB117;

LAB118:    if (*((unsigned int *)t8) != 0)
        goto LAB119;

LAB120:    t10 = (t5 + 4);
    t33 = *((unsigned int *)t5);
    t34 = *((unsigned int *)t10);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB121;

LAB122:    memcpy(t43, t5, 8);

LAB123:    memset(t68, 0, 8);
    t32 = (t43 + 4);
    t69 = *((unsigned int *)t32);
    t70 = (~(t69));
    t71 = *((unsigned int *)t43);
    t72 = (t71 & t70);
    t73 = (t72 & 1U);
    if (t73 != 0)
        goto LAB134;

LAB135:    if (*((unsigned int *)t32) != 0)
        goto LAB136;

LAB137:    t75 = (t68 + 4);
    t76 = *((unsigned int *)t68);
    t77 = *((unsigned int *)t75);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB138;

LAB139:    memcpy(t92, t68, 8);

LAB140:    memset(t122, 0, 8);
    t123 = (t92 + 4);
    t124 = *((unsigned int *)t123);
    t125 = (~(t124));
    t126 = *((unsigned int *)t92);
    t127 = (t126 & t125);
    t128 = (t127 & 1U);
    if (t128 != 0)
        goto LAB151;

LAB152:    if (*((unsigned int *)t123) != 0)
        goto LAB153;

LAB154:    t130 = (t122 + 4);
    t131 = *((unsigned int *)t122);
    t132 = *((unsigned int *)t130);
    t133 = (t131 || t132);
    if (t133 > 0)
        goto LAB155;

LAB156:    memcpy(t147, t122, 8);

LAB157:    t178 = (t147 + 4);
    t179 = *((unsigned int *)t178);
    t180 = (~(t179));
    t181 = *((unsigned int *)t147);
    t182 = (t181 & t180);
    t183 = (t182 != 0);
    if (t183 > 0)
        goto LAB168;

LAB169:    xsi_set_current_line(88, ng0);

LAB171:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = (t0 + 1960U);
    t6 = *((char **)t2);
    t2 = (t0 + 1640U);
    t7 = *((char **)t2);
    t2 = (t0 + 1800U);
    t8 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng31, 5, t0, (char)118, t3, 8, (char)118, t6, 8, (char)118, t7, 1, (char)118, t8, 4);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t7, 32);
    t8 = (t0 + 3320);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 32);

LAB170:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 5736);
    *((int *)t2) = 1;
    t3 = (t0 + 5400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB172;
    goto LAB1;

LAB98:;
LAB100:    t9 = (t0 + 5368U);
    *((char **)t9) = &&LAB97;
    goto LAB1;

LAB102:    xsi_set_current_line(78, ng0);

LAB104:    xsi_set_current_line(79, ng0);
    t9 = (t0 + 5704);
    *((int *)t9) = 1;
    t10 = (t0 + 5400);
    *((char **)t10) = t9;
    *((char **)t1) = &&LAB105;
    goto LAB1;

LAB105:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 7632);
    t3 = *((char **)t2);
    t6 = ((((char*)(t3))) + 40U);
    t7 = *((char **)t6);
    t6 = (t0 + 3640);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 12);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1800U);
    t3 = *((char **)t2);
    t2 = (t0 + 3800);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 5720);
    *((int *)t2) = 1;
    t3 = (t0 + 5400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB106;
    goto LAB1;

LAB106:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 5176);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB107;
    goto LAB1;

LAB107:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3480);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t0 + 5176);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 3960);
    xsi_vlogvar_assign_value(t10, t6, 0, 0, 32);

LAB110:    t11 = (t0 + 5272);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t16 = *((char **)t13);
    t24 = (t16 + 272U);
    t25 = *((char **)t24);
    t26 = (t25 + 0U);
    t27 = *((char **)t26);
    t15 = ((int  (*)(char *, char *))t27)(t0, t12);

LAB112:    if (t15 != 0)
        goto LAB113;

LAB108:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB109:    t28 = (t0 + 5272);
    t29 = *((char **)t28);
    t28 = (t0 + 848);
    t31 = (t0 + 5176);
    t32 = 0;
    xsi_delete_subprogram_invocation(t28, t29, t0, t31, t32);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3480);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t7, 32);
    t8 = (t0 + 3480);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 32);
    goto LAB101;

LAB111:;
LAB113:    t11 = (t0 + 5368U);
    *((char **)t11) = &&LAB110;
    goto LAB1;

LAB117:    *((unsigned int *)t5) = 1;
    goto LAB120;

LAB119:    t9 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB120;

LAB121:    t11 = (t0 + 1960U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng21)));
    memset(t36, 0, 8);
    if (*((unsigned int *)t12) != *((unsigned int *)t11))
        goto LAB126;

LAB124:    t13 = (t12 + 4);
    t16 = (t11 + 4);
    if (*((unsigned int *)t13) != *((unsigned int *)t16))
        goto LAB126;

LAB125:    *((unsigned int *)t36) = 1;

LAB126:    memset(t37, 0, 8);
    t24 = (t36 + 4);
    t38 = *((unsigned int *)t24);
    t39 = (~(t38));
    t40 = *((unsigned int *)t36);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB127;

LAB128:    if (*((unsigned int *)t24) != 0)
        goto LAB129;

LAB130:    t44 = *((unsigned int *)t5);
    t45 = *((unsigned int *)t37);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t26 = (t5 + 4);
    t27 = (t37 + 4);
    t28 = (t43 + 4);
    t47 = *((unsigned int *)t26);
    t48 = *((unsigned int *)t27);
    t49 = (t47 | t48);
    *((unsigned int *)t28) = t49;
    t50 = *((unsigned int *)t28);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB131;

LAB132:
LAB133:    goto LAB123;

LAB127:    *((unsigned int *)t37) = 1;
    goto LAB130;

LAB129:    t25 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB130;

LAB131:    t52 = *((unsigned int *)t43);
    t53 = *((unsigned int *)t28);
    *((unsigned int *)t43) = (t52 | t53);
    t29 = (t5 + 4);
    t31 = (t37 + 4);
    t54 = *((unsigned int *)t5);
    t55 = (~(t54));
    t56 = *((unsigned int *)t29);
    t57 = (~(t56));
    t58 = *((unsigned int *)t37);
    t59 = (~(t58));
    t60 = *((unsigned int *)t31);
    t61 = (~(t60));
    t15 = (t55 & t57);
    t18 = (t59 & t61);
    t62 = (~(t15));
    t63 = (~(t18));
    t64 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t64 & t62);
    t65 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t65 & t63);
    t66 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t66 & t62);
    t67 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t67 & t63);
    goto LAB133;

LAB134:    *((unsigned int *)t68) = 1;
    goto LAB137;

LAB136:    t74 = (t68 + 4);
    *((unsigned int *)t68) = 1;
    *((unsigned int *)t74) = 1;
    goto LAB137;

LAB138:    t79 = (t0 + 1640U);
    t80 = *((char **)t79);
    t79 = ((char*)((ng5)));
    memset(t81, 0, 8);
    if (*((unsigned int *)t80) != *((unsigned int *)t79))
        goto LAB143;

LAB141:    t82 = (t80 + 4);
    t83 = (t79 + 4);
    if (*((unsigned int *)t82) != *((unsigned int *)t83))
        goto LAB143;

LAB142:    *((unsigned int *)t81) = 1;

LAB143:    memset(t84, 0, 8);
    t85 = (t81 + 4);
    t86 = *((unsigned int *)t85);
    t87 = (~(t86));
    t88 = *((unsigned int *)t81);
    t89 = (t88 & t87);
    t90 = (t89 & 1U);
    if (t90 != 0)
        goto LAB144;

LAB145:    if (*((unsigned int *)t85) != 0)
        goto LAB146;

LAB147:    t93 = *((unsigned int *)t68);
    t94 = *((unsigned int *)t84);
    t95 = (t93 & t94);
    *((unsigned int *)t92) = t95;
    t96 = (t68 + 4);
    t97 = (t84 + 4);
    t98 = (t92 + 4);
    t99 = *((unsigned int *)t96);
    t100 = *((unsigned int *)t97);
    t101 = (t99 | t100);
    *((unsigned int *)t98) = t101;
    t102 = *((unsigned int *)t98);
    t103 = (t102 != 0);
    if (t103 == 1)
        goto LAB148;

LAB149:
LAB150:    goto LAB140;

LAB144:    *((unsigned int *)t84) = 1;
    goto LAB147;

LAB146:    t91 = (t84 + 4);
    *((unsigned int *)t84) = 1;
    *((unsigned int *)t91) = 1;
    goto LAB147;

LAB148:    t104 = *((unsigned int *)t92);
    t105 = *((unsigned int *)t98);
    *((unsigned int *)t92) = (t104 | t105);
    t106 = (t68 + 4);
    t107 = (t84 + 4);
    t108 = *((unsigned int *)t68);
    t109 = (~(t108));
    t110 = *((unsigned int *)t106);
    t111 = (~(t110));
    t112 = *((unsigned int *)t84);
    t113 = (~(t112));
    t114 = *((unsigned int *)t107);
    t115 = (~(t114));
    t19 = (t109 & t111);
    t22 = (t113 & t115);
    t116 = (~(t19));
    t117 = (~(t22));
    t118 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t118 & t116);
    t119 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t119 & t117);
    t120 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t120 & t116);
    t121 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t121 & t117);
    goto LAB150;

LAB151:    *((unsigned int *)t122) = 1;
    goto LAB154;

LAB153:    t129 = (t122 + 4);
    *((unsigned int *)t122) = 1;
    *((unsigned int *)t129) = 1;
    goto LAB154;

LAB155:    t134 = (t0 + 1800U);
    t135 = *((char **)t134);
    t134 = ((char*)((ng29)));
    memset(t136, 0, 8);
    if (*((unsigned int *)t135) != *((unsigned int *)t134))
        goto LAB160;

LAB158:    t137 = (t135 + 4);
    t138 = (t134 + 4);
    if (*((unsigned int *)t137) != *((unsigned int *)t138))
        goto LAB160;

LAB159:    *((unsigned int *)t136) = 1;

LAB160:    memset(t139, 0, 8);
    t140 = (t136 + 4);
    t141 = *((unsigned int *)t140);
    t142 = (~(t141));
    t143 = *((unsigned int *)t136);
    t144 = (t143 & t142);
    t145 = (t144 & 1U);
    if (t145 != 0)
        goto LAB161;

LAB162:    if (*((unsigned int *)t140) != 0)
        goto LAB163;

LAB164:    t148 = *((unsigned int *)t122);
    t149 = *((unsigned int *)t139);
    t150 = (t148 & t149);
    *((unsigned int *)t147) = t150;
    t151 = (t122 + 4);
    t152 = (t139 + 4);
    t153 = (t147 + 4);
    t154 = *((unsigned int *)t151);
    t155 = *((unsigned int *)t152);
    t156 = (t154 | t155);
    *((unsigned int *)t153) = t156;
    t157 = *((unsigned int *)t153);
    t158 = (t157 != 0);
    if (t158 == 1)
        goto LAB165;

LAB166:
LAB167:    goto LAB157;

LAB161:    *((unsigned int *)t139) = 1;
    goto LAB164;

LAB163:    t146 = (t139 + 4);
    *((unsigned int *)t139) = 1;
    *((unsigned int *)t146) = 1;
    goto LAB164;

LAB165:    t159 = *((unsigned int *)t147);
    t160 = *((unsigned int *)t153);
    *((unsigned int *)t147) = (t159 | t160);
    t161 = (t122 + 4);
    t162 = (t139 + 4);
    t163 = *((unsigned int *)t122);
    t164 = (~(t163));
    t165 = *((unsigned int *)t161);
    t166 = (~(t165));
    t167 = *((unsigned int *)t139);
    t168 = (~(t167));
    t169 = *((unsigned int *)t162);
    t170 = (~(t169));
    t23 = (t164 & t166);
    t171 = (t168 & t170);
    t172 = (~(t23));
    t173 = (~(t171));
    t174 = *((unsigned int *)t153);
    *((unsigned int *)t153) = (t174 & t172);
    t175 = *((unsigned int *)t153);
    *((unsigned int *)t153) = (t175 & t173);
    t176 = *((unsigned int *)t147);
    *((unsigned int *)t147) = (t176 & t172);
    t177 = *((unsigned int *)t147);
    *((unsigned int *)t147) = (t177 & t173);
    goto LAB167;

LAB168:    xsi_set_current_line(87, ng0);
    xsi_vlogfile_write(1, 0, 0, ng30, 1, t0);
    goto LAB170;

LAB172:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 5176);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB173;
    goto LAB1;

LAB173:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng21)));
    memset(t4, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB176;

LAB174:    t6 = (t3 + 4);
    t7 = (t2 + 4);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB176;

LAB175:    *((unsigned int *)t4) = 1;

LAB176:    memset(t5, 0, 8);
    t8 = (t4 + 4);
    t14 = *((unsigned int *)t8);
    t17 = (~(t14));
    t20 = *((unsigned int *)t4);
    t21 = (t20 & t17);
    t30 = (t21 & 1U);
    if (t30 != 0)
        goto LAB177;

LAB178:    if (*((unsigned int *)t8) != 0)
        goto LAB179;

LAB180:    t10 = (t5 + 4);
    t33 = *((unsigned int *)t5);
    t34 = *((unsigned int *)t10);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB181;

LAB182:    memcpy(t43, t5, 8);

LAB183:    memset(t68, 0, 8);
    t32 = (t43 + 4);
    t69 = *((unsigned int *)t32);
    t70 = (~(t69));
    t71 = *((unsigned int *)t43);
    t72 = (t71 & t70);
    t73 = (t72 & 1U);
    if (t73 != 0)
        goto LAB194;

LAB195:    if (*((unsigned int *)t32) != 0)
        goto LAB196;

LAB197:    t75 = (t68 + 4);
    t76 = *((unsigned int *)t68);
    t77 = *((unsigned int *)t75);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB198;

LAB199:    memcpy(t92, t68, 8);

LAB200:    memset(t122, 0, 8);
    t123 = (t92 + 4);
    t124 = *((unsigned int *)t123);
    t125 = (~(t124));
    t126 = *((unsigned int *)t92);
    t127 = (t126 & t125);
    t128 = (t127 & 1U);
    if (t128 != 0)
        goto LAB211;

LAB212:    if (*((unsigned int *)t123) != 0)
        goto LAB213;

LAB214:    t130 = (t122 + 4);
    t131 = *((unsigned int *)t122);
    t132 = *((unsigned int *)t130);
    t133 = (t131 || t132);
    if (t133 > 0)
        goto LAB215;

LAB216:    memcpy(t147, t122, 8);

LAB217:    t178 = (t147 + 4);
    t179 = *((unsigned int *)t178);
    t180 = (~(t179));
    t181 = *((unsigned int *)t147);
    t182 = (t181 & t180);
    t183 = (t182 != 0);
    if (t183 > 0)
        goto LAB228;

LAB229:    xsi_set_current_line(97, ng0);

LAB231:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = (t0 + 1960U);
    t6 = *((char **)t2);
    t2 = (t0 + 1640U);
    t7 = *((char **)t2);
    t2 = (t0 + 1800U);
    t8 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng34, 5, t0, (char)118, t3, 8, (char)118, t6, 8, (char)118, t7, 1, (char)118, t8, 4);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t7, 32);
    t8 = (t0 + 3320);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 32);

LAB230:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = ((char*)((ng6)));
    memset(t4, 0, 8);
    xsi_vlog_signed_equal(t4, 32, t6, 32, t7, 32);
    t8 = (t4 + 4);
    t14 = *((unsigned int *)t8);
    t17 = (~(t14));
    t20 = *((unsigned int *)t4);
    t21 = (t20 & t17);
    t30 = (t21 != 0);
    if (t30 > 0)
        goto LAB232;

LAB233:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng36, 2, t0, (char)119, t6, 32);

LAB234:    xsi_set_current_line(107, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB177:    *((unsigned int *)t5) = 1;
    goto LAB180;

LAB179:    t9 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB180;

LAB181:    t11 = (t0 + 1960U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng21)));
    memset(t36, 0, 8);
    if (*((unsigned int *)t12) != *((unsigned int *)t11))
        goto LAB186;

LAB184:    t13 = (t12 + 4);
    t16 = (t11 + 4);
    if (*((unsigned int *)t13) != *((unsigned int *)t16))
        goto LAB186;

LAB185:    *((unsigned int *)t36) = 1;

LAB186:    memset(t37, 0, 8);
    t24 = (t36 + 4);
    t38 = *((unsigned int *)t24);
    t39 = (~(t38));
    t40 = *((unsigned int *)t36);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB187;

LAB188:    if (*((unsigned int *)t24) != 0)
        goto LAB189;

LAB190:    t44 = *((unsigned int *)t5);
    t45 = *((unsigned int *)t37);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t26 = (t5 + 4);
    t27 = (t37 + 4);
    t28 = (t43 + 4);
    t47 = *((unsigned int *)t26);
    t48 = *((unsigned int *)t27);
    t49 = (t47 | t48);
    *((unsigned int *)t28) = t49;
    t50 = *((unsigned int *)t28);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB191;

LAB192:
LAB193:    goto LAB183;

LAB187:    *((unsigned int *)t37) = 1;
    goto LAB190;

LAB189:    t25 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB190;

LAB191:    t52 = *((unsigned int *)t43);
    t53 = *((unsigned int *)t28);
    *((unsigned int *)t43) = (t52 | t53);
    t29 = (t5 + 4);
    t31 = (t37 + 4);
    t54 = *((unsigned int *)t5);
    t55 = (~(t54));
    t56 = *((unsigned int *)t29);
    t57 = (~(t56));
    t58 = *((unsigned int *)t37);
    t59 = (~(t58));
    t60 = *((unsigned int *)t31);
    t61 = (~(t60));
    t15 = (t55 & t57);
    t18 = (t59 & t61);
    t62 = (~(t15));
    t63 = (~(t18));
    t64 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t64 & t62);
    t65 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t65 & t63);
    t66 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t66 & t62);
    t67 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t67 & t63);
    goto LAB193;

LAB194:    *((unsigned int *)t68) = 1;
    goto LAB197;

LAB196:    t74 = (t68 + 4);
    *((unsigned int *)t68) = 1;
    *((unsigned int *)t74) = 1;
    goto LAB197;

LAB198:    t79 = (t0 + 1640U);
    t80 = *((char **)t79);
    t79 = ((char*)((ng5)));
    memset(t81, 0, 8);
    if (*((unsigned int *)t80) != *((unsigned int *)t79))
        goto LAB203;

LAB201:    t82 = (t80 + 4);
    t83 = (t79 + 4);
    if (*((unsigned int *)t82) != *((unsigned int *)t83))
        goto LAB203;

LAB202:    *((unsigned int *)t81) = 1;

LAB203:    memset(t84, 0, 8);
    t85 = (t81 + 4);
    t86 = *((unsigned int *)t85);
    t87 = (~(t86));
    t88 = *((unsigned int *)t81);
    t89 = (t88 & t87);
    t90 = (t89 & 1U);
    if (t90 != 0)
        goto LAB204;

LAB205:    if (*((unsigned int *)t85) != 0)
        goto LAB206;

LAB207:    t93 = *((unsigned int *)t68);
    t94 = *((unsigned int *)t84);
    t95 = (t93 & t94);
    *((unsigned int *)t92) = t95;
    t96 = (t68 + 4);
    t97 = (t84 + 4);
    t98 = (t92 + 4);
    t99 = *((unsigned int *)t96);
    t100 = *((unsigned int *)t97);
    t101 = (t99 | t100);
    *((unsigned int *)t98) = t101;
    t102 = *((unsigned int *)t98);
    t103 = (t102 != 0);
    if (t103 == 1)
        goto LAB208;

LAB209:
LAB210:    goto LAB200;

LAB204:    *((unsigned int *)t84) = 1;
    goto LAB207;

LAB206:    t91 = (t84 + 4);
    *((unsigned int *)t84) = 1;
    *((unsigned int *)t91) = 1;
    goto LAB207;

LAB208:    t104 = *((unsigned int *)t92);
    t105 = *((unsigned int *)t98);
    *((unsigned int *)t92) = (t104 | t105);
    t106 = (t68 + 4);
    t107 = (t84 + 4);
    t108 = *((unsigned int *)t68);
    t109 = (~(t108));
    t110 = *((unsigned int *)t106);
    t111 = (~(t110));
    t112 = *((unsigned int *)t84);
    t113 = (~(t112));
    t114 = *((unsigned int *)t107);
    t115 = (~(t114));
    t19 = (t109 & t111);
    t22 = (t113 & t115);
    t116 = (~(t19));
    t117 = (~(t22));
    t118 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t118 & t116);
    t119 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t119 & t117);
    t120 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t120 & t116);
    t121 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t121 & t117);
    goto LAB210;

LAB211:    *((unsigned int *)t122) = 1;
    goto LAB214;

LAB213:    t129 = (t122 + 4);
    *((unsigned int *)t122) = 1;
    *((unsigned int *)t129) = 1;
    goto LAB214;

LAB215:    t134 = (t0 + 1800U);
    t135 = *((char **)t134);
    t134 = ((char*)((ng32)));
    memset(t136, 0, 8);
    if (*((unsigned int *)t135) != *((unsigned int *)t134))
        goto LAB220;

LAB218:    t137 = (t135 + 4);
    t138 = (t134 + 4);
    if (*((unsigned int *)t137) != *((unsigned int *)t138))
        goto LAB220;

LAB219:    *((unsigned int *)t136) = 1;

LAB220:    memset(t139, 0, 8);
    t140 = (t136 + 4);
    t141 = *((unsigned int *)t140);
    t142 = (~(t141));
    t143 = *((unsigned int *)t136);
    t144 = (t143 & t142);
    t145 = (t144 & 1U);
    if (t145 != 0)
        goto LAB221;

LAB222:    if (*((unsigned int *)t140) != 0)
        goto LAB223;

LAB224:    t148 = *((unsigned int *)t122);
    t149 = *((unsigned int *)t139);
    t150 = (t148 & t149);
    *((unsigned int *)t147) = t150;
    t151 = (t122 + 4);
    t152 = (t139 + 4);
    t153 = (t147 + 4);
    t154 = *((unsigned int *)t151);
    t155 = *((unsigned int *)t152);
    t156 = (t154 | t155);
    *((unsigned int *)t153) = t156;
    t157 = *((unsigned int *)t153);
    t158 = (t157 != 0);
    if (t158 == 1)
        goto LAB225;

LAB226:
LAB227:    goto LAB217;

LAB221:    *((unsigned int *)t139) = 1;
    goto LAB224;

LAB223:    t146 = (t139 + 4);
    *((unsigned int *)t139) = 1;
    *((unsigned int *)t146) = 1;
    goto LAB224;

LAB225:    t159 = *((unsigned int *)t147);
    t160 = *((unsigned int *)t153);
    *((unsigned int *)t147) = (t159 | t160);
    t161 = (t122 + 4);
    t162 = (t139 + 4);
    t163 = *((unsigned int *)t122);
    t164 = (~(t163));
    t165 = *((unsigned int *)t161);
    t166 = (~(t165));
    t167 = *((unsigned int *)t139);
    t168 = (~(t167));
    t169 = *((unsigned int *)t162);
    t170 = (~(t169));
    t23 = (t164 & t166);
    t171 = (t168 & t170);
    t172 = (~(t23));
    t173 = (~(t171));
    t174 = *((unsigned int *)t153);
    *((unsigned int *)t153) = (t174 & t172);
    t175 = *((unsigned int *)t153);
    *((unsigned int *)t153) = (t175 & t173);
    t176 = *((unsigned int *)t147);
    *((unsigned int *)t147) = (t176 & t172);
    t177 = *((unsigned int *)t147);
    *((unsigned int *)t147) = (t177 & t173);
    goto LAB227;

LAB228:    xsi_set_current_line(96, ng0);
    xsi_vlogfile_write(1, 0, 0, ng33, 1, t0);
    goto LAB230;

LAB232:    xsi_set_current_line(103, ng0);
    xsi_vlogfile_write(1, 0, 0, ng35, 1, t0);
    goto LAB234;

}


extern void work_m_06126303625941415049_1912994691_init()
{
	static char *pe[] = {(void *)Initial_34_0,(void *)Always_35_1,(void *)Initial_54_2};
	static char *se[] = {(void *)sp_check_cycle};
	xsi_register_didat("work_m_06126303625941415049_1912994691", "isim/cpu_tb_isim_beh.exe.sim/work/m_06126303625941415049_1912994691.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
