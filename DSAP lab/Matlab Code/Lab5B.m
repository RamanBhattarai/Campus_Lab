% Specifications
Fs = 8000;  % Sample rate in Hz
Wp = 1200 / (Fs / 2);  % Passband edge frequency (normalized)
Ws = 2000 / (Fs / 2);  % Stopband edge frequency (normalized)
Rp = 0.5;  % Passband ripple in dB
Rs = 40;   % Stopband attenuation in dB
 
% Butterworth Filter Design
[n_butter, Wn_butter] = buttord(Wp, Ws, Rp, Rs);
[b_butter, a_butter] = butter(n_butter, Wn_butter);
 
% Chebyshev Type I Filter Design
[n_cheby1, Wn_cheby1] = cheb1ord(Wp, Ws, Rp, Rs);
[b_cheby1, a_cheby1] = cheby1(n_cheby1, Rp, Wn_cheby1);
 
% Elliptic Filter Design
[n_ellip, Wn_ellip] = ellipord(Wp, Ws, Rp, Rs);
[b_ellip, a_ellip] = ellip(n_ellip, Rp, Rs, Wn_ellip);
 
% Frequency Response for Butterworth Filter
figure;
freqz(b_butter, a_butter, 1024, Fs);
title('Butterworth Filter Frequency Response');
 
% Frequency Response for Chebyshev Type I Filter
figure;
freqz(b_cheby1, a_cheby1, 1024, Fs);
title('Chebyshev Type I Filter Frequency Response');
 
% Frequency Response for Elliptic Filter
figure;
freqz(b_ellip, a_ellip, 1024, Fs);
title('Elliptic Filter Frequency Response');
 
% Display Filter Orders and Coefficients
fprintf('Butterworth Filter:\n');
fprintf('Order: %d\n', n_butter);
fprintf('Numerator Coefficients: \n');
disp(b_butter);
fprintf('Denominator Coefficients: \n');
disp(a_butter);
 
fprintf('\nChebyshev Type I Filter:\n');
fprintf('Order: %d\n', n_cheby1);
fprintf('Numerator Coefficients: \n');
disp(b_cheby1);
fprintf('Denominator Coefficients: \n');
disp(a_cheby1);
 
fprintf('\nElliptic Filter:\n');
fprintf('Order: %d\n', n_ellip);
fprintf('Numerator Coefficients: \n');
disp(b_ellip);
fprintf('Denominator Coefficients: \n');
disp(a_ellip);

