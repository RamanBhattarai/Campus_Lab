clc;
close all;
clear all;
del=input('enter step size');
t=0:2*pi/100:2*pi;
x=5*sin(t);
plot(x);
hold on
y=[0];
xr=0;
for i=1:length(x)-1
    if xr(i)<=x(i)
        d=1
        xr(i+1)=xr(i)+del
    else
        d=0;
        xr(i+1)=xr(i)-del
    end
    y=[y d];
end
stairs(xr);
hold off;
mse=sum([x-xr].^2)/length(x);
