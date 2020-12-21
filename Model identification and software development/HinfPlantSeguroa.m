Kf=0.0055;
I=0.002381;
L1=0.2175;
Mt= 0.0947708;
Kv=0.0147;
Conv1=10/255;
Conv2=180/pi;

%Sistema linealizado en x1=0, x2=0
%Variables de estado
A=[0 1; -Mt/I -Kf/I];
B=[0; L1/I];
C=[1 0];
D=0;

M1 = 2;
A1 = 0.5;
wb1 = 2*pi*10;
M3 = 0.09;
A3 = 1.1;
wb3 = 2*pi*2000;


[b,a]=ss2tf(A,B,C,D);
s=tf('s');
G1=tf(b,a);

W1=tf([1/M1 wb1],[1 wb1*A1]);
W2=11*tf(1,1);
W3=tf([1/M3 wb3],[1 wb3*A3]);
Wn=0.001;
Wp=0.0001*tf(1,1);

bodemag(W1(1,1),'g');
hold on;
bodemag(W3(1,1),'b');
%Interconeccion del sistema
systemnames='G1 Wp Wn W1 W2 W3';
inputvar='[p;n;r;u]';
outputvar='[W1;W2;W3;-G1-Wn+r]';
input_to_G1='[-Wp+u]';
input_to_Wn='[n]';
input_to_W1='[-G1-Wn+r]';
input_to_W2='[u]';
input_to_W3='[G1]';
input_to_Wp='[p]';
P = sysic;
ncont=1;
nmeas=1;

[K1,sys_CL,gam1,info] = hinfsyn(P,nmeas,ncont);
L=G1*K1;
T=feedback(L,1);
%  sim('PlantaHinf_Simulacion')



figure
control=feedback(K1,G1);
step(control);
figure
step(5*T);
figure
bodemag(T);
% % Comprobacion W1
S = feedback(1,L);
figure
bodemag(S,'r');
hold on
bodemag(1/W1,'g');
% Comprobacion W2
S = feedback(1,L);
figure
bodemag(S*K1,'r');
hold on
bodemag(1/W2,'g');
% % Comprobacion W3
T = feedback(L,1);
figure
bodemag(T,'r');
hold on
bodemag(1/W3,'g');