function bio=rx_targetbio
bio = [];
bio(1).blkName='MATLAB Function';
bio(1).sigName='';
bio(1).portIdx=0;
bio(1).dim=[1,6];
bio(1).sigWidth=6;
bio(1).sigAddress='&rx_target_B.output[0]';
bio(1).ndims=2;
bio(1).size=[];
bio(1).isStruct=false;
bio(getlenBIO) = bio(1);

bio(2).blkName='UDP Receive1';
bio(2).sigName='';
bio(2).portIdx=0;
bio(2).dim=[36,1];
bio(2).sigWidth=36;
bio(2).sigAddress='&rx_target_B.UDPReceive1[0]';
bio(2).ndims=2;
bio(2).size=[];
bio(2).isStruct=false;

function len = getlenBIO
len = 2;

