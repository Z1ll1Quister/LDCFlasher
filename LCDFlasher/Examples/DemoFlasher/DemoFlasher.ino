#include <Wire.h>
#include <modules.h>

void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
  lcd.setCursor(2, 1);
  lcd.print("Dept. Pub Works");
  flash("Flash Warning!", 3, 0);
  flash("Accident ahead!", 2, 3);
}
