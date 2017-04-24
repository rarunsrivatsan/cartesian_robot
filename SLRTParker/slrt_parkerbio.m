function bio=slrt_parkerbio
bio = [];
bio(1).blkName='Force Sensor/Byte Unpacking 1';
bio(1).sigName='';
bio(1).portIdx=0;
bio(1).dim=[6,1];
bio(1).sigWidth=6;
bio(1).sigAddress='&slrt_parker_B.ByteUnpacking1[0]';
bio(1).ndims=2;
bio(1).size=[];
bio(1).isStruct=false;
bio(getlenBIO) = bio(1);

bio(2).blkName='Force Sensor/Receive 1/p1';
bio(2).sigName='';
bio(2).portIdx=0;
bio(2).dim=[48,1];
bio(2).sigWidth=48;
bio(2).sigAddress='&slrt_parker_B.Receive1_o1[0]';
bio(2).ndims=2;
bio(2).size=[];
bio(2).isStruct=false;

bio(3).blkName='Force Sensor/Receive 1/p2';
bio(3).sigName='';
bio(3).portIdx=1;
bio(3).dim=[1,1];
bio(3).sigWidth=1;
bio(3).sigAddress='&slrt_parker_B.Receive1_o2';
bio(3).ndims=2;
bio(3).size=[];
bio(3).isStruct=false;

bio(4).blkName='Motor Enable Subsystem/Enable Motors';
bio(4).sigName='';
bio(4).portIdx=0;
bio(4).dim=[3,1];
bio(4).sigWidth=3;
bio(4).sigAddress='&slrt_parker_B.EnableMotors[0]';
bio(4).ndims=2;
bio(4).size=[];
bio(4).isStruct=false;

bio(5).blkName='PD Inverse Dynamics/Dead Zone1';
bio(5).sigName='';
bio(5).portIdx=0;
bio(5).dim=[3,1];
bio(5).sigWidth=3;
bio(5).sigAddress='&slrt_parker_B.DeadZone1[0]';
bio(5).ndims=2;
bio(5).size=[];
bio(5).isStruct=false;

bio(6).blkName='PD Inverse Dynamics/Amp Gain';
bio(6).sigName='';
bio(6).portIdx=0;
bio(6).dim=[3,1];
bio(6).sigWidth=3;
bio(6).sigAddress='&slrt_parker_B.AmpGain[0]';
bio(6).ndims=2;
bio(6).size=[];
bio(6).isStruct=false;

bio(7).blkName='PD Inverse Dynamics/Inertia Matrix [Kg m^2]';
bio(7).sigName='tau_motion';
bio(7).portIdx=0;
bio(7).dim=[3,1];
bio(7).sigWidth=3;
bio(7).sigAddress='&slrt_parker_B.tau_motion[0]';
bio(7).ndims=2;
bio(7).size=[];
bio(7).isStruct=false;

bio(8).blkName='PD Inverse Dynamics/Kd [volts*second//rad]';
bio(8).sigName='';
bio(8).portIdx=0;
bio(8).dim=[3,1];
bio(8).sigWidth=3;
bio(8).sigAddress='&slrt_parker_B.Kdvoltssecondrad[0]';
bio(8).ndims=2;
bio(8).size=[];
bio(8).isStruct=false;

bio(9).blkName='PD Inverse Dynamics/Kp';
bio(9).sigName='';
bio(9).portIdx=0;
bio(9).dim=[3,1];
bio(9).sigWidth=3;
bio(9).sigAddress='&slrt_parker_B.Kp[0]';
bio(9).ndims=2;
bio(9).size=[];
bio(9).isStruct=false;

bio(10).blkName='PD Inverse Dynamics/Torque Constant';
bio(10).sigName='';
bio(10).portIdx=0;
bio(10).dim=[3,1];
bio(10).sigWidth=3;
bio(10).sigAddress='&slrt_parker_B.TorqueConstant[0]';
bio(10).ndims=2;
bio(10).size=[];
bio(10).isStruct=false;

bio(11).blkName='PD Inverse Dynamics/Viscous Friction';
bio(11).sigName='';
bio(11).portIdx=0;
bio(11).dim=[3,1];
bio(11).sigWidth=3;
bio(11).sigAddress='&slrt_parker_B.ViscousFriction[0]';
bio(11).ndims=2;
bio(11).size=[];
bio(11).isStruct=false;

bio(12).blkName='PD Inverse Dynamics/m//s^2';
bio(12).sigName='';
bio(12).portIdx=0;
bio(12).dim=[3,1];
bio(12).sigWidth=3;
bio(12).sigAddress='&slrt_parker_B.ms2[0]';
bio(12).ndims=2;
bio(12).size=[];
bio(12).isStruct=false;

bio(13).blkName='PD Inverse Dynamics/pitch1';
bio(13).sigName='';
bio(13).portIdx=0;
bio(13).dim=[3,1];
bio(13).sigWidth=3;
bio(13).sigAddress='&slrt_parker_B.pitch1[0]';
bio(13).ndims=2;
bio(13).size=[];
bio(13).isStruct=false;

