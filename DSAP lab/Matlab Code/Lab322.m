% Define the parameters
a = 1; % Example value for a
t = 0:0.01:10; % Time vector from 0 to 10 with a step of 0.01
 
% Define the input and impulse response functions
x = ones(size(t)); % x(t) = u(t)
h = exp(-a * t); % h(t) = e^{-at} u(t)
 
% Compute the convolution using the analytical result
y = (1/a) * (1 - exp(-a * t));
 
% Plot the input signals and the result
figure;
 
% Plot x(t)
subplot(3, 1, 1);
plot(t, x, 'LineWidth', 1.5);
title('Input Signal x(t) = u(t)');
xlabel('t');
ylabel('x(t)');
 
% Plot h(t)
subplot(3, 1, 2);
plot(t, h, 'LineWidth', 1.5);
title('Impulse Response h(t) = e^{-at} u(t)');
xlabel('t');
ylabel('h(t)');
 
% Plot the convolution result y(t)
subplot(3, 1, 3);
plot(t, y, 'LineWidth', 1.5);
title('Convolution Result y(t) = x(t) * h(t)');
xlabel('t');
ylabel('y(t)');
 
% Display the result
disp('Convolution result y(t) = (1/a) * (1 - exp(-at)):');
disp(y);
