%%
% Iván Alejandro Sarmiento Jiménez

%%
%En este prograba debes ingresar una matriz de 3x3
%Seleccionar los polos de la Ecuacion deseada del Controlador
%Seleccionar los polos de la Ecuacion deseada del Observador
%El resto es magia

% clc
% clear
syms h
% Parámetros de la planta
Kf = 0.0055; 
I = 0.002381;
L1 = 0.2175;
Mt = 0.0947708; %0.1047708
Kv = 0.0147; %0.0347
Conv1 = 10/255;
Conv2 = 180/pi;
% Sistema linealizado en x1 = 0, x2 = 0
% Fe = Conv1*Kv*PWM;
%Definicion de matrices
Asmc = [0 1;0 -Kf/I];
Bsmc = [0;Conv1*Kv*L1/I];
Csmc = [1 0];
Dsmc = 0;

%Funcion de transferencia de planta lazo abierto
G=Csmc*inv(h*eye(2)-Asmc)*Bsmc;

%Valores propios
EcCaract=det(h*eye(2)-Asmc);
ValProp=eig(Asmc);

coefEcCaract=sym2poly(EcCaract);
coefEcCaract=coefEcCaract(1,2:3)

% %%
% %CONTROLADOR
% %Ecuacion deseada
% polo1=12;
% polo2=12.5;
% EcDeseada=(h+polo1)*(h+polo2);
% display(collect(EcDeseada),'Ecuacion deseada');
% coefEcDeseada=sym2poly(EcDeseada);
% coefEcDeseada=coefEcDeseada(1,2:3);
% 
% %Calculo de Kbarra
% Kbarra=coefEcDeseada-coefEcCaract
% 
% %Calculo de P^-1 => Pinv
% U=[B A*B]
% Ubarrainv=[1 coefEcCaract(1)
%     0 1]
% Pinv=U*Ubarrainv
% P=inv(Pinv)
% K=Kbarra*P
% %sim('planta3x3')
% % Umax=max(realimentacionU(:,2))
% 
% %Ley de control
% display('Ley de control: u=r-Kx');
% display('xpunto=(A-B*K)x+Br');
% display('y=C*x');
% AmenosBK=A-B*K
% 
% %Aca verificamos con simulink que se use toda la señal

%%
%OBSERVADOR
%Ecuacion deseada
%Los polos sean el doble de los polos anteriores
poloObs1=12;
poloObs2=12.5;
EcDeseadaObs=(h+poloObs1)*(h+poloObs2);
coefEcDeseadaObs=sym2poly(EcDeseadaObs);
coefEcDeseadaObs=coefEcDeseadaObs(1,2:3)

%Calculo de Lbarra
Lbarra=coefEcDeseadaObs-coefEcCaract;
Lbarra=Lbarra'
%Calculo de PObs^-1 => PObsinv
Vbarrainv=[1 0
    coefEcCaract(1) 1]
V=[Csmc;Csmc*Asmc]
PObsinv=Vbarrainv*V
PObs=inv(PObsinv)
Lsmc=PObs*Lbarra

%Ecuacion del estimador
AmenosLC=Asmc-Lsmc*Csmc

%
% %Ecuacion de Lazo Cerrado
% Acl=[A-B*K B*K
%     zeros(2,2) A-L*C]
% Bcl=[B
%     zeros(2,1)]
% Ccl=[C zeros(1,2)]
% 
% %Funcion de transferencia
% display('Funcion de transferencia lazo cerrado');
% Go=Ccl*(inv(h*eye(4)-Acl))*Bcl;
% pretty(collect(Go))











