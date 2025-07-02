% Initialize the first two Fibonacci numbers
f1 = 1;
f2 = 1;
 
% Initialize the Fibonacci sequence array
fibonacci_sequence = [f1, f2];
 
% Generate Fibonacci numbers until the sum of two consecutive numbers is less than 10,000
while true
    f_next = f1 + f2;
    if f1 + f2 >= 100
        break;
    end
    fibonacci_sequence = [fibonacci_sequence, f_next];
    f1 = f2;
    f2 = f_next;
end
 
% Initialize counters for even and odd numbers
even_count = 0;
odd_count = 0;
 
% Count even and odd Fibonacci numbers
for i = 1:length(fibonacci_sequence)
    if mod(fibonacci_sequence(i), 2) == 0
        even_count = even_count + 1;
    else
        odd_count = odd_count + 1;
    end
end
 
% Display the results
fprintf('Number of even Fibonacci numbers: %d\n', even_count);
fprintf('Number of odd Fibonacci numbers: %d\n', odd_count);
 
% Plot the Fibonacci sequence
figure; % Create a new figure
plot(fibonacci_sequence, '-o');
title('Fibonacci Sequence');
xlabel('Index');
ylabel('Fibonacci Number');
grid on; % Add a grid to the plot
