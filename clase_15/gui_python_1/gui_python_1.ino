char serialData;
int pinLed1 = 13;
int pinLed2 = 10;
int pinLed3 = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinLed1,OUTPUT);
  pinMode(pinLed2,OUTPUT);
  pinMode(pinLed3,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0) {
    serialData = Serial.read();
    Serial.print(serialData);

    if(serialData == '0') {
      digitalWrite(pinLed1,HIGH);
    }if(serialData=='1'){
        digitalWrite(pinLed1,LOW);
      }if(serialData=='2'){
        digitalWrite(pinLed2,HIGH);
        }if (serialData=='3'){
          digitalWrite(pinLed2,LOW);
          }if(serialData=='4'){
            digitalWrite(pinLed3,HIGH);
            }if (serialData=='5'){
              digitalWrite(pinLed3,LOW);
              }if(serialData=='6'){
                digitalWrite(pinLed1,HIGH);}if (serialData=='3'){digitalWrite(pinLed2,LOW);
              }
  }
}
