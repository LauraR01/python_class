int LedRojo = 7;
int LedVerde = 2;
int LedAma= 4;
int Motor = 12;
void setup() {
  // put your setup code here, to run once:
  pinMode (LedRojo,OUTPUT);
  pinMode (LedVerde,OUTPUT);
  pinMode (LedAma,OUTPUT);
  pinMode (Motor,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LedRojo,HIGH);
  delay(500);//tiempo de espera
  digitalWrite(LedRojo,LOW);
  delay(500);
  digitalWrite(LedAma,HIGH);
  delay(500);//tiempo de espera
  digitalWrite(LedAma,LOW);
  delay(500);
  digitalWrite(LedVerde,HIGH);
  delay(500);//tiempo de espera
  digitalWrite(LedVerde,LOW);
  delay(500);
  digitalWrite(LedAma,HIGH);
  delay(500);//tiempo de espera
  digitalWrite(LedAma,LOW);
  delay(500);
  digitalWrite(Motor,HIGH);
  delay(500);//tiempo de espera
  digitalWrite(Motor,LOW);
}
