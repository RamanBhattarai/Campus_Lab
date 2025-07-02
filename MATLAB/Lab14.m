% Unit step
t = -10:0.001:10;
unitstep = t>=0;
subplot(3,1,1);
plot(t,unitstep);
xlabel('time');
ylabel('y');
title('Unit Step');
axis([-12 12 -0.2 1.2]);

%%%%  stem pani thapni sabma

% Unit impulse
unitimpulse = t==0;
subplot(3,1,2);
plot(t, unitimpulse);
xlabel('time');
ylabel('y');
title('Unit Impulse');
axis([-12 12 -0.2 1.5]);

% Ramp
rmp = t.*unitstep;
subplot(3,1,3);
plot(t, rmp);
xlabel('time');
ylabel('y');
title('Ramp');
axis([-12 12 -0.2 12]);
