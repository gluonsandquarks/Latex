function y = fcn(sine, dx1, x1)

a = 35;
b = 3;

dx2 = -a*x1 - b*dx1 + sine;

y = dx2;
