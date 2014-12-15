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
    work_m_00000000003527725862_1251139944_init();
    xilinxcorelib_ver_m_00000000001358910285_1146099132_init();
    xilinxcorelib_ver_m_00000000001687936702_0160339527_init();
    xilinxcorelib_ver_m_00000000000277421008_1176563571_init();
    xilinxcorelib_ver_m_00000000002055014830_2448432990_init();
    work_m_00000000002489990758_3554005646_init();
    work_m_00000000003513432494_3836539392_init();
    work_m_00000000003126474120_3068136257_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003126474120_3068136257");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
