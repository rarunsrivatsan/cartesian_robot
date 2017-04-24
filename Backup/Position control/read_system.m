SimulinkRealTime.copyFileToHost('XDATA.DAT');
SimulinkRealTime.copyFileToHost('YDATA.DAT');
SimulinkRealTime.copyFileToHost('ZDATA.DAT');
SimulinkRealTime.copyFileToHost('VAR.DAT');

xfile=fopen('XDATA.DAT');
yfile=fopen('YDATA.DAT');
zfile=fopen('ZDATA.DAT');

vfile=fopen('VAR.DAT');

xdata=fread(xfile);
ydata=fread(yfile);
zdata=fread(zfile);
vdata=fread(vfile);

x=SimulinkRealTime.utils.getFileScopeData(xdata);
y=SimulinkRealTime.utils.getFileScopeData(ydata);
z=SimulinkRealTime.utils.getFileScopeData(zdata);
v=SimulinkRealTime.utils.getFileScopeData(vdata);
%%
% First column is signal and second is time
xsig=x.data(:,1);
ysig=y.data(:,1);
zsig=z.data(:,1);
time=x.data(:,2);

numsig=v.numSignals;
vsig=v.data(:,1:numsig-1);
close all;
figure;
plot(time,xsig,'r');
hold on;grid on;
plot(time,ysig,'g');
plot(time,zsig,'b');

%plot(time,vsig);

legend('X position','Y position','Z position');
title('Position vs Time');
xlabel('Time in seconds');
ylabel('Position in mm');

%%
figure;
subplot(3,1,1)
plot(vsig(:,3))
title(v.signalNames{3});
subplot(3,1,2)
plot(vsig(:,2))
title(v.signalNames{2});
subplot(3,1,3)
plot(vsig(:,1))
title(v.signalNames{1});