% Define the parameters
a = 2;
omega = 5;
t = 0:0.01:10; % Time vector from 0 to 10 with small step size
 
% Define the function
y = -exp(a * t).* cos(omega * t);
 
% Plot the function
figure; % Create a new figure
plot(t, y);
title('Plot of y = e^-{at} \cos(\omega t)');
xlabel('Time (t)');
ylabel('y');
legend('Sinusoidal Plot') 
grid on;
