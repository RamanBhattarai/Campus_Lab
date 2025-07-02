% Specifications
M = 31; % Filter length
N = 1024; % Number of points for frequency response plot
omega = linspace(-pi, pi, N); % Frequency vector
 
% Define the ideal filter response
H_ideal = double(abs(omega) <= pi/6);
 
% Hamming Window
window_hamming = hamming(M);
 
% Impulse Response Calculation
n = -floor(M/2):floor(M/2); % Sample points
impulse_response = (2/pi) * sin(pi * n / 6) ./ n; % Ideal sinc function
impulse_response(floor(M/2)+1) = 2/pi * pi/6; % Handle division by zero at center
 
% Apply the window function
hamming_impulse_response = impulse_response .* window_hamming';
 
% Frequency Response of the FIR filter
H_truncated_hamming = abs(fftshift(fft(hamming_impulse_response, N)));
 
% Plot Hamming Window
figure;
plot(window_hamming);
title('Hamming Window');
xlabel('Sample');
ylabel('Amplitude');
grid on;
 
% Plot Frequency Response of Hamming Window
figure;
plot(linspace(-pi, pi, N)/pi, H_truncated_hamming);
title('Frequency Response of Truncated FIR Filter with Hamming Window (M=31)');
xlabel('Frequency (\times \pi rad/sample)');
ylabel('Magnitude');
grid on;
