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

numsig=v.numSignals-1;
vsig=v.data(:,1:numsig);
close all;
figure;
plot(time,xsig,'r');
hold on;grid on;
plot(time,ysig,'g');
plot(time,zsig,'b');

legend('X position','Y position','Z position');
title('Position vs Time');
xlabel('Time in seconds');
ylabel('Position in mm');

%%
figure;
for i=1:numsig
subplot(numsig,1,i)
plot(time,vsig(:,i))
title(v.signalNames{i});
end