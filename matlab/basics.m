% @author: Ajay Bhatia

% A Basic MATLAB script explain the concepts

%% Formats

% Set format to short
format short
pi

% Set format to long
format long 
pi

% Set format to compact

%% Variables & Arithematic operators
x = 12
y = x^2
area = pi * y

complexNumber = -3.672 + 78.2313i

%% Iteration

% for loop
for i = 1:10
    disp(i)
end

% while loop
i = 1
while i <= 10
    i = i + 1
    disp(i)
end

%% Vector
x = 1:10
y = (0.0: 0.1: 1.00)'

%% Plot
x = -pi: pi / 256: pi;
y = tan(sin(x)) - sin(tan(x));
z = 1 + tan(1);
plot(x, y, '-', pi / 2, z, 'ro')
xlabel('x')
ylabel('y')
title('tan(sin(x)) - sin(tan(x))')
