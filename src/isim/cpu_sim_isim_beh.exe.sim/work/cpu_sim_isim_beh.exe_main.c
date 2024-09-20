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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000001236386667_0949369315_init();
    work_m_00000000000488507918_0220460083_init();
    work_m_00000000004239572244_3383896982_init();
    work_m_00000000001229122333_1621107508_init();
    work_m_00000000002149907282_2725559894_init();
    work_m_00000000000125033140_3037777339_init();
    work_m_00000000001726815619_1200043877_init();
    work_m_00000000000854259192_0118230654_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000854259192_0118230654");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
