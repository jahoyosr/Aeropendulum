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
        pinMode( in1, OUTPUT);
        pinMode( in2, OUTPUT);


        digitalWrite(in1, LOW);     // paramos motor 1
        digitalWrite(in2, LOW);
        
   }
void loop()
   {    

        analogWrite(in1, 100);     // encendemos motor 1
        digitalWrite(in2, LOW);

        
    }
    
