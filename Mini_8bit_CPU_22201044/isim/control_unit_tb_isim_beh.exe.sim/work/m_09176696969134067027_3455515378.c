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
static const char *ng0 = "/home/ise/xilinix/Mini_8bit_CPU_22201044/control_unit_tb.v";
static const char *ng1 = "PASS  t=%0t  %0s : INSTR=%h ACC_WE=%b R_WE=%b Z_WE=%b ALU_OP=%b SRC=%b IMM=%h";
static const char *ng2 = "FAIL  t=%0t  %0s : INSTR=%h ACC_WE=%b R_WE=%b Z_WE=%b ALU_OP=%b SRC=%b IMM=%h";
static const char *ng3 = "      expected          : ACC_WE=%b R_WE=%b Z_WE=%b ALU_OP=%b SRC=%b IMM=%h";
static int ng4[] = {1, 0};
static const char *ng5 = "t=%0t INSTR=%h | ACC_WE=%b R_WE=%b Z_WE=%b ALU_OP=%b SRC_SEL=%b IMM=%h";
static int ng6[] = {0, 0};
static unsigned int ng7[] = {286U, 0U};
static unsigned int ng8[] = {1U, 0U};
static int ng9[] = {813183301, 0, 1279543584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng10[] = {256U, 0U};
static int ng11[] = {813183024, 0, 1279543584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng12[] = {546U, 0U};
static unsigned int ng13[] = {0U, 0U};
static int ng14[] = {813183538, 0, 1094992928, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng15[] = {513U, 0U};
static int ng16[] = {813183025, 0, 1094992928, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng17[] = {1120U, 0U};
static int ng18[] = {813184560, 0, 1095648288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng19[] = {1039U, 0U};
static int ng20[] = {813183046, 0, 1095648288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng21[] = {2560U, 0U};
static int ng22[] = {5461057, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng23[] = {2816U, 0U};
static unsigned int ng24[] = {2U, 0U};
static int ng25[] = {4998226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng26[] = {808464432, 0, 1313820704, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng27[] = {2650U, 0U};
static int ng28[] = {1918987876, 0, 544174181, 0, 1786080875, 0, 1769236512, 0, 1413554295, 0, 83, 0, 0, 0};
static unsigned int ng29[] = {2876U, 0U};
static int ng30[] = {1918987876, 0, 544174181, 0, 1786080875, 0, 1769236512, 0, 1146232951, 0, 76, 0, 0, 0};
static int ng31[] = {15, 0};
static unsigned int ng32[] = {4U, 0U};
static unsigned int ng33[] = {10U, 0U};
static unsigned int ng34[] = {11U, 0U};
static unsigned int ng35[] = {165U, 0U};
static int ng36[] = {542003024, 0, 1684348989, 0, 1869636463, 0, 1952801824, 0, 1886416754, 0, 1970172789, 0, 0, 0};
static const char *ng37 = "=== control_unit_tb: ALL TESTS PASSED ===";
static const char *ng38 = "=== control_unit_tb: %0d TEST(S) FAILED ===";

void Monitor_58_1(char *);
void Monitor_58_1(char *);


static int sp_run_test(char *t1, char *t2)
{
    char t9[8];
    char t11[8];
    char t27[8];
    char t30[8];
    char t38[8];
    char t70[8];
    char t86[8];
    char t89[8];
    char t97[8];
    char t129[8];
    char t145[8];
    char t148[8];
    char t156[8];
    char t188[8];
    char t204[8];
    char t207[8];
    char t215[8];
    char t247[8];
    char t261[8];
    char t272[8];
    char t275[8];
    char t283[8];
    char t321[16];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t87;
    char *t88;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    int t121;
    int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    char *t142;
    char *t143;
    char *t144;
    char *t146;
    char *t147;
    char *t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    char *t155;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    char *t160;
    char *t161;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    char *t170;
    char *t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    int t180;
    int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    char *t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    char *t195;
    char *t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    char *t200;
    char *t201;
    char *t202;
    char *t203;
    char *t205;
    char *t206;
    char *t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    char *t214;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    char *t219;
    char *t220;
    char *t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    char *t229;
    char *t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    int t239;
    int t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    char *t248;
    unsigned int t249;
    unsigned int t250;
    unsigned int t251;
    unsigned int t252;
    unsigned int t253;
    char *t254;
    char *t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    char *t259;
    char *t260;
    char *t262;
    char *t263;
    char *t264;
    char *t265;
    unsigned int t266;
    unsigned int t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    unsigned int t271;
    char *t273;
    char *t274;
    char *t276;
    unsigned int t277;
    unsigned int t278;
    unsigned int t279;
    unsigned int t280;
    unsigned int t281;
    char *t282;
    unsigned int t284;
    unsigned int t285;
    unsigned int t286;
    char *t287;
    char *t288;
    char *t289;
    unsigned int t290;
    unsigned int t291;
    unsigned int t292;
    unsigned int t293;
    unsigned int t294;
    unsigned int t295;
    unsigned int t296;
    char *t297;
    char *t298;
    unsigned int t299;
    unsigned int t300;
    unsigned int t301;
    unsigned int t302;
    unsigned int t303;
    unsigned int t304;
    unsigned int t305;
    unsigned int t306;
    int t307;
    int t308;
    unsigned int t309;
    unsigned int t310;
    unsigned int t311;
    unsigned int t312;
    unsigned int t313;
    unsigned int t314;
    char *t315;
    unsigned int t316;
    unsigned int t317;
    unsigned int t318;
    unsigned int t319;
    unsigned int t320;
    char *t322;
    char *t323;
    char *t324;
    char *t325;
    char *t326;
    char *t327;
    char *t328;
    char *t329;
    char *t330;
    char *t331;
    char *t332;
    char *t333;
    char *t334;
    char *t335;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t5 = (t1 + 3320);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 2680);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 12);
    xsi_set_current_line(39, ng0);
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

LAB6:    xsi_set_current_line(40, ng0);
    t4 = (t1 + 1640U);
    t5 = *((char **)t4);
    t4 = (t1 + 3480);
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

LAB9:    memset(t11, 0, 8);
    t12 = (t9 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t9);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) != 0)
        goto LAB12;

LAB13:    t19 = (t11 + 4);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t19);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB14;

LAB15:    memcpy(t38, t11, 8);

LAB16:    memset(t70, 0, 8);
    t71 = (t38 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t38);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t71) != 0)
        goto LAB29;

LAB30:    t78 = (t70 + 4);
    t79 = *((unsigned int *)t70);
    t80 = *((unsigned int *)t78);
    t81 = (t79 || t80);
    if (t81 > 0)
        goto LAB31;

LAB32:    memcpy(t97, t70, 8);

LAB33:    memset(t129, 0, 8);
    t130 = (t97 + 4);
    t131 = *((unsigned int *)t130);
    t132 = (~(t131));
    t133 = *((unsigned int *)t97);
    t134 = (t133 & t132);
    t135 = (t134 & 1U);
    if (t135 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t130) != 0)
        goto LAB46;

LAB47:    t137 = (t129 + 4);
    t138 = *((unsigned int *)t129);
    t139 = *((unsigned int *)t137);
    t140 = (t138 || t139);
    if (t140 > 0)
        goto LAB48;

LAB49:    memcpy(t156, t129, 8);

LAB50:    memset(t188, 0, 8);
    t189 = (t156 + 4);
    t190 = *((unsigned int *)t189);
    t191 = (~(t190));
    t192 = *((unsigned int *)t156);
    t193 = (t192 & t191);
    t194 = (t193 & 1U);
    if (t194 != 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t189) != 0)
        goto LAB63;

LAB64:    t196 = (t188 + 4);
    t197 = *((unsigned int *)t188);
    t198 = *((unsigned int *)t196);
    t199 = (t197 || t198);
    if (t199 > 0)
        goto LAB65;

LAB66:    memcpy(t215, t188, 8);

LAB67:    memset(t247, 0, 8);
    t248 = (t215 + 4);
    t249 = *((unsigned int *)t248);
    t250 = (~(t249));
    t251 = *((unsigned int *)t215);
    t252 = (t251 & t250);
    t253 = (t252 & 1U);
    if (t253 != 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t248) != 0)
        goto LAB80;

LAB81:    t255 = (t247 + 4);
    t256 = *((unsigned int *)t247);
    t257 = *((unsigned int *)t255);
    t258 = (t256 || t257);
    if (t258 > 0)
        goto LAB82;

LAB83:    memcpy(t283, t247, 8);

LAB84:    t315 = (t283 + 4);
    t316 = *((unsigned int *)t315);
    t317 = (~(t316));
    t318 = *((unsigned int *)t283);
    t319 = (t318 & t317);
    t320 = (t319 != 0);
    if (t320 > 0)
        goto LAB95;

LAB96:    xsi_set_current_line(45, ng0);

