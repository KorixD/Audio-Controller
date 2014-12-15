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
static const char *ng0 = "D:/Audio-Controller/EvenOneMoreAudCtrl/master_dev.v";
static int ng1[] = {0, 0};
static int ng2[] = {12, 0};
static int ng3[] = {1, 0};
static int ng4[] = {10, 0};
static int ng5[] = {5, 0};
static int ng6[] = {19, 0};



static void NetDecl_53_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 5408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB7:    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    *((unsigned int *)t3) = t14;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB9;

LAB8:    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 1U);
    t21 = (t0 + 6072);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 1U;
    t27 = t26;
    t28 = (t3 + 4);
    t29 = *((unsigned int *)t3);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 0U);
    t34 = (t0 + 5976);
    *((int *)t34) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t3) = (t15 | t16);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t17 | t18);
    goto LAB8;

}

static void Always_76_1(char *t0)
{
    char t13[8];
    char t14[8];
    char t35[8];
    char t49[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t50;
    int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;

LAB0:    t1 = (t0 + 5656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 5992);
    *((int *)t2) = 1;
    t3 = (t0 + 5688);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(77, ng0);

LAB5:    xsi_set_current_line(78, ng0);
    t4 = (t0 + 2808U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(86, ng0);

LAB10:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 1808U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t13, 32, t3, t5, 2, t11, 32, 1);
    t12 = ((char*)((ng3)));
    memset(t14, 0, 8);
    t15 = (t13 + 4);
    t16 = (t12 + 4);
    t6 = *((unsigned int *)t13);
    t7 = *((unsigned int *)t12);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t15);
    t10 = *((unsigned int *)t16);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t15);
    t20 = *((unsigned int *)t16);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB14;

LAB11:    if (t21 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t14) = 1;

LAB14:    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t14);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(114, ng0);

LAB45:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1848U);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 15U);
    t17 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t17 & 15U);
    t15 = ((char*)((ng6)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_lshift(t14, 32, t13, 32, t15, 32);
    memset(t35, 0, 8);
    t16 = (t4 + 4);
    t24 = (t14 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t24);
    t23 = (t21 ^ t22);
    t26 = (t20 | t23);
    t27 = *((unsigned int *)t16);
    t28 = *((unsigned int *)t24);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t40 = (t26 & t30);
    if (t40 != 0)
        goto LAB49;

LAB46:    if (t29 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t35) = 1;

LAB49:    t31 = (t35 + 4);
    t41 = *((unsigned int *)t31);
    t42 = (~(t41));
    t43 = *((unsigned int *)t35);
    t44 = (t43 & t42);
    t53 = (t44 != 0);
    if (t53 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(121, ng0);

LAB54:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 4168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 32, 0LL);

LAB52:    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB17:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 3208);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 7);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 3848);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 4328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2488U);
    t11 = *((char **)t5);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t11);
    t8 = (t6 & t7);
    *((unsigned int *)t13) = t8;
    t5 = (t4 + 4);
    t12 = (t11 + 4);
    t15 = (t13 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t12);
    t17 = (t9 | t10);
    *((unsigned int *)t15) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB55;

LAB56:
LAB57:    t25 = (t0 + 3368);
    xsi_vlogvar_assign_value(t25, t13, 0, 0, 1);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 4488);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2648U);
    t11 = *((char **)t5);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t11);
    t8 = (t6 & t7);
    *((unsigned int *)t13) = t8;
    t5 = (t4 + 4);
    t12 = (t11 + 4);
    t15 = (t13 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t12);
    t17 = (t9 | t10);
    *((unsigned int *)t15) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB58;

LAB59:
LAB60:    t25 = (t0 + 3688);
    xsi_vlogvar_assign_value(t25, t13, 0, 0, 1);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(79, ng0);

LAB9:    xsi_set_current_line(80, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 9, 0LL);
    goto LAB8;

LAB13:    t24 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(88, ng0);

LAB18:    xsi_set_current_line(89, ng0);
    t31 = (t0 + 4168);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng4)));
    memset(t35, 0, 8);
    t36 = (t33 + 4);
    if (*((unsigned int *)t36) != 0)
        goto LAB20;

LAB19:    t37 = (t34 + 4);
    if (*((unsigned int *)t37) != 0)
        goto LAB20;

LAB23:    if (*((unsigned int *)t33) < *((unsigned int *)t34))
        goto LAB21;

LAB22:    t39 = (t35 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (~(t40));
    t42 = *((unsigned int *)t35);
    t43 = (t42 & t41);
    t44 = (t43 != 0);
    if (t44 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(94, ng0);

LAB28:    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t0 + 2648U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 & t7);
    *((unsigned int *)t13) = t8;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t11 = (t13 + 4);
    t9 = *((unsigned int *)t2);
    t10 = *((unsigned int *)t5);
    t17 = (t9 | t10);
    *((unsigned int *)t11) = t17;
    t18 = *((unsigned int *)t11);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB29;

LAB30:
LAB31:    t16 = (t13 + 4);
    t55 = *((unsigned int *)t16);
    t56 = (~(t55));
    t57 = *((unsigned int *)t13);
    t58 = (t57 & t56);
    t59 = (t58 != 0);
    if (t59 > 0)
        goto LAB32;

LAB33:
LAB34:
LAB26:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 127U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 127U);
    memset(t14, 0, 8);
    t11 = (t3 + 4);
    t12 = (t13 + 4);
    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t13);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t11);
    t22 = *((unsigned int *)t12);
    t23 = (t21 ^ t22);
    t26 = (t20 | t23);
    t27 = *((unsigned int *)t11);
    t28 = *((unsigned int *)t12);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t40 = (t26 & t30);
    if (t40 != 0)
        goto LAB39;

