#include "slrtappmapping.h"
#include "./maps/Registration_Estimation.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <Registration_Estimation> */
		{ /* SignalMapInfo */
			Registration_Estimation_BIOMAP,
			Registration_Estimation_LBLMAP,
			Registration_Estimation_SIDMAP,
			Registration_Estimation_SBIO,
			Registration_Estimation_SLBL,
			{0,84},
			33,
		},
		{ /* ParamMapInfo */
			Registration_Estimation_PTIDSMAP,
			Registration_Estimation_PTNAMESMAP,
			Registration_Estimation_SPTMAP,
			{0,159},
			160,
		},
		"Registration_Estimation",
		"",
		"Registration_Estimation",
		2,
		Registration_Estimation_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}