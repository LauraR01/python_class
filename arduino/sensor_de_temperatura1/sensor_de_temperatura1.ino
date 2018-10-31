//Fanor Adarme y Laura Ramos
//LM35:Sensor Temperatura
//Declaro variable para guardar temp en celsius
float tempC;
const int LedRojo = 7;
const int LedAma = 4;
//Declaro variable para el PIN A0
int pinSensorT = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 
  pinMode(LedRojo,OUTPUT);
  pinMode(LedAma,OUTPUT); 
}
void loop() {
  // put your main code here, to run repeatedly:
  //para que lea el pin cunado es analogo
  tempC = analogRead(pinSensorT);
  tempC = (5.0*tempC*100)/1024.0;
  Serial.println(tempC);
  delay(2000);
   if (tempC >= 30){
    digitalWrite(LedAma,LOW);
    digitalWrite(LedRojo,HIGH);
    delay(500);
    digitalWrite(LedRojo,LOW);
   }else{
     if(tempC < 30){
      digitalWrite(LedRojo,LOW);
      digitalWrite(LedAma,HIGH);
      delay(500);
      digitalWrite(LedAma,LOW);
      }
    }
  }
