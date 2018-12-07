char numero;
#include <Servo.h>
#include <LiquidCrystal.h>
          LiquidCrystal lcd(7,6,5,4,3,2);

Servo ServoD_P;
Servo ServoD_G;

const int Luz_C = 22;
int EstadoLC = 0;
const int Luz_S = 24;
int EstadoLS = 0;
const int Luz_Ba = 32;
int EstadoLB = 0;
const int Luz_H = 28;
int EstadoLH = 0;
const int Luz_L = 34;
int EstadoLL = 0;
const int Luz_G = 50;
int EstadoLG = 0;

const int LedR = 51;
const int LedV = 49;
const int LedA = 47;

#define FogonA 31
#define FogonB 33
#define FogonC 35
#define FogonD 37
int EstadoF1 = 0;
int EstadoF2 = 0;
int EstadoF3 = 0;
int EstadoF4 = 0;

const int Ext = 52;
int EstadoEx = 0;  
const int Ven = 53;
int EstadoVe = 0;

float TG;
int SensorTG = 0;

float TC;
int SensorTC = 0;

int S_PP = 0;
int a_PPC = 0;
int a_PPA = 130;

int S_PG = 0;
int a_PGC = 0;
int a_PGA = 145;

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

  ServoD_P.attach(38);
  ServoD_G.attach(53);

  lcd.begin (12,2);
}

