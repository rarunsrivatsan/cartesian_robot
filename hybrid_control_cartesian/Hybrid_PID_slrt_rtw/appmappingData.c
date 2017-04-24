#include "slrtappmapping.h"
#include "./maps/Hybrid_PID.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <Hybrid_PID> */
		{ /* SignalMapInfo */
			Hybrid_PID_BIOMAP,
			Hybrid_PID_LBLMAP,
			Hybrid_PID_SIDMAP,
			Hybrid_PID_SBIO,
			Hybrid_PID_SLBL,
			{0,156},
			102,
		},
		{ /* ParamMapInfo */
			Hybrid_PID_PTIDSMAP,
			Hybrid_PID_PTNAMESMAP,
			Hybrid_PID_SPTMAP,
			{0,220},
			221,
		},
		"Hybrid_PID",
		"",
		"Hybrid_PID",
		3,
		Hybrid_PID_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}