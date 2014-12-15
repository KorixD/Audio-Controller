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

/* This file is designed for use with ISim build 0xc3576ebc */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/Audio-Controller/EvenOneMoreAudCtrl/controller.v";
static int ng1[] = {0, 0};
static int ng2[] = {8, 0};
static int ng3[] = {1, 0};
static int ng4[] = {3, 0};
static int ng5[] = {2, 0};
static int ng6[] = {4, 0};
static int ng7[] = {5, 0};
static int ng8[] = {6, 0};
static int ng9[] = {7, 0};
static int ng10[] = {25, 0};
static unsigned int ng11[] = {49152U, 0U};



static void Initial_145_0(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
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
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(146, ng0);

LAB2:    xsi_set_current_line(147, ng0);
    xsi_set_current_line(147, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4968);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 4968);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(148, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 4648);
    t16 = (t0 + 4648);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 4648);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 4968);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(147, ng0);
    t1 = (t0 + 4968);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 4968);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB6:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB7;

}

static void Always_158_1(char *t0)
{
    char t6[8];
    char t7[8];
    char t14[8];
    char t56[8];
    char t65[8];
    char t75[8];
    char t102[8];
    char t111[8];
    char t120[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    int t26;
    char *t27;
    unsigned int t28;
    int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t76;
    char *t77;
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
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    char *t101;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t121;

LAB0:    t1 = (t0 + 7096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 7664);
    *((int *)t2) = 1;
    t3 = (t0 + 7128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(159, ng0);

LAB5:    xsi_set_current_line(160, ng0);
    t4 = (t0 + 2328U);
    t5 = *((char **)t4);
    t4 = (t0 + 4648);
    t8 = (t0 + 4648);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 4648);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t15 = (t0 + 2488U);
    t16 = *((char **)t15);
    memset(t14, 0, 8);
    t15 = (t14 + 4);
    t17 = (t16 + 4);
    t18 = *((unsigned int *)t16);
    t19 = (t18 >> 0);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 0);
    *((unsigned int *)t15) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 7U);
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t23 & 7U);
    xsi_vlog_generic_convert_array_indices(t6, t7, t10, t13, 2, 1, t14, 3, 2);
    t24 = (t6 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t7 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    t30 = (t26 && t29);
    if (t30 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(161, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5128);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(164, ng0);
    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4968);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB8:    t2 = (t0 + 4968);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t8 = (t6 + 4);
    t18 = *((unsigned int *)t8);
    t19 = (~(t18));
    t20 = *((unsigned int *)t6);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(175, ng0);
    t2 = (t0 + 5128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5288);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    memset(t14, 0, 8);
    xsi_vlog_signed_greatereq(t14, 32, t4, 32, t9, 32);
    memset(t7, 0, 8);
    t10 = (t14 + 4);
    t18 = *((unsigned int *)t10);
    t19 = (~(t18));
    t20 = *((unsigned int *)t14);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t10) != 0)
        goto LAB29;

LAB30:    t12 = (t7 + 4);
    t23 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t12);
    t28 = (t23 || t25);
    if (t28 > 0)
        goto LAB31;

LAB32:    t31 = *((unsigned int *)t7);
    t32 = (~(t31));
    t40 = *((unsigned int *)t12);
    t41 = (t32 || t40);
    if (t41 > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t12) > 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t7) > 0)
        goto LAB37;

LAB38:    memcpy(t6, t65, 8);

LAB39:    t48 = (t0 + 5608);
    xsi_vlogvar_assign_value(t48, t6, 0, 0, 32);
    xsi_set_current_line(177, ng0);
    t2 = (t0 + 5448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB40:    t5 = ((char*)((ng1)));
    t26 = xsi_vlog_signed_case_compare(t4, 32, t5, 32);
    if (t26 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng3)));
    t26 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t26 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng5)));
    t26 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t26 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng4)));
    t26 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t26 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng6)));
    t26 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t26 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng7)));
    t26 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t26 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng8)));
    t26 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t26 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng9)));
    t26 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t26 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng2)));
    t26 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t26 == 1)
        goto LAB57;

