//Fanor Adarme y Laura Ramos
char opcion ='0';
const int LedRojo = 7;
const int LedVerde = 2;
const int LedAma = 4;
const int Motor = 12;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LedRojo,OUTPUT);
  pinMode(LedAma,OUTPUT);
  pinMode(LedVerde,OUTPUT);
  pinMode(Motor,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()==0)
  char opcion = Serial.read();

  if (opcion=='1')
  {
    digitalWrite(LedRojo,HIGH);
  }else{
    if(opcion=='1')
    {
      digitalWrite(LedRojo,LOW);
    }else{
      if(opcion=='2')
      {
        digitalWrite(Motor,HIGH);
      }else{
        if(opcion=='2')
        {
          digitalWrite(Motor,LOW);
        }else{
          if(opcion=='3')
          {
            digitalWrite(LedRojo,HIGH);
            digitalWrite(LedAma,HIGH);
            digitalWrite(LedVerde,HIGH);
            digitalWrite(Motor,HIGH);
          }else{
            if(opcion=='3')
            {
            digitalWrite(LedRojo,LOW);
            digitalWrite(LedAma,LOW);
            digitalWrite(LedVerde,LOW);
            digitalWrite(Motor,LOW);
            }else{
              Serial.println("ha ocurrido un error en el ingreso del dato");
            }
          }
        }
      }
    }
  }
}
