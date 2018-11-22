char valorCalculadora;
int pinLed1 = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinLed1,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0) {
    valorCalculadora = Serial.read();
    Serial.print(valorCalculadora);
    for(int i=1;i<=valorCalculadora;i++){
  
      digitalWrite(pinLed1,HIGH);
      delay(1000);
      digitalWrite(pinLed1,LOW);
      delay(1000);
   }     
  }
}