LAB98:    xsi_set_current_line(47, ng0);
    t4 = xsi_vlog_time(t321, 1000.0000000000000, 1000.0000000000000);
    t5 = (t1 + 4280);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 2680);
    t10 = (t8 + 56U);
    t12 = *((char **)t10);
    t18 = (t1 + 1640U);
    t19 = *((char **)t18);
    t18 = (t1 + 1800U);
    t23 = *((char **)t18);
    t18 = (t1 + 1960U);
    t24 = *((char **)t18);
    t18 = (t1 + 2120U);
    t25 = *((char **)t18);
    t18 = (t1 + 2280U);
    t26 = *((char **)t18);
    t18 = (t1 + 1480U);
    t28 = *((char **)t18);
    t18 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng2, 10, t18, (char)118, t321, 64, (char)118, t7, 224, (char)118, t12, 12, (char)118, t19, 1, (char)118, t23, 1, (char)118, t24, 1, (char)118, t25, 1, (char)118, t26, 2, (char)118, t28, 8);
    xsi_set_current_line(49, ng0);
    t4 = (t1 + 3480);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3640);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    t12 = (t1 + 3800);
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    t23 = (t1 + 3960);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t1 + 4120);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t31 = (t1 + 3320);
    t37 = (t31 + 56U);
    t42 = *((char **)t37);
    memset(t9, 0, 8);
    t43 = (t9 + 4);
    t44 = (t42 + 4);
    t13 = *((unsigned int *)t42);
    t14 = (t13 >> 0);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t44);
    t16 = (t15 >> 0);
    *((unsigned int *)t43) = t16;
    t17 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t17 & 255U);
    t20 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t20 & 255U);
    t52 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng3, 7, t52, (char)118, t6, 1, (char)118, t10, 1, (char)118, t19, 1, (char)118, t25, 1, (char)118, t29, 2, (char)118, t9, 8);
    xsi_set_current_line(51, ng0);
    t4 = (t1 + 2840);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 2840);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);

LAB97:    goto LAB4;

LAB10:    *((unsigned int *)t11) = 1;
    goto LAB13;

LAB12:    t18 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB13;

LAB14:    t23 = (t1 + 1800U);
    t24 = *((char **)t23);
    t23 = (t1 + 3640);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    memset(t27, 0, 8);
    if (*((unsigned int *)t24) != *((unsigned int *)t26))
        goto LAB19;

LAB17:    t28 = (t24 + 4);
    t29 = (t26 + 4);
    if (*((unsigned int *)t28) != *((unsigned int *)t29))
        goto LAB19;

LAB18:    *((unsigned int *)t27) = 1;

LAB19:    memset(t30, 0, 8);
    t31 = (t27 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t27);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t31) != 0)
        goto LAB22;

LAB23:    t39 = *((unsigned int *)t11);
    t40 = *((unsigned int *)t30);
    t41 = (t39 & t40);
    *((unsigned int *)t38) = t41;
    t42 = (t11 + 4);
    t43 = (t30 + 4);
    t44 = (t38 + 4);
    t45 = *((unsigned int *)t42);
    t46 = *((unsigned int *)t43);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB16;

LAB20:    *((unsigned int *)t30) = 1;
    goto LAB23;

LAB22:    t37 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB23;

LAB24:    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t38) = (t50 | t51);
    t52 = (t11 + 4);
    t53 = (t30 + 4);
    t54 = *((unsigned int *)t11);
    t55 = (~(t54));
    t56 = *((unsigned int *)t52);
    t57 = (~(t56));
    t58 = *((unsigned int *)t30);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t66 & t64);
    t67 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t67 & t65);
    t68 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t68 & t64);
    t69 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t69 & t65);
    goto LAB26;

LAB27:    *((unsigned int *)t70) = 1;
    goto LAB30;

LAB29:    t77 = (t70 + 4);
    *((unsigned int *)t70) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB30;

LAB31:    t82 = (t1 + 1960U);
    t83 = *((char **)t82);
    t82 = (t1 + 3800);
    t84 = (t82 + 56U);
    t85 = *((char **)t84);
    memset(t86, 0, 8);
    if (*((unsigned int *)t83) != *((unsigned int *)t85))
        goto LAB36;

LAB34:    t87 = (t83 + 4);
    t88 = (t85 + 4);
    if (*((unsigned int *)t87) != *((unsigned int *)t88))
        goto LAB36;

LAB35:    *((unsigned int *)t86) = 1;

LAB36:    memset(t89, 0, 8);
    t90 = (t86 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t86);
    t94 = (t93 & t92);
    t95 = (t94 & 1U);
    if (t95 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t90) != 0)
        goto LAB39;

LAB40:    t98 = *((unsigned int *)t70);
    t99 = *((unsigned int *)t89);
    t100 = (t98 & t99);
    *((unsigned int *)t97) = t100;
    t101 = (t70 + 4);
    t102 = (t89 + 4);
    t103 = (t97 + 4);
    t104 = *((unsigned int *)t101);
    t105 = *((unsigned int *)t102);
    t106 = (t104 | t105);
    *((unsigned int *)t103) = t106;
    t107 = *((unsigned int *)t103);
    t108 = (t107 != 0);
    if (t108 == 1)
        goto LAB41;

LAB42:
LAB43:    goto LAB33;

LAB37:    *((unsigned int *)t89) = 1;
    goto LAB40;

LAB39:    t96 = (t89 + 4);
    *((unsigned int *)t89) = 1;
    *((unsigned int *)t96) = 1;
    goto LAB40;

LAB41:    t109 = *((unsigned int *)t97);
    t110 = *((unsigned int *)t103);
    *((unsigned int *)t97) = (t109 | t110);
    t111 = (t70 + 4);
    t112 = (t89 + 4);
    t113 = *((unsigned int *)t70);
    t114 = (~(t113));
    t115 = *((unsigned int *)t111);
    t116 = (~(t115));
    t117 = *((unsigned int *)t89);
    t118 = (~(t117));
    t119 = *((unsigned int *)t112);
    t120 = (~(t119));
    t121 = (t114 & t116);
    t122 = (t118 & t120);
    t123 = (~(t121));
    t124 = (~(t122));
    t125 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t125 & t123);
    t126 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t126 & t124);
    t127 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t127 & t123);
    t128 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t128 & t124);
    goto LAB43;

LAB44:    *((unsigned int *)t129) = 1;
    goto LAB47;

LAB46:    t136 = (t129 + 4);
    *((unsigned int *)t129) = 1;
    *((unsigned int *)t136) = 1;
    goto LAB47;

LAB48:    t141 = (t1 + 2120U);
    t142 = *((char **)t141);
    t141 = (t1 + 3960);
    t143 = (t141 + 56U);
    t144 = *((char **)t143);
    memset(t145, 0, 8);
    if (*((unsigned int *)t142) != *((unsigned int *)t144))
        goto LAB53;

LAB51:    t146 = (t142 + 4);
    t147 = (t144 + 4);
    if (*((unsigned int *)t146) != *((unsigned int *)t147))
        goto LAB53;

LAB52:    *((unsigned int *)t145) = 1;

LAB53:    memset(t148, 0, 8);
    t149 = (t145 + 4);
    t150 = *((unsigned int *)t149);
    t151 = (~(t150));
    t152 = *((unsigned int *)t145);
    t153 = (t152 & t151);
    t154 = (t153 & 1U);
    if (t154 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t149) != 0)
        goto LAB56;

LAB57:    t157 = *((unsigned int *)t129);
    t158 = *((unsigned int *)t148);
    t159 = (t157 & t158);
    *((unsigned int *)t156) = t159;
    t160 = (t129 + 4);
    t161 = (t148 + 4);
    t162 = (t156 + 4);
    t163 = *((unsigned int *)t160);
    t164 = *((unsigned int *)t161);
    t165 = (t163 | t164);
    *((unsigned int *)t162) = t165;
    t166 = *((unsigned int *)t162);
    t167 = (t166 != 0);
    if (t167 == 1)
        goto LAB58;

LAB59:
LAB60:    goto LAB50;

LAB54:    *((unsigned int *)t148) = 1;
    goto LAB57;

LAB56:    t155 = (t148 + 4);
    *((unsigned int *)t148) = 1;
    *((unsigned int *)t155) = 1;
    goto LAB57;

LAB58:    t168 = *((unsigned int *)t156);
    t169 = *((unsigned int *)t162);
    *((unsigned int *)t156) = (t168 | t169);
    t170 = (t129 + 4);
    t171 = (t148 + 4);
    t172 = *((unsigned int *)t129);
    t173 = (~(t172));
    t174 = *((unsigned int *)t170);
    t175 = (~(t174));
    t176 = *((unsigned int *)t148);
    t177 = (~(t176));
    t178 = *((unsigned int *)t171);
    t179 = (~(t178));
    t180 = (t173 & t175);
    t181 = (t177 & t179);
    t182 = (~(t180));
    t183 = (~(t181));
    t184 = *((unsigned int *)t162);
    *((unsigned int *)t162) = (t184 & t182);
    t185 = *((unsigned int *)t162);
    *((unsigned int *)t162) = (t185 & t183);
    t186 = *((unsigned int *)t156);
    *((unsigned int *)t156) = (t186 & t182);
    t187 = *((unsigned int *)t156);
    *((unsigned int *)t156) = (t187 & t183);
    goto LAB60;