LAB58:
LAB59:    xsi_set_current_line(189, ng0);
    t2 = (t0 + 5928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = ((char*)((ng10)));
    memset(t6, 0, 8);
    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB61;

LAB60:    t10 = (t8 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB61;

LAB64:    if (*((unsigned int *)t5) < *((unsigned int *)t8))
        goto LAB62;

LAB63:    t12 = (t6 + 4);
    t18 = *((unsigned int *)t12);
    t19 = (~(t18));
    t20 = *((unsigned int *)t6);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB65;

LAB66:
LAB67:    xsi_set_current_line(197, ng0);
    t2 = (t0 + 5928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = ((char*)((ng10)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t5, 11, t8, 32);
    t9 = (t0 + 5928);
    xsi_vlogvar_assign_value(t9, t6, 0, 0, 11);
    xsi_set_current_line(199, ng0);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    t2 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(200, ng0);
    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t2 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(201, ng0);
    t2 = (t0 + 3128U);
    t3 = *((char **)t2);
    t2 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(202, ng0);
    t2 = (t0 + 3448U);
    t3 = *((char **)t2);
    t2 = (t0 + 4328);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    goto LAB2;

LAB6:    t31 = *((unsigned int *)t6);
    t32 = *((unsigned int *)t7);
    t33 = (t31 - t32);
    t34 = (t33 + 1);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, *((unsigned int *)t7), t34, 0LL);
    goto LAB7;

LAB9:    xsi_set_current_line(165, ng0);

LAB11:    xsi_set_current_line(166, ng0);
    t9 = (t0 + 4648);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 4648);
    t13 = (t12 + 72U);
    t15 = *((char **)t13);
    t16 = (t0 + 4648);
    t17 = (t16 + 64U);
    t24 = *((char **)t17);
    t27 = (t0 + 4968);
    t35 = (t27 + 56U);
    t36 = *((char **)t35);
    xsi_vlog_generic_get_array_select_value(t7, 32, t11, t15, t24, 2, 1, t36, 32, 1);
    t37 = ((char*)((ng1)));
    memset(t14, 0, 8);
    t38 = (t7 + 4);
    t39 = (t37 + 4);
    t23 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t37);
    t28 = (t23 ^ t25);
    t31 = *((unsigned int *)t38);
    t32 = *((unsigned int *)t39);
    t40 = (t31 ^ t32);
    t41 = (t28 | t40);
    t42 = *((unsigned int *)t38);
    t43 = *((unsigned int *)t39);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB13;

LAB12:    if (t44 != 0)
        goto LAB14;

LAB15:    t48 = (t14 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t14);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB16;

LAB17:
LAB18:    xsi_set_current_line(164, ng0);
    t2 = (t0 + 4968);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t8 = (t0 + 4968);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    goto LAB8;

LAB13:    *((unsigned int *)t14) = 1;
    goto LAB15;

LAB14:    t47 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB15;

LAB16:    xsi_set_current_line(167, ng0);

LAB19:    xsi_set_current_line(168, ng0);
    t54 = (t0 + 3288U);
    t55 = *((char **)t54);
    t54 = (t0 + 3248U);
    t57 = (t54 + 72U);
    t58 = *((char **)t57);
    t59 = (t0 + 3248U);
    t60 = (t59 + 48U);
    t61 = *((char **)t60);
    t62 = (t0 + 4968);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    xsi_vlog_generic_get_array_select_value(t56, 16, t55, t58, t61, 2, 1, t64, 32, 1);
    memset(t65, 0, 8);
    t66 = (t65 + 4);
    t67 = (t56 + 4);
    t68 = *((unsigned int *)t56);
    t69 = (t68 >> 14);
    *((unsigned int *)t65) = t69;
    t70 = *((unsigned int *)t67);
    t71 = (t70 >> 14);
    *((unsigned int *)t66) = t71;
    t72 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t72 & 3U);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t73 & 3U);
    t74 = ((char*)((ng4)));
    memset(t75, 0, 8);
    t76 = (t65 + 4);
    t77 = (t74 + 4);
    t78 = *((unsigned int *)t65);
    t79 = *((unsigned int *)t74);
    t80 = (t78 ^ t79);
    t81 = *((unsigned int *)t76);
    t82 = *((unsigned int *)t77);
    t83 = (t81 ^ t82);
    t84 = (t80 | t83);
    t85 = *((unsigned int *)t76);
    t86 = *((unsigned int *)t77);
    t87 = (t85 | t86);
    t88 = (~(t87));
    t89 = (t84 & t88);
    if (t89 != 0)
        goto LAB23;

LAB20:    if (t87 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t75) = 1;

LAB23:    t91 = (t75 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t75);
    t95 = (t94 & t93);
    t96 = (t95 != 0);
    if (t96 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(171, ng0);
    t2 = (t0 + 5128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3288U);
    t8 = *((char **)t5);
    t5 = (t0 + 3248U);
    t9 = (t5 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 3248U);
    t12 = (t11 + 48U);
    t13 = *((char **)t12);
    t15 = (t0 + 4968);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    xsi_vlog_generic_get_array_select_value(t6, 16, t8, t10, t13, 2, 1, t17, 32, 1);
    memset(t7, 0, 8);
    t24 = (t7 + 4);
    t27 = (t6 + 4);
    t18 = *((unsigned int *)t6);
    t19 = (t18 >> 0);
    *((unsigned int *)t7) = t19;
    t20 = *((unsigned int *)t27);
    t21 = (t20 >> 0);
    *((unsigned int *)t24) = t21;
    t22 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t22 & 32767U);
    t23 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t23 & 32767U);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t4, 32, t7, 32);
    t35 = (t0 + 5128);
    xsi_vlogvar_assign_value(t35, t14, 0, 0, 32);

