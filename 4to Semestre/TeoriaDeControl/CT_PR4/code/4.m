% EX 4
k = 2;
s = tf('s');
% Inciso a)
U = k(s+1)/((s-2)*(s+1));
%bode(U);
%pzmap(U);

% Inciso b)
N = k/((s-1)*(s+5)*(s+20));
bode(N);
pzmap(N);

% Inciso c)
M = (k*(s+1))/((s-1)*(s-2));
%bode(M);
%pzmap(M);

