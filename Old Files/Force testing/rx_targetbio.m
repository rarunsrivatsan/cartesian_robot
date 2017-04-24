function bio=rx_targetbio
bio = [];
bio(1).blkName='Byte Unpacking 1';
bio(1).sigName='';
bio(1).portIdx=0;
bio(1).dim=[7,1];
bio(1).sigWidth=7;
bio(1).sigAddress='&rx_target_B.ByteUnpacking1[0]';
bio(1).ndims=2;
bio(1).size=[];
bio(1).isStruct=false;
bio(getlenBIO) = bio(1);

bio(2).blkName='Receive 1/p1';
bio(2).sigName='';
bio(2).portIdx=0;
bio(2).dim=[56,1];
bio(2).sigWidth=56;
bio(2).sigAddress='&rx_target_B.Receive1_o1[0]';
bio(2).ndims=2;
bio(2).size=[];
bio(2).isStruct=false;

bio(3).blkName='Receive 1/p2';
bio(3).sigName='';
bio(3).portIdx=1;
bio(3).dim=[1,1];
bio(3).sigWidth=1;
bio(3).sigAddress='&rx_target_B.Receive1_o2';
bio(3).ndims=2;
bio(3).size=[];
bio(3).isStruct=false;

function len = getlenBIO
len = 3;