LAB36:    if (t29 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t14) = 1;

LAB39:    t16 = (t14 + 4);
    t41 = *((unsigned int *)t16);
    t42 = (~(t41));
    t43 = *((unsigned int *)t14);
    t44 = (t43 & t42);
    t53 = (t44 != 0);
    if (t53 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(108, ng0);

LAB44:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB42:    goto LAB17;

LAB20:    t38 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB22;

LAB21:    *((unsigned int *)t35) = 1;
    goto LAB22;

LAB24:    xsi_set_current_line(90, ng0);

LAB27:    xsi_set_current_line(91, ng0);
    t45 = (t0 + 4168);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    t48 = ((char*)((ng3)));
    memset(t49, 0, 8);
    xsi_vlog_unsigned_add(t49, 32, t47, 32, t48, 32);
    t50 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t50, t49, 0, 0, 32, 0LL);
    goto LAB26;

LAB29:    t20 = *((unsigned int *)t13);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t20 | t21);
    t12 = (t3 + 4);
    t15 = (t4 + 4);
    t22 = *((unsigned int *)t3);
    t23 = (~(t22));
    t26 = *((unsigned int *)t12);
    t27 = (~(t26));
    t28 = *((unsigned int *)t4);
    t29 = (~(t28));
    t30 = *((unsigned int *)t15);
    t40 = (~(t30));
    t51 = (t23 & t27);
    t52 = (t29 & t40);
    t41 = (~(t51));
    t42 = (~(t52));
    t43 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t43 & t41);
    t44 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t44 & t42);
    t53 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t53 & t41);
    t54 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t54 & t42);
    goto LAB31;

LAB32:    xsi_set_current_line(97, ng0);

LAB35:    xsi_set_current_line(98, ng0);
    t24 = ((char*)((ng1)));
    t25 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t25, t24, 0, 0, 32, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 4008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 9, t5, 32);
    t11 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 9, 0LL);
    goto LAB34;

LAB38:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(103, ng0);

LAB43:    xsi_set_current_line(104, ng0);
    t24 = ((char*)((ng3)));
    t25 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t25, t24, 0, 0, 1, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB42;

LAB48:    t25 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB49;

LAB50:    xsi_set_current_line(116, ng0);

LAB53:    xsi_set_current_line(117, ng0);
    t32 = (t0 + 4008);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t36 = ((char*)((ng3)));
    memset(t49, 0, 8);
    xsi_vlog_unsigned_add(t49, 32, t34, 9, t36, 32);
    t37 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t37, t49, 0, 0, 9, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB52;

LAB55:    t20 = *((unsigned int *)t13);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t13) = (t20 | t21);
    t16 = (t4 + 4);
    t24 = (t11 + 4);
    t22 = *((unsigned int *)t4);
    t23 = (~(t22));
    t26 = *((unsigned int *)t16);
    t27 = (~(t26));
    t28 = *((unsigned int *)t11);
    t29 = (~(t28));
    t30 = *((unsigned int *)t24);
    t40 = (~(t30));
    t51 = (t23 & t27);
    t52 = (t29 & t40);
    t41 = (~(t51));
    t42 = (~(t52));
    t43 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t43 & t41);
    t44 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t44 & t42);
    t53 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t53 & t41);
    t54 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t54 & t42);
    goto LAB57;

LAB58:    t20 = *((unsigned int *)t13);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t13) = (t20 | t21);
    t16 = (t4 + 4);
    t24 = (t11 + 4);
    t22 = *((unsigned int *)t4);
    t23 = (~(t22));
    t26 = *((unsigned int *)t16);
    t27 = (~(t26));
    t28 = *((unsigned int *)t11);
    t29 = (~(t28));
    t30 = *((unsigned int *)t24);
    t40 = (~(t30));
    t51 = (t23 & t27);
    t52 = (t29 & t40);
    t41 = (~(t51));
    t42 = (~(t52));
    t43 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t43 & t41);
    t44 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t44 & t42);
    t53 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t53 & t41);
    t54 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t54 & t42);
    goto LAB60;

}


extern void work_m_00000000003513432494_3836539392_init()
{
	static char *pe[] = {(void *)NetDecl_53_0,(void *)Always_76_1};
	xsi_register_didat("work_m_00000000003513432494_3836539392", "isim/dev_isim_beh.exe.sim/work/m_00000000003513432494_3836539392.didat");
	xsi_register_executes(pe);
}
