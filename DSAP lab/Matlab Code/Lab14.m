% Define the function as an anonymous function
f = @(x) (x.^2 + 2*x + 3) ./ (x + 3);
 
% Create a range of x values from 0 to 100
x = linspace(0, 100, 1000); % Using 1000 points for a smoother plot
 
% Evaluate the function for these x values
y = f(x);
 
% Plot the function
figure; % Create a new figure
plot(x, y);
title('Plot of f(x) = (x^2+2x+3) / (x + 3)');
xlabel('x');
ylabel('f(x)');
grid on; % Add a grid to the plot
legend('FUNCTION')
