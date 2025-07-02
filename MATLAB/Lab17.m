% Signum signal
t = -10:0.001:10;
y(t>0) = 1;
y(t<0) = -1;
plot(t,y);
xlabel('time');
ylabel('y');
title('Signum');
axis([-12 12 -1.2 1.2])
