char opcion = '0';
const int LedRojo = 7;
const int LedVerde = 2;
const int LedAma = 4;
const int Motor = 12;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LedRojo,OUTPUT);
  pinMode(LedVerde,OUTPUT);
  pinMode(LedAma,OUTPUT);
  pinMode(Motor,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0)
  {
    opcion = Serial.read();

    if(opcion=='0'){
      Serial.println("Menu");
      Serial.println("1. Encender led Rojo");
      Serial.println("2. Apagar led Rojo");
      Serial.println("3. Encender led Amarillo");
      Serial.println("4. Apagar led Amarillo");
      Serial.println("5. Encender led Verde");
      Serial.println("6. Apagar led Verde");
      Serial.println("7. Encender Motor");
      Serial.println("8. Apagar Motor");
      Serial.println("9. Encender Todo");
      Serial.println("10. Apagar Todo");
    }
    if(opcion=='1'){
      digitalWrite(LedRojo,HIGH);
      }else{
        if(opcion=='2'){
          digitalWrite(LedRojo,LOW);
        }else{
          if(opcion=='3'){
            digitalWrite(LedAma,HIGH);
          }else{
            if(opcion=='4'){
              digitalWrite(LedAma,LOW);
            }else{
              if(opcion=='5'){
                digitalWrite(LedVerde,HIGH);
                }else{
                  if(opcion=='6'){ 
                    digitalWrite(LedVerde,LOW);
                }else{
                  if(opcion=='7'){
                    digitalWrite(Motor,HIGH);
                  }else{
                    if(opcion=='8'){
                      digitalWrite(Motor,LOW);
                    }else{
                      if(opcion=='9'){
                        digitalWrite(LedRojo,HIGH);
                        digitalWrite(LedAma,HIGH);
                        digitalWrite(LedVerde,HIGH);
                        digitalWrite(Motor,HIGH);
                      }else{
                        if(opcion=="10"){
                          digitalWrite(LedRojo,LOW);
                          digitalWrite(LedAma,LOW);
                          digitalWrite(LedVerde,LOW);
                          digitalWrite(Motor,LOW);
                        }
                      }
                    }
                  }
                }
            }
          }
        }
      }
    }
  }      
}
