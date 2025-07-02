% Exponential
t = -10:0.1:10;
y = exp(t);
subplot(3,2,1);
plot(t,y);
xlabel('time');
ylabel('y');
title('Exponential');
axis([-12 12 -0.2 12]);
subplot(3,2,2);
stem(t,y);
xlabel('time');
ylabel('y');
title('Exponential');
axis([-12 12 -0.2 12]);

y = exp(-t);
subplot(3,2,3);
plot(t,y);
xlabel('time');
ylabel('y');
title('Exponential');
axis([-12 12 -0.2 12]);
subplot(3,2,4);
stem(t,y);
xlabel('time');
ylabel('y');
title('Exponential');
axis([-12 12 -0.2 12]);

% Signum signal
Vth = 1
y(t>0) = Vth;
y(t<0) = -Vth;
subplot(3,2,5);
plot(t,y);
xlabel('time');
ylabel('y');
title('Signum');
axis([-12 12 -1.2 1.2]);
subplot(3,2,6);
stem(t,y);
xlabel('time');
ylabel('y');
title('Signum');
axis([-12 12 -1.2 1.2]);