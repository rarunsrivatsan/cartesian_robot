#include "slrtappmapping.h"
#include "./maps/rx_target.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <rx_target> */
		{ /* SignalMapInfo */
			rx_target_BIOMAP,
			rx_target_LBLMAP,
			rx_target_SIDMAP,
			rx_target_SBIO,
			rx_target_SLBL,
			{0,41},
			2,
		},
		{ /* ParamMapInfo */
			rx_target_PTIDSMAP,
			rx_target_PTNAMESMAP,
			rx_target_SPTMAP,
			{-1,-1},
			0,
		},
		"rx_target",
		"",
		"rx_target",
		2,
		rx_target_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}