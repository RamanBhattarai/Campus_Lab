% Convert the analog filter to digital filter using bilinear transformation
[b3, a3] = bilinear([0 1], [1 0.01 0.01^2], 1/T1);
[b4, a4] = bilinear([0 1], [1 0.01 0.01^2], 1/T2);
 
% Frequency response of the digital filters
figure;
freqz(b3, a3);
title('Frequency Response for T=0.1 (Bilinear Transformation)');
 
figure;
freqz(b4, a4);
title('Frequency Response for T=0.5 (Bilinear Transformation)');

