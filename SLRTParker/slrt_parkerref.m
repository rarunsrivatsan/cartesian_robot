function sys=slrt_parkerref
sys = [];
sys.child = [];
sys.NumDataTypes = 4; 
sys.DataTypes = [];
temp.EnumNames='';
temp.EnumValues = [];
temp.Name = '';
sys.DataTypes = repmat(temp,1,4);
sys.DataTypes(1).Name = 'real_T';
sys.DataTypes(2).Name = 'uint8_T';
sys.DataTypes(3).Name = 'boolean_T';
sys.DataTypes(4).Name = 'uint32_T';
