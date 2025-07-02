% Given parameters
fs = 100e3; % Sampling frequency
fp = 15e3;  % Passband frequency
fsb = 20e3; % Stopband frequency
 
% Transition bandwidth
delta_f = fsb - fp;
 
% Normalized frequency
wp = fp / (fs / 2);
 
% Calculate the order of the filter (N) for Hamming window
N_hamming = ceil(3.3 * pi / (2 * pi * delta_f / fs));
 
% Ensure the order is odd
if mod(N_hamming, 2) == 0
    N_hamming = N_hamming + 1;
end
 
% Design the filter using the Hamming window
b_hamming = fir1(N_hamming, wp, hamming(N_hamming + 1));
 
% Plot the frequency response
freqz(b_hamming, 1, 1024, fs);
title('Frequency Response using Hamming Window');
 
% Plot the impulse response
figure;
impz(b_hamming, 1);
title('Impulse Response using Hamming Window');

