clear;clc

xfile=fopen('XDATA.DAT');
yfile=fopen('YDATA.DAT');
zfile=fopen('ZDATA.DAT');
efile=fopen('ENABLE.DAT');

xdata=fread(xfile);
ydata=fread(yfile);
zdata=fread(zfile);
edata=fread(efile);

x=SimulinkRealTime.utils.getFileScopeData(xdata);
y=SimulinkRealTime.utils.getFileScopeData(ydata);
z=SimulinkRealTime.utils.getFileScopeData(zdata);
e=SimulinkRealTime.utils.getFileScopeData(edata);
%%
clear posn posn_1
% filter enabled points
posn_1=find(e.data(:,1)==1);
% filter deep points
xtemp=x.data(posn_1,1);
ytemp=y.data(posn_1,1);
ztemp=z.data(posn_1,1);
posn=find(ztemp>10);
figure;
hold on;grid on; axis equal;
scatter3(xtemp(posn,1),ytemp(posn,1),ztemp(posn,1),'.','r');
scatter3(x.data(posn_1,1),y.data(posn_1,1),z.data(posn_1,1),'.','b');
%%
% XYZ
dataset(:,1)=xtemp(posn,1);
dataset(:,2)=ytemp(posn,1);
dataset(:,3)=ztemp(posn,1);
save dataset.mat