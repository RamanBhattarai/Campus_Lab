% Exponential
t = -10:0.001:10;
y = exp(t);
subplot(2,1,1);
plot(t,y);
xlabel('time');
ylabel('y');
title('Exponential');
axis([-12 12 -0.2 12]);
y = exp(-t);
subplot(2,1,2);
plot(t,y);
xlabel('time');
ylabel('y');
title('Exponential');
axis([-12 12 -0.2 12]);