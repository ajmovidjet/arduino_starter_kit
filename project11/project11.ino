#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int switchPin = 6;
int switchState = 0;
int oldSwitchState = 0;
int reply;

void setup() {
  lcd.print("Ajmo vidjet'");
}

void loop() {
}
