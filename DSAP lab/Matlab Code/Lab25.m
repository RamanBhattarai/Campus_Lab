% Parameters
omega_0 = 2*pi; % Fundamental angular frequency
N = 5; % Number of harmonics (up to 5th harmonic)
A = 1; % Amplitude of each harmonic
 
% Time vector
t = linspace(0, 2*pi, 1000); % Adjust time range as needed
 
% Synthesize fundamental sinusoidal signal
x_t = A * cos(omega_0 * t);
 
% Synthesize higher harmonics and add them
for n = 1:N
    x_t = x_t + A * cos(n * omega_0 * t);
end
 
% Plot individual harmonics and their sum
figure;
hold on;
plot(t, A * sin(omega_0 * t), 'k-', 'LineWidth', 1.5); % Fundamental sinusoid
for n = 1:N
    plot(t, A * sin(n * omega_0 * t), 'Color', [0 0 1] * (n/N), 'LineWidth', 1.5); % Higher harmonics
end
plot(t, x_t, 'r-', 'LineWidth', 2); % Sum of all signals
hold off;
 
% Add labels, title, legend, and grid
title('Fundamental Sinusoidal Signal and Its Harmonics');
xlabel('t');
ylabel('x(t)');
legend('Fundamental', 'Harmonic 1', 'Harmonic 2', 'Harmonic 3', 'Harmonic 4', 'Harmonic 5', 'Sum');
grid on;
