    k = 0.14893;

    J = 42.51;

    m_0 = 50; % masa estimada inicial

    m   = 300; % masa real

    %m   = 300;

    g = 9.8;

    l = 0.05;

    R = 6;

    Kp = 100000;

    Kd = 10000;

    a = [0 1; -Kp -Kd];

    b = [0;1];
    
    P=lyap(a,0.2*eye(2));
    eig(P);
    
    
    Mn=0.1047708;
    In=0.002381;
    Ln=0.2175;
    Kn=0.0347;
    u=pi/2;
    
%   
% gamma=0.01 *eye(2);
% Q=10*eye(2);
% B = [0;1];
% A = [0 1; -Kp -Kd];
% [P,L1,G] = care(A,zeros(2,2),Q);
% In
% Kn=0.02776;
% Kfn=0.0144