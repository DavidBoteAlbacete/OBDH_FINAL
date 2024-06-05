/*
 * emu_sc_pus_service129.cpp
 *
 *  Created on: Jun 4, 2024
 *      Author: user
 */
#include "public/emu_gss_v1.h"
#include "emu_gss/emu_gss_pus_service129.h"
#define TC_129_1_APPDATA_LENGTH 8
#define TC_129_2_APPDATA_LENGTH 8

//Telecommand TC(129,1) header
EmuGSS_TCProgram129_1::EmuGSS_TCProgram129_1(uint32_t uniTime2YK,
											 const char * brief,
											 float CVx,
											 float CVy):EmuGSS_TCProgram(uniTime2YK,
													                     129,
																		 1,
													                     TC_129_1_APPDATA_LENGTH,
																		 brief)
{
	 sCVx=CVx;
	 sCVy=CVy;
     NewProgram(this);
}
//Telecommand TC(129,1) application data
void EmuGSS_TCProgram129_1::BuildTCAppData(tc_descriptor_t &tc_descriptor)
{
	SetNextFloat(sCVx);
	SetNextFloat(sCVy);
}



//Telecommand TC(129,2) header
EmuGSS_TCProgram129_2::EmuGSS_TCProgram129_2(uint32_t uniTime2YK,
		                                     const char * brief,
											 float Kpx,
											 float Kpy):EmuGSS_TCProgram(uniTime2YK,
													 	 	 	 	 	 129,
																		 2,
																		 TC_129_2_APPDATA_LENGTH,brief)
{
	 sKpx = Kpx;
	 sKpy = Kpy;
     NewProgram(this);
}
//Telecommand TC(129,2) application data
void EmuGSS_TCProgram129_2::BuildTCAppData(tc_descriptor_t &tc_descriptor)
{
	SetNextFloat(sKpx);
	SetNextFloat(sKpy);
}
