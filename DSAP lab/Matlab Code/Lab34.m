% Define the rectangular wave input signal x[n]
n_x = 1:100;  % Time indices for x[n]
x = ones(1, 100);  % x[n] = 1 for 1 <= n <= 100
 
% Different values of Tp
Tp_values = [10, 20, 50];
 
% Initialize figure for plotting
figure;
 
for i = 1:length(Tp_values)
    Tp = Tp_values(i);
    
    % Define the impulse response h[n]
    k = -50:50;  % Time indices for h[n] (sufficiently large range)
    
    % Compute the sinc function values
    h = (2/Tp) * arrayfun(@(x) sinc(x * 2 / Tp), k);
    
    % Perform the convolution
    y = conv(x, h);
    
    % Define the time indices for the result
    n_y = (n_x(1) + k(1)):(n_x(end) + k(end));
    
    % Plot the convolution result y[n]
    subplot(length(Tp_values), 1, i);
    stem(n_y, y, 'filled');
    title(['Convolution Result for T_p = ', num2str(Tp)]);
    xlabel('n');
    ylabel('y[n]');
    grid on;
end
 
% Display the results
disp('Convolution results for different T_p values have been plotted.');
