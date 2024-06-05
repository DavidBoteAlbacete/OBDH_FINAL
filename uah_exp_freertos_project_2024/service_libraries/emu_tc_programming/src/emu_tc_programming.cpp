#include <public/emu_hw_timecode_drv_v1.h>
#include <public/emu_sc_channel_drv_v1.h>
#include <public/emu_gss_v1.h>

#define FT_UAH_EXP_SERV_129_0010
//#define FT_UAH_EXP_SERV_129_HK_CHECKING_0020


// Test 0010: Prueba de los telecomandos del servicio 129 para cobertura
#ifdef FT_UAH_EXP_SERV_129_0010

EmuGSS_TCProgram129_2 prog_FT_0010_step_0(UNITIME_AFTER_POWER_ON + 5,
                    "FT_UAH_EXP_SERV_129_0000 step 0, INITIALIZING LANDING Kpx and Kpy to 0.4", 0.4, 0.4);

EmuGSS_TCProgram129_1 prog_FT_0010_step_1(UNITIME_AFTER_POWER_ON + 10,
                    "FT_UAH_EXP_SERV_129_0000 step 1, INITIALIZING LANDING Vpx and Vpy to 0.8", 0.8, 0.8);

EmuGSS_TCProgram129_2 prog_FT_0010_step_2(UNITIME_AFTER_POWER_ON + 25,
                    "FT_UAH_EXP_SERV_129_0000 step 2, LOCKING LANDING SITE Kpx and Kpy to 0.3", 0.3, 0.3);

EmuGSS_TCProgram129_1 prog_FT_0010_step_3(UNITIME_AFTER_POWER_ON + 30,
                    "FT_UAH_EXP_SERV_129_0000 step 3, LOCKING LANDING SITE Vpx and Vpy to 0.6", 0.6, 0.6);

EmuGSS_TCProgram129_2 prog_FT_0010_step_4(UNITIME_AFTER_POWER_ON + 55,
                    "FT_UAH_EXP_SERV_129_0000 step 4, NEARING SURFACE Kpx and Kpy to 0.2", 0.2, 0.2);

EmuGSS_TCProgram129_1 prog_FT_0010_step_5(UNITIME_AFTER_POWER_ON + 60,
                    "FT_UAH_EXP_SERV_129_0000 step 5, NEARING SURFACE Vpx and Vpy to 0.3", 0.3, 0.3);

EmuGSS_TCProgram129_2 prog_FT_0010_step_6(UNITIME_AFTER_POWER_ON + 80,
                    "FT_UAH_EXP_SERV_129_0000 step 6, FINAL TUNING Kpx and Kpy to 0.1", 0.1, 0.1);

EmuGSS_TCProgram129_1 prog_FT_0010_step_7(UNITIME_AFTER_POWER_ON + 85,
                    "FT_UAH_EXP_SERV_129_0000 step 7, FINAL TUNING Vpx and Vpy to 0.1", 0.1, 0.1);

EmuGSS_TCProgram128_1 prog_FT_0010_step_8(UNITIME_AFTER_POWER_ON + 100,
                    "FT_UAH_EXP_SERV_129_0000 step 8, LANDING SEQUENCE COMPLETED, FINISH TEST"); // Finish test

#endif


// Test 0020: Reporte de parametros con servicio HK
#ifdef FT_UAH_EXP_SERV_129_HK_CHECKING_0020

EmuGSS_TCProgram129_2 prog_FT_0010_step_0(UNITIME_AFTER_POWER_ON + 10,
                    "FT_UAH_EXP_SERV_129_0000 step 0, INITIALIZING LANDING Kpx and Kpy to 0.4", 0.4, 0.4);

EmuGSS_TCProgram129_1 prog_FT_0010_step_1(UNITIME_AFTER_POWER_ON + 15,
                    "FT_UAH_EXP_SERV_129_0000 step 1, INITIALIZING LANDING Vpx and Vpy to 0.8", 0.8, 0.8);

EmuGSS_TCProgram129_2 prog_FT_0010_step_2(UNITIME_AFTER_POWER_ON + 25,
                    "FT_UAH_EXP_SERV_129_0000 step 2, LOCKING LANDING SITE Kpx and Kpy to 0.3", 0.3, 0.3);

EmuGSS_TCProgram129_1 prog_FT_0010_step_3(UNITIME_AFTER_POWER_ON + 30,
                    "FT_UAH_EXP_SERV_129_0000 step 3, LOCKING LANDING SITE Vpx and Vpy to 0.6", 0.6, 0.6);

EmuGSS_TCProgram129_2 prog_FT_0010_step_4(UNITIME_AFTER_POWER_ON + 55,
                    "FT_UAH_EXP_SERV_129_0000 step 4, NEARING SURFACE Kpx and Kpy to 0.2", 0.2, 0.2);

EmuGSS_TCProgram129_1 prog_FT_0010_step_5(UNITIME_AFTER_POWER_ON + 60,
                    "FT_UAH_EXP_SERV_129_0000 step 5, NEARING SURFACE Vpx and Vpy to 0.3", 0.3, 0.3);

EmuGSS_TCProgram129_2 prog_FT_0010_step_6(UNITIME_AFTER_POWER_ON + 80,
                    "FT_UAH_EXP_SERV_129_0000 step 6, FINAL TUNING Kpx and Kpy to 0.2", 0.1, 0.1);

EmuGSS_TCProgram129_1 prog_FT_0010_step_7(UNITIME_AFTER_POWER_ON + 85,
                    "FT_UAH_EXP_SERV_129_0000 step 7, FINAL TUNING Vpx and Vpy to 0.3", 0.05, 0.05);

EmuGSS_TCProgram128_1 prog_FT_0010_step_8(UNITIME_AFTER_POWER_ON + 100,
                    "FT_UAH_EXP_SERV_129_0000 step 8, LANDING SEQUENCE COMPLETED, FINISH TEST"); // Finish test

#endif
