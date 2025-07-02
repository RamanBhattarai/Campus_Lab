% Sinc wave
t = -20:0.01:20;
x = sinc(t);
subplot(2,1,1);
plot(t,x);
xlabel('time');
ylabel('y');
title('sinc curve');
axis([-22 22 -1.5 1.5])
subplot(2,1,2);
stem(t,x);
xlabel('time');
ylabel('sinc(t)');
title('sinc curve');
axis([-22 22 -1.5 1.5])