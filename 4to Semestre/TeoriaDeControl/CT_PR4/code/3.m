% EX 3

% Inciso a)
k = 2;
s = tf('s');
G = k/(s^3-2*s^3-5*s+6);
bode(G);
pzmap(G);

% Inciso b)
H = k/(s^4+7*s^3+24*s^2+58*s+40);
bode(H);
pzmap(H);

% Inciso c)
T = k/(s^6+5*s^5+6*s^4+10*s^3+4*s+1);
bode(T);
pzmap(T);
