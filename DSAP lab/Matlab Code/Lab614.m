% Specifications for M=61
M = 61;
N = 1024;
omega = linspace(-pi, pi, N);
 
% Define the ideal filter response
H_ideal = double(abs(omega) <= pi/6);
 
% Impulse Response Calculation
n = -floor(M/2):floor(M/2);
impulse_response = (2/pi) * sin(pi * n / 6) ./ n;
impulse_response(floor(M/2)+1) = 2/pi * pi/6;
 
% Hamming Window
window_hamming = hamming(M);
hamming_impulse_response = impulse_response .* window_hamming';
H_truncated_hamming = abs(fftshift(fft(hamming_impulse_response, N)));
 
% Plot Hamming Window and Its Frequency Response
figure;
plot(window_hamming);
title('Hamming Window (M=61)');
xlabel('Sample');
ylabel('Amplitude');
grid on;
 
figure;
plot(linspace(-pi, pi, N)/pi, H_truncated_hamming);
title('Frequency Response of Truncated FIR Filter with Hamming Window (M=61)');
xlabel('Frequency (\times \pi rad/sample)');
ylabel('Magnitude');
grid on;
 
% Repeat for Hanning, Blackman, and Bartlett Windows
% (Use similar code as shown above for M=31, but with M=61)
