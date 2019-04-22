function y = fcn(sine, dx1, x1)

a = 35;
b = 3;

x2 = dx1;
dx2 = -a*sin(x1) - b*x2 + sine;

y = dx2;
