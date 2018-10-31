char opcion = '0';
const int LedRojo = 7;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LedRojo,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if(Serial.available()>0);
  {
    opcion = Serial.read();

    if(opcion=='0'){
      Serial.println("Menu");
      Serial.println("1. Encender led Rojo");
      Serial.println("2. Apagar led Rojo");
    }
    if(opcion=='1'){
      digitalWrite(LedRojo,HIGH);
    }else{
      if(opcion=='2')
      {
        digitalWrite(LedRojo,LOW);
      }else{
        Serial.println("opcionIncorrecta");
      }
    }
  }
}
