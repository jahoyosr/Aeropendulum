
#define en1 5     // Enable motor 1
#define in1 6     // Control pin 1 para motor 1
#define in2 7     // Control pin 2 para motor 1

int i=0;
int retardo=0;
int variacion=0;
double grados=0;

void setup()
   {
   // inicializar puerto serie
   Serial.begin(9600);
        pinMode( en1, OUTPUT);
        pinMode( in1, OUTPUT);
        pinMode( in2, OUTPUT);


        digitalWrite(en1, LOW);     // motor 1 desactivado
        digitalWrite(in1, LOW);     // paramos motor 1
        digitalWrite(in2, LOW);
        digitalWrite(en1, HIGH);     // motor 1 activado
   }
void loop()
   {    
    for(variacion=150; variacion<255; variacion=variacion+5){
      
        analogWrite(in1, variacion);     // Arrancamos motor 1 para que sople hacia abajo 
        digitalWrite(in2, LOW);
        retardo=0;

        while(retardo<700){
       // leer pines
       grados = -0.093*analogRead(A0)+42.677;
       Serial.print(variacion);
       Serial.print(" , ");
       Serial.println(grados);
       delay(10);
       retardo=retardo+1;
        }

        
    }
        
while(true){
  
        digitalWrite(in1, LOW);     // paramos motor 1
        digitalWrite(in2, LOW);
        digitalWrite(en1, LOW);     // motor 1 desactivado
}

  }
