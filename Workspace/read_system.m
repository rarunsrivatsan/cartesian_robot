SimulinkRealTime.copyFileToHost('XDATA.DAT');
SimulinkRealTime.copyFileToHost('YDATA.DAT');
SimulinkRealTime.copyFileToHost('ZDATA.DAT');

xfile=fopen('XDATA.DAT');
yfile=fopen('YDATA.DAT');
zfile=fopen('ZDATA.DAT');

xdata=fread(xfile);
ydata=fread(yfile);
zdata=fread(zfile);

x=SimulinkRealTime.utils.getFileScopeData(xdata);
y=SimulinkRealTime.utils.getFileScopeData(ydata);
z=SimulinkRealTime.utils.getFileScopeData(zdata);
%%
SimulinkRealTime.copyFileToHost('VAR.DAT');
vfile=fopen('VAR.DAT');
vdata=fread(vfile);
v=SimulinkRealTime.utils.getFileScopeData(vdata);

%%
numsig=v.numSignals-1;
vsig=v.data(:,1:numsig);
time=v.data(:,end);
%%
figure;
for i=1:numsig
subplot(numsig,1,i)
plot(time,vsig(:,i))
title(v.signalNames{i});
end
%%
% First column is signal and second is time
xsig=x.data(:,1);
ysig=y.data(:,1);
zsig=z.data(:,1);
%time=x.data(:,2);
%%
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
