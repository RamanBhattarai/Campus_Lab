% Ramp
ramp = max(0, n); % Create ramp response
% Plot
figure;
stem(n, ramp, 'LineWidth', 1.5);
title('Ramp Signal (r[n])');
xlabel('n');
ylabel('r[n]');
grid on;

