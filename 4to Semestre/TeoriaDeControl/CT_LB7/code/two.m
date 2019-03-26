function [u, e1, e2]= fcn(y, yp, ypp, v, x, sinx, t)

if t < 10
    a1 = 90;
    a2 = 10;
else
    a1 = 200;
    a2 = 30;
end

k1 = 76.5;
k2 = 2.5;
k3 = 101.3;

u = (ypp + sinx*k1 + k2*(v-yp) - a1*(x-y) - a2*(v-yp))/k3;
e1 = x-y;
e2 = v-yp;