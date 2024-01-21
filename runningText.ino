#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.backlight();
}

void loop() {
  // put your main code here, to run repeatedly:
  int i;  
  lcd.setCursor(0, 0);
  lcd.print("F Projects, Test Running Text");
  for (i = 0 ; i < 16; i++)
  {
    lcd.scrollDisplayLeft();
    delay(250);
  }
}
