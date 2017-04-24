#include "slrtappmapping.h"
#include "./maps/backup_test1.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <backup_test1> */
		{ /* SignalMapInfo */
			backup_test1_BIOMAP,
			backup_test1_LBLMAP,
			backup_test1_SIDMAP,
			backup_test1_SBIO,
			backup_test1_SLBL,
			{0,2},
			3,
		},
		{ /* ParamMapInfo */
			backup_test1_PTIDSMAP,
			backup_test1_PTNAMESMAP,
			backup_test1_SPTMAP,
			{0,43},
			44,
		},
		"backup_test1",
		"",
		"backup_test1",
		1,
		backup_test1_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}