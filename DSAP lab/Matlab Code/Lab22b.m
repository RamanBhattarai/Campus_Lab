% Parameters
C = 1; % Change C to positive or negative values
omega = 1j; % Pure imaginary number
 
% Time vector
t = linspace(-2*pi, 2*pi, 1000); % Adjust time range as needed
 
% Signal
x = C * exp(omega * t);
 
% Plot
figure;
plot(t, real(x), 'b', 'LineWidth', 1.5);
hold on;
plot(t, imag(x), 'r', 'LineWidth', 1.5);
hold off;
title(sprintf('x(t) = %d e^{j\\omega t}', C));
xlabel('t');
ylabel('x(t)');
legend('Real part', 'Imaginary part');
grid on;
