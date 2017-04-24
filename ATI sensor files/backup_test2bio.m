function bio=backup_test2bio
bio = [];
bio(1).blkName='MATLAB Function/p1';
bio(1).sigName='motX';
bio(1).portIdx=0;
bio(1).dim=[1,1];
bio(1).sigWidth=1;
bio(1).sigAddress='&backup_test2_B.motX';
bio(1).ndims=2;
bio(1).size=[];
bio(1).isStruct=false;
bio(getlenBIO) = bio(1);

bio(2).blkName='MATLAB Function/p2';
bio(2).sigName='motY';
bio(2).portIdx=1;
bio(2).dim=[1,1];
bio(2).sigWidth=1;
bio(2).sigAddress='&backup_test2_B.motY';
bio(2).ndims=2;
bio(2).size=[];
bio(2).isStruct=false;

bio(3).blkName='Abs';
bio(3).sigName='Y enable';
bio(3).portIdx=0;
bio(3).dim=[1,1];
bio(3).sigWidth=1;
bio(3).sigAddress='&backup_test2_B.Yenable';
bio(3).ndims=2;
bio(3).size=[];
bio(3).isStruct=false;

bio(4).blkName='Abs1';
bio(4).sigName='X Enable';
bio(4).portIdx=0;
bio(4).dim=[1,1];
bio(4).sigWidth=1;
bio(4).sigAddress='&backup_test2_B.XEnable';
bio(4).ndims=2;
bio(4).size=[];
bio(4).isStruct=false;

bio(5).blkName='Voltage';
bio(5).sigName='VoltageY ';
bio(5).portIdx=0;
bio(5).dim=[1,1];
bio(5).sigWidth=1;
bio(5).sigAddress='&backup_test2_B.VoltageY';
bio(5).ndims=2;
bio(5).size=[];
bio(5).isStruct=false;

bio(6).blkName='Voltage1';
bio(6).sigName='x Voltage';
bio(6).portIdx=0;
bio(6).dim=[1,1];
bio(6).sigWidth=1;
bio(6).sigAddress='&backup_test2_B.xVoltage';
bio(6).ndims=2;
bio(6).size=[];
bio(6).isStruct=false;

bio(7).blkName='count_to_mm';
bio(7).sigName='Current Y';
bio(7).portIdx=0;
bio(7).dim=[1,1];
bio(7).sigWidth=1;
bio(7).sigAddress='&backup_test2_B.CurrentY';
bio(7).ndims=2;
bio(7).size=[];
bio(7).isStruct=false;

bio(8).blkName='count_to_mm1';
bio(8).sigName='Current X';
bio(8).portIdx=0;
bio(8).dim=[1,1];
bio(8).sigWidth=1;
bio(8).sigAddress='&backup_test2_B.CurrentX';
bio(8).ndims=2;
bio(8).size=[];
bio(8).isStruct=false;

bio(9).blkName='Byte Unpacking 1';
bio(9).sigName='Force Data';
bio(9).portIdx=0;
bio(9).dim=[6,1];
bio(9).sigWidth=6;
bio(9).sigAddress='&backup_test2_B.ForceData[0]';
bio(9).ndims=2;
bio(9).size=[];
bio(9).isStruct=false;

bio(10).blkName='CNT32-8M(PCI) 1';
bio(10).sigName='counts';
bio(10).portIdx=0;
bio(10).dim=[1,1];
bio(10).sigWidth=1;
bio(10).sigAddress='&backup_test2_B.counts_o';
bio(10).ndims=2;
bio(10).size=[];
bio(10).isStruct=false;

bio(11).blkName='CNT32-8M(PCI) 2';
bio(11).sigName='counts';
bio(11).portIdx=0;
bio(11).dim=[1,1];
bio(11).sigWidth=1;
bio(11).sigAddress='&backup_test2_B.counts';
bio(11).ndims=2;
bio(11).size=[];
bio(11).isStruct=false;

bio(12).blkName='PCI-DDA08 12 1';
bio(12).sigName='Limit Switch';
bio(12).portIdx=0;
bio(12).dim=[1,1];
bio(12).sigWidth=1;
bio(12).sigAddress='&backup_test2_B.LimitSwitch';
bio(12).ndims=2;
bio(12).size=[];
bio(12).isStruct=false;

bio(13).blkName='Receive 1/p1';
bio(13).sigName='';
bio(13).portIdx=0;
bio(13).dim=[48,1];
bio(13).sigWidth=48;
bio(13).sigAddress='&backup_test2_B.Receive1_o1[0]';
bio(13).ndims=2;
bio(13).size=[];
bio(13).isStruct=false;

bio(14).blkName='Receive 1/p2';
bio(14).sigName='';
bio(14).portIdx=1;
bio(14).dim=[1,1];
bio(14).sigWidth=1;
bio(14).sigAddress='&backup_test2_B.Receive1_o2';
bio(14).ndims=2;
bio(14).size=[];
bio(14).isStruct=false;

bio(15).blkName='Sign';
bio(15).sigName='';
bio(15).portIdx=0;
bio(15).dim=[1,1];
bio(15).sigWidth=1;
bio(15).sigAddress='&backup_test2_B.Sign';
bio(15).ndims=2;
bio(15).size=[];
bio(15).isStruct=false;

bio(16).blkName='Sign1';
bio(16).sigName='';
bio(16).portIdx=0;
bio(16).dim=[1,1];
bio(16).sigWidth=1;
bio(16).sigAddress='&backup_test2_B.Sign1';
bio(16).ndims=2;
bio(16).size=[];
bio(16).isStruct=false;

bio(17).blkName='Sum2';
bio(17).sigName='';
bio(17).portIdx=0;
bio(17).dim=[1,1];
bio(17).sigWidth=1;
bio(17).sigAddress='&backup_test2_B.Sum2';
bio(17).ndims=2;
bio(17).size=[];
bio(17).isStruct=false;

bio(18).blkName='Sum3';
bio(18).sigName='';
bio(18).portIdx=0;
bio(18).dim=[1,1];
bio(18).sigWidth=1;
bio(18).sigAddress='&backup_test2_B.Sum3';
bio(18).ndims=2;
bio(18).size=[];
bio(18).isStruct=false;

function len = getlenBIO
len = 18;

