%Derivada numerica
velocidadReal(1)=0;
l = length(PosicionReal.signals(1).values(:,1));
for i=2:l
    velocidadReal(i)=(PosicionReal.signals(1).values(i)-PosicionReal.signals(1).values(i-1))/(PosicionReal.time(i)-PosicionReal.time(i-1));
    
end

figure
plot(PosicionReal.time,pi/180*velocidadReal);
grid on
xlabel('Tiempo (s)')
ylabel('Velocidad (rad/s)')
hold on
plot(PosicionReal.time,VelocidadEstimada(:,2));

title('Velocidad (rad/s)')
legend('Velocidad Real','Velocidad Estimada')


