% Control adaptativo

    Kp = 100000;
    Kd = 10000;
    A = [0 1; -Kp -Kd];
    gamma=0.01 *eye(2);
    Q=10*eye(2);
    
    P=lyap(A,Q)
    eig(P)

    B = [0;1];
    
    
    
    
    
    
    
    