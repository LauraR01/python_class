#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2); //tipo de pantalla a conectar
  lcd.home(); //inicializar cursos en la posicion 0x0
  lcd.print("bienvenidos"); //imprimir mensaje de bienvenida
  lcd.setCursor(0,1); //seteamos el cursor en la siguiente linea
  lcd.print("python Class"); //imprimir mensaje nuevo 
  delay(1000); //asignamos tiempo de espera
}

void loop() {
  // put your main code here, to run repeatedly:
  int i; //desplazar texto hacia la derecha
  for(int i=0; i <5; i++){
    lcd.scrollDisplayRight();
    delay(1000);
  }
  //
}