bio(14).blkName='PD Inverse Dynamics/Saturation [-10, 10]';
bio(14).sigName='';
bio(14).portIdx=0;
bio(14).dim=[3,1];
bio(14).sigWidth=3;
bio(14).sigAddress='&slrt_parker_B.Saturation1010[0]';
bio(14).ndims=2;
bio(14).size=[];
bio(14).isStruct=false;

bio(15).blkName='PD Inverse Dynamics/Add';
bio(15).sigName='';
bio(15).portIdx=0;
bio(15).dim=[3,1];
bio(15).sigWidth=3;
bio(15).sigAddress='&slrt_parker_B.Add_e[0]';
bio(15).ndims=2;
bio(15).size=[];
bio(15).isStruct=false;

bio(16).blkName='PD Inverse Dynamics/Add1';
bio(16).sigName='tau';
bio(16).portIdx=0;
bio(16).dim=[3,1];
bio(16).sigWidth=3;
bio(16).sigAddress='&slrt_parker_B.tau[0]';
bio(16).ndims=2;
bio(16).size=[];
bio(16).isStruct=false;

bio(17).blkName='PD Inverse Dynamics/Sum';
bio(17).sigName='';
bio(17).portIdx=0;
bio(17).dim=[3,1];
bio(17).sigWidth=3;
bio(17).sigAddress='&slrt_parker_B.Sum[0]';
bio(17).ndims=2;
bio(17).size=[];
bio(17).isStruct=false;

bio(18).blkName='PD Inverse Dynamics/Sum1';
bio(18).sigName='';
bio(18).portIdx=0;
bio(18).dim=[3,1];
bio(18).sigWidth=3;
bio(18).sigAddress='&slrt_parker_B.Sum1[0]';
bio(18).ndims=2;
bio(18).size=[];
bio(18).isStruct=false;

bio(19).blkName='Scopes/sys_stat';
bio(19).sigName='';
bio(19).portIdx=0;
bio(19).dim=[6,1];
bio(19).sigWidth=6;
bio(19).sigAddress='&slrt_parker_B.sys_stat[0]';
bio(19).ndims=2;
bio(19).size=[];
bio(19).isStruct=false;

bio(20).blkName='Scopes/Product';
bio(20).sigName='';
bio(20).portIdx=0;
bio(20).dim=[1,1];
bio(20).sigWidth=1;
bio(20).sigAddress='&slrt_parker_B.Product';
bio(20).ndims=2;
bio(20).size=[];
bio(20).isStruct=false;

bio(21).blkName='Trajectory Planner/Multiport Switch';
bio(21).sigName='';
bio(21).portIdx=0;
bio(21).dim=[9,1];
bio(21).sigWidth=9;
bio(21).sigAddress='&slrt_parker_B.MultiportSwitch[0]';
bio(21).ndims=2;
bio(21).size=[];
bio(21).isStruct=false;

bio(22).blkName='Parker 404XR/Count to Position/Gain_Rads';
bio(22).sigName='';
bio(22).portIdx=0;
bio(22).dim=[3,1];
bio(22).sigWidth=3;
bio(22).sigAddress='&slrt_parker_B.Gain_Rads[0]';
bio(22).ndims=2;
bio(22).size=[];
bio(22).isStruct=false;

bio(23).blkName='Parker 404XR/Count to Position/Rads_mm';
bio(23).sigName='';
bio(23).portIdx=0;
bio(23).dim=[3,1];
bio(23).sigWidth=3;
bio(23).sigAddress='&slrt_parker_B.Rads_mm[0]';
bio(23).ndims=2;
bio(23).size=[];
bio(23).isStruct=false;

bio(24).blkName='Parker 404XR/Count to Position/Rate Transition';
bio(24).sigName='';
bio(24).portIdx=0;
bio(24).dim=[3,1];
bio(24).sigWidth=3;
bio(24).sigAddress='&slrt_parker_B.RateTransition[0]';
bio(24).ndims=2;
bio(24).size=[];
bio(24).isStruct=false;

bio(25).blkName='Parker 404XR/Count to Position/Rate Transition1';
bio(25).sigName='';
bio(25).portIdx=0;
bio(25).dim=[3,1];
bio(25).sigWidth=3;
bio(25).sigAddress='&slrt_parker_B.RateTransition1[0]';
bio(25).ndims=2;
bio(25).size=[];
bio(25).isStruct=false;

bio(26).blkName='Parker 404XR/Count to Position/Rate Transition2';
bio(26).sigName='';
bio(26).portIdx=0;
bio(26).dim=[3,1];
bio(26).sigWidth=3;
bio(26).sigAddress='&slrt_parker_B.RateTransition2[0]';
bio(26).ndims=2;
bio(26).size=[];
bio(26).isStruct=false;

bio(27).blkName='Parker 404XR/Count to Position/Add';
bio(27).sigName='';
bio(27).portIdx=0;
bio(27).dim=[3,1];
bio(27).sigWidth=3;
bio(27).sigAddress='&slrt_parker_B.Add[0]';
bio(27).ndims=2;
bio(27).size=[];
bio(27).isStruct=false;

