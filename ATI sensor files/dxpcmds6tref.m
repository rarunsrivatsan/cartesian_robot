function sys=dxpcmds6tref
sys = [];
sys.child = [];
sys.NumDataTypes = 1; 
sys.DataTypes = [];
temp.EnumNames='';
temp.EnumValues = [];
temp.Name = '';
sys.DataTypes = repmat(temp,1,1);
sys.DataTypes(1).Name = 'real_T';
sys.child(1).Name = 'dxpcmds_ref1';
sys.child(1).blkpath  = 'Model1';
sys.child(1).Idx  = 0;
sys.child(2).Name = 'dxpcmds_ref2';
sys.child(2).blkpath  = 'Model2';
sys.child(2).Idx  = 1;
