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
    work_m_00000000000433204469_2902715030_init();
    work_m_00000000002416327889_3860410111_init();
    work_m_00000000000751433351_0733047987_init();
    work_m_00000000000751433351_4245357609_init();
    work_m_00000000003343275274_1144213856_init();
    work_m_00000000003361439597_3366220470_init();
    work_m_00000000004076550942_0886308060_init();
    work_m_00000000003110412717_0278921292_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003110412717_0278921292");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
