% Define the sequences
x = ones(1, 5);  % x[n] = 1 for 0 <= n <= 4
n_x = 0:4;  % Indices for x[n]
 
h = 2 * (0:6);  % h[n] = 2n for 0 <= n <= 6
n_h = 0:6;  % Indices for h[n]
 
% Perform the convolution
y = conv(x, h);
 
% Define the time indices for the result
n_y = 0:(length(x) + length(h) - 2);
 
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

