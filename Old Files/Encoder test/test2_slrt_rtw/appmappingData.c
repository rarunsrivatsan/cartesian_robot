#include "slrtappmapping.h"
#include "./maps/test2.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <test2> */
		{ /* SignalMapInfo */
			test2_BIOMAP,
			test2_LBLMAP,
			test2_SIDMAP,
			test2_SBIO,
			test2_SLBL,
			{0,4},
			5,
		},
		{ /* ParamMapInfo */
			test2_PTIDSMAP,
			test2_PTNAMESMAP,
			test2_SPTMAP,
			{0,72},
			73,
		},
		"test2",
		"",
		"test2",
		1,
		test2_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}