bio(28).blkName='Parker 404XR/Count to Position/Subtract';
bio(28).sigName='';
bio(28).portIdx=0;
bio(28).dim=[3,1];
bio(28).sigWidth=3;
bio(28).sigAddress='&slrt_parker_B.Subtract[0]';
bio(28).ndims=2;
bio(28).size=[];
bio(28).isStruct=false;

bio(29).blkName='Parker 404XR/Count to Position/Unit Delay';
bio(29).sigName='';
bio(29).portIdx=0;
bio(29).dim=[3,1];
bio(29).sigWidth=3;
bio(29).sigAddress='&slrt_parker_B.UnitDelay[0]';
bio(29).ndims=2;
bio(29).size=[];
bio(29).isStruct=false;

bio(30).blkName='Parker 404XR/Plant/Gain';
bio(30).sigName='';
bio(30).portIdx=0;
bio(30).dim=[1,1];
bio(30).sigWidth=1;
bio(30).sigAddress='&slrt_parker_B.Gain_l';
bio(30).ndims=2;
bio(30).size=[];
bio(30).isStruct=false;

bio(31).blkName='Parker 404XR/Plant/Logical Operator';
bio(31).sigName='';
bio(31).portIdx=0;
bio(31).dim=[3,1];
bio(31).sigWidth=3;
bio(31).sigAddress='&slrt_parker_B.LogicalOperator[0]';
bio(31).ndims=2;
bio(31).size=[];
bio(31).isStruct=false;

bio(32).blkName='Parker 404XR/Plant/1STPORTB ';
bio(32).sigName='';
bio(32).portIdx=0;
bio(32).dim=[1,1];
bio(32).sigWidth=1;
bio(32).sigAddress='&slrt_parker_B.uSTPORTB';
bio(32).ndims=2;
bio(32).size=[];
bio(32).isStruct=false;

bio(33).blkName='Parker 404XR/Plant/1STPORTB 1';
bio(33).sigName='';
bio(33).portIdx=0;
bio(33).dim=[1,1];
bio(33).sigWidth=1;
bio(33).sigAddress='&slrt_parker_B.uSTPORTB1';
bio(33).ndims=2;
bio(33).size=[];
bio(33).isStruct=false;

bio(34).blkName='Parker 404XR/Plant/1STPORTB 2';
bio(34).sigName='';
bio(34).portIdx=0;
bio(34).dim=[1,1];
bio(34).sigWidth=1;
bio(34).sigAddress='&slrt_parker_B.uSTPORTB2';
bio(34).ndims=2;
bio(34).size=[];
bio(34).isStruct=false;

bio(35).blkName='Parker 404XR/Plant/CNT32-8M(PCI) Ch1';
bio(35).sigName='';
bio(35).portIdx=0;
bio(35).dim=[1,1];
bio(35).sigWidth=1;
bio(35).sigAddress='&slrt_parker_B.CNT328MPCICh1';
bio(35).ndims=2;
bio(35).size=[];
bio(35).isStruct=false;

bio(36).blkName='Parker 404XR/Plant/CNT32-8M(PCI) Ch2';
bio(36).sigName='';
bio(36).portIdx=0;
bio(36).dim=[1,1];
bio(36).sigWidth=1;
bio(36).sigAddress='&slrt_parker_B.CNT328MPCICh2';
bio(36).ndims=2;
bio(36).size=[];
bio(36).isStruct=false;

bio(37).blkName='Parker 404XR/Plant/CNT32-8M(PCI) Ch3';
bio(37).sigName='';
bio(37).portIdx=0;
bio(37).dim=[1,1];
bio(37).sigWidth=1;
bio(37).sigAddress='&slrt_parker_B.CNT328MPCICh3';
bio(37).ndims=2;
bio(37).size=[];
bio(37).isStruct=false;

bio(38).blkName='Scopes/EN Record/Compare';
bio(38).sigName='';
bio(38).portIdx=0;
bio(38).dim=[1,1];
bio(38).sigWidth=1;
bio(38).sigAddress='&slrt_parker_B.Compare';
bio(38).ndims=2;
bio(38).size=[];
bio(38).isStruct=false;

bio(39).blkName='Scopes/Enabled Subsystem/Gain';
bio(39).sigName='';
bio(39).portIdx=0;
bio(39).dim=[9,1];
bio(39).sigWidth=9;
bio(39).sigAddress='&slrt_parker_B.Gain_a[0]';
bio(39).ndims=2;
bio(39).size=[];
bio(39).isStruct=false;

bio(40).blkName='Scopes/Enabled Subsystem/Gain1';
bio(40).sigName='';
bio(40).portIdx=0;
bio(40).dim=[1,1];
bio(40).sigWidth=1;
bio(40).sigAddress='&slrt_parker_B.Gain1_i';
bio(40).ndims=2;
bio(40).size=[];
bio(40).isStruct=false;

bio(41).blkName='Scopes/File Scope/Gain';
bio(41).sigName='';
bio(41).portIdx=0;
bio(41).dim=[7,1];
bio(41).sigWidth=7;
bio(41).sigAddress='&slrt_parker_B.Gain_p[0]';
bio(41).ndims=2;
bio(41).size=[];
bio(41).isStruct=false;

