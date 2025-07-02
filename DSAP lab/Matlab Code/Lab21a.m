% Impulse response
n = -10:10; % Range of n values
impulse = (n == 0); % Create impulse response
 
% Plot
figure;
plot(n,impulse)
stem(n, impulse, 'LineWidth', 1.5);
title('Impulse Response (\delta[n])');
xlabel('n');
ylabel('\delta[n]');
grid on;
