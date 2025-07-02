% Define the coefficients
b = [0.0663 0.1989 0.1989 0.0663];
a = [1 -0.9349 0.5668 -0.1015];
 
% Frequency response
[freq_response, w] = freqz(b, a, 'half', 1024);
 
% Plot the magnitude response
figure;
plot(w/pi, abs(freq_response));
title('Magnitude Response');
xlabel('Normalized Frequency (\times\pi rad/sample)');
ylabel('Magnitude');
 
% Plot the phase response
figure;
plot(w/pi, angle(freq_response));
title('Phase Response');
xlabel('Normalized Frequency (\times\pi rad/sample)');
ylabel('Phase (radians)');
 
% Determine the cut-off frequency
magnitude = abs(freq_response);
cutoff_index = find(magnitude <= (max(magnitude) / sqrt(2)), 1);
cutoff_frequency = w(cutoff_index) / pi;
 
disp(['Cut-off Frequency: ', num2str(cutoff_frequency), ' x ? rad/sample']);
 
% Nature of the system analysis
if cutoff_frequency < 0.5
    disp('The system behaves like a low-pass filter.');
elseif cutoff_frequency > 0.5
    disp('The system behaves like a high-pass filter.');
else
    disp('The system has characteristics of a band-pass or band-stop filter.');
end 
