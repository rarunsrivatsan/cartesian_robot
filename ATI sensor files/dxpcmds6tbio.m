function bio=dxpcmds6tbio
bio = [];
bio(1).blkName='Model1/p1';
bio(1).sigName='';
bio(1).portIdx=0;
bio(1).dim=[1,1];
bio(1).sigWidth=1;
bio(1).sigAddress='&dxpcmds6t_B.Model1_o1';
bio(1).ndims=2;
bio(1).size=[];
bio(1).isStruct=false;
bio(getlenBIO) = bio(1);

bio(2).blkName='Model1/p2';
bio(2).sigName='';
bio(2).portIdx=1;
bio(2).dim=[1,1];
bio(2).sigWidth=1;
bio(2).sigAddress='&dxpcmds6t_B.Model1_o2';
bio(2).ndims=2;
bio(2).size=[];
bio(2).isStruct=false;

bio(3).blkName='Model1/p3';
bio(3).sigName='';
bio(3).portIdx=2;
bio(3).dim=[1,1];
bio(3).sigWidth=1;
bio(3).sigAddress='&dxpcmds6t_B.Model1_o3';
bio(3).ndims=2;
bio(3).size=[];
bio(3).isStruct=false;

bio(4).blkName='Model1/p4';
bio(4).sigName='';
bio(4).portIdx=3;
bio(4).dim=[6000,1];
bio(4).sigWidth=6000;
bio(4).sigAddress='&dxpcmds6t_B.Model1_o4[0]';
bio(4).ndims=2;
bio(4).size=[];
bio(4).isStruct=false;

bio(5).blkName='Model2/p1';
bio(5).sigName='';
bio(5).portIdx=0;
bio(5).dim=[1,1];
bio(5).sigWidth=1;
bio(5).sigAddress='&dxpcmds6t_B.Model2_o1';
bio(5).ndims=2;
bio(5).size=[];
bio(5).isStruct=false;

bio(6).blkName='Model2/p2';
bio(6).sigName='';
bio(6).portIdx=1;
bio(6).dim=[1,1];
bio(6).sigWidth=1;
bio(6).sigAddress='&dxpcmds6t_B.Model2_o2';
bio(6).ndims=2;
bio(6).size=[];
bio(6).isStruct=false;

bio(7).blkName='Model2/p3';
bio(7).sigName='';
bio(7).portIdx=2;
bio(7).dim=[1,1];
bio(7).sigWidth=1;
bio(7).sigAddress='&dxpcmds6t_B.Model2_o3';
bio(7).ndims=2;
bio(7).size=[];
bio(7).isStruct=false;

function len = getlenBIO
len = 7;