LAB26:    xsi_set_current_line(172, ng0);
    t2 = (t0 + 5448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t8 = (t0 + 5448);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    goto LAB18;

LAB22:    t90 = (t75 + 4);
    *((unsigned int *)t75) = 1;
    *((unsigned int *)t90) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(169, ng0);
    t97 = (t0 + 5288);
    t98 = (t97 + 56U);
    t99 = *((char **)t98);
    t100 = (t0 + 3288U);
    t101 = *((char **)t100);
    t100 = (t0 + 3248U);
    t103 = (t100 + 72U);
    t104 = *((char **)t103);
    t105 = (t0 + 3248U);
    t106 = (t105 + 48U);
    t107 = *((char **)t106);
    t108 = (t0 + 4968);
    t109 = (t108 + 56U);
    t110 = *((char **)t109);
    xsi_vlog_generic_get_array_select_value(t102, 16, t101, t104, t107, 2, 1, t110, 32, 1);
    memset(t111, 0, 8);
    t112 = (t111 + 4);
    t113 = (t102 + 4);
    t114 = *((unsigned int *)t102);
    t115 = (t114 >> 0);
    *((unsigned int *)t111) = t115;
    t116 = *((unsigned int *)t113);
    t117 = (t116 >> 0);
    *((unsigned int *)t112) = t117;
    t118 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t118 & 16383U);
    t119 = *((unsigned int *)t112);
    *((unsigned int *)t112) = (t119 & 16383U);
    memset(t120, 0, 8);
    xsi_vlog_unsigned_add(t120, 32, t99, 32, t111, 32);
    t121 = (t0 + 5288);
    xsi_vlogvar_assign_value(t121, t120, 0, 0, 32);
    goto LAB26;

LAB27:    *((unsigned int *)t7) = 1;
    goto LAB30;

LAB29:    t11 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB30;

LAB31:    t13 = (t0 + 5128);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    t17 = (t0 + 5288);
    t24 = (t17 + 56U);
    t27 = *((char **)t24);
    memset(t56, 0, 8);
    xsi_vlog_signed_minus(t56, 32, t16, 32, t27, 32);
    goto LAB32;

LAB33:    t35 = (t0 + 5288);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t0 + 5128);
    t39 = (t38 + 56U);
    t47 = *((char **)t39);
    memset(t65, 0, 8);
    xsi_vlog_signed_minus(t65, 32, t37, 32, t47, 32);
    goto LAB34;

LAB35:    xsi_vlog_unsigned_bit_combine(t6, 32, t56, 32, t65, 32);
    goto LAB39;

LAB37:    memcpy(t6, t56, 8);
    goto LAB39;

LAB41:    xsi_set_current_line(178, ng0);
    t8 = ((char*)((ng1)));
    t9 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t9, t8, 0, 0, 14, 0LL);
    goto LAB59;

LAB43:    xsi_set_current_line(179, ng0);
    t3 = (t0 + 5608);
    t5 = (t3 + 56U);
    t8 = *((char **)t5);
    t9 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t9, t8, 0, 0, 14, 0LL);
    goto LAB59;

LAB45:    xsi_set_current_line(180, ng0);
    t3 = (t0 + 5608);
    t5 = (t3 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_rshift(t6, 32, t8, 32, t9, 32);
    t10 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t10, t6, 0, 0, 14, 0LL);
    goto LAB59;

LAB47:    xsi_set_current_line(181, ng0);
    t3 = (t0 + 5608);
    t5 = (t3 + 56U);
    t8 = *((char **)t5);
    t9 = (t0 + 5608);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t8, 32, t11, 32);
    t12 = ((char*)((ng3)));
    memset(t7, 0, 8);
    xsi_vlog_signed_rshift(t7, 32, t6, 32, t12, 32);
    t13 = ((char*)((ng5)));
    memset(t14, 0, 8);
    xsi_vlog_signed_rshift(t14, 32, t7, 32, t13, 32);
    t15 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t15, t14, 0, 0, 14, 0LL);
    goto LAB59;

LAB49:    xsi_set_current_line(182, ng0);
    t3 = (t0 + 5608);
    t5 = (t3 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_rshift(t6, 32, t8, 32, t9, 32);
    t10 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t10, t6, 0, 0, 14, 0LL);
    goto LAB59;

