function pt=txpt
pt = [];

  
pt(1).blockname = 'Receive ';
pt(1).paramname = 'P1';
pt(1).class     = 'vector';
pt(1).nrows     = 1;
pt(1).ncols     = 11;
pt(1).subsource = 'SS_DOUBLE';
pt(1).ndims     = '2';
pt(1).size      = '[]';
pt(1).isStruct  = false;
pt(1).symbol     = 'tx_P.Receive_P1';
pt(1).baseaddr   = '&tx_P.Receive_P1[0]';
pt(1).dtname     = 'real_T';

pt(getlenPT) = pt(1);


  
pt(2).blockname = 'Receive ';
pt(2).paramname = 'P2';
pt(2).class     = 'scalar';
pt(2).nrows     = 1;
pt(2).ncols     = 1;
pt(2).subsource = 'SS_DOUBLE';
pt(2).ndims     = '2';
pt(2).size      = '[]';
pt(2).isStruct  = false;
pt(2).symbol     = 'tx_P.Receive_P2';
pt(2).baseaddr   = '&tx_P.Receive_P2';
pt(2).dtname     = 'real_T';



  
pt(3).blockname = 'Receive ';
pt(3).paramname = 'P3';
pt(3).class     = 'scalar';
pt(3).nrows     = 1;
pt(3).ncols     = 1;
pt(3).subsource = 'SS_DOUBLE';
pt(3).ndims     = '2';
pt(3).size      = '[]';
pt(3).isStruct  = false;
pt(3).symbol     = 'tx_P.Receive_P3';
pt(3).baseaddr   = '&tx_P.Receive_P3';
pt(3).dtname     = 'real_T';



  
pt(4).blockname = 'Receive ';
pt(4).paramname = 'P4';
pt(4).class     = 'scalar';
pt(4).nrows     = 1;
pt(4).ncols     = 1;
pt(4).subsource = 'SS_DOUBLE';
pt(4).ndims     = '2';
pt(4).size      = '[]';
pt(4).isStruct  = false;
pt(4).symbol     = 'tx_P.Receive_P4';
pt(4).baseaddr   = '&tx_P.Receive_P4';
pt(4).dtname     = 'real_T';



  
pt(5).blockname = 'Receive ';
pt(5).paramname = 'P5';
pt(5).class     = 'scalar';
pt(5).nrows     = 1;
pt(5).ncols     = 1;
pt(5).subsource = 'SS_DOUBLE';
pt(5).ndims     = '2';
pt(5).size      = '[]';
pt(5).isStruct  = false;
pt(5).symbol     = 'tx_P.Receive_P5';
pt(5).baseaddr   = '&tx_P.Receive_P5';
pt(5).dtname     = 'real_T';


function len = getlenPT
len = 5;