void loop() {
  // put your main code here, to run repeatedly:
  int iF_1 = 0;
  int iF_2 = 0;
  int iF_3 = 0;
  int iF_4 = 0;

  TG = analogRead(SensorTG);
  TC = analogRead(SensorTC);
  
  lcd.setCursor(0,1);
  
    if(Serial.available()>0){
      numero=Serial.read();
      Serial.print(numero);

      //Luz sala########################
      if (numero == 'a' and EstadoLS == 0){
        digitalWrite(Luz_S,HIGH);
        lcd.setCursor(0,0);
        lcd.print("Luz de sala");
        lcd.setCursor(0,1);
        lcd.print("Esta encendida");
        delay (2500);
        lcd.clear ();
        EstadoLS = 1;
        }else{
          if (numero == 'a' and EstadoLS == 1){
            digitalWrite(Luz_S,LOW);
            lcd.setCursor(0,0);
            lcd.print("Luz de sala");
            lcd.setCursor(0,1);
            lcd.print("Esta apagada");
            delay (2500);
            lcd.clear ();
            EstadoLS = 0;
          }
        }
      //Luz cocina##############
      if (numero == 'b' and EstadoLC == 0){
        digitalWrite(Luz_C,HIGH);
        lcd.setCursor(0,0);
        lcd.print("Luz de cocina");
        lcd.setCursor(0,1);
        lcd.print("Esta encendida");
        delay (2500);
        lcd.clear ();
        EstadoLC=1;
        }else{
          if (numero == 'b' and EstadoLC == 1){
            digitalWrite(Luz_C,LOW);
            lcd.setCursor(0,0);
            lcd.print("Luz de cocina");
            lcd.setCursor(0,1);
            lcd.print("Esta apagada");
            delay (2500);
            lcd.clear ();
            EstadoLC=0;
          }
        }
        //Fogon Nº1##############
      if (numero == 'c' and EstadoF1 == 0){
        digitalWrite(FogonA,HIGH);
        lcd.setCursor(0,0);
        lcd.print("Fogon Nº1");
        lcd.setCursor(0,1);
        lcd.print("Esta encendido");
        delay (2500);
        lcd.clear ();
        EstadoF1=1;
        }else{
          if (numero == 'c' and EstadoF1 == 1){
            digitalWrite(FogonA,LOW);
            lcd.setCursor(0,0);
            lcd.print("Fogon Nº1");
            lcd.setCursor(0,1);
            lcd.print("Esta apagado");
            delay (2500);
            lcd.clear ();
            EstadoF1=0;
          }
        }
        //Fogon Nº2##############
      if (numero == 'd' and EstadoF2 == 0){
        digitalWrite(FogonB,HIGH);
        lcd.setCursor(0,0);
        lcd.print("Fogon Nº2");
        lcd.setCursor(0,1);
        lcd.print("Esta encendido");
        delay (2500);
        lcd.clear ();
        EstadoF2=1;
        }else{
          if (numero == 'd' and EstadoF2 == 1){
            digitalWrite(FogonB,LOW);
            lcd.setCursor(0,0);
            lcd.print("Fogon Nº2");
            lcd.setCursor(0,1);
            lcd.print("Esta apagado");
            delay (2500);
            lcd.clear ();
            EstadoF2=0;
          }
        }
        //Fogon Nº3##############
      if (numero == 'e' and EstadoF3 == 0){
        digitalWrite(FogonC,HIGH);
        lcd.setCursor(0,0);
        lcd.print("Fogon Nº3");
        lcd.setCursor(0,1);
        lcd.print("Esta encendido");
        delay (2500);
        lcd.clear ();
        EstadoF3=1;
        }else{
          if (numero== 'e' and EstadoF3 == 1){
            digitalWrite(FogonC,LOW);
            lcd.setCursor(0,0);
            lcd.print("Fogon Nº3");
            lcd.setCursor(0,1);
            lcd.print("Esta apagado");
            delay (2500);
            lcd.clear ();
            EstadoF3=0;
          }
        }
        //Fogon Nº4##############
      if (numero == 'f' and EstadoF4 == 0){
        digitalWrite(FogonD,HIGH);
        lcd.setCursor(0,0);
        lcd.print("Fogon Nº4");
        lcd.setCursor(0,1);
        lcd.print("Esta encendido");
        delay (2500);
        lcd.clear ();
        EstadoF4=1;
        }else{
          if (numero == 'f' and EstadoF4 == 1){
            digitalWrite(FogonD,LOW);
            lcd.setCursor(0,0);
            lcd.print("Fogon Nº4");
            lcd.setCursor(0,1);
            lcd.print("Esta apagado");
            delay (2500);
            lcd.clear ();
            EstadoF4=0;
          }
        }
        //Luz Garaje##############
      if (numero == 'g' and EstadoLG == 0){
        digitalWrite(Luz_G,HIGH);
        lcd.setCursor(0,0);
        lcd.print("Luz de Garaje");
        lcd.setCursor(0,1);
        lcd.print("Esta encendida");
        delay (2500);
        lcd.clear ();
        EstadoLG=1;
        }else{
          if (numero == 'g' and EstadoLG == 1){
            digitalWrite(Luz_G,LOW);
            lcd.setCursor(0,0);
            lcd.print("Luz de Garaje");
            lcd.setCursor(0,1);
            lcd.print("Esta apagada");
            delay (2500);
            lcd.clear ();
            EstadoLG=0;
          }
        }
        //Luz Baño##############
      if (numero == 'h' and EstadoLB == 0){
        digitalWrite(Luz_Ba,HIGH);
        lcd.setCursor(0,0);
        lcd.print("Luz de Baño");
        lcd.setCursor(0,1);
        lcd.print("Esta encendida");
        delay (2500);
        lcd.clear ();
        EstadoLB=1;
        }else{
          if (numero == 'h' and EstadoLB == 1){
            digitalWrite(Luz_Ba,LOW);
            lcd.setCursor(0,0);
            lcd.print("Luz de Baño");
            lcd.setCursor(0,1);
            lcd.print("Esta apagada");
            delay (2500);
            lcd.clear ();
            EstadoLB=0;
          }
        }
        //Luz Habitacion##############
      if (numero == 'i' and EstadoLH == 0){
        digitalWrite(Luz_H,HIGH);
        lcd.setCursor(0,0);
        lcd.print("Luz de Habitacion");
        lcd.setCursor(0,1);
        lcd.print("Esta encendida");
        delay (2500);
        lcd.clear ();
        EstadoLH=1;
        }else{
          if (numero == 'i' and EstadoLH == 1){
            digitalWrite(Luz_H,LOW);
            lcd.setCursor(0,0);
            lcd.print("Luz de Habitacion");
            lcd.setCursor(0,1);
            lcd.print("Esta apagada");
            delay (2500);
            lcd.clear ();
            EstadoLH=0;
          }
        } 
        //Luz Lavadero##############
      if (numero=='j' and EstadoLL == 0){
        digitalWrite(Luz_L,HIGH);
        lcd.setCursor(0,0);
        lcd.print("Luz de Lavadero");
        lcd.setCursor(0,1);
        lcd.print("Esta encendida");
        delay (2500);
        lcd.clear ();
        EstadoLL=1;
        }else{
          if (numero=='j' and EstadoLL == 1){
            digitalWrite(Luz_L,LOW);
            lcd.setCursor(0,0);
            lcd.print("Luz de Lavadero");
            lcd.setCursor(0,1);
            lcd.print("Esta apagada");
            delay (2500);
            lcd.clear ();
            EstadoLL=0;
          }
        }
        if (numero == 'k'){
          TG = analogRead(SensorTG);
          TG = (5.0 * TG * 100)/1024.0;
          lcd.setCursor(0,0);
          lcd.print("Temperatura Garaje");
          lcd.setCursor(0,1);
          delay (2500);
          lcd.clear ();
          lcd.print(TG);
        }
        if (numero == 'l'){
          TC = analogRead(SensorTC);
          TC = (5.0 * TC * 100)/1024.0;
          lcd.setCursor(0,0);
          lcd.print("Temperatura Cocina");
          lcd.setCursor(0,1);
          delay (2500);
          lcd.clear ();
          lcd.print(TC);
        }
        if (numero == 'l'){
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
         }
         if (numero == 'm'){
          }if (TC>=27){
            digitalWrite(Ext,HIGH);
          }else{
            if(TC <27){
            digitalWrite(Ext,LOW);
            }
          }
          if(numero == 'n'){
            if(TG >= 27){
               digitalWrite(Ven,HIGH);
             }else{
               if(TG <27){
                 digitalWrite(Ven,LOW);
          }
          }
         }
         if(numero == 'o' and S_PP == 0 ){
             ServoD_P.write(a_PPA);
             delay(15);
             S_PP=1;}
           else{
            if(numero == 'o' and S_PP == 1 ){
               ServoD_P.write(a_PPC);
               delay(15);
               S_PP=0;
             }
           }
          if (numero == 'p' and S_PG == 0 ){
            if(S_PG==0){
              ServoD_G.write(a_PGA);}
              S_PG=1;
            }else{
              if(numero == 'p' and S_PG == 1 ){
              ServoD_G.write(a_PGC);
              S_PG=0;
              }
            }
    }
}
