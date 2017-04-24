#include "slrtappmapping.h"
#include "./maps/CenterLimit.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <CenterLimit> */
		{ /* SignalMapInfo */
			CenterLimit_BIOMAP,
			CenterLimit_LBLMAP,
			CenterLimit_SIDMAP,
			CenterLimit_SBIO,
			CenterLimit_SLBL,
			{0,3},
			4,
		},
		{ /* ParamMapInfo */
			CenterLimit_PTIDSMAP,
			CenterLimit_PTNAMESMAP,
			CenterLimit_SPTMAP,
			{0,61},
			62,
		},
		"CenterLimit",
		"",
		"CenterLimit",
		1,
		CenterLimit_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}