bio(42).blkName='Scopes/File Scope/Gain1';
bio(42).sigName='';
bio(42).portIdx=0;
bio(42).dim=[10,1];
bio(42).sigWidth=10;
bio(42).sigAddress='&slrt_parker_B.Gain1[0]';
bio(42).ndims=2;
bio(42).size=[];
bio(42).isStruct=false;

bio(43).blkName='Scopes/File Scope/Gain2';
bio(43).sigName='';
bio(43).portIdx=0;
bio(43).dim=[10,1];
bio(43).sigWidth=10;
bio(43).sigAddress='&slrt_parker_B.Gain2[0]';
bio(43).ndims=2;
bio(43).size=[];
bio(43).isStruct=false;

bio(44).blkName='Trajectory Planner/Enable Homing/Compare';
bio(44).sigName='';
bio(44).portIdx=0;
bio(44).dim=[1,1];
bio(44).sigWidth=1;
bio(44).sigAddress='&slrt_parker_B.Compare_h';
bio(44).ndims=2;
bio(44).size=[];
bio(44).isStruct=false;

bio(45).blkName='Trajectory Planner/Enable Joint/Compare';
bio(45).sigName='';
bio(45).portIdx=0;
bio(45).dim=[1,1];
bio(45).sigWidth=1;
bio(45).sigAddress='&slrt_parker_B.Compare_m';
bio(45).ndims=2;
bio(45).size=[];
bio(45).isStruct=false;

bio(46).blkName='Trajectory Planner/Homing/Homing Procedure/p1';
bio(46).sigName='';
bio(46).portIdx=0;
bio(46).dim=[3,1];
bio(46).sigWidth=3;
bio(46).sigAddress='&slrt_parker_B.q_des[0]';
bio(46).ndims=2;
bio(46).size=[];
bio(46).isStruct=false;

bio(47).blkName='Trajectory Planner/Homing/Homing Procedure/p2';
bio(47).sigName='';
bio(47).portIdx=1;
bio(47).dim=[3,1];
bio(47).sigWidth=3;
bio(47).sigAddress='&slrt_parker_B.qd_des[0]';
bio(47).ndims=2;
bio(47).size=[];
bio(47).isStruct=false;

bio(48).blkName='Trajectory Planner/Homing/Homing Procedure/p3';
bio(48).sigName='';
bio(48).portIdx=2;
bio(48).dim=[3,1];
bio(48).sigWidth=3;
bio(48).sigAddress='&slrt_parker_B.qdd_des[0]';
bio(48).ndims=2;
bio(48).size=[];
bio(48).isStruct=false;

bio(49).blkName='Trajectory Planner/Homing/Homing Procedure/p4';
bio(49).sigName='';
bio(49).portIdx=3;
bio(49).dim=[1,1];
bio(49).sigWidth=1;
bio(49).sigAddress='&slrt_parker_B.ready';
bio(49).ndims=2;
bio(49).size=[];
bio(49).isStruct=false;

bio(50).blkName='Trajectory Planner/Homing/Homing Procedure/p5';
bio(50).sigName='';
bio(50).portIdx=4;
bio(50).dim=[3,4];
bio(50).sigWidth=12;
bio(50).sigAddress='&slrt_parker_B.A_out[0]';
bio(50).ndims=2;
bio(50).size=[];
bio(50).isStruct=false;

bio(51).blkName='Trajectory Planner/Homing/Homing Procedure/p6';
bio(51).sigName='';
bio(51).portIdx=5;
bio(51).dim=[1,1];
bio(51).sigWidth=1;
bio(51).sigAddress='&slrt_parker_B.cur_status';
bio(51).ndims=2;
bio(51).size=[];
bio(51).isStruct=false;

bio(52).blkName='Trajectory Planner/Homing/Homing Procedure/p7';
bio(52).sigName='';
bio(52).portIdx=6;
bio(52).dim=[1,1];
bio(52).sigWidth=1;
bio(52).sigAddress='&slrt_parker_B.reset';
bio(52).ndims=2;
bio(52).size=[];
bio(52).isStruct=false;

bio(53).blkName='Trajectory Planner/Homing/Homing Procedure/p8';
bio(53).sigName='';
bio(53).portIdx=7;
bio(53).dim=[3,1];
bio(53).sigWidth=3;
bio(53).sigAddress='&slrt_parker_B.lsf_out[0]';
bio(53).ndims=2;
bio(53).size=[];
bio(53).isStruct=false;

bio(54).blkName='Trajectory Planner/Homing/A Delay';
bio(54).sigName='';
bio(54).portIdx=0;
bio(54).dim=[3,4];
bio(54).sigWidth=12;
bio(54).sigAddress='&slrt_parker_B.ADelay[0]';
bio(54).ndims=2;
bio(54).size=[];
bio(54).isStruct=false;

bio(55).blkName='Trajectory Planner/Homing/homing ready delay';
bio(55).sigName='';
bio(55).portIdx=0;
bio(55).dim=[1,1];
bio(55).sigWidth=1;
bio(55).sigAddress='&slrt_parker_B.homingreadydelay';
bio(55).ndims=2;
bio(55).size=[];
bio(55).isStruct=false;

