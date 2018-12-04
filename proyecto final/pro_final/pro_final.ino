char numero;
#include <Servo.h>
#include <LiquidCrystal.h>
          LiquidCrystal lcd(7,6,5,4,3,2);

Servo ServoD_P;
Servo ServoD_G;

const int Luz_C = 0;
int LC = 0;
const int Luz_S = 1;
int LS = 0;
const int Luz_Ba = 2;
int LB = 0;
const int Luz_H = 3;
int LH = 0;
const int Luz_L = 4;
int LL = 0;
const int Luz_G = 9;
int LG = 0;

const int LedR = 16;
const int LedA = 17;
const int LedV = 18;

#define FogonA 10
#define FogonB 11
#define FogonC 12
#define FogonD 13
int F_1 = 0;
int F_2 = 0;
int F_3 = 0;
int F_4 = 0;

const int Ext = 14;
int Ex = 0;  
const int Ven = 15;
int Ve = 0;

float T_G;
int SensorTG = 0;
float T_C;
int SensorTC = 0;

int S_PP = 0;
int S_PG = 0;
int a_PP = 0;
int a_PG = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(Luz_C,OUTPUT);
  pinMode(FogonA,OUTPUT);
  pinMode(FogonB,OUTPUT);
  pinMode(FogonC,OUTPUT);
  pinMode(FogonD,OUTPUT);
  pinMode(Luz_S,OUTPUT);
  pinMode(Luz_Ba,OUTPUT);
  pinMode(Luz_H,OUTPUT);
  pinMode(Luz_L,OUTPUT);
  pinMode(Luz_G,OUTPUT);
  pinMode(Ext,OUTPUT);
  pinMode(Ven,OUTPUT);

  pinMode(LedR,OUTPUT);
  pinMode(LedA,OUTPUT);
  pinMode(LedV,OUTPUT);

  ServoD_P.attach(20);
  ServoD_G.attach(19);

  lcd.begin (16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
  int iF_1 = 0;
  int iF_2 = 0;
  int iF_3 = 0;
  int iF_4 = 0;

    lcd.setCursor(0,1);

    if(Serial.available()>0){
      numero=Serial.read();
      Serial.print(numero);
      T_G = analogRead(SensorTG);
      T_C = analogRead(SensorTC);
      
      if (numero=='0'){
        if (LS==0){
          digitalWrite(Luz_S,HIGH);
          lcd.setCursor(0,0);
          lcd.print("Luz de sala");
          lcd.setCursor(0,1);
          lcd.print("Esta encendida");
          LS = 1;
        }else{
          digitalWrite(Luz_S,LOW);
          lcd.setCursor(0,0);
          lcd.print("Luz de sala");
          lcd.setCursor(0,1);
          lcd.print("Esta apagada");
          LS = 0;
        }if (numero=='1'){
          if (LC==0){
            digitalWrite(Luz_C,HIGH);
            lcd.setCursor(0,0);
            lcd.print("Luz de cocina");
            lcd.setCursor(0,1);
            lcd.print("Esta encendida");
            LC=1;
          }else{
            digitalWrite(Luz_C,LOW);
            lcd.setCursor(0,0);
            lcd.print("Luz de cocina");
            lcd.setCursor(0,1);
            lcd.print("Esta apagada");
            LC=0;
        }if (numero=='2'){
          if (LG==0){
            digitalWrite(Luz_G,HIGH);
            lcd.setCursor(0,0);
            lcd.print("Luz de Garaje");
            lcd.setCursor(0,1);
            lcd.print("Esta encendida");
            LG=1;
          }else{
            digitalWrite(Luz_G,LOW);
            lcd.setCursor(0,0);
            lcd.print("Luz de Garaje");
            lcd.setCursor(0,1);
            lcd.print("Esta apagada");
            LG=0;
          }if (numero=='3'){
            if(LB==0){
              digitalWrite(Luz_Ba,HIGH);
              lcd.setCursor(0,0);
              lcd.print("Luz del Baño");
              lcd.setCursor(0,1);
              lcd.print("Esta encendida");
              LB=1;
              }else{
                digitalWrite(Luz_Ba,LOW);
                lcd.setCursor(0,0);
                lcd.print("Luz del Baño");
                lcd.setCursor(0,1);
                lcd.print("Esta apagada");
                LB=0;
            }if (numero=='4'){
              if (LH==0){
                digitalWrite(Luz_H,HIGH);
                lcd.setCursor(0,0);
                lcd.print("Luz de Habitacion");
                lcd.setCursor(0,1);
                lcd.print("Esta encendida");
                LH = 1;
                }else{
                  digitalWrite(Luz_H,LOW);
                  lcd.setCursor(0,0);
                  lcd.print("Luz de Habitacion");
                  lcd.setCursor(0,1);
                  lcd.print("Esta apagada");
                  LH = 0;
                }if (numero=='5'){
                  if (LL == 0){
                    digitalWrite(Luz_L,HIGH);
                    lcd.setCursor(0,0);
                    lcd.print("Luz de Lavanderia");
                    lcd.setCursor(0,1);
                    lcd.print("Esta encendida");
                    LL = 1;
                    }else{
                      digitalWrite(Luz_L,LOW);
                      lcd.setCursor(0,0);
                      lcd.print("Luz de Lavanderia");
                      lcd.setCursor(0,1);
                      lcd.print("Esta apagada");
                      LL = 0;
                  }if (numero=='6'){
                    if (F_1==0){
                      for(iF_1=225;iF_1>0;iF_1--){
                        analogWrite(FogonA,iF_1);
                        delay(100);}
                      lcd.setCursor(0,0);
                      lcd.print("Fogon N°1");
                      lcd.setCursor(0,1);
                      lcd.print("Esta encendido");
                      F_1=1;
                    }else{
                      for(iF_1=225;iF_1>0;iF_1--){
                        analogWrite(FogonA,iF_1);
                        delay(100);}
                      lcd.setCursor(0,0);
                      lcd.print("Fogon N°1");
                      lcd.setCursor(0,1);
                      lcd.print("Esta apagado");
                      F_1=0;
                    }if (numero=='7'){
                      if(F_2==0){
                        for (iF_2=1;iF_2<225;iF_2++){
                          analogWrite(FogonB,iF_2);
                          delay(100);}
                        lcd.setCursor(0,0);
                        lcd.print("Fogon N°2");
                        lcd.setCursor(0,1);
                        lcd.print("Esta encendido");
                        F_2=1;
                      }else{
                        for(iF_2=225;iF_2>0;iF_2--){
                          analogWrite(FogonB,iF_2);
                          delay(100);}
                        lcd.setCursor(0,0);
                        lcd.print("Fogon N°2");
                        lcd.setCursor(0,1);
                        lcd.print("Esta apagado");
                        F_2=0;
                      }if (numero=='8'){
                        if(F_3==0){
                        for (iF_3=1;iF_3<225;iF_3++){
                          analogWrite(FogonC,iF_3);
                          delay(100);}
                        lcd.setCursor(0,0);
                        lcd.print("Fogon N°3");
                        lcd.setCursor(0,1);
                        lcd.print("Esta encendido");
                        F_3=1;
                      }else{
                        for(iF_3=225;iF_3>0;iF_3--){
                          analogWrite(FogonC,iF_3);
                          delay(100);}
                        lcd.setCursor(0,0);
                        lcd.print("Fogon N°3");
                        lcd.setCursor(0,1);
                        lcd.print("Esta apagado");
                        F_3=0;
                      }if (numero=='9'){
                        if(F_4==0){
                          for (iF_4=1;iF_4<225;iF_4++){
                          analogWrite(FogonD,iF_4);
                          delay(100);}
                        lcd.setCursor(0,0);
                        lcd.print("Fogon N°4");
                        lcd.setCursor(0,1);
                        lcd.print("Esta encendido");
                        F_4=1;
                        }else{
                          for(iF_4=225;iF_4>0;iF_4--){
                            analogWrite(FogonD,iF_4);
                            delay(100);}
                          lcd.setCursor(0,0);
                          lcd.print("Fogon N°4");
                          lcd.setCursor(0,1);
                          lcd.print("Esta apagado");
                          F_4=0;
                        }if (numero=="10"){
                          T_G = analogRead(SensorTG);
                          T_G = (5.0 * T_G * 100)/1024.0;
                          lcd.setCursor(0,0);
                          lcd.print("Temperatura Garaje");
                          lcd.setCursor(0,1);
                          lcd.print(T_G);
                        }if (numero=="11"){
                          T_C = analogRead(SensorTC);
                          T_C = (5.0 * T_C * 100)/1024.0;
                          lcd.setCursor(0,0);
                          lcd.print("Temperatura Cocina");
                          lcd.setCursor(0,1);
                          lcd.print(T_C);
                        }if (T_C>=27){
                          digitalWrite(Ext,HIGH);
                        }if (T_C <27){
                          digitalWrite(Ext,LOW);
                        }if(T_G >= 27){
                          digitalWrite(Ven,HIGH);
                        }if (T_G <27){
                          digitalWrite(Ven,LOW);
                        }if (numero=="12"){
                          digitalWrite (LedR,HIGH);
                          delay(4000);
                          digitalWrite (LedR,LOW);
                          digitalWrite (LedA,HIGH);
                          delay(2000);
                          digitalWrite (LedA,LOW);
                          digitalWrite (LedV,HIGH);
                          delay (4000);
                          digitalWrite (LedV,LOW);
                          digitalWrite (LedA,HIGH);
                          delay(2000);
                          digitalWrite (LedA,LOW);
                          digitalWrite (LedR,HIGH);
                        }if(numero=="13"){
                          if(S_PP==0){
                            for(a_PP=0;a_PP<=90;a_PP = a_PP+1){
                              ServoD_P.write(a_PP);
                              delay(15);
                              S_PP=1;}
                            }else{
                              for(a_PP=90;a_PP=0;a_PP = a_PP-1){
                                ServoD_P.write(a_PP);
                                delay(15);
                                S_PP=0;
                            }if (numero=="14"){
                              if(S_PP==0){
                                for(a_PG=0;a_PG<=90;a_PG = a_PG+1){
                                  ServoD_G.write(a_PG);
                                  delay(15);
                                  S_PG=1;}
                              }else{
                                    for(a_PG=90;a_PG=0;a_PG = a_PG-1){
                                      ServoD_G.write(a_PG);
                                      delay(15);
                                      S_PG=0;
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
    }
   }
  }
 }
}
