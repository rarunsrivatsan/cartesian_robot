function pt=dxpcmds_ref2pt
pt = [];

  
pt(1).blockname = 'Constant';
pt(1).paramname = 'Value';
pt(1).class     = 'vector';
pt(1).nrows     = 1;
pt(1).ncols     = 700;
pt(1).subsource = 'SS_DOUBLE';
pt(1).ndims     = '2';
pt(1).size      = '[]';
pt(1).isStruct  = false;
pt(1).symbol     = 'dxpcmds_ref2_P.Constant_Value';
pt(1).baseaddr   = '&dxpcmds_ref2_P.Constant_Value[0]';
pt(1).dtname     = 'real_T';

pt(getlenPT) = pt(1);


  
pt(2).blockname = 'Constant2';
pt(2).paramname = 'Value';
pt(2).class     = 'vector';
pt(2).nrows     = 1;
pt(2).ncols     = 8000;
pt(2).subsource = 'SS_DOUBLE';
pt(2).ndims     = '2';
pt(2).size      = '[]';
pt(2).isStruct  = false;
pt(2).symbol     = 'dxpcmds_ref2_P.Constant2_Value';
pt(2).baseaddr   = '&dxpcmds_ref2_P.Constant2_Value[0]';
pt(2).dtname     = 'real_T';



  
pt(3).blockname = 'Gain1';
pt(3).paramname = 'Gain';
pt(3).class     = 'scalar';
pt(3).nrows     = 1;
pt(3).ncols     = 1;
pt(3).subsource = 'SS_DOUBLE';
pt(3).ndims     = '2';
pt(3).size      = '[]';
pt(3).isStruct  = false;
pt(3).symbol     = 'dxpcmds_ref2_P.Gain1_Gain';
pt(3).baseaddr   = '&dxpcmds_ref2_P.Gain1_Gain';
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
pt(4).symbol     = 'dxpcmds_ref2_P.Gain2_Gain';
pt(4).baseaddr   = '&dxpcmds_ref2_P.Gain2_Gain';
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
pt(5).symbol     = 'dxpcmds_ref2_P.Gain3_Gain';
pt(5).baseaddr   = '&dxpcmds_ref2_P.Gain3_Gain';
pt(5).dtname     = 'real_T';


function len = getlenPT
len = 5;