bio(56).blkName='Trajectory Planner/Homing/lsf delay';
bio(56).sigName='';
bio(56).portIdx=0;
bio(56).dim=[3,1];
bio(56).sigWidth=3;
bio(56).sigAddress='&slrt_parker_B.lsfdelay[0]';
bio(56).ndims=2;
bio(56).size=[];
bio(56).isStruct=false;

bio(57).blkName='Trajectory Planner/Homing/qdes Delay';
bio(57).sigName='';
bio(57).portIdx=0;
bio(57).dim=[3,1];
bio(57).sigWidth=3;
bio(57).sigAddress='&slrt_parker_B.qdesDelay[0]';
bio(57).ndims=2;
bio(57).size=[];
bio(57).isStruct=false;

bio(58).blkName='Trajectory Planner/Homing/status delay';
bio(58).sigName='';
bio(58).portIdx=0;
bio(58).dim=[1,1];
bio(58).sigWidth=1;
bio(58).sigAddress='&slrt_parker_B.statusdelay';
bio(58).ndims=2;
bio(58).size=[];
bio(58).isStruct=false;

bio(59).blkName='Trajectory Planner/Quintic Polynomial/Multiport Switch';
bio(59).sigName='';
bio(59).portIdx=0;
bio(59).dim=[3,1];
bio(59).sigWidth=3;
bio(59).sigAddress='&slrt_parker_B.MultiportSwitch_k[0]';
bio(59).ndims=2;
bio(59).size=[];
bio(59).isStruct=false;

bio(60).blkName='Trajectory Planner/safety check/false detection/p1';
bio(60).sigName='';
bio(60).portIdx=0;
bio(60).dim=[9,1];
bio(60).sigWidth=9;
bio(60).sigAddress='&slrt_parker_B.pva_allowed[0]';
bio(60).ndims=2;
bio(60).size=[];
bio(60).isStruct=false;

bio(61).blkName='Trajectory Planner/safety check/false detection/p2';
bio(61).sigName='';
bio(61).portIdx=1;
bio(61).dim=[1,1];
bio(61).sigWidth=1;
bio(61).sigAddress='&slrt_parker_B.error_flag';
bio(61).ndims=2;
bio(61).size=[];
bio(61).isStruct=false;

bio(62).blkName='Trajectory Planner/safety check/Unit Delay2';
bio(62).sigName='';
bio(62).portIdx=0;
bio(62).dim=[9,1];
bio(62).sigWidth=9;
bio(62).sigAddress='&slrt_parker_B.UnitDelay2[0]';
bio(62).ndims=2;
bio(62).size=[];
bio(62).isStruct=false;

bio(63).blkName='Trajectory Planner/safety check/Unit Delay3';
bio(63).sigName='';
bio(63).portIdx=0;
bio(63).dim=[1,1];
bio(63).sigWidth=1;
bio(63).sigAddress='&slrt_parker_B.UnitDelay3';
bio(63).ndims=2;
bio(63).size=[];
bio(63).isStruct=false;

bio(64).blkName='Parker 404XR/Count to Position/Accel Filter/Gain';
bio(64).sigName='';
bio(64).portIdx=0;
bio(64).dim=[3,1];
bio(64).sigWidth=3;
bio(64).sigAddress='&slrt_parker_B.Gain_o[0]';
bio(64).ndims=2;
bio(64).size=[];
bio(64).isStruct=false;

bio(65).blkName='Parker 404XR/Count to Position/Accel Filter/Discrete FIR Filter';
bio(65).sigName='';
bio(65).portIdx=0;
bio(65).dim=[3,1];
bio(65).sigWidth=3;
bio(65).sigAddress='&slrt_parker_B.DiscreteFIRFilter_k[0]';
bio(65).ndims=2;
bio(65).size=[];
bio(65).isStruct=false;

bio(66).blkName='Parker 404XR/Count to Position/Position Filter observer/Gain';
bio(66).sigName='';
bio(66).portIdx=0;
bio(66).dim=[3,1];
bio(66).sigWidth=3;
bio(66).sigAddress='&slrt_parker_B.Gain_m[0]';
bio(66).ndims=2;
bio(66).size=[];
bio(66).isStruct=false;

bio(67).blkName='Parker 404XR/Count to Position/Position Filter observer/Discrete FIR Filter';
bio(67).sigName='';
bio(67).portIdx=0;
bio(67).dim=[3,1];
bio(67).sigWidth=3;
bio(67).sigAddress='&slrt_parker_B.DiscreteFIRFilter_b[0]';
bio(67).ndims=2;
bio(67).size=[];
bio(67).isStruct=false;

bio(68).blkName='Parker 404XR/Count to Position/Position Filter observer1/Gain';
bio(68).sigName='';
bio(68).portIdx=0;
bio(68).dim=[3,1];
bio(68).sigWidth=3;
bio(68).sigAddress='&slrt_parker_B.Gain[0]';
bio(68).ndims=2;
bio(68).size=[];
bio(68).isStruct=false;

bio(69).blkName='Parker 404XR/Count to Position/Position Filter observer1/Discrete FIR Filter';
bio(69).sigName='';
bio(69).portIdx=0;
bio(69).dim=[3,1];
bio(69).sigWidth=3;
bio(69).sigAddress='&slrt_parker_B.DiscreteFIRFilter[0]';
bio(69).ndims=2;
bio(69).size=[];
bio(69).isStruct=false;

