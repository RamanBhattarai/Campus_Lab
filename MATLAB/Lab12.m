% Continuous sin wave
t = -20:0.001:20;
x = sin(t);
subplot(2,1,1);
plot(t,x);
xlabel('time');
ylabel('sin(t)');
title('sin curve');
axis([-25 25 -1.5 1.5])
y = cos(t);
subplot(2,1,2);
plot(t,y);
xlabel('time');
ylabel('cos(t)');
title('cos curve');
axis([-25 25 -1.5 1.5])