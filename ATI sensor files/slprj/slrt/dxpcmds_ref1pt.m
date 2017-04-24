function pt=dxpcmds_ref1pt
pt = [];

  
pt(1).blockname = 'Constant';
pt(1).paramname = 'Value';
pt(1).class     = 'vector';
pt(1).nrows     = 1;
pt(1).ncols     = 600;
pt(1).subsource = 'SS_DOUBLE';
pt(1).ndims     = '2';
pt(1).size      = '[]';
pt(1).isStruct  = false;
pt(1).symbol     = 'dxpcmds_ref1_P.Constant_Value';
pt(1).baseaddr   = '&dxpcmds_ref1_P.Constant_Value[0]';
pt(1).dtname     = 'real_T';

pt(getlenPT) = pt(1);


  
pt(2).blockname = 'Constant2';
pt(2).paramname = 'Value';
pt(2).class     = 'vector';
pt(2).nrows     = 1;
pt(2).ncols     = 3000;
pt(2).subsource = 'SS_DOUBLE';
pt(2).ndims     = '2';
pt(2).size      = '[]';
pt(2).isStruct  = false;
pt(2).symbol     = 'dxpcmds_ref1_P.Constant2_Value';
pt(2).baseaddr   = '&dxpcmds_ref1_P.Constant2_Value[0]';
pt(2).dtname     = 'real_T';



  
pt(3).blockname = 'Constant3';
pt(3).paramname = 'Value';
pt(3).class     = 'vector';
pt(3).nrows     = 1;
pt(3).ncols     = 6000;
pt(3).subsource = 'SS_DOUBLE';
pt(3).ndims     = '2';
pt(3).size      = '[]';
pt(3).isStruct  = false;
pt(3).symbol     = 'dxpcmds_ref1_P.Constant3_Value';
pt(3).baseaddr   = '&dxpcmds_ref1_P.Constant3_Value[0]';
pt(3).dtname     = 'real_T';



  
pt(4).blockname = 'Gain2';
pt(4).paramname = 'Gain';
pt(4).class     = 'scalar';
pt(4).nrows     = 1;
pt(4).ncols     = 1;
pt(4).subsource = 'SS_DOUBLE';
pt(4).ndims     = '2';
pt(4).size      = '[]';
pt(4).isStruct  = false;
pt(4).symbol     = 'dxpcmds_ref1_P.Gain2_Gain';
pt(4).baseaddr   = '&dxpcmds_ref1_P.Gain2_Gain';
pt(4).dtname     = 'real_T';



  
pt(5).blockname = 'Gain3';
pt(5).paramname = 'Gain';
pt(5).class     = 'scalar';
pt(5).nrows     = 1;
pt(5).ncols     = 1;
pt(5).subsource = 'SS_DOUBLE';
pt(5).ndims     = '2';
pt(5).size      = '[]';
pt(5).isStruct  = false;
pt(5).symbol     = 'dxpcmds_ref1_P.Gain3_Gain';
pt(5).baseaddr   = '&dxpcmds_ref1_P.Gain3_Gain';
pt(5).dtname     = 'real_T';



  
pt(6).blockname = 'Gain4';
pt(6).paramname = 'Gain';
pt(6).class     = 'scalar';
pt(6).nrows     = 1;
pt(6).ncols     = 1;
pt(6).subsource = 'SS_DOUBLE';
pt(6).ndims     = '2';
pt(6).size      = '[]';
pt(6).isStruct  = false;
pt(6).symbol     = 'dxpcmds_ref1_P.Gain4_Gain';
pt(6).baseaddr   = '&dxpcmds_ref1_P.Gain4_Gain';
pt(6).dtname     = 'real_T';



  
pt(7).blockname = 'Rate Transition';
pt(7).paramname = 'X0';
pt(7).class     = 'scalar';
pt(7).nrows     = 1;
pt(7).ncols     = 1;
pt(7).subsource = 'SS_DOUBLE';
pt(7).ndims     = '2';
pt(7).size      = '[]';
pt(7).isStruct  = false;
pt(7).symbol     = 'dxpcmds_ref1_P.RateTransition_X0';
pt(7).baseaddr   = '&dxpcmds_ref1_P.RateTransition_X0';
pt(7).dtname     = 'real_T';


function len = getlenPT
len = 7;

