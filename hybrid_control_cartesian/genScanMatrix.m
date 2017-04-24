temp=linspace(1,70,100);
x_single=[temp;temp;temp];
x_row=reshape(x_single,1,300);
x_flip=flip(x_row);
x_net=x_row;
x_net2=[];

for i=1:50
x_net2=[x_net2 x_net x_flip];
i=i+1;
end

y=[temp]';
y_row=repmat(y,1,300);
y_net=reshape(y_row',1,30000);

fz=[0 1 0];
z_row=repmat(fz,1,100);
z_net=repmat(z_row,1,100);

xpos=x_net2;
ypos=y_net;
zpos=z_net;