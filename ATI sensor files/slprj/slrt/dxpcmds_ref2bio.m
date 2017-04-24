function bio=dxpcmds_ref2bio
bio = [];
bio(1).blkName='Gain1';
bio(1).sigName='';
bio(1).portIdx=0;
bio(1).dim=[6000,1];
bio(1).sigWidth=6000;
bio(1).sigAddress='&localB->Gain1[0]';
bio(1).ndims=2;
bio(1).size=[];
bio(1).isStruct=false;
bio(getlenBIO) = bio(1);

bio(2).blkName='Gain2';
bio(2).sigName='';
bio(2).portIdx=0;
bio(2).dim=[700,1];
bio(2).sigWidth=700;
bio(2).sigAddress='&localB->Gain2[0]';
bio(2).ndims=2;
bio(2).size=[];
bio(2).isStruct=false;

bio(3).blkName='Gain3';
bio(3).sigName='';
bio(3).portIdx=0;
bio(3).dim=[8000,1];
bio(3).sigWidth=8000;
bio(3).sigAddress='&localB->Gain3[0]';
bio(3).ndims=2;
bio(3).size=[];
bio(3).isStruct=false;

bio(4).blkName='Sum';
bio(4).sigName='';
bio(4).portIdx=0;
bio(4).dim=[700,1];
bio(4).sigWidth=700;
bio(4).sigAddress='&localB->Sum[0]';
bio(4).ndims=2;
bio(4).size=[];
bio(4).isStruct=false;

bio(5).blkName='Sum1';
bio(5).sigName='';
bio(5).portIdx=0;
bio(5).dim=[6000,1];
bio(5).sigWidth=6000;
bio(5).sigAddress='&localB->Sum1[0]';
bio(5).ndims=2;
bio(5).size=[];
bio(5).isStruct=false;

bio(6).blkName='Sum2';
bio(6).sigName='';
bio(6).portIdx=0;
bio(6).dim=[8000,1];
bio(6).sigWidth=8000;
bio(6).sigAddress='&localB->Sum2[0]';
bio(6).ndims=2;
bio(6).size=[];
bio(6).isStruct=false;

bio(7).blkName='max Error/Abs';
bio(7).sigName='';
bio(7).portIdx=0;
bio(7).dim=[700,1];
bio(7).sigWidth=700;
bio(7).sigAddress='&localB->Abs[0]';
bio(7).ndims=2;
bio(7).size=[];
bio(7).isStruct=false;

bio(8).blkName='max Error1/Abs';
bio(8).sigName='';
bio(8).portIdx=0;
bio(8).dim=[6000,1];
bio(8).sigWidth=6000;
bio(8).sigAddress='&localB->Abs_b[0]';
bio(8).ndims=2;
bio(8).size=[];
bio(8).isStruct=false;

bio(9).blkName='max Error2/Abs';
bio(9).sigName='';
bio(9).portIdx=0;
bio(9).dim=[8000,1];
bio(9).sigWidth=8000;
bio(9).sigAddress='&localB->Abs_n[0]';
bio(9).ndims=2;
bio(9).size=[];
bio(9).isStruct=false;

bio(10).blkName='unity math/math/exp';
bio(10).sigName='';
bio(10).portIdx=0;
bio(10).dim=[700,1];
bio(10).sigWidth=700;
bio(10).sigAddress='&localB->exp_h[0]';
bio(10).ndims=2;
bio(10).size=[];
bio(10).isStruct=false;

bio(11).blkName='unity math/math/log';
bio(11).sigName='';
bio(11).portIdx=0;
bio(11).dim=[700,1];
bio(11).sigWidth=700;
bio(11).sigAddress='&localB->log_h[0]';
bio(11).ndims=2;
bio(11).size=[];
bio(11).isStruct=false;

bio(12).blkName='unity math/math1/exp';
bio(12).sigName='';
bio(12).portIdx=0;
bio(12).dim=[700,1];
bio(12).sigWidth=700;
bio(12).sigAddress='&localB->exp_g[0]';
bio(12).ndims=2;
bio(12).size=[];
bio(12).isStruct=false;

bio(13).blkName='unity math/math1/log';
bio(13).sigName='';
bio(13).portIdx=0;
bio(13).dim=[700,1];
bio(13).sigWidth=700;
bio(13).sigAddress='&localB->log_c[0]';
bio(13).ndims=2;
bio(13).size=[];
bio(13).isStruct=false;

