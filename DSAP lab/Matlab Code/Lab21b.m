% Unit step
step = (n >= 0); % Create unit step response
 
% Plot
figure;
plot(x,y)
stem(n, step, 'LineWidth', 1.5);
title('Unit Step (u[n])');
xlabel('n');
ylabel('u[n]');
grid on;