LAB61:    *((unsigned int *)t188) = 1;
    goto LAB64;

LAB63:    t195 = (t188 + 4);
    *((unsigned int *)t188) = 1;
    *((unsigned int *)t195) = 1;
    goto LAB64;

LAB65:    t200 = (t1 + 2280U);
    t201 = *((char **)t200);
    t200 = (t1 + 4120);
    t202 = (t200 + 56U);
    t203 = *((char **)t202);
    memset(t204, 0, 8);
    if (*((unsigned int *)t201) != *((unsigned int *)t203))
        goto LAB70;

LAB68:    t205 = (t201 + 4);
    t206 = (t203 + 4);
    if (*((unsigned int *)t205) != *((unsigned int *)t206))
        goto LAB70;

LAB69:    *((unsigned int *)t204) = 1;

LAB70:    memset(t207, 0, 8);
    t208 = (t204 + 4);
    t209 = *((unsigned int *)t208);
    t210 = (~(t209));
    t211 = *((unsigned int *)t204);
    t212 = (t211 & t210);
    t213 = (t212 & 1U);
    if (t213 != 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t208) != 0)
        goto LAB73;

LAB74:    t216 = *((unsigned int *)t188);
    t217 = *((unsigned int *)t207);
    t218 = (t216 & t217);
    *((unsigned int *)t215) = t218;
    t219 = (t188 + 4);
    t220 = (t207 + 4);
    t221 = (t215 + 4);
    t222 = *((unsigned int *)t219);
    t223 = *((unsigned int *)t220);
    t224 = (t222 | t223);
    *((unsigned int *)t221) = t224;
    t225 = *((unsigned int *)t221);
    t226 = (t225 != 0);
    if (t226 == 1)
        goto LAB75;

LAB76:
LAB77:    goto LAB67;

LAB71:    *((unsigned int *)t207) = 1;
    goto LAB74;

LAB73:    t214 = (t207 + 4);
    *((unsigned int *)t207) = 1;
    *((unsigned int *)t214) = 1;
    goto LAB74;

LAB75:    t227 = *((unsigned int *)t215);
    t228 = *((unsigned int *)t221);
    *((unsigned int *)t215) = (t227 | t228);
    t229 = (t188 + 4);
    t230 = (t207 + 4);
    t231 = *((unsigned int *)t188);
    t232 = (~(t231));
    t233 = *((unsigned int *)t229);
    t234 = (~(t233));
    t235 = *((unsigned int *)t207);
    t236 = (~(t235));
    t237 = *((unsigned int *)t230);
    t238 = (~(t237));
    t239 = (t232 & t234);
    t240 = (t236 & t238);
    t241 = (~(t239));
    t242 = (~(t240));
    t243 = *((unsigned int *)t221);
    *((unsigned int *)t221) = (t243 & t241);
    t244 = *((unsigned int *)t221);
    *((unsigned int *)t221) = (t244 & t242);
    t245 = *((unsigned int *)t215);
    *((unsigned int *)t215) = (t245 & t241);
    t246 = *((unsigned int *)t215);
    *((unsigned int *)t215) = (t246 & t242);
    goto LAB77;

LAB78:    *((unsigned int *)t247) = 1;
    goto LAB81;

LAB80:    t254 = (t247 + 4);
    *((unsigned int *)t247) = 1;
    *((unsigned int *)t254) = 1;
    goto LAB81;

LAB82:    t259 = (t1 + 1480U);
    t260 = *((char **)t259);
    t259 = (t1 + 3320);
    t262 = (t259 + 56U);
    t263 = *((char **)t262);
    memset(t261, 0, 8);
    t264 = (t261 + 4);
    t265 = (t263 + 4);
    t266 = *((unsigned int *)t263);
    t267 = (t266 >> 0);
    *((unsigned int *)t261) = t267;
    t268 = *((unsigned int *)t265);
    t269 = (t268 >> 0);
    *((unsigned int *)t264) = t269;
    t270 = *((unsigned int *)t261);
    *((unsigned int *)t261) = (t270 & 255U);
    t271 = *((unsigned int *)t264);
    *((unsigned int *)t264) = (t271 & 255U);
    memset(t272, 0, 8);
    if (*((unsigned int *)t260) != *((unsigned int *)t261))
        goto LAB87;

LAB85:    t273 = (t260 + 4);
    t274 = (t261 + 4);
    if (*((unsigned int *)t273) != *((unsigned int *)t274))
        goto LAB87;

LAB86:    *((unsigned int *)t272) = 1;

LAB87:    memset(t275, 0, 8);
    t276 = (t272 + 4);
    t277 = *((unsigned int *)t276);
    t278 = (~(t277));
    t279 = *((unsigned int *)t272);
    t280 = (t279 & t278);
    t281 = (t280 & 1U);
    if (t281 != 0)
        goto LAB88;

LAB89:    if (*((unsigned int *)t276) != 0)
        goto LAB90;

LAB91:    t284 = *((unsigned int *)t247);
    t285 = *((unsigned int *)t275);
    t286 = (t284 & t285);
    *((unsigned int *)t283) = t286;
    t287 = (t247 + 4);
    t288 = (t275 + 4);
    t289 = (t283 + 4);
    t290 = *((unsigned int *)t287);
    t291 = *((unsigned int *)t288);
    t292 = (t290 | t291);
    *((unsigned int *)t289) = t292;
    t293 = *((unsigned int *)t289);
    t294 = (t293 != 0);
    if (t294 == 1)
        goto LAB92;

LAB93:
LAB94:    goto LAB84;

LAB88:    *((unsigned int *)t275) = 1;
    goto LAB91;

LAB90:    t282 = (t275 + 4);
    *((unsigned int *)t275) = 1;
    *((unsigned int *)t282) = 1;
    goto LAB91;

LAB92:    t295 = *((unsigned int *)t283);
    t296 = *((unsigned int *)t289);
    *((unsigned int *)t283) = (t295 | t296);
    t297 = (t247 + 4);
    t298 = (t275 + 4);
    t299 = *((unsigned int *)t247);
    t300 = (~(t299));
    t301 = *((unsigned int *)t297);
    t302 = (~(t301));
    t303 = *((unsigned int *)t275);
    t304 = (~(t303));
    t305 = *((unsigned int *)t298);
    t306 = (~(t305));
    t307 = (t300 & t302);
    t308 = (t304 & t306);
    t309 = (~(t307));
    t310 = (~(t308));
    t311 = *((unsigned int *)t289);
    *((unsigned int *)t289) = (t311 & t309);
    t312 = *((unsigned int *)t289);
    *((unsigned int *)t289) = (t312 & t310);
    t313 = *((unsigned int *)t283);
    *((unsigned int *)t283) = (t313 & t309);
    t314 = *((unsigned int *)t283);
    *((unsigned int *)t283) = (t314 & t310);
    goto LAB94;

LAB95:    xsi_set_current_line(43, ng0);
    t322 = xsi_vlog_time(t321, 1000.0000000000000, 1000.0000000000000);
    t323 = (t1 + 4280);
    t324 = (t323 + 56U);
    t325 = *((char **)t324);
    t326 = (t1 + 2680);
    t327 = (t326 + 56U);
    t328 = *((char **)t327);
    t329 = (t1 + 1640U);
    t330 = *((char **)t329);
    t329 = (t1 + 1800U);
    t331 = *((char **)t329);
    t329 = (t1 + 1960U);
    t332 = *((char **)t329);
    t329 = (t1 + 2120U);
    t333 = *((char **)t329);
    t329 = (t1 + 2280U);
    t334 = *((char **)t329);
    t329 = (t1 + 1480U);
    t335 = *((char **)t329);
    t329 = (t1 + 848);
    xsi_vlogfile_write(1, 0, 0, ng1, 10, t329, (char)118, t321, 64, (char)118, t325, 224, (char)118, t328, 12, (char)118, t330, 1, (char)118, t331, 1, (char)118, t332, 1, (char)118, t333, 1, (char)118, t334, 2, (char)118, t335, 8);
    goto LAB97;

}

static void Monitor_58_1_Func(char *t0)
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

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 2680);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 1640U);
    t7 = *((char **)t6);
    t6 = (t0 + 1800U);
    t8 = *((char **)t6);
    t6 = (t0 + 1960U);
    t9 = *((char **)t6);
    t6 = (t0 + 2120U);
    t10 = *((char **)t6);
    t6 = (t0 + 2280U);
    t11 = *((char **)t6);
    t6 = (t0 + 1480U);
    t12 = *((char **)t6);
    xsi_vlogfile_write(1, 0, 3, ng5, 9, t0, (char)118, t1, 64, (char)118, t5, 12, (char)118, t7, 1, (char)118, t8, 1, (char)118, t9, 1, (char)118, t10, 1, (char)118, t11, 2, (char)118, t12, 8);

