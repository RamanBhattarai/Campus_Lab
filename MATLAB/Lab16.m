% Rectangular
t = -10:0.001:10;
fs = 1/5;
Vth = 1
y = Vth * sin(2*pi*fs*t);
y(y>=0) = Vth;
y(y<0) = -Vth;
subplot(2,1,1);
plot(t,y);
xlabel('time');
ylabel('y');
title('Rectangular');
axis([-12 12 -1.2 1.2])

% Triangular
y = sawtooth(t);
subplot(2,1,2);
plot(t,y);
xlabel('time');
ylabel('y');
title('Triangular');
axis([-12 12 -1.2 1.2])
