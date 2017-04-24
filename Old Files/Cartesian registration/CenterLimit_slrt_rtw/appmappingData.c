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
			{0,57},
			6,
		},
		{ /* ParamMapInfo */
			CenterLimit_PTIDSMAP,
			CenterLimit_PTNAMESMAP,
			CenterLimit_SPTMAP,
			{0,48},
			49,
		},
		"CenterLimit",
		"",
		"CenterLimit",
		2,
		CenterLimit_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}