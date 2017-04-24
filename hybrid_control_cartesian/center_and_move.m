clear;clc;

tsim=25;
ts=0.001;

genScanMatrix;

xpos=-x_net;
ypos=-y_net;
% xpos=zeros(1,240000);
% ypos=xpos;
%fpos=-0.1*ones(1,240000);
fpos=-z_net;

db_x=0.5;
hitcount_x=3;

db_y=2;
hitcount_y=3;

db_z=0.001;
hitcount_z=5;

% Increasing I increases conformance to target and the numeric value of
% final signal
% Increasing D increases settling time and acts as damping.

% For Z=30: 8,4,0.5 for Z=5: 10 8 0.2
% For 5mm dynamic 12,10,0.08
kpx=85;%85
kpy=485;%485

kpz=2.5;%2.5

kix=3.5;%3.5
kiy=1.9;%1.9

kiz=10;%10

kdx=1.2;%2.3
kdy=4;%9

kdz=0.55;%0.55
%%
%open_system('CenterLimit')
rtwbuild('CenterLimit')
tg = SimulinkRealTime.target;
start(tg)
pause(3);
stop(tg)
%%
% open_system('tx_host');
% pause;
% open_system('Pos_PID');
rtwbuild('Hybrid_PID');
xpcexplr;
%%
read_system