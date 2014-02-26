% Matlab script

% @author: Ajay Bhatia

% Plot the following:
% f(x) = 3x + 4

% Close all unwanted windows/objects/whatsoever
close all;

% Clear workspace environment
clear all;

x = [-1 0 1 2];
y = 3 * x + 4;

figure
plot(x, y)
xlabel('x')
ylabel('y = f(x)')
grid on
title('Plot of function f_1(x)')
legend('f_1(x)')
axis([-2 4 -2 12])
