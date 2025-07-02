% Numerator coefficients
num = [0.0018, 0.0073, 0.011, 0.007, 0.008];
 
% Denominator coefficients
den = [1, -3.0544, 3.8921, -2.2925, 0.55072];
 
% Create the transfer function
sys = tf(num, den, -1);
 
% Find poles and zeros
poles = pole(sys);
zeros = zero(sys);
 
% Plot poles and zeros in the z-plane
figure;
zplane(zeros, poles);
title('Pole-Zero Plot in the z-plane');
xlabel('Real Part');
ylabel('Imaginary Part');
grid on;
 
% Convert to second-order sections
[sos, g] = tf2sos(num, den);
 
% Display the second-order sections
disp('Second-order sections:');
disp(sos);
disp('Gain:');
disp(g);
 
% Frequency response of the system
figure;
freqz(num, den);
title('Frequency Response of the System');
grid on;
 
% Plot the signal flow graph for each second-order section
figure;
for i = 1:size(sos, 1)
    b = sos(i, 1:3);
    a = sos(i, 4:6);
    
    subplot(size(sos, 1), 1, i);
    zplane(b, a);
    title(['Second-Order Section ', num2str(i)]);
    xlabel('Real Part');
    ylabel('Imaginary Part');
    grid on;
end