LAB1:    return;
}

static void Initial_56_0(char *t0)
{
    char t32[8];
    char t38[8];
    char t46[8];
    char t56[8];
    char t69[8];
    char t75[8];
    char t97[8];
    char t109[8];
    char t125[8];
    char t133[8];
    char t161[8];
    char t178[8];
    char t194[8];
    char t202[8];
    char t230[8];
    char t247[8];
    char t263[8];
    char t271[8];
    char t312[8];
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
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
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
    unsigned int t68;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;
    char *t110;
    char *t111;
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
    unsigned int t122;
    unsigned int t123;
    char *t124;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    char *t137;
    char *t138;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    char *t147;
    char *t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;
    char *t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    char *t174;
    char *t175;
    char *t176;
    char *t177;
    char *t179;
    char *t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    char *t193;
    char *t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    char *t201;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    char *t206;
    char *t207;
    char *t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    char *t216;
    char *t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    char *t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    char *t237;
    char *t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    char *t243;
    char *t244;
    char *t245;
    char *t246;
    char *t248;
    char *t249;
    unsigned int t250;
    unsigned int t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    unsigned int t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    unsigned int t259;
    unsigned int t260;
    unsigned int t261;
    char *t262;
    char *t264;
    unsigned int t265;
    unsigned int t266;
    unsigned int t267;
    unsigned int t268;
    unsigned int t269;
    char *t270;
    unsigned int t272;
    unsigned int t273;
    unsigned int t274;
    char *t275;
    char *t276;
    char *t277;
    unsigned int t278;
    unsigned int t279;
    unsigned int t280;
    unsigned int t281;
    unsigned int t282;
    unsigned int t283;
    unsigned int t284;
    char *t285;
    char *t286;
    unsigned int t287;
    unsigned int t288;
    unsigned int t289;
    int t290;
    unsigned int t291;
    unsigned int t292;
    unsigned int t293;
    int t294;
    unsigned int t295;
    unsigned int t296;
    unsigned int t297;
    unsigned int t298;
    char *t299;
    unsigned int t300;
    unsigned int t301;
    unsigned int t302;
    unsigned int t303;
    unsigned int t304;
    char *t305;
    char *t306;
    unsigned int t307;
    unsigned int t308;
    unsigned int t309;
    unsigned int t310;
    unsigned int t311;
    char *t313;
    char *t314;
    char *t315;
    char *t316;
    char *t317;
    char *t318;
    char *t319;
    char *t320;
    char *t321;
    char *t322;
    char *t323;
    char *t324;
    char *t325;
    char *t326;
    char *t327;
    char *t328;
    char *t329;
    char *t330;
    char *t331;
    char *t332;
    char *t333;
    char *t334;
    char *t335;
    char *t336;
    char *t337;
    char *t338;
    char *t339;
    char *t340;
    int t341;
    char *t342;
    char *t343;
    char *t344;
    char *t345;

LAB0:    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);

LAB4:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2840);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(58, ng0);
    Monitor_58_1(t0);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng7)));
    t3 = ((char*)((ng4)));
    t4 = ((char*)((ng6)));
    t5 = ((char*)((ng4)));
    t6 = ((char*)((ng6)));
    t7 = ((char*)((ng8)));
    t8 = ((char*)((ng9)));
    t9 = (t0 + 5000);
    t10 = (t0 + 848);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 3320);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 12);
    t13 = (t0 + 3480);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 1);
    t14 = (t0 + 3640);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 1);
    t15 = (t0 + 3800);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 1);
    t16 = (t0 + 3960);
    xsi_vlogvar_assign_value(t16, t6, 0, 0, 1);
    t17 = (t0 + 4120);
    xsi_vlogvar_assign_value(t17, t7, 0, 0, 2);
    t18 = (t0 + 4280);
    xsi_vlogvar_assign_value(t18, t8, 0, 0, 224);

LAB7:    t19 = (t0 + 5096);
    t20 = *((char **)t19);
    t21 = (t20 + 80U);
    t22 = *((char **)t21);
    t23 = (t22 + 272U);
    t24 = *((char **)t23);
    t25 = (t24 + 0U);
    t26 = *((char **)t25);
    t27 = ((int  (*)(char *, char *))t26)(t0, t20);

LAB9:    if (t27 != 0)
        goto LAB10;

LAB5:    t20 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t20);

LAB6:    t28 = (t0 + 5096);
    t29 = *((char **)t28);
    t28 = (t0 + 848);
    t30 = (t0 + 5000);
    t31 = 0;
    xsi_delete_subprogram_invocation(t28, t29, t0, t30, t31);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng10)));
    t3 = ((char*)((ng4)));
    t4 = ((char*)((ng6)));
    t5 = ((char*)((ng4)));
    t6 = ((char*)((ng6)));
    t7 = ((char*)((ng8)));
    t8 = ((char*)((ng11)));
    t9 = (t0 + 5000);
    t10 = (t0 + 848);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 3320);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 12);
    t13 = (t0 + 3480);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 1);
    t14 = (t0 + 3640);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 1);
    t15 = (t0 + 3800);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 1);
    t16 = (t0 + 3960);
    xsi_vlogvar_assign_value(t16, t6, 0, 0, 1);
    t17 = (t0 + 4120);
    xsi_vlogvar_assign_value(t17, t7, 0, 0, 2);
    t18 = (t0 + 4280);
    xsi_vlogvar_assign_value(t18, t8, 0, 0, 224);

LAB13:    t19 = (t0 + 5096);
    t20 = *((char **)t19);
    t21 = (t20 + 80U);
    t22 = *((char **)t21);
    t23 = (t22 + 272U);
    t24 = *((char **)t23);
    t25 = (t24 + 0U);
    t26 = *((char **)t25);
    t27 = ((int  (*)(char *, char *))t26)(t0, t20);

LAB15:    if (t27 != 0)
        goto LAB16;

LAB11:    t20 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t20);

LAB12:    t28 = (t0 + 5096);
    t29 = *((char **)t28);
    t28 = (t0 + 848);
    t30 = (t0 + 5000);
    t31 = 0;
    xsi_delete_subprogram_invocation(t28, t29, t0, t30, t31);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng12)));
    t3 = ((char*)((ng4)));
    t4 = ((char*)((ng6)));
    t5 = ((char*)((ng4)));
    t6 = ((char*)((ng6)));
    t7 = ((char*)((ng13)));
    t8 = ((char*)((ng14)));
    t9 = (t0 + 5000);
    t10 = (t0 + 848);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 3320);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 12);
    t13 = (t0 + 3480);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 1);
    t14 = (t0 + 3640);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 1);
    t15 = (t0 + 3800);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 1);
    t16 = (t0 + 3960);
    xsi_vlogvar_assign_value(t16, t6, 0, 0, 1);
    t17 = (t0 + 4120);
    xsi_vlogvar_assign_value(t17, t7, 0, 0, 2);
    t18 = (t0 + 4280);
    xsi_vlogvar_assign_value(t18, t8, 0, 0, 224);

LAB19:    t19 = (t0 + 5096);
    t20 = *((char **)t19);
    t21 = (t20 + 80U);
    t22 = *((char **)t21);
    t23 = (t22 + 272U);
    t24 = *((char **)t23);
    t25 = (t24 + 0U);
    t26 = *((char **)t25);
    t27 = ((int  (*)(char *, char *))t26)(t0, t20);

LAB21:    if (t27 != 0)
        goto LAB22;

LAB17:    t20 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t20);

LAB18:    t28 = (t0 + 5096);
    t29 = *((char **)t28);
    t28 = (t0 + 848);
    t30 = (t0 + 5000);
    t31 = 0;
    xsi_delete_subprogram_invocation(t28, t29, t0, t30, t31);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng15)));
    t3 = ((char*)((ng4)));
    t4 = ((char*)((ng6)));
    t5 = ((char*)((ng4)));
    t6 = ((char*)((ng6)));
    t7 = ((char*)((ng13)));
    t8 = ((char*)((ng16)));
    t9 = (t0 + 5000);
    t10 = (t0 + 848);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 3320);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 12);
    t13 = (t0 + 3480);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 1);
    t14 = (t0 + 3640);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 1);
    t15 = (t0 + 3800);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 1);
    t16 = (t0 + 3960);
    xsi_vlogvar_assign_value(t16, t6, 0, 0, 1);
    t17 = (t0 + 4120);
    xsi_vlogvar_assign_value(t17, t7, 0, 0, 2);
    t18 = (t0 + 4280);
    xsi_vlogvar_assign_value(t18, t8, 0, 0, 224);

