#include "slrtappmapping.h"
#include "./maps/dxpcmds6t.map"

#include "./maps/dxpcmds_ref1.map"

#include "./maps/dxpcmds_ref2.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <dxpcmds6t> */
		{ /* SignalMapInfo */
			dxpcmds6t_BIOMAP,
			dxpcmds6t_LBLMAP,
			dxpcmds6t_SIDMAP,
			dxpcmds6t_SBIO,
			dxpcmds6t_SLBL,
			{0,6005},
			7,
		},
		{ /* ParamMapInfo */
			dxpcmds6t_PTIDSMAP,
			dxpcmds6t_PTNAMESMAP,
			dxpcmds6t_SPTMAP,
			{-1,-1},
			0,
		},
		"dxpcmds6t",
		"",
		"dxpcmds6t",
		1,
		dxpcmds6t_dtmap,
	},
	{ /* Idx 1, <dxpcmds_ref1> */
		{ /* SignalMapInfo */
			dxpcmds_ref1_BIOMAP,
			dxpcmds_ref1_LBLMAP,
			dxpcmds_ref1_SIDMAP,
			dxpcmds_ref1_SBIO,
			dxpcmds_ref1_SLBL,
			{6006,92405},
			27,
		},
		{ /* ParamMapInfo */
			dxpcmds_ref1_PTIDSMAP,
			dxpcmds_ref1_PTNAMESMAP,
			dxpcmds_ref1_SPTMAP,
			{0,6},
			7,
		},
		"dxpcmds_ref1",
		"Model1",
		"dxpcmds6t/Model1",
		1,
		dxpcmds_ref1_dtmap,
	},
	{ /* Idx 2, <dxpcmds_ref2> */
		{ /* SignalMapInfo */
			dxpcmds_ref2_BIOMAP,
			dxpcmds_ref2_LBLMAP,
			dxpcmds_ref2_SIDMAP,
			dxpcmds_ref2_SBIO,
			dxpcmds_ref2_SLBL,
			{92406,224705},
			27,
		},
		{ /* ParamMapInfo */
			dxpcmds_ref2_PTIDSMAP,
			dxpcmds_ref2_PTNAMESMAP,
			dxpcmds_ref2_SPTMAP,
			{7,11},
			5,
		},
		"dxpcmds_ref2",
		"Model2",
		"dxpcmds6t/Model2",
		1,
		dxpcmds_ref2_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}