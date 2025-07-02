% Parameters
C = 2; % Change C to positive or negative values
a = -1; % Change a to positive or negative values
 
% Time vector
t = linspace(-2, 2, 1000); % Adjust time range as needed
 
% Signal
x = C * exp(a * t);
 
% Plot
figure;
stem(t, x, 'LineWidth', 1.5);
title(sprintf('x(t) = %d e^{%dt}', C, a));
xlabel('t');
ylabel('x(t)');
grid on;