LAB25:    t19 = (t0 + 5096);
    t20 = *((char **)t19);
    t21 = (t20 + 80U);
    t22 = *((char **)t21);
    t23 = (t22 + 272U);
    t24 = *((char **)t23);
    t25 = (t24 + 0U);
    t26 = *((char **)t25);
    t27 = ((int  (*)(char *, char *))t26)(t0, t20);

LAB27:    if (t27 != 0)
        goto LAB28;

LAB23:    t20 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t20);

LAB24:    t28 = (t0 + 5096);
    t29 = *((char **)t28);
    t28 = (t0 + 848);
    t30 = (t0 + 5000);
    t31 = 0;
    xsi_delete_subprogram_invocation(t28, t29, t0, t30, t31);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng17)));
    t3 = ((char*)((ng4)));
    t4 = ((char*)((ng6)));
    t5 = ((char*)((ng4)));
    t6 = ((char*)((ng4)));
    t7 = ((char*)((ng13)));
    t8 = ((char*)((ng18)));
    t9 = (t0 + 5000);
    t10 = (t0 + 848);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 3320);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 12);
    t13 = (t0 + 3480);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 1);
    t14 = (t0 + 3640);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 1);
    t15 = (t0 + 3800);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 1);
    t16 = (t0 + 3960);
    xsi_vlogvar_assign_value(t16, t6, 0, 0, 1);
    t17 = (t0 + 4120);
    xsi_vlogvar_assign_value(t17, t7, 0, 0, 2);
    t18 = (t0 + 4280);
    xsi_vlogvar_assign_value(t18, t8, 0, 0, 224);

LAB31:    t19 = (t0 + 5096);
    t20 = *((char **)t19);
    t21 = (t20 + 80U);
    t22 = *((char **)t21);
    t23 = (t22 + 272U);
    t24 = *((char **)t23);
    t25 = (t24 + 0U);
    t26 = *((char **)t25);
    t27 = ((int  (*)(char *, char *))t26)(t0, t20);

LAB33:    if (t27 != 0)
        goto LAB34;

LAB29:    t20 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t20);

LAB30:    t28 = (t0 + 5096);
    t29 = *((char **)t28);
    t28 = (t0 + 848);
    t30 = (t0 + 5000);
    t31 = 0;
    xsi_delete_subprogram_invocation(t28, t29, t0, t30, t31);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng19)));
    t3 = ((char*)((ng4)));
    t4 = ((char*)((ng6)));
    t5 = ((char*)((ng4)));
    t6 = ((char*)((ng4)));
    t7 = ((char*)((ng13)));
    t8 = ((char*)((ng20)));
    t9 = (t0 + 5000);
    t10 = (t0 + 848);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 3320);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 12);
    t13 = (t0 + 3480);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 1);
    t14 = (t0 + 3640);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 1);
    t15 = (t0 + 3800);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 1);
    t16 = (t0 + 3960);
    xsi_vlogvar_assign_value(t16, t6, 0, 0, 1);
    t17 = (t0 + 4120);
    xsi_vlogvar_assign_value(t17, t7, 0, 0, 2);
    t18 = (t0 + 4280);
    xsi_vlogvar_assign_value(t18, t8, 0, 0, 224);

LAB37:    t19 = (t0 + 5096);
    t20 = *((char **)t19);
    t21 = (t20 + 80U);
    t22 = *((char **)t21);
    t23 = (t22 + 272U);
    t24 = *((char **)t23);
    t25 = (t24 + 0U);
    t26 = *((char **)t25);
    t27 = ((int  (*)(char *, char *))t26)(t0, t20);

LAB39:    if (t27 != 0)
        goto LAB40;

LAB35:    t20 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t20);

LAB36:    t28 = (t0 + 5096);
    t29 = *((char **)t28);
    t28 = (t0 + 848);
    t30 = (t0 + 5000);
    t31 = 0;
    xsi_delete_subprogram_invocation(t28, t29, t0, t30, t31);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng21)));
    t3 = ((char*)((ng6)));
    t4 = ((char*)((ng4)));
    t5 = ((char*)((ng6)));
    t6 = ((char*)((ng6)));
    t7 = ((char*)((ng13)));
    t8 = ((char*)((ng22)));
    t9 = (t0 + 5000);
    t10 = (t0 + 848);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 3320);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 12);
    t13 = (t0 + 3480);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 1);
    t14 = (t0 + 3640);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 1);
    t15 = (t0 + 3800);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 1);
    t16 = (t0 + 3960);
    xsi_vlogvar_assign_value(t16, t6, 0, 0, 1);
    t17 = (t0 + 4120);
    xsi_vlogvar_assign_value(t17, t7, 0, 0, 2);
    t18 = (t0 + 4280);
    xsi_vlogvar_assign_value(t18, t8, 0, 0, 224);

LAB43:    t19 = (t0 + 5096);
    t20 = *((char **)t19);
    t21 = (t20 + 80U);
    t22 = *((char **)t21);
    t23 = (t22 + 272U);
    t24 = *((char **)t23);
    t25 = (t24 + 0U);
    t26 = *((char **)t25);
    t27 = ((int  (*)(char *, char *))t26)(t0, t20);

LAB45:    if (t27 != 0)
        goto LAB46;

LAB41:    t20 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t20);

LAB42:    t28 = (t0 + 5096);
    t29 = *((char **)t28);
    t28 = (t0 + 848);
    t30 = (t0 + 5000);
    t31 = 0;
    xsi_delete_subprogram_invocation(t28, t29, t0, t30, t31);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng23)));
    t3 = ((char*)((ng4)));
    t4 = ((char*)((ng6)));
    t5 = ((char*)((ng4)));
    t6 = ((char*)((ng6)));
    t7 = ((char*)((ng24)));
    t8 = ((char*)((ng25)));
    t9 = (t0 + 5000);
    t10 = (t0 + 848);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 3320);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 12);
    t13 = (t0 + 3480);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 1);
    t14 = (t0 + 3640);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 1);
    t15 = (t0 + 3800);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 1);
    t16 = (t0 + 3960);
    xsi_vlogvar_assign_value(t16, t6, 0, 0, 1);
    t17 = (t0 + 4120);
    xsi_vlogvar_assign_value(t17, t7, 0, 0, 2);
    t18 = (t0 + 4280);
    xsi_vlogvar_assign_value(t18, t8, 0, 0, 224);

LAB49:    t19 = (t0 + 5096);
    t20 = *((char **)t19);
    t21 = (t20 + 80U);
    t22 = *((char **)t21);
    t23 = (t22 + 272U);
    t24 = *((char **)t23);
    t25 = (t24 + 0U);
    t26 = *((char **)t25);
    t27 = ((int  (*)(char *, char *))t26)(t0, t20);

LAB51:    if (t27 != 0)
        goto LAB52;

LAB47:    t20 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t20);

LAB48:    t28 = (t0 + 5096);
    t29 = *((char **)t28);
    t28 = (t0 + 848);
    t30 = (t0 + 5000);
    t31 = 0;
    xsi_delete_subprogram_invocation(t28, t29, t0, t30, t31);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng13)));
    t3 = ((char*)((ng6)));
    t4 = ((char*)((ng6)));
    t5 = ((char*)((ng6)));
    t6 = ((char*)((ng6)));
    t7 = ((char*)((ng13)));
    t8 = ((char*)((ng26)));
    t9 = (t0 + 5000);
    t10 = (t0 + 848);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 3320);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 12);
    t13 = (t0 + 3480);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 1);
    t14 = (t0 + 3640);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 1);
    t15 = (t0 + 3800);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 1);
    t16 = (t0 + 3960);
    xsi_vlogvar_assign_value(t16, t6, 0, 0, 1);
    t17 = (t0 + 4120);
    xsi_vlogvar_assign_value(t17, t7, 0, 0, 2);
    t18 = (t0 + 4280);
    xsi_vlogvar_assign_value(t18, t8, 0, 0, 224);

LAB55:    t19 = (t0 + 5096);
    t20 = *((char **)t19);
    t21 = (t20 + 80U);
    t22 = *((char **)t21);
    t23 = (t22 + 272U);
    t24 = *((char **)t23);
    t25 = (t24 + 0U);
    t26 = *((char **)t25);
    t27 = ((int  (*)(char *, char *))t26)(t0, t20);

LAB57:    if (t27 != 0)
        goto LAB58;

LAB53:    t20 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t20);

