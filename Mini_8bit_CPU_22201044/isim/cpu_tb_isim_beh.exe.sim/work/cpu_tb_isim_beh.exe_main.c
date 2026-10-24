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
    work_m_13913137079546480140_3383896982_init();
    work_m_14625090100985153945_3133866115_init();
    work_m_14756577966503682500_1351276808_init();
    work_m_01444474594442125167_2725559894_init();
    work_m_11213355428341868978_1260470467_init();
    work_m_04760339659250405524_1200043877_init();
    work_m_06126303625941415049_1912994691_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_06126303625941415049_1912994691");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
