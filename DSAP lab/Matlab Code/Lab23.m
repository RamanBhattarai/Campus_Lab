% Parameters
a_mag = 0.9; % Magnitude of a
theta = pi/3; % Phase angle of a (in radians)
 
% Generate n values
n = 0:20; % Range of n values, adjust as needed
 
% Compute x[n] = a^n
a = a_mag * exp(1j * theta);
x = a.^n;
 
% Plotting
figure;
subplot(2,1,1);
stem(n, abs(x), 'b', 'LineWidth', 1.5); % Magnitude plot
title('Magnitude of x[n] = |a|^n e^{j n \theta}');
xlabel('n');
ylabel('|x[n]|');
grid on;
 
subplot(2,1,2);
stem(n, angle(x), 'r', 'LineWidth', 1.5); % Phase plot
title('Phase of x[n] = |a|^n e^{j n \theta}');
xlabel('n');
ylabel('Phase of x[n]');
grid on;
 
% Adjust plot appearance
sgtitle(sprintf('Discrete-time exponential function x[n] = (%.2f)^n e^{j %.2f n}', a_mag, theta));
