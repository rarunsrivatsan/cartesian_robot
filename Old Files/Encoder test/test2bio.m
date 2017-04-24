function bio=test2bio
bio = [];
bio(1).blkName='count_to_rev2';
bio(1).sigName='';
bio(1).portIdx=0;
bio(1).dim=[1,1];
bio(1).sigWidth=1;
bio(1).sigAddress='&test2_B.count_to_rev2';
bio(1).ndims=2;
bio(1).size=[];
bio(1).isStruct=false;
bio(getlenBIO) = bio(1);

bio(2).blkName='CNT32-8M(PCI) 1';
bio(2).sigName='counts';
bio(2).portIdx=0;
bio(2).dim=[1,1];
bio(2).sigWidth=1;
bio(2).sigAddress='&test2_B.counts';
bio(2).ndims=2;
bio(2).size=[];
bio(2).isStruct=false;

bio(3).blkName='PCI-DDA08 12 1';
bio(3).sigName='Limit Switch';
bio(3).portIdx=0;
bio(3).dim=[1,1];
bio(3).sigWidth=1;
bio(3).sigAddress='&test2_B.LimitSwitch';
bio(3).ndims=2;
bio(3).size=[];
bio(3).isStruct=false;

bio(4).blkName='PCI-DDA08 12 3';
bio(4).sigName='Limit Switch';
bio(4).portIdx=0;
bio(4).dim=[1,1];
bio(4).sigWidth=1;
bio(4).sigAddress='&test2_B.LimitSwitch_a';
bio(4).ndims=2;
bio(4).size=[];
bio(4).isStruct=false;

bio(5).blkName='Sum2';
bio(5).sigName='';
bio(5).portIdx=0;
bio(5).dim=[1,1];
bio(5).sigWidth=1;
bio(5).sigAddress='&test2_B.Sum2';
bio(5).ndims=2;
bio(5).size=[];
bio(5).isStruct=false;

function len = getlenBIO
len = 5;

