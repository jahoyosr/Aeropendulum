#include <Time.h>


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
      time_t T;
       grados = -0.093*analogRead(A0)+42.677;
       Serial.print(T);
       Serial.print(" , ");
       Serial.println(grados);

        
    }
    