bio(70).blkName='Parker 404XR/Count to Position/Velocity Filter/Gain';
bio(70).sigName='';
bio(70).portIdx=0;
bio(70).dim=[3,1];
bio(70).sigWidth=3;
bio(70).sigAddress='&slrt_parker_B.Gain_c[0]';
bio(70).ndims=2;
bio(70).size=[];
bio(70).isStruct=false;

bio(71).blkName='Parker 404XR/Count to Position/Velocity Filter/Discrete FIR Filter';
bio(71).sigName='';
bio(71).portIdx=0;
bio(71).dim=[3,1];
bio(71).sigWidth=3;
bio(71).sigAddress='&slrt_parker_B.DiscreteFIRFilter_m[0]';
bio(71).ndims=2;
bio(71).size=[];
bio(71).isStruct=false;

bio(72).blkName='Parker 404XR/Count to Position/Velocity Filter observer/Gain';
bio(72).sigName='';
bio(72).portIdx=0;
bio(72).dim=[3,1];
bio(72).sigWidth=3;
bio(72).sigAddress='&slrt_parker_B.Gain_b[0]';
bio(72).ndims=2;
bio(72).size=[];
bio(72).isStruct=false;

bio(73).blkName='Parker 404XR/Count to Position/Velocity Filter observer/Discrete FIR Filter';
bio(73).sigName='';
bio(73).portIdx=0;
bio(73).dim=[3,1];
bio(73).sigWidth=3;
bio(73).sigAddress='&slrt_parker_B.DiscreteFIRFilter_g[0]';
bio(73).ndims=2;
bio(73).size=[];
bio(73).isStruct=false;

bio(74).blkName='Trajectory Planner/Homing/N-Sample Switch/N-Sample Enable';
bio(74).sigName='';
bio(74).portIdx=0;
bio(74).dim=[1,1];
bio(74).sigWidth=1;
bio(74).sigAddress='&slrt_parker_B.NSampleEnable_e';
bio(74).ndims=2;
bio(74).size=[];
bio(74).isStruct=false;

bio(75).blkName='Trajectory Planner/Homing/N-Sample Switch/Switch';
bio(75).sigName='';
bio(75).portIdx=0;
bio(75).dim=[3,1];
bio(75).sigWidth=3;
bio(75).sigAddress='&slrt_parker_B.Switch_p[0]';
bio(75).ndims=2;
bio(75).size=[];
bio(75).isStruct=false;

bio(76).blkName='Trajectory Planner/Quintic Polynomial/5th Order Polynomial/Embedded MATLAB Function/p1';
bio(76).sigName='';
bio(76).portIdx=0;
bio(76).dim=[3,1];
bio(76).sigWidth=3;
bio(76).sigAddress='&slrt_parker_B.p[0]';
bio(76).ndims=2;
bio(76).size=[];
bio(76).isStruct=false;

bio(77).blkName='Trajectory Planner/Quintic Polynomial/5th Order Polynomial/Embedded MATLAB Function/p2';
bio(77).sigName='';
bio(77).portIdx=1;
bio(77).dim=[3,1];
bio(77).sigWidth=3;
bio(77).sigAddress='&slrt_parker_B.pdot[0]';
bio(77).ndims=2;
bio(77).size=[];
bio(77).isStruct=false;

bio(78).blkName='Trajectory Planner/Quintic Polynomial/5th Order Polynomial/Embedded MATLAB Function/p3';
bio(78).sigName='';
bio(78).portIdx=2;
bio(78).dim=[3,1];
bio(78).sigWidth=3;
bio(78).sigAddress='&slrt_parker_B.pdotdot[0]';
bio(78).ndims=2;
bio(78).size=[];
bio(78).isStruct=false;

bio(79).blkName='Trajectory Planner/Quintic Polynomial/5th Order Polynomial/Embedded MATLAB Function/p4';
bio(79).sigName='';
bio(79).portIdx=3;
bio(79).dim=[1,1];
bio(79).sigWidth=1;
bio(79).sigAddress='&slrt_parker_B.confn';
bio(79).ndims=2;
bio(79).size=[];
bio(79).isStruct=false;

bio(80).blkName='Trajectory Planner/Quintic Polynomial/5th Order Polynomial/Embedded MATLAB Function/p5';
bio(80).sigName='';
bio(80).portIdx=4;
bio(80).dim=[1,1];
bio(80).sigWidth=1;
bio(80).sigAddress='&slrt_parker_B.t0n';
bio(80).ndims=2;
bio(80).size=[];
bio(80).isStruct=false;

bio(81).blkName='Trajectory Planner/Quintic Polynomial/5th Order Polynomial/Embedded MATLAB Function/p6';
bio(81).sigName='';
bio(81).portIdx=5;
bio(81).dim=[3,1];
bio(81).sigWidth=3;
bio(81).sigAddress='&slrt_parker_B.p0n[0]';
bio(81).ndims=2;
bio(81).size=[];
bio(81).isStruct=false;