LAB51:    xsi_set_current_line(183, ng0);
    t3 = (t0 + 5608);
    t5 = (t3 + 56U);
    t8 = *((char **)t5);
    t9 = (t0 + 5608);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t8, 32, t11, 32);
    t12 = ((char*)((ng5)));
    t13 = (t0 + 5608);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t12, 32, t16, 32);
    memset(t14, 0, 8);
    xsi_vlog_signed_rshift(t14, 32, t6, 32, t7, 32);
    t17 = ((char*)((ng3)));
    memset(t56, 0, 8);
    xsi_vlog_signed_rshift(t56, 32, t14, 32, t17, 32);
    t24 = ((char*)((ng4)));
    memset(t65, 0, 8);
    xsi_vlog_signed_rshift(t65, 32, t56, 32, t24, 32);
    t27 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t27, t65, 0, 0, 14, 0LL);
    goto LAB59;

LAB53:    xsi_set_current_line(184, ng0);
    t3 = (t0 + 5608);
    t5 = (t3 + 56U);
    t8 = *((char **)t5);
    t9 = (t0 + 5608);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t8, 32, t11, 32);
    t12 = ((char*)((ng3)));
    memset(t7, 0, 8);
    xsi_vlog_signed_rshift(t7, 32, t6, 32, t12, 32);
    t13 = ((char*)((ng4)));
    memset(t14, 0, 8);
    xsi_vlog_signed_rshift(t14, 32, t7, 32, t13, 32);
    t15 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t15, t14, 0, 0, 14, 0LL);
    goto LAB59;

LAB55:    xsi_set_current_line(185, ng0);
    t3 = (t0 + 5608);
    t5 = (t3 + 56U);
    t8 = *((char **)t5);
    t9 = (t0 + 5608);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t8, 32, t11, 32);
    t12 = ((char*)((ng5)));
    memset(t7, 0, 8);
    xsi_vlog_signed_rshift(t7, 32, t6, 32, t12, 32);
    t13 = ((char*)((ng4)));
    memset(t14, 0, 8);
    xsi_vlog_signed_rshift(t14, 32, t7, 32, t13, 32);
    t15 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t15, t14, 0, 0, 14, 0LL);
    goto LAB59;

LAB57:    xsi_set_current_line(186, ng0);
    t3 = (t0 + 5608);
    t5 = (t3 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_rshift(t6, 32, t8, 32, t9, 32);
    t10 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t10, t6, 0, 0, 14, 0LL);
    goto LAB59;

LAB61:    t11 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB63;

LAB62:    *((unsigned int *)t6) = 1;
    goto LAB63;

LAB65:    xsi_set_current_line(190, ng0);

LAB68:    xsi_set_current_line(192, ng0);
    t13 = (t0 + 5128);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    t17 = (t0 + 5288);
    t24 = (t17 + 56U);
    t27 = *((char **)t24);
    memset(t7, 0, 8);
    xsi_vlog_signed_greatereq(t7, 32, t16, 32, t27, 32);
    t35 = (t7 + 4);
    t23 = *((unsigned int *)t35);
    t25 = (~(t23));
    t28 = *((unsigned int *)t7);
    t31 = (t28 & t25);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(195, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 5768);
    t5 = (t3 + 56U);
    t8 = *((char **)t5);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 16, t2, 16, t8, 14);
    t9 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t9, t6, 0, 0, 16, 0LL);

LAB71:    goto LAB67;

LAB69:    xsi_set_current_line(193, ng0);
    t36 = (t0 + 5768);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memcpy(t14, t38, 8);
    t39 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t39, t14, 0, 0, 16, 0LL);
    goto LAB71;

}

static void Always_207_2(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 7344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(207, ng0);
    t2 = (t0 + 7680);
    *((int *)t2) = 1;
    t3 = (t0 + 7376);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(208, ng0);

LAB5:    xsi_set_current_line(209, ng0);
    t4 = (t0 + 2488U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 3);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(214, ng0);

LAB10:    xsi_set_current_line(215, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(210, ng0);

LAB9:    xsi_set_current_line(211, ng0);
    t20 = (t0 + 2648U);
    t21 = *((char **)t20);
    t20 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t20, t21, 0, 0, 7, 0LL);
    goto LAB8;

}


extern void work_m_00000000002297021073_3092946469_init()
{
	static char *pe[] = {(void *)Initial_145_0,(void *)Always_158_1,(void *)Always_207_2};
	xsi_register_didat("work_m_00000000002297021073_3092946469", "isim/dev_isim_beh.exe.sim/work/m_00000000002297021073_3092946469.didat");
	xsi_register_executes(pe);
}
