#include "__cf_sldemo_mdlref_counter_datamngt.h"
#ifndef RTW_HEADER_sldemo_mdlref_counter_datamngt_types_h_
#define RTW_HEADER_sldemo_mdlref_counter_datamngt_types_h_
#include "rtwtypes.h"
#include "model_reference_types.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#ifndef DEFINED_TYPEDEF_FOR_CounterParamType_
#define DEFINED_TYPEDEF_FOR_CounterParamType_
typedef struct { int8_T Increment ; int8_T LowerLimit ; int8_T UpperLimit ;
uint8_T sl_padding0 [ 5 ] ; } CounterParamType ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_SlDemoRangeCheck_
#define DEFINED_TYPEDEF_FOR_SlDemoRangeCheck_
typedef int8_T SlDemoRangeCheck ;
#define SlDemoRangeCheck_UpperLimit ((SlDemoRangeCheck)1) 
#define SlDemoRangeCheck_InRange ((SlDemoRangeCheck)0)  
#define SlDemoRangeCheck_LowerLimit ((SlDemoRangeCheck)-1) 
#endif
#ifndef DEFINED_TYPEDEF_FOR_OutputType_
#define DEFINED_TYPEDEF_FOR_OutputType_
typedef struct { int8_T Count ; SlDemoRangeCheck OverflowState ; uint8_T
sl_padding0 [ 6 ] ; } OutputType ;
#endif
typedef struct plpglprfvs f2unubfckq ;
#endif