bio(14).blkName='unity math/math2/exp';
bio(14).sigName='';
bio(14).portIdx=0;
bio(14).dim=[700,1];
bio(14).sigWidth=700;
bio(14).sigAddress='&localB->exp_f[0]';
bio(14).ndims=2;
bio(14).size=[];
bio(14).isStruct=false;

bio(15).blkName='unity math/math2/log';
bio(15).sigName='';
bio(15).portIdx=0;
bio(15).dim=[700,1];
bio(15).sigWidth=700;
bio(15).sigAddress='&localB->log_e[0]';
bio(15).ndims=2;
bio(15).size=[];
bio(15).isStruct=false;

bio(16).blkName='unity math1/math/exp';
bio(16).sigName='';
bio(16).portIdx=0;
bio(16).dim=[6000,1];
bio(16).sigWidth=6000;
bio(16).sigAddress='&localB->exp_l[0]';
bio(16).ndims=2;
bio(16).size=[];
bio(16).isStruct=false;

bio(17).blkName='unity math1/math/log';
bio(17).sigName='';
bio(17).portIdx=0;
bio(17).dim=[6000,1];
bio(17).sigWidth=6000;
bio(17).sigAddress='&localB->log_g[0]';
bio(17).ndims=2;
bio(17).size=[];
bio(17).isStruct=false;

bio(18).blkName='unity math1/math1/exp';
bio(18).sigName='';
bio(18).portIdx=0;
bio(18).dim=[6000,1];
bio(18).sigWidth=6000;
bio(18).sigAddress='&localB->exp_e[0]';
bio(18).ndims=2;
bio(18).size=[];
bio(18).isStruct=false;

bio(19).blkName='unity math1/math1/log';
bio(19).sigName='';
bio(19).portIdx=0;
bio(19).dim=[6000,1];
bio(19).sigWidth=6000;
bio(19).sigAddress='&localB->log_o[0]';
bio(19).ndims=2;
bio(19).size=[];
bio(19).isStruct=false;

bio(20).blkName='unity math1/math2/exp';
bio(20).sigName='';
bio(20).portIdx=0;
bio(20).dim=[6000,1];
bio(20).sigWidth=6000;
bio(20).sigAddress='&localB->exp_hn[0]';
bio(20).ndims=2;
bio(20).size=[];
bio(20).isStruct=false;

bio(21).blkName='unity math1/math2/log';
bio(21).sigName='';
bio(21).portIdx=0;
bio(21).dim=[6000,1];
bio(21).sigWidth=6000;
bio(21).sigAddress='&localB->log_n[0]';
bio(21).ndims=2;
bio(21).size=[];
bio(21).isStruct=false;

bio(22).blkName='unity math2/math/exp';
bio(22).sigName='';
bio(22).portIdx=0;
bio(22).dim=[8000,1];
bio(22).sigWidth=8000;
bio(22).sigAddress='&localB->exp_o[0]';
bio(22).ndims=2;
bio(22).size=[];
bio(22).isStruct=false;

bio(23).blkName='unity math2/math/log';
bio(23).sigName='';
bio(23).portIdx=0;
bio(23).dim=[8000,1];
bio(23).sigWidth=8000;
bio(23).sigAddress='&localB->log_m[0]';
bio(23).ndims=2;
bio(23).size=[];
bio(23).isStruct=false;

bio(24).blkName='unity math2/math1/exp';
bio(24).sigName='';
bio(24).portIdx=0;
bio(24).dim=[8000,1];
bio(24).sigWidth=8000;
bio(24).sigAddress='&localB->exp_c[0]';
bio(24).ndims=2;
bio(24).size=[];
bio(24).isStruct=false;

bio(25).blkName='unity math2/math1/log';
bio(25).sigName='';
bio(25).portIdx=0;
bio(25).dim=[8000,1];
bio(25).sigWidth=8000;
bio(25).sigAddress='&localB->log_go[0]';
bio(25).ndims=2;
bio(25).size=[];
bio(25).isStruct=false;

bio(26).blkName='unity math2/math2/exp';
bio(26).sigName='';
bio(26).portIdx=0;
bio(26).dim=[8000,1];
bio(26).sigWidth=8000;
bio(26).sigAddress='&localB->exp_j[0]';
bio(26).ndims=2;
bio(26).size=[];
bio(26).isStruct=false;

bio(27).blkName='unity math2/math2/log';
bio(27).sigName='';
bio(27).portIdx=0;
bio(27).dim=[8000,1];
bio(27).sigWidth=8000;
bio(27).sigAddress='&localB->log_d[0]';
bio(27).ndims=2;
bio(27).size=[];
bio(27).isStruct=false;

function len = getlenBIO
len = 27;

