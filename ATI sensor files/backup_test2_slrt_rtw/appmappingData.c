#include "slrtappmapping.h"
#include "./maps/backup_test2.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <backup_test2> */
		{ /* SignalMapInfo */
			backup_test2_BIOMAP,
			backup_test2_LBLMAP,
			backup_test2_SIDMAP,
			backup_test2_SBIO,
			backup_test2_SLBL,
			{0,69},
			18,
		},
		{ /* ParamMapInfo */
			backup_test2_PTIDSMAP,
			backup_test2_PTNAMESMAP,
			backup_test2_SPTMAP,
			{0,115},
			116,
		},
		"backup_test2",
		"",
		"backup_test2",
		2,
		backup_test2_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}