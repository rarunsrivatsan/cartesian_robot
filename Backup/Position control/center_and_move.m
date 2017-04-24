clear;clc;

tsim=25;
ts=0.001;
udpPort=54995;
%ts of 0.001 gives ideal results but might cause a problem in data
%collection for large experiments due to file scope limits. Look for a way
%around it.

zpos=5:5:55;
zpos=[zpos 50:-5:5];

xpos=[-5:-10:-55 -45:10:55 45:-15:-5];
ypos=[-5:-10:-55 -45:10:55 45:-15:-5];

db_x=0.5;
hitcount_x=3;

db_y=2;
hitcount_y=3;

db_z=0.01;
hitcount_z=10;

% Increasing I increases conformance to target and the numeric value of
% final signal
% Increasing D increases settling time and acts as damping.

% For Z=30: 8,4,0.5 for Z=5: 10 8 0.2
% For 5mm dynamic 12,10,0.08
kpx=85;%85
kpy=485;%485
kpz=12;%8

kix=3.5;%3.5
kiy=1.9;%1.9
kiz=10;%4

kdx=1.2;%2.3
kdy=4;%9
kdz=0.08;%0.5

jogX=10;
jogY=10;
jogZ=50;
%%
open_system('CenterLimit')
rtwbuild('CenterLimit')
tg = SimulinkRealTime.target;
start(tg)
pause(3);
stop(tg)
%%
open_system('Pos_PID');
rtwbuild('Pos_PID');
start(tg)
pause(tsim);
stop(tg);
%tg.viewTargetScreen();
pause(1);
%%
read_system