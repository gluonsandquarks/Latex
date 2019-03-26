function y = fcn(u, v, w, t)
k1 = 76.5;
k2 = 2.5;
k3 = 101.3;

if t < 20
   x = 5*sin(5*t);
else
   x = 0;
end
    
y = k3*u - k2*v - k1*w + x;