% Rectangular
t = -10:0.1:10;
fs = 1/5;
Vth = 1
y = Vth * sin(2*pi*fs*t);
y(y>=0) = Vth;
y(y<0) = -Vth;
subplot(3,2,1);
plot(t,y);
xlabel('time');
ylabel('y');
title('Rectangular');
axis([-12 12 -1.2 1.2]);
subplot(3,2,2);
stem(t,y);
xlabel('time');
ylabel('y');
title('Rectangular');
axis([-12 12 -1.2 1.2]);

% Triangular
y = sawtooth(t);
subplot(3,2,3);
plot(t,y);
xlabel('time');
ylabel('y');
title('Triangular');
axis([-12 12 -1.2 1.2]);
subplot(3,2,4);
stem(t,y);
xlabel('time');
ylabel('y');
title('Triangular');
axis([-12 12 -1.2 1.2]);

% Sinc wave
x = sinc(t);
subplot(3,2,5);
plot(t,x);
xlabel('time');
ylabel('y');
title('sinc curve');
axis([-12 12 -1.2 1.2])
subplot(3,2,6);
stem(t,x);
xlabel('time');
ylabel('sinc(t)');
title('sinc curve');
axis([-12 12 -1.2 1.2])