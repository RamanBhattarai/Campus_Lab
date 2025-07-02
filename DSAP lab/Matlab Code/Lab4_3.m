% Define the coefficients for each second-order section
% Section 1
b1 = [0.0007378, 0.0007378*2, 0.0007378]; % Numerator coefficients
a1 = [1, -1.2686, 0.7051]; % Denominator coefficients
 
% Section 2
b2 = [1, 2, 1];
a2 = [1, -1.016, 0.3583];
 
% Section 3
b3 = [1, 2, 1];
a3 = [1, -0.9044, 0.2155];
 
% Combine into a matrix with 6 columns (3 for numerator, 3 for denominator)
sos = [b1, a1;
       b2, a2;
       b3, a3];
 
% Extract the gain for each section, which is often 1 if not specified otherwise
g = [1; 1; 1]; % Assuming gain of 1 for simplicity
 
% Convert second-order sections to transfer function form
[b, a] = sos2tf(sos, g);
 
% Display the overall transfer function coefficients
disp('Numerator coefficients of the overall transfer function:');
disp(b);
disp('Denominator coefficients of the overall transfer function:');
disp(a);
 
% Find the poles and zeros of the overall transfer function
poles_overall = roots(a);
zeros_overall = roots(b);
 
% Plot the poles and zeros of the overall transfer function in the z-plane
figure;
zplane(zeros_overall, poles_overall);
title('Poles and Zeros of the Overall Transfer Function in the z-plane');
xlabel('Real Part');
ylabel('Imaginary Part');
grid on;
 
% Plot the Direct Form I structure
figure;
 
% Plot numerator part
subplot(2,1,1);
stem(0:length(b)-1, b, 'filled');
title('Direct Form I Structure - Numerator');
xlabel('n');
ylabel('b[n]');
grid on;
 
% Plot denominator part
subplot(2,1,2);
stem(0:length(a)-1, a, 'filled');
title('Direct Form I Structure - Denominator');
xlabel('n');
ylabel('a[n]');
grid on;
 
% Plot the Direct Form II structure
figure;
 
% Prepare vectors for plotting
len_b = length(b);
len_a = length(a);
 
% Ensure vectors are the same length for plotting
if len_b > len_a
    a = [a, zeros(1, len_b - len_a)]; % Extend a if necessary
elseif len_a > len_b
    b = [b, zeros(1, len_a - len_b)]; % Extend b if necessary
end
 
% Plot combined part
stem(0:length(b)-1, b, 'filled'); % Numerator
hold on;
stem(0:length(a)-1, -a, 'filled'); % Denominator (inverted sign for clarity)
hold off;
 
title('Direct Form II Structure');
xlabel('n');
ylabel('Coefficients');
grid on;