bio(82).blkName='Trajectory Planner/Quintic Polynomial/5th Order Polynomial/Embedded MATLAB Function/p7';
bio(82).sigName='';
bio(82).portIdx=6;
bio(82).dim=[1,1];
bio(82).sigWidth=1;
bio(82).sigAddress='&slrt_parker_B.RECORD';
bio(82).ndims=2;
bio(82).size=[];
bio(82).isStruct=false;

bio(83).blkName='Trajectory Planner/Quintic Polynomial/5th Order Polynomial/Digital Clock';
bio(83).sigName='';
bio(83).portIdx=0;
bio(83).dim=[1,1];
bio(83).sigWidth=1;
bio(83).sigAddress='&slrt_parker_B.DigitalClock';
bio(83).ndims=2;
bio(83).size=[];
bio(83).isStruct=false;

bio(84).blkName='Trajectory Planner/Quintic Polynomial/5th Order Polynomial/Unit Delay';
bio(84).sigName='';
bio(84).portIdx=0;
bio(84).dim=[1,1];
bio(84).sigWidth=1;
bio(84).sigAddress='&slrt_parker_B.UnitDelay_g';
bio(84).ndims=2;
bio(84).size=[];
bio(84).isStruct=false;

bio(85).blkName='Trajectory Planner/Quintic Polynomial/5th Order Polynomial/Unit Delay1';
bio(85).sigName='';
bio(85).portIdx=0;
bio(85).dim=[1,1];
bio(85).sigWidth=1;
bio(85).sigAddress='&slrt_parker_B.UnitDelay1';
bio(85).ndims=2;
bio(85).size=[];
bio(85).isStruct=false;

bio(86).blkName='Trajectory Planner/Quintic Polynomial/5th Order Polynomial/Unit Delay2';
bio(86).sigName='';
bio(86).portIdx=0;
bio(86).dim=[3,1];
bio(86).sigWidth=3;
bio(86).sigAddress='&slrt_parker_B.UnitDelay2_j[0]';
bio(86).ndims=2;
bio(86).size=[];
bio(86).isStruct=false;

bio(87).blkName='Trajectory Planner/Quintic Polynomial/Get_Initial_Condition/Unit Delay';
bio(87).sigName='';
bio(87).portIdx=0;
bio(87).dim=[3,1];
bio(87).sigWidth=3;
bio(87).sigAddress='&slrt_parker_B.UnitDelay_h[0]';
bio(87).ndims=2;
bio(87).size=[];
bio(87).isStruct=false;

bio(88).blkName='Trajectory Planner/Quintic Polynomial/trigger detection/MATLAB Function';
bio(88).sigName='';
bio(88).portIdx=0;
bio(88).dim=[1,1];
bio(88).sigWidth=1;
bio(88).sigAddress='&slrt_parker_B.enable';
bio(88).ndims=2;
bio(88).size=[];
bio(88).isStruct=false;

bio(89).blkName='Trajectory Planner/Quintic Polynomial/trigger detection/Counter';
bio(89).sigName='';
bio(89).portIdx=0;
bio(89).dim=[1,1];
bio(89).sigWidth=1;
bio(89).sigAddress='&slrt_parker_B.Counter';
bio(89).ndims=2;
bio(89).size=[];
bio(89).isStruct=false;

bio(90).blkName='Trajectory Planner/Quintic Polynomial/trigger detection/Unit Delay';
bio(90).sigName='';
bio(90).portIdx=0;
bio(90).dim=[1,1];
bio(90).sigWidth=1;
bio(90).sigAddress='&slrt_parker_B.UnitDelay_f';
bio(90).ndims=2;
bio(90).size=[];
bio(90).isStruct=false;

bio(91).blkName='Parker 404XR/Count to Position/Accel Filter/Discrete Derivative1/Diff';
bio(91).sigName='';
bio(91).portIdx=0;
bio(91).dim=[3,1];
bio(91).sigWidth=3;
bio(91).sigAddress='&slrt_parker_B.Diff_o[0]';
bio(91).ndims=2;
bio(91).size=[];
bio(91).isStruct=false;

bio(92).blkName='Parker 404XR/Count to Position/Accel Filter/Discrete Derivative1/TSamp';
bio(92).sigName='';
bio(92).portIdx=0;
bio(92).dim=[3,1];
bio(92).sigWidth=3;
bio(92).sigAddress='&slrt_parker_B.TSamp_p[0]';
bio(92).ndims=2;
bio(92).size=[];
bio(92).isStruct=false;

bio(93).blkName='Parker 404XR/Count to Position/Accel Filter/Discrete Derivative1/UD';
bio(93).sigName='U(k-1)';
bio(93).portIdx=0;
bio(93).dim=[3,1];
bio(93).sigWidth=3;
bio(93).sigAddress='&slrt_parker_B.Uk1_c[0]';
bio(93).ndims=2;
bio(93).size=[];
bio(93).isStruct=false;

bio(94).blkName='Parker 404XR/Count to Position/Sample and Hold/Model/Data Type Conversion';
bio(94).sigName='';
bio(94).portIdx=0;
bio(94).dim=[1,1];
bio(94).sigWidth=1;
bio(94).sigAddress='&slrt_parker_B.DataTypeConversion';
bio(94).ndims=2;
bio(94).size=[];
bio(94).isStruct=false;

