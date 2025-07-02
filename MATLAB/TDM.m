clc;
close all;
clear all;
x=0:0.5:4*pi;
sig1=8*sin(x);
l=length(sig1);
sig2=8*triang(l);
subplot(2,2,1);
plot(sig1);
title('sinusoidal signal');
ylabel('amplitude');
xlabel('time');
subplot(2,2,2);
plot(sig2);
title('triangle signal');
ylabel('amplitude');
xlabel('time');
subplot(2,2,3);
stem(sig1);
title('sampled sinusoidal signal');
ylabel('amplitude');
xlabel('time');
subplot(2,2,4);
stem(sig2);
title('sampled triangle signal');
ylabel('amplitude')
xlabel('time');
l1=length(sig1);
l2=length(sig2);
for i=1:l1
    sig(1,i)=sig1(i);
    sig(2,i)=sig2(i);
end
tdmsig=reshape(sig,1,2*l1);
figure
stem(tdmsig);
title('TDM signal');
ylabel('amplitude');
xlabel('time');
demux=reshape(tdmsig,2,l1);
for i=1:l1
    sig3(i)=demux(1,i);
    sig4(i)=demux(2,i);
end
figure
subplot(2,1,1);
plot(sig3);
title('recovered sinusoidal signal');
ylabel('amplitude');
xlabel('time');
subplot(2,1,2);
plot(sig4);
title('recovered triangular signal');
ylabel('amplitude');
xlabel('time');