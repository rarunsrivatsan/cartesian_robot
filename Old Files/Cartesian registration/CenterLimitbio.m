function bio=CenterLimitbio
bio = [];
bio(1).blkName='Constant';
bio(1).sigName='';
bio(1).portIdx=0;
bio(1).dim=[1,1];
bio(1).sigWidth=1;
bio(1).sigAddress='&CenterLimit_B.Constant';
bio(1).ndims=2;
bio(1).size=[];
bio(1).isStruct=false;
bio(getlenBIO) = bio(1);

bio(2).blkName='Byte Unpacking 1';
bio(2).sigName='orce Data';
bio(2).portIdx=0;
bio(2).dim=[6,1];
bio(2).sigWidth=6;
bio(2).sigAddress='&CenterLimit_B.orceData[0]';
bio(2).ndims=2;
bio(2).size=[];
bio(2).isStruct=false;

bio(3).blkName='PCI-DDA08 12 1';
bio(3).sigName='';
bio(3).portIdx=0;
bio(3).dim=[1,1];
bio(3).sigWidth=1;
bio(3).sigAddress='&CenterLimit_B.PCIDDA08121';
bio(3).ndims=2;
bio(3).size=[];
bio(3).isStruct=false;

bio(4).blkName='PCI-DDA08 12 2';
bio(4).sigName='';
bio(4).portIdx=0;
bio(4).dim=[1,1];
bio(4).sigWidth=1;
bio(4).sigAddress='&CenterLimit_B.PCIDDA08122';
bio(4).ndims=2;
bio(4).size=[];
bio(4).isStruct=false;

bio(5).blkName='Receive 1/p1';
bio(5).sigName='';
bio(5).portIdx=0;
bio(5).dim=[48,1];
bio(5).sigWidth=48;
bio(5).sigAddress='&CenterLimit_B.Receive1_o1[0]';
bio(5).ndims=2;
bio(5).size=[];
bio(5).isStruct=false;

bio(6).blkName='Receive 1/p2';
bio(6).sigName='';
bio(6).portIdx=1;
bio(6).dim=[1,1];
bio(6).sigWidth=1;
bio(6).sigAddress='&CenterLimit_B.Receive1_o2';
bio(6).ndims=2;
bio(6).size=[];
bio(6).isStruct=false;

function len = getlenBIO
len = 6;

