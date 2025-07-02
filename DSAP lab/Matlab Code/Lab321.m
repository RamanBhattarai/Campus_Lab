% Define the signal x[n]
n_x = 0:6;  % Indices for x[n]
x = (1/3) * n_x;  % x[n] = (1/3) * n for 0 <= n <= 6
 
% Define the signal h[n]
n_h = -2:2;  % Indices for h[n]
h = ones(size(n_h));  % h[n] = 1 for -2 <= n <= 2
 
% Perform the convolution
y = conv(x, h);
 
% Define the time indices for the result
n_y = (n_x(1) + n_h(1)):(n_x(end) + n_h(end));
 
% Plot the input signals and the convolution result
figure;
 
% Plot x[n]
subplot(3, 1, 1);
stem(n_x, x, 'filled');
title('Input Signal x[n]');
xlabel('n');
ylabel('x[n]');
grid on;
 
% Plot h[n]
subplot(3, 1, 2);
stem(n_h, h, 'filled');
title('Impulse Response h[n]');
xlabel('n');
ylabel('h[n]');
grid on;
 
% Plot the convolution result y[n]
subplot(3, 1, 3);
stem(n_y, y, 'filled');
title('Convolution Result y[n] = x[n] * h[n]');
xlabel('n');
ylabel('y[n]');
grid on;
 
% Display the convolution result
disp('Convolution result y[n]:');
disp(y);
