#include "slrtappmapping.h"
#include "./maps/slrt_parker.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <slrt_parker> */
		{ /* SignalMapInfo */
			slrt_parker_BIOMAP,
			slrt_parker_LBLMAP,
			slrt_parker_SIDMAP,
			slrt_parker_SBIO,
			slrt_parker_SLBL,
			{0,362},
			106,
		},
		{ /* ParamMapInfo */
			slrt_parker_PTIDSMAP,
			slrt_parker_PTNAMESMAP,
			slrt_parker_SPTMAP,
			{0,231},
			232,
		},
		"slrt_parker",
		"",
		"slrt_parker",
		4,
		slrt_parker_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}