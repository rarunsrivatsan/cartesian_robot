function bio=txbio
bio = [];
bio(1).blkName='Byte Unpacking ';
bio(1).sigName='';
bio(1).portIdx=0;
bio(1).dim=[3,1];
bio(1).sigWidth=3;
bio(1).sigAddress='&tx_B.ByteUnpacking[0]';
bio(1).ndims=2;
bio(1).size=[];
bio(1).isStruct=false;
bio(getlenBIO) = bio(1);

bio(2).blkName='Receive /p1';
bio(2).sigName='';
bio(2).portIdx=0;
bio(2).dim=[24,1];
bio(2).sigWidth=24;
bio(2).sigAddress='&tx_B.Receive_o1[0]';
bio(2).ndims=2;
bio(2).size=[];
bio(2).isStruct=false;

bio(3).blkName='Receive /p2';
bio(3).sigName='';
bio(3).portIdx=1;
bio(3).dim=[1,1];
bio(3).sigWidth=1;
bio(3).sigAddress='&tx_B.Receive_o2';
bio(3).ndims=2;
bio(3).size=[];
bio(3).isStruct=false;

function len = getlenBIO
len = 3;

