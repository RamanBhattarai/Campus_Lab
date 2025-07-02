% Define the signals
X1 = [1, 1, 1, 1, 1];
n1 = -2:2;  % Corresponding indices for X1
 
% Define the periodic signal X2
X2_period = [1, 0, 0, 0, 0, 0, 0, 0, 0, 0];
n2_period = -4:5;  % Corresponding indices for one period of X2
 
% Repeat X2 to handle periodicity (assuming periodicity length of 10)
num_repeats = 3; % Repeat X2 enough times to ensure convolution can be computed properly
X2 = repmat(X2_period, 1, num_repeats);
n2 = -4:(length(X2)-5); % Adjust indices accordingly
 
% Perform the convolution
Y2 = conv(X1, X2);
 
% Define the time indices for Y2
n_Y2 = (n1(1) + n2(1)):(n1(end) + n2(end));
 
% Plot the input signals and the result
figure;
 
% Plot X1
subplot(3, 1, 1);
stem(n1, X1, 'filled');
title('Input Signal X1[n]');
xlabel('n');
ylabel('X1[n]');
 
% Plot X2
subplot(3, 1, 2);
stem(n2, X2, 'filled');
title('Input Signal X2[n] (Periodic)');
xlabel('n');
ylabel('X2[n]');
 
% Plot the convolution result Y2
subplot(3, 1, 3);
stem(n_Y2, Y2, 'filled');
title('Convolution Result Y2 = X1 * X2');
xlabel('n');
ylabel('Y2[n]');
 
% Display the result
disp('Convolution result Y2:');
disp(Y2);
