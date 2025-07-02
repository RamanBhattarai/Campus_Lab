% Given parameters
fs = 100e3; % Sampling frequency
fp = 15e3;  % Passband frequency
fsb = 20e3; % Stopband frequency
delta_p = 0.02; % Passband ripple
delta_s = 0.01; % Stopband attenuation
 
% Normalized frequencies
wp = fp / (fs / 2);
ws = fsb / (fs / 2);
 
% Transition bandwidth
delta_f = fsb - fp;
 
% Calculate the order of the filter (N) and beta for the Kaiser window
A = -20 * log10(delta_s);
if A > 50
    beta = 0.1102 * (A - 8.7);
elseif A >= 21
    beta = 0.5842 * (A - 21)^0.4 + 0.07886 * (A - 21);
else
    beta = 0;
end
 
% Determine the order
N = ceil((A - 8) / (2.285 * (2 * pi * delta_f / fs)));
 
% Ensure the order is odd
if mod(N, 2) == 0
    N = N + 1;
end
 
% Design the filter using the Kaiser window
b = fir1(N, wp, kaiser(N + 1, beta));
 
% Plot the frequency response
freqz(b, 1, 1024, fs);
title('Frequency Response using Kaiser Window');
 
% Plot the impulse response
figure;
impz(b, 1);
title('Impulse Response using Kaiser Window');
