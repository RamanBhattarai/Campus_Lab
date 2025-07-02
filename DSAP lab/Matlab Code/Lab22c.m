% Parameters
C_mag = 1; % Magnitude of C
theta = pi/4; % Phase angle of C
r = 0; % r value
omega_0 = 1; % Angular frequency
 
% Time vector
t = linspace(-2*pi, 2*pi, 1000); % Adjust time range as needed
 
% Signal
C_complex = C_mag * exp(1j * theta);
x = abs(C_complex) * exp((r + 1j * omega_0) * t);
 
% Plot
figure;
plot(t, real(x .* exp(-1j * theta)), 'b', 'LineWidth', 1.5);
hold on;
plot(t, imag(x .* exp(-1j * theta)), 'r', 'LineWidth', 1.5);
hold off;
title(sprintf('x(t) = %d e^{(%.1f + j%.1f)t}', abs(C_complex), r, omega_0));
xlabel('t');
ylabel('x(t)');
legend('Real part', 'Imaginary part');
grid on; 
% Parameters
r = -1; % r value
 
% Signal
x = abs(C_complex) * exp((r + 1j * omega_0) * t);
 
% Plot
figure;
plot(t, real(x .* exp(-1j * theta)), 'b', 'LineWidth', 1.5);
hold on;
plot(t, imag(x .* exp(-1j * theta)), 'r', 'LineWidth', 1.5);
hold off;
title(sprintf('x(t) = %d e^{(%.1f + j%.1f)t}', abs(C_complex), r, omega_0));
xlabel('t');
ylabel('x(t)');
legend('Real part', 'Imaginary part');
grid on;
% Parameters
r = 1; % r value
 
% Signal
x = abs(C_complex) * exp((r + 1j * omega_0) * t);
 
% Plot
figure;
plot(t, real(x .* exp(-1j * theta)), 'b', 'LineWidth', 1.5);
hold on;
plot(t, imag(x .* exp(-1j * theta)), 'r', 'LineWidth', 1.5);
hold off;
title(sprintf('x(t) = %d e^{(%.1f + j%.1f)t}', abs(C_complex), r, omega_0));
xlabel('t');
ylabel('x(t)');
legend('Real part', 'Imaginary part');
grid on;
