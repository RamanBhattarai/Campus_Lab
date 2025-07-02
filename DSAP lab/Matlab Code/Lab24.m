% Fourier Series coefficients
C0 = 1;
C1 = 1/4;
C2 = 1/2;
C3 = 1/3;
 
% Fundamental frequency (you can adjust this as needed)
omega_0 = 2*pi; % For simplicity, using 2*pi as fundamental frequency
 
% Time vector for synthesis
t = linspace(0, 4, 1000); % Adjust time range as needed
 
% Synthesize the signal
x_t = C0;
x_t = x_t + C1 * exp(1j * 1 * omega_0 * t) + conj(C1) * exp(-1j * 1 * omega_0 * t);
x_t = x_t + C2 * exp(1j * 2 * omega_0 * t) + conj(C2) * exp(-1j * 2 * omega_0 * t);
x_t = x_t + C3 * exp(1j * 3 * omega_0 * t) + conj(C3) * exp(-1j * 3 * omega_0 * t);
 
% Plot the synthesized signal
figure;
plot(t, real(x_t), 'b', 'LineWidth', 1.5);
hold on;
plot(t, imag(x_t), 'r', 'LineWidth', 1.5);
hold off;
title('Synthesized Signal from Fourier Series Coefficients');
xlabel('t');
ylabel('x(t)');
legend('Real part', 'Imaginary part');
grid on;
