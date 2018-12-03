#include <Servo.h>
Servo myservo; //crea el objeto servo
int pos = 0; //posicion del servo 
void setup() {
  // put your setup code here, to run once:
  myservo.attach(9); //vincula el servo al pin digital 9
}

void loop() {
  // put your main code here, to run repeatedly:
  //varia a posicion de 0 a 180, con espera de 15ms
  for (pos = 0; pos <= 180; pos+= 1){
    myservo.write(pos);
    delay(15);
  }
  //varia la posicion de 0 a 180, con esperas de 15ms
  for (pos = 180;pos >= 0; pos-=1){
    myservo.write(pos);
    delay(15);
  }

}
