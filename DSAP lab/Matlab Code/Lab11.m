% Define the values of n
n_values = 3;
 
% Loop through each value of n and calculate the expression
for i = 1:length(n_values)
    n = n_values(i);
    result = (1 + 2/n^2)^n;
    fprintf('For n = %d, (1 + 2/n^2)^n = %.6f\n', n, result);
end 
 
n_values = 7;
 
% Loop through each value of n and calculate the expression
for i = 1:length(n_values)
    n = n_values(i);
    result = (1 + 2/n^2)^n;
    fprintf('For n = %d, (1 + 2/n^2)^n = %.6f\n', n, result);
end 