LAB54:    t28 = (t0 + 5096);
    t29 = *((char **)t28);
    t28 = (t0 + 848);
    t30 = (t0 + 5000);
    t31 = 0;
    xsi_delete_subprogram_invocation(t28, t29, t0, t30, t31);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng27)));
    t3 = ((char*)((ng6)));
    t4 = ((char*)((ng4)));
    t5 = ((char*)((ng6)));
    t6 = ((char*)((ng6)));
    t7 = ((char*)((ng13)));
    t8 = ((char*)((ng28)));
    t9 = (t0 + 5000);
    t10 = (t0 + 848);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 3320);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 12);
    t13 = (t0 + 3480);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 1);
    t14 = (t0 + 3640);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 1);
    t15 = (t0 + 3800);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 1);
    t16 = (t0 + 3960);
    xsi_vlogvar_assign_value(t16, t6, 0, 0, 1);
    t17 = (t0 + 4120);
    xsi_vlogvar_assign_value(t17, t7, 0, 0, 2);
    t18 = (t0 + 4280);
    xsi_vlogvar_assign_value(t18, t8, 0, 0, 224);

LAB61:    t19 = (t0 + 5096);
    t20 = *((char **)t19);
    t21 = (t20 + 80U);
    t22 = *((char **)t21);
    t23 = (t22 + 272U);
    t24 = *((char **)t23);
    t25 = (t24 + 0U);
    t26 = *((char **)t25);
    t27 = ((int  (*)(char *, char *))t26)(t0, t20);

LAB63:    if (t27 != 0)
        goto LAB64;

LAB59:    t20 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t20);

LAB60:    t28 = (t0 + 5096);
    t29 = *((char **)t28);
    t28 = (t0 + 848);
    t30 = (t0 + 5000);
    t31 = 0;
    xsi_delete_subprogram_invocation(t28, t29, t0, t30, t31);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng29)));
    t3 = ((char*)((ng4)));
    t4 = ((char*)((ng6)));
    t5 = ((char*)((ng4)));
    t6 = ((char*)((ng6)));
    t7 = ((char*)((ng24)));
    t8 = ((char*)((ng30)));
    t9 = (t0 + 5000);
    t10 = (t0 + 848);
    t11 = xsi_create_subprogram_invocation(t9, 0, t0, t10, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t10, t11);
    t12 = (t0 + 3320);
    xsi_vlogvar_assign_value(t12, t2, 0, 0, 12);
    t13 = (t0 + 3480);
    xsi_vlogvar_assign_value(t13, t3, 0, 0, 1);
    t14 = (t0 + 3640);
    xsi_vlogvar_assign_value(t14, t4, 0, 0, 1);
    t15 = (t0 + 3800);
    xsi_vlogvar_assign_value(t15, t5, 0, 0, 1);
    t16 = (t0 + 3960);
    xsi_vlogvar_assign_value(t16, t6, 0, 0, 1);
    t17 = (t0 + 4120);
    xsi_vlogvar_assign_value(t17, t7, 0, 0, 2);
    t18 = (t0 + 4280);
    xsi_vlogvar_assign_value(t18, t8, 0, 0, 224);

LAB67:    t19 = (t0 + 5096);
    t20 = *((char **)t19);
    t21 = (t20 + 80U);
    t22 = *((char **)t21);
    t23 = (t22 + 272U);
    t24 = *((char **)t23);
    t25 = (t24 + 0U);
    t26 = *((char **)t25);
    t27 = ((int  (*)(char *, char *))t26)(t0, t20);

LAB69:    if (t27 != 0)
        goto LAB70;

LAB65:    t20 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t20);

LAB66:    t28 = (t0 + 5096);
    t29 = *((char **)t28);
    t28 = (t0 + 848);
    t30 = (t0 + 5000);
    t31 = 0;
    xsi_delete_subprogram_invocation(t28, t29, t0, t30, t31);
    xsi_set_current_line(85, ng0);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB71:    t2 = (t0 + 3000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng31)));
    memset(t32, 0, 8);
    xsi_vlog_signed_leq(t32, 32, t4, 32, t5, 32);
    t6 = (t32 + 4);
    t33 = *((unsigned int *)t6);
    t34 = (~(t33));
    t35 = *((unsigned int *)t32);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB72;

LAB73:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t32, 0, 8);
    xsi_vlog_signed_equal(t32, 32, t4, 32, t5, 32);
    t6 = (t32 + 4);
    t33 = *((unsigned int *)t6);
    t34 = (~(t33));
    t35 = *((unsigned int *)t32);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB165;

LAB166:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng38, 2, t0, (char)119, t4, 32);

LAB167:    xsi_set_current_line(99, ng0);
    xsi_vlog_finish(1);

LAB1:    return;
LAB8:;
LAB10:    t19 = (t0 + 5192U);
    *((char **)t19) = &&LAB7;
    goto LAB1;

LAB14:;
LAB16:    t19 = (t0 + 5192U);
    *((char **)t19) = &&LAB13;
    goto LAB1;

LAB20:;
LAB22:    t19 = (t0 + 5192U);
    *((char **)t19) = &&LAB19;
    goto LAB1;

LAB26:;
LAB28:    t19 = (t0 + 5192U);
    *((char **)t19) = &&LAB25;
    goto LAB1;

LAB32:;
LAB34:    t19 = (t0 + 5192U);
    *((char **)t19) = &&LAB31;
    goto LAB1;

LAB38:;
LAB40:    t19 = (t0 + 5192U);
    *((char **)t19) = &&LAB37;
    goto LAB1;

LAB44:;
LAB46:    t19 = (t0 + 5192U);
    *((char **)t19) = &&LAB43;
    goto LAB1;

LAB50:;
LAB52:    t19 = (t0 + 5192U);
    *((char **)t19) = &&LAB49;
    goto LAB1;

LAB56:;
LAB58:    t19 = (t0 + 5192U);
    *((char **)t19) = &&LAB55;
    goto LAB1;

LAB62:;
LAB64:    t19 = (t0 + 5192U);
    *((char **)t19) = &&LAB61;
    goto LAB1;

LAB68:;
LAB70:    t19 = (t0 + 5192U);
    *((char **)t19) = &&LAB67;
    goto LAB1;

LAB72:    xsi_set_current_line(85, ng0);

LAB74:    xsi_set_current_line(86, ng0);
    t7 = (t0 + 3000);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 3160);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 4);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t38, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t33 = *((unsigned int *)t4);
    t34 = *((unsigned int *)t5);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t6);
    t37 = *((unsigned int *)t7);
    t39 = (t36 ^ t37);
    t40 = (t35 | t39);
    t41 = *((unsigned int *)t6);
    t42 = *((unsigned int *)t7);
    t43 = (t41 | t42);
    t44 = (~(t43));
    t45 = (t40 & t44);
    if (t45 != 0)
        goto LAB78;

LAB75:    if (t43 != 0)
        goto LAB77;

LAB76:    *((unsigned int *)t38) = 1;

LAB78:    memset(t46, 0, 8);
    t9 = (t38 + 4);
    t47 = *((unsigned int *)t9);
    t48 = (~(t47));
    t49 = *((unsigned int *)t38);
    t50 = (t49 & t48);
    t51 = (t50 & 1U);
    if (t51 != 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t9) != 0)
        goto LAB81;

LAB82:    t11 = (t46 + 4);
    t52 = *((unsigned int *)t46);
    t53 = (!(t52));
    t54 = *((unsigned int *)t11);
    t55 = (t53 || t54);
    if (t55 > 0)
        goto LAB83;

LAB84:    memcpy(t75, t46, 8);

LAB85:    memset(t97, 0, 8);
    t26 = (t75 + 4);
    t98 = *((unsigned int *)t26);
    t99 = (~(t98));
    t100 = *((unsigned int *)t75);
    t101 = (t100 & t99);
    t102 = (t101 & 1U);
    if (t102 != 0)
        goto LAB97;

LAB98:    if (*((unsigned int *)t26) != 0)
        goto LAB99;

LAB100:    t29 = (t97 + 4);
    t103 = *((unsigned int *)t97);
    t104 = (!(t103));
    t105 = *((unsigned int *)t29);
    t106 = (t104 || t105);
    if (t106 > 0)
        goto LAB101;

LAB102:    memcpy(t133, t97, 8);

LAB103:    memset(t161, 0, 8);
    t162 = (t133 + 4);
    t163 = *((unsigned int *)t162);
    t164 = (~(t163));
    t165 = *((unsigned int *)t133);
    t166 = (t165 & t164);
    t167 = (t166 & 1U);
    if (t167 != 0)
        goto LAB115;

LAB116:    if (*((unsigned int *)t162) != 0)
        goto LAB117;

LAB118:    t169 = (t161 + 4);
    t170 = *((unsigned int *)t161);
    t171 = (!(t170));
    t172 = *((unsigned int *)t169);
    t173 = (t171 || t172);
    if (t173 > 0)
        goto LAB119;

LAB120:    memcpy(t202, t161, 8);

LAB121:    memset(t230, 0, 8);
    t231 = (t202 + 4);
    t232 = *((unsigned int *)t231);
    t233 = (~(t232));
    t234 = *((unsigned int *)t202);
    t235 = (t234 & t233);
    t236 = (t235 & 1U);
    if (t236 != 0)
        goto LAB133;

