% Rectangular pulse
width = 5; % Width of the pulse
rect_pulse = (abs(n) <= width/2); % Create rectangular pulse response
% Plot
figure;
stem(n, rect_pulse, 'LineWidth', 1.5);
title('Rectangular Pulse Signal');
xlabel('n');
ylabel('x[n]');
grid on;
