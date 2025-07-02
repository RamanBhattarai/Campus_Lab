% Unit sample response of the digital filters
figure;
impz(b1, a1);
title('Unit Sample Response for T=0.1 (Impulse Invariance Method)');
 
figure;
impz(b2, a2);
title('Unit Sample Response for T=0.5 (Impulse Invariance Method)');
 
% Impulse response of the analog filter
t1 = 0:T1:5;
t2 = 0:T2:5;
h_analog = @(t) exp(-0.01*t) .* (sin(0.1*t) / 0.1);
 
figure;
stem(t1, h_analog(t1));
title('Impulse Response of Analog Filter (T=0.1)');
xlabel('Time (s)');
ylabel('Amplitude');
grid on;
 
figure;
stem(t2, h_analog(t2));
title('Impulse Response of Analog Filter (T=0.5)');
xlabel('Time (s)');
ylabel('Amplitude');
grid on;