LAB134:    if (*((unsigned int *)t231) != 0)
        goto LAB135;

LAB136:    t238 = (t230 + 4);
    t239 = *((unsigned int *)t230);
    t240 = (!(t239));
    t241 = *((unsigned int *)t238);
    t242 = (t240 || t241);
    if (t242 > 0)
        goto LAB137;

LAB138:    memcpy(t271, t230, 8);

LAB139:    memset(t32, 0, 8);
    t299 = (t271 + 4);
    t300 = *((unsigned int *)t299);
    t301 = (~(t300));
    t302 = *((unsigned int *)t271);
    t303 = (t302 & t301);
    t304 = (t303 & 1U);
    if (t304 != 0)
        goto LAB154;

LAB152:    if (*((unsigned int *)t299) == 0)
        goto LAB151;

LAB153:    t305 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t305) = 1;

LAB154:    t306 = (t32 + 4);
    t307 = *((unsigned int *)t306);
    t308 = (~(t307));
    t309 = *((unsigned int *)t32);
    t310 = (t309 & t308);
    t311 = (t310 != 0);
    if (t311 > 0)
        goto LAB155;

LAB156:
LAB157:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t32, 0, 8);
    xsi_vlog_signed_add(t32, 32, t4, 32, t5, 32);
    t6 = (t0 + 3000);
    xsi_vlogvar_assign_value(t6, t32, 0, 0, 32);
    goto LAB71;

LAB77:    t8 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB78;

LAB79:    *((unsigned int *)t46) = 1;
    goto LAB82;

LAB81:    t10 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB82;

LAB83:    t12 = (t0 + 3160);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng24)));
    memset(t56, 0, 8);
    t16 = (t14 + 4);
    t17 = (t15 + 4);
    t57 = *((unsigned int *)t14);
    t58 = *((unsigned int *)t15);
    t59 = (t57 ^ t58);
    t60 = *((unsigned int *)t16);
    t61 = *((unsigned int *)t17);
    t62 = (t60 ^ t61);
    t63 = (t59 | t62);
    t64 = *((unsigned int *)t16);
    t65 = *((unsigned int *)t17);
    t66 = (t64 | t65);
    t67 = (~(t66));
    t68 = (t63 & t67);
    if (t68 != 0)
        goto LAB89;

LAB86:    if (t66 != 0)
        goto LAB88;

LAB87:    *((unsigned int *)t56) = 1;

LAB89:    memset(t69, 0, 8);
    t19 = (t56 + 4);
    t70 = *((unsigned int *)t19);
    t71 = (~(t70));
    t72 = *((unsigned int *)t56);
    t73 = (t72 & t71);
    t74 = (t73 & 1U);
    if (t74 != 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t19) != 0)
        goto LAB92;

LAB93:    t76 = *((unsigned int *)t46);
    t77 = *((unsigned int *)t69);
    t78 = (t76 | t77);
    *((unsigned int *)t75) = t78;
    t21 = (t46 + 4);
    t22 = (t69 + 4);
    t23 = (t75 + 4);
    t79 = *((unsigned int *)t21);
    t80 = *((unsigned int *)t22);
    t81 = (t79 | t80);
    *((unsigned int *)t23) = t81;
    t82 = *((unsigned int *)t23);
    t83 = (t82 != 0);
    if (t83 == 1)
        goto LAB94;

LAB95:
LAB96:    goto LAB85;

LAB88:    t18 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB89;

LAB90:    *((unsigned int *)t69) = 1;
    goto LAB93;

LAB92:    t20 = (t69 + 4);
    *((unsigned int *)t69) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB93;

LAB94:    t84 = *((unsigned int *)t75);
    t85 = *((unsigned int *)t23);
    *((unsigned int *)t75) = (t84 | t85);
    t24 = (t46 + 4);
    t25 = (t69 + 4);
    t86 = *((unsigned int *)t24);
    t87 = (~(t86));
    t88 = *((unsigned int *)t46);
    t27 = (t88 & t87);
    t89 = *((unsigned int *)t25);
    t90 = (~(t89));
    t91 = *((unsigned int *)t69);
    t92 = (t91 & t90);
    t93 = (~(t27));
    t94 = (~(t92));
    t95 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t95 & t93);
    t96 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t96 & t94);
    goto LAB96;

LAB97:    *((unsigned int *)t97) = 1;
    goto LAB100;

LAB99:    t28 = (t97 + 4);
    *((unsigned int *)t97) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB100;

LAB101:    t30 = (t0 + 3160);
    t31 = (t30 + 56U);
    t107 = *((char **)t31);
    t108 = ((char*)((ng32)));
    memset(t109, 0, 8);
    t110 = (t107 + 4);
    t111 = (t108 + 4);
    t112 = *((unsigned int *)t107);
    t113 = *((unsigned int *)t108);
    t114 = (t112 ^ t113);
    t115 = *((unsigned int *)t110);
    t116 = *((unsigned int *)t111);
    t117 = (t115 ^ t116);
    t118 = (t114 | t117);
    t119 = *((unsigned int *)t110);
    t120 = *((unsigned int *)t111);
    t121 = (t119 | t120);
    t122 = (~(t121));
    t123 = (t118 & t122);
    if (t123 != 0)
        goto LAB107;

LAB104:    if (t121 != 0)
        goto LAB106;

LAB105:    *((unsigned int *)t109) = 1;

LAB107:    memset(t125, 0, 8);
    t126 = (t109 + 4);
    t127 = *((unsigned int *)t126);
    t128 = (~(t127));
    t129 = *((unsigned int *)t109);
    t130 = (t129 & t128);
    t131 = (t130 & 1U);
    if (t131 != 0)
        goto LAB108;

LAB109:    if (*((unsigned int *)t126) != 0)
        goto LAB110;

LAB111:    t134 = *((unsigned int *)t97);
    t135 = *((unsigned int *)t125);
    t136 = (t134 | t135);
    *((unsigned int *)t133) = t136;
    t137 = (t97 + 4);
    t138 = (t125 + 4);
    t139 = (t133 + 4);
    t140 = *((unsigned int *)t137);
    t141 = *((unsigned int *)t138);
    t142 = (t140 | t141);
    *((unsigned int *)t139) = t142;
    t143 = *((unsigned int *)t139);
    t144 = (t143 != 0);
    if (t144 == 1)
        goto LAB112;

LAB113:
LAB114:    goto LAB103;

LAB106:    t124 = (t109 + 4);
    *((unsigned int *)t109) = 1;
    *((unsigned int *)t124) = 1;
    goto LAB107;

LAB108:    *((unsigned int *)t125) = 1;
    goto LAB111;

LAB110:    t132 = (t125 + 4);
    *((unsigned int *)t125) = 1;
    *((unsigned int *)t132) = 1;
    goto LAB111;

LAB112:    t145 = *((unsigned int *)t133);
    t146 = *((unsigned int *)t139);
    *((unsigned int *)t133) = (t145 | t146);
    t147 = (t97 + 4);
    t148 = (t125 + 4);
    t149 = *((unsigned int *)t147);
    t150 = (~(t149));
    t151 = *((unsigned int *)t97);
    t152 = (t151 & t150);
    t153 = *((unsigned int *)t148);
    t154 = (~(t153));
    t155 = *((unsigned int *)t125);
    t156 = (t155 & t154);
    t157 = (~(t152));
    t158 = (~(t156));
    t159 = *((unsigned int *)t139);
    *((unsigned int *)t139) = (t159 & t157);
    t160 = *((unsigned int *)t139);
    *((unsigned int *)t139) = (t160 & t158);
    goto LAB114;

LAB115:    *((unsigned int *)t161) = 1;
    goto LAB118;

LAB117:    t168 = (t161 + 4);
    *((unsigned int *)t161) = 1;
    *((unsigned int *)t168) = 1;
    goto LAB118;

LAB119:    t174 = (t0 + 3160);
    t175 = (t174 + 56U);
    t176 = *((char **)t175);
    t177 = ((char*)((ng33)));
    memset(t178, 0, 8);
    t179 = (t176 + 4);
    t180 = (t177 + 4);
    t181 = *((unsigned int *)t176);
    t182 = *((unsigned int *)t177);
    t183 = (t181 ^ t182);
    t184 = *((unsigned int *)t179);
    t185 = *((unsigned int *)t180);
    t186 = (t184 ^ t185);
    t187 = (t183 | t186);
    t188 = *((unsigned int *)t179);
    t189 = *((unsigned int *)t180);
    t190 = (t188 | t189);
    t191 = (~(t190));
    t192 = (t187 & t191);
    if (t192 != 0)
        goto LAB125;

LAB122:    if (t190 != 0)
        goto LAB124;

LAB123:    *((unsigned int *)t178) = 1;

LAB125:    memset(t194, 0, 8);
    t195 = (t178 + 4);
    t196 = *((unsigned int *)t195);
    t197 = (~(t196));
    t198 = *((unsigned int *)t178);
    t199 = (t198 & t197);
    t200 = (t199 & 1U);
    if (t200 != 0)
        goto LAB126;

LAB127:    if (*((unsigned int *)t195) != 0)
        goto LAB128;

LAB129:    t203 = *((unsigned int *)t161);
    t204 = *((unsigned int *)t194);
    t205 = (t203 | t204);
    *((unsigned int *)t202) = t205;
    t206 = (t161 + 4);
    t207 = (t194 + 4);
    t208 = (t202 + 4);
    t209 = *((unsigned int *)t206);
    t210 = *((unsigned int *)t207);
    t211 = (t209 | t210);
    *((unsigned int *)t208) = t211;
    t212 = *((unsigned int *)t208);
    t213 = (t212 != 0);
    if (t213 == 1)
        goto LAB130;

LAB131:
LAB132:    goto LAB121;

LAB124:    t193 = (t178 + 4);
    *((unsigned int *)t178) = 1;
    *((unsigned int *)t193) = 1;
    goto LAB125;

LAB126:    *((unsigned int *)t194) = 1;
    goto LAB129;

LAB128:    t201 = (t194 + 4);
    *((unsigned int *)t194) = 1;
    *((unsigned int *)t201) = 1;
    goto LAB129;

LAB130:    t214 = *((unsigned int *)t202);
    t215 = *((unsigned int *)t208);
    *((unsigned int *)t202) = (t214 | t215);
    t216 = (t161 + 4);
    t217 = (t194 + 4);
    t218 = *((unsigned int *)t216);
    t219 = (~(t218));
    t220 = *((unsigned int *)t161);
    t221 = (t220 & t219);
    t222 = *((unsigned int *)t217);
    t223 = (~(t222));
    t224 = *((unsigned int *)t194);
    t225 = (t224 & t223);
    t226 = (~(t221));
    t227 = (~(t225));
    t228 = *((unsigned int *)t208);
    *((unsigned int *)t208) = (t228 & t226);
    t229 = *((unsigned int *)t208);
    *((unsigned int *)t208) = (t229 & t227);
    goto LAB132;

LAB133:    *((unsigned int *)t230) = 1;
    goto LAB136;

LAB135:    t237 = (t230 + 4);
    *((unsigned int *)t230) = 1;
    *((unsigned int *)t237) = 1;
    goto LAB136;

LAB137:    t243 = (t0 + 3160);
    t244 = (t243 + 56U);
    t245 = *((char **)t244);
    t246 = ((char*)((ng34)));
    memset(t247, 0, 8);
    t248 = (t245 + 4);
    t249 = (t246 + 4);
    t250 = *((unsigned int *)t245);
    t251 = *((unsigned int *)t246);
    t252 = (t250 ^ t251);
    t253 = *((unsigned int *)t248);
    t254 = *((unsigned int *)t249);
    t255 = (t253 ^ t254);
    t256 = (t252 | t255);
    t257 = *((unsigned int *)t248);
    t258 = *((unsigned int *)t249);
    t259 = (t257 | t258);
    t260 = (~(t259));
    t261 = (t256 & t260);
    if (t261 != 0)
        goto LAB143;

LAB140:    if (t259 != 0)
        goto LAB142;

LAB141:    *((unsigned int *)t247) = 1;

LAB143:    memset(t263, 0, 8);
    t264 = (t247 + 4);
    t265 = *((unsigned int *)t264);
    t266 = (~(t265));
    t267 = *((unsigned int *)t247);
    t268 = (t267 & t266);
    t269 = (t268 & 1U);
    if (t269 != 0)
        goto LAB144;

LAB145:    if (*((unsigned int *)t264) != 0)
        goto LAB146;

LAB147:    t272 = *((unsigned int *)t230);
    t273 = *((unsigned int *)t263);
    t274 = (t272 | t273);
    *((unsigned int *)t271) = t274;
    t275 = (t230 + 4);
    t276 = (t263 + 4);
    t277 = (t271 + 4);
    t278 = *((unsigned int *)t275);
    t279 = *((unsigned int *)t276);
    t280 = (t278 | t279);
    *((unsigned int *)t277) = t280;
    t281 = *((unsigned int *)t277);
    t282 = (t281 != 0);
    if (t282 == 1)
        goto LAB148;

LAB149:
LAB150:    goto LAB139;

LAB142:    t262 = (t247 + 4);
    *((unsigned int *)t247) = 1;
    *((unsigned int *)t262) = 1;
    goto LAB143;

LAB144:    *((unsigned int *)t263) = 1;
    goto LAB147;

LAB146:    t270 = (t263 + 4);
    *((unsigned int *)t263) = 1;
    *((unsigned int *)t270) = 1;
    goto LAB147;

LAB148:    t283 = *((unsigned int *)t271);
    t284 = *((unsigned int *)t277);
    *((unsigned int *)t271) = (t283 | t284);
    t285 = (t230 + 4);
    t286 = (t263 + 4);
    t287 = *((unsigned int *)t285);
    t288 = (~(t287));
    t289 = *((unsigned int *)t230);
    t290 = (t289 & t288);
    t291 = *((unsigned int *)t286);
    t292 = (~(t291));
    t293 = *((unsigned int *)t263);
    t294 = (t293 & t292);
    t295 = (~(t290));
    t296 = (~(t294));
    t297 = *((unsigned int *)t277);
    *((unsigned int *)t277) = (t297 & t295);
    t298 = *((unsigned int *)t277);
    *((unsigned int *)t277) = (t298 & t296);
    goto LAB150;

LAB151:    *((unsigned int *)t32) = 1;
    goto LAB154;

LAB155:    xsi_set_current_line(88, ng0);

LAB158:    xsi_set_current_line(89, ng0);
    t313 = ((char*)((ng35)));
    t314 = (t0 + 3160);
    t315 = (t314 + 56U);
    t316 = *((char **)t315);
    xsi_vlogtype_concat(t312, 12, 12, 2U, t316, 4, t313, 8);
    t317 = ((char*)((ng6)));
    t318 = ((char*)((ng6)));
    t319 = ((char*)((ng6)));
    t320 = ((char*)((ng6)));
    t321 = ((char*)((ng13)));
    t322 = ((char*)((ng36)));
    t323 = (t0 + 5000);
    t324 = (t0 + 848);
    t325 = xsi_create_subprogram_invocation(t323, 0, t0, t324, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t324, t325);
    t326 = (t0 + 3320);
    xsi_vlogvar_assign_value(t326, t312, 0, 0, 12);
    t327 = (t0 + 3480);
    xsi_vlogvar_assign_value(t327, t317, 0, 0, 1);
    t328 = (t0 + 3640);
    xsi_vlogvar_assign_value(t328, t318, 0, 0, 1);
    t329 = (t0 + 3800);
    xsi_vlogvar_assign_value(t329, t319, 0, 0, 1);
    t330 = (t0 + 3960);
    xsi_vlogvar_assign_value(t330, t320, 0, 0, 1);
    t331 = (t0 + 4120);
    xsi_vlogvar_assign_value(t331, t321, 0, 0, 2);
    t332 = (t0 + 4280);
    xsi_vlogvar_assign_value(t332, t322, 0, 0, 224);

LAB161:    t333 = (t0 + 5096);
    t334 = *((char **)t333);
    t335 = (t334 + 80U);
    t336 = *((char **)t335);
    t337 = (t336 + 272U);
    t338 = *((char **)t337);
    t339 = (t338 + 0U);
    t340 = *((char **)t339);
    t341 = ((int  (*)(char *, char *))t340)(t0, t334);

LAB163:    if (t341 != 0)
        goto LAB164;

LAB159:    t334 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t334);

LAB160:    t342 = (t0 + 5096);
    t343 = *((char **)t342);
    t342 = (t0 + 848);
    t344 = (t0 + 5000);
    t345 = 0;
    xsi_delete_subprogram_invocation(t342, t343, t0, t344, t345);
    goto LAB157;

LAB162:;
LAB164:    t333 = (t0 + 5192U);
    *((char **)t333) = &&LAB161;
    goto LAB1;

LAB165:    xsi_set_current_line(95, ng0);
    xsi_vlogfile_write(1, 0, 0, ng37, 1, t0);
    goto LAB167;

}

void Monitor_58_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 5248);
    t2 = (t0 + 5760);
    xsi_vlogfile_monitor((void *)Monitor_58_1_Func, t1, t2);

LAB1:    return;
}


extern void work_m_09176696969134067027_3455515378_init()
{
	static char *pe[] = {(void *)Initial_56_0,(void *)Monitor_58_1};
	static char *se[] = {(void *)sp_run_test};
	xsi_register_didat("work_m_09176696969134067027_3455515378", "isim/control_unit_tb_isim_beh.exe.sim/work/m_09176696969134067027_3455515378.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
