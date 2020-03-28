//Practica #3
//LCD

#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

byte o[7] = {B00010, B00100, B00000, B01110, B10001, B10001, B01110};

void setup() {
  lcd.begin(16, 2);
  lcd.createChar(0, o);
  /*lcd.setCursor(0, 0);
  lcd.print("sentao");
  lcd.write(byte(0));
  lcd.print("ayuda");*/

}

void loop() {
  
  for (int positionCounter = 0; positionCounter < 20; positionCounter++) {
    lcd.setCursor(positionCounter - 20, 0);
    lcd.print("Universidad Aut");
    lcd.write(byte(0));
    lcd.print("noma");
    lcd.setCursor((10 - positionCounter), 1);
    lcd.print("de Baja California");
    delay(150);
    lcd.clear();
  }
  
}
