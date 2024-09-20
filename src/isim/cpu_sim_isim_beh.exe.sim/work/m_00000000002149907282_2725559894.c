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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Ramesh/Documents/ISE/COA/alu.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};
static unsigned int ng9[] = {0U, 255U};



static void Always_28_0(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;

LAB0:    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 4128);
    *((int *)t2) = 1;
    t3 = (t0 + 3840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1048U);
    t6 = *((char **)t4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 | t9);
    *((unsigned int *)t7) = t10;
    t4 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB6;

LAB7:
LAB8:    t34 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t34, t7, 0, 0, 8, 0LL);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t4);
    t10 = (t8 & t9);
    *((unsigned int *)t7) = t10;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = (t7 + 4);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t5);
    t15 = (t13 | t14);
    *((unsigned int *)t6) = t15;
    t16 = *((unsigned int *)t6);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB9;

LAB10:
LAB11:    t20 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t20, t7, 0, 0, 8, 0LL);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    *((unsigned int *)t7) = t9;
    *((unsigned int *)t2) = 0;
    if (*((unsigned int *)t4) != 0)
        goto LAB13;

LAB12:    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 255U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 255U);
    t5 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t5, t7, 0, 0, 8, 0LL);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t4);
    t10 = (t8 ^ t9);
    *((unsigned int *)t7) = t10;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = (t7 + 4);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t5);
    t15 = (t13 | t14);
    *((unsigned int *)t6) = t15;
    t16 = *((unsigned int *)t6);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB14;

LAB15:
LAB16:    t11 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t11, t7, 0, 0, 8, 0LL);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 8, t3, 8, t4, 8);
    t2 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t2, t7, 0, 0, 8, 0LL);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_minus(t7, 8, t3, 8, t4, 8);
    t2 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t2, t7, 0, 0, 8, 0LL);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_rshift(t7, 8, t3, 8, t4, 8);
    t2 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t2, t7, 0, 0, 8, 0LL);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);

LAB17:    t2 = ((char*)((ng1)));
    t25 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t25 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng2)));
    t25 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t25 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng3)));
    t25 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t25 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng4)));
    t25 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t25 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng5)));
    t25 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t25 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng6)));
    t25 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t25 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng7)));
    t25 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t25 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng8)));
    t25 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t25 == 1)
        goto LAB32;

LAB33:
LAB35:
LAB34:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng9)));
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 8, 0LL);

LAB36:    goto LAB2;

LAB6:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t7) = (t18 | t19);
    t20 = (t5 + 4);
    t21 = (t6 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = *((unsigned int *)t21);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t27);
    t30 = (~(t25));
    t31 = (~(t29));
    t32 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t32 & t30);
    t33 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t33 & t31);
    goto LAB8;

LAB9:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t6);
    *((unsigned int *)t7) = (t18 | t19);
    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t22 = *((unsigned int *)t3);
    t23 = (~(t22));
    t24 = *((unsigned int *)t11);
    t26 = (~(t24));
    t27 = *((unsigned int *)t4);
    t28 = (~(t27));
    t30 = *((unsigned int *)t12);
    t31 = (~(t30));
    t25 = (t23 & t26);
    t29 = (t28 & t31);
    t32 = (~(t25));
    t33 = (~(t29));
    t35 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t35 & t32);
    t36 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t36 & t33);
    t37 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t37 & t32);
    t38 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t38 & t33);
    goto LAB11;

LAB13:    t10 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t4);
    *((unsigned int *)t7) = (t10 | t13);
    t14 = *((unsigned int *)t2);
    t15 = *((unsigned int *)t4);
    *((unsigned int *)t2) = (t14 | t15);
    goto LAB12;

LAB14:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t6);
    *((unsigned int *)t7) = (t18 | t19);
    goto LAB16;

LAB18:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 1928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t11 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t11, t6, 0, 0, 8, 0LL);
    goto LAB36;

LAB20:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 2088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t11 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t11, t6, 0, 0, 8, 0LL);
    goto LAB36;

LAB22:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 2248);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t11 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t11, t6, 0, 0, 8, 0LL);
    goto LAB36;

LAB24:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 2408);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t11 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t11, t6, 0, 0, 8, 0LL);
    goto LAB36;

LAB26:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 2568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t11 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t11, t6, 0, 0, 8, 0LL);
    goto LAB36;

LAB28:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 2728);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t11 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t11, t6, 0, 0, 8, 0LL);
    goto LAB36;

LAB30:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 8, 0LL);
    goto LAB36;

LAB32:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 2888);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t11 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t11, t6, 0, 0, 8, 0LL);
    goto LAB36;

}


extern void work_m_00000000002149907282_2725559894_init()
{
	static char *pe[] = {(void *)Always_28_0};
	xsi_register_didat("work_m_00000000002149907282_2725559894", "isim/cpu_sim_isim_beh.exe.sim/work/m_00000000002149907282_2725559894.didat");
	xsi_register_executes(pe);
}
