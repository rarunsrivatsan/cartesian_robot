clear;clc

xfile=fopen('XDATA.DAT');
yfile=fopen('YDATA.DAT');
fxfile=fopen('FXDATA.DAT');
fyfile=fopen('FYDATA.DAT');
fzfile=fopen('FZDATA.DAT');

xdata=fread(xfile);
ydata=fread(yfile);
fxdata=fread(fxfile);
fydata=fread(fyfile);
fzdata=fread(fzfile);

x=SimulinkRealTime.utils.getFileScopeData(xdata);
y=SimulinkRealTime.utils.getFileScopeData(ydata);
fx=SimulinkRealTime.utils.getFileScopeData(fxdata);
fy=SimulinkRealTime.utils.getFileScopeData(fydata);
fz=SimulinkRealTime.utils.getFileScopeData(fzdata);

%disp(size(y.data));
figure;
hold on;grid on;
plot(fx.data(:,2),fx.data(:,1),'r');
plot(fy.data(:,2),fy.data(:,1),'g');
plot(fz.data(:,2),fz.data(:,1),'b');
hold off;

figure;plot(x.data(:,2),x.data(:,1));
hold on;grid on;
plot(y.data(:,2),y.data(:,1));
len=length(x.data(:,1));
%%
dataset(:,1)=x.data(:,2);
dataset(:,2)=x.data(:,1);
dataset(:,3)=y.data(:,1);
dataset(:,4)=fx.data(1:len,1);
dataset(:,5)=fy.data(1:len,1);
dataset(:,6)=fz.data(1:len,1);
%%
plot3(dataset(:,2),dataset(:,3),dataset(:,6));