bio(95).blkName='Parker 404XR/Count to Position/Sample and Hold/Model/Switch';
bio(95).sigName='';
bio(95).portIdx=0;
bio(95).dim=[3,1];
bio(95).sigWidth=3;
bio(95).sigAddress='&slrt_parker_B.Switch[0]';
bio(95).ndims=2;
bio(95).size=[];
bio(95).isStruct=false;

bio(96).blkName='Parker 404XR/Count to Position/Sample and Hold/Model/IC=ic';
bio(96).sigName='';
bio(96).portIdx=0;
bio(96).dim=[3,1];
bio(96).sigWidth=3;
bio(96).sigAddress='&slrt_parker_B.ICic[0]';
bio(96).ndims=2;
bio(96).size=[];
bio(96).isStruct=false;

bio(97).blkName='Parker 404XR/Count to Position/Velocity Filter/Discrete Derivative/Diff';
bio(97).sigName='';
bio(97).portIdx=0;
bio(97).dim=[3,1];
bio(97).sigWidth=3;
bio(97).sigAddress='&slrt_parker_B.Diff[0]';
bio(97).ndims=2;
bio(97).size=[];
bio(97).isStruct=false;

bio(98).blkName='Parker 404XR/Count to Position/Velocity Filter/Discrete Derivative/TSamp';
bio(98).sigName='';
bio(98).portIdx=0;
bio(98).dim=[3,1];
bio(98).sigWidth=3;
bio(98).sigAddress='&slrt_parker_B.TSamp[0]';
bio(98).ndims=2;
bio(98).size=[];
bio(98).isStruct=false;

bio(99).blkName='Parker 404XR/Count to Position/Velocity Filter/Discrete Derivative/UD';
bio(99).sigName='U(k-1)';
bio(99).portIdx=0;
bio(99).dim=[3,1];
bio(99).sigWidth=3;
bio(99).sigAddress='&slrt_parker_B.Uk1[0]';
bio(99).ndims=2;
bio(99).size=[];
bio(99).isStruct=false;

bio(100).blkName='Parker 404XR/Count to Position/Velocity Filter observer/Discrete Derivative/Diff';
bio(100).sigName='';
bio(100).portIdx=0;
bio(100).dim=[3,1];
bio(100).sigWidth=3;
bio(100).sigAddress='&slrt_parker_B.Diff_h[0]';
bio(100).ndims=2;
bio(100).size=[];
bio(100).isStruct=false;

bio(101).blkName='Parker 404XR/Count to Position/Velocity Filter observer/Discrete Derivative/TSamp';
bio(101).sigName='';
bio(101).portIdx=0;
bio(101).dim=[3,1];
bio(101).sigWidth=3;
bio(101).sigAddress='&slrt_parker_B.TSamp_b[0]';
bio(101).ndims=2;
bio(101).size=[];
bio(101).isStruct=false;

bio(102).blkName='Parker 404XR/Count to Position/Velocity Filter observer/Discrete Derivative/UD';
bio(102).sigName='U(k-1)';
bio(102).portIdx=0;
bio(102).dim=[3,1];
bio(102).sigWidth=3;
bio(102).sigAddress='&slrt_parker_B.Uk1_o[0]';
bio(102).ndims=2;
bio(102).size=[];
bio(102).isStruct=false;

bio(103).blkName='Trajectory Planner/Quintic Polynomial/5th Order Polynomial/N-Sample Switch/N-Sample Enable';
bio(103).sigName='';
bio(103).portIdx=0;
bio(103).dim=[1,1];
bio(103).sigWidth=1;
bio(103).sigAddress='&slrt_parker_B.NSampleEnable_p';
bio(103).ndims=2;
bio(103).size=[];
bio(103).isStruct=false;

bio(104).blkName='Trajectory Planner/Quintic Polynomial/5th Order Polynomial/N-Sample Switch/Switch';
bio(104).sigName='';
bio(104).portIdx=0;
bio(104).dim=[3,1];
bio(104).sigWidth=3;
bio(104).sigAddress='&slrt_parker_B.Switch_b[0]';
bio(104).ndims=2;
bio(104).size=[];
bio(104).isStruct=false;

bio(105).blkName='Trajectory Planner/Quintic Polynomial/Get_Initial_Condition/N-Sample Switch/N-Sample Enable';
bio(105).sigName='';
bio(105).portIdx=0;
bio(105).dim=[1,1];
bio(105).sigWidth=1;
bio(105).sigAddress='&slrt_parker_B.NSampleEnable';
bio(105).ndims=2;
bio(105).size=[];
bio(105).isStruct=false;

bio(106).blkName='Trajectory Planner/Quintic Polynomial/Get_Initial_Condition/N-Sample Switch/Switch';
bio(106).sigName='';
bio(106).portIdx=0;
bio(106).dim=[3,1];
bio(106).sigWidth=3;
bio(106).sigAddress='&slrt_parker_B.Switch_f[0]';
bio(106).ndims=2;
bio(106).size=[];
bio(106).isStruct=false;

function len = getlenBIO
len = 106;

