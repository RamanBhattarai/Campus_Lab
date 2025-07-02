% Hanning Window
window_hanning = hanning(M);
hanning_impulse_response = impulse_response .* window_hanning';
H_truncated_hanning = abs(fftshift(fft(hanning_impulse_response, N)));
 
% Blackman Window
window_blackman = blackman(M);
blackman_impulse_response = impulse_response .* window_blackman';
H_truncated_blackman = abs(fftshift(fft(blackman_impulse_response, N)));
 
% Bartlett Window
window_bartlett = bartlett(M);
bartlett_impulse_response = impulse_response .* window_bartlett';
H_truncated_bartlett = abs(fftshift(fft(bartlett_impulse_response, N)));
 
% Plot Hanning Window and Its Frequency Response
figure;
plot(window_hanning);
title('Hanning Window');
xlabel('Sample');
ylabel('Amplitude');
grid on;
 
figure;
plot(linspace(-pi, pi, N)/pi, H_truncated_hanning);
title('Frequency Response of Truncated FIR Filter with Hanning Window (M=31)');
xlabel('Frequency (\times \pi rad/sample)');
ylabel('Magnitude');
grid on;
 
% Plot Blackman Window and Its Frequency Response
figure;
plot(window_blackman);
title('Blackman Window');
xlabel('Sample');
ylabel('Amplitude');
grid on;
 
figure;
plot(linspace(-pi, pi, N)/pi, H_truncated_blackman);
title('Frequency Response of Truncated FIR Filter with Blackman Window (M=31)');
xlabel('Frequency (\times \pi rad/sample)');
ylabel('Magnitude');
grid on;
 
% Plot Bartlett Window and Its Frequency Response
figure;
plot(window_bartlett);
title('Bartlett Window');
xlabel('Sample');
ylabel('Amplitude');
grid on;
 
figure;
plot(linspace(-pi, pi, N)/pi, H_truncated_bartlett);
title('Frequency Response of Truncated FIR Filter with Bartlett Window (M=31)');
xlabel('Frequency (\times \pi rad/sample)');
ylabel('Magnitude');
grid on;
