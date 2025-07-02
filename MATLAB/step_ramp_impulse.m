% Unit step
t = -10:0.1:10;
unitstep = t>=0;
subplot(3,2,1);
plot(t,unitstep);
xlabel('time');
ylabel('y');
title('Unit Step');
axis([-12 12 -0.2 1.2]);
subplot(3,2,2);
stem(t,unitstep);
xlabel('time');
ylabel('y');
title('Unit Step');
axis([-12 12 -0.2 1.2]);


% Unit impulse
unitimpulse = t==0;
subplot(3,2,3);
plot(t, unitimpulse);
xlabel('time');
ylabel('y');
title('Unit Impulse');
axis([-12 12 -0.2 1.5]);
subplot(3,2,4);
stem(t, unitimpulse);
xlabel('time');
ylabel('y');
title('Unit Impulse');
axis([-12 12 -0.2 1.5]);


% Ramp
rmp = t.*unitstep;
subplot(3,2,5);
plot(t, rmp);
xlabel('time');
ylabel('y');
title('Ramp');
axis([-12 12 -0.2 12]);
subplot(3,2,6);
stem(t, rmp);
xlabel('time');
ylabel('y');
title('Ramp');
axis([-12 12 -0.2 12]);