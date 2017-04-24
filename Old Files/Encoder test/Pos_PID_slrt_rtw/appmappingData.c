#include "slrtappmapping.h"
#include "./maps/Pos_PID.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <Pos_PID> */
		{ /* SignalMapInfo */
			Pos_PID_BIOMAP,
			Pos_PID_LBLMAP,
			Pos_PID_SIDMAP,
			Pos_PID_SBIO,
			Pos_PID_SLBL,
			{0,53},
			54,
		},
		{ /* ParamMapInfo */
			Pos_PID_PTIDSMAP,
			Pos_PID_PTNAMESMAP,
			Pos_PID_SPTMAP,
			{0,182},
			183,
		},
		"Pos_PID",
		"",
		"Pos_PID",
		2,
		Pos_PID_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}