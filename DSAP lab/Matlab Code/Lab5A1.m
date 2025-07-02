% Define the analog filter
syms s
Hs = s / (s^2 + 0.01*s + 0.09);
 
% Convert the analog filter to digital filter using impulse invariance method
T1 = 0.1;
T2 = 0.5;
[b1, a1] = impinvar([0 1], [1 0.01 0.01^2], 1/T1);
[b2, a2] = impinvar([0 1], [1 0.01 0.01^2], 1/T2);
 
% Frequency response of the digital filters
figure;
freqz(b1, a1);
title('Frequency Response for T=0.1 (Impulse Invariance Method)');
 
figure;
freqz(b2, a2);
title('Frequency Response for T=0.5 (Impulse Invariance Method)');
 
% Frequency response of the analog filter
[H, w] = freqs([0 1], [1 0.01 0.01^2], linspace(0, 2*pi, 1024));
 
figure;
plot(w/(2*pi), abs(H));
title('Frequency Response of Analog Filter');
xlabel('Frequency (Hz)');
ylabel('Magnitude');
grid on;
