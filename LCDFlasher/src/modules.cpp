#include <Arduino.h>
#include "modules.h"
#define DLAY 1000
LiquidCrystal_I2C lcd(0x27, COLS, ROWS);

// Print blank spaces to clear characters at current cursor
void printSpaces(int numSpaces)
{
    for (int i = 0; i < numSpaces; i++)
    {
        lcd.print(" ");
    }
}

// Flash a line of text at a specific (row, column)
void flash(const char *text, int lcdrow, int lcdcol)
{
    lcd.setCursor(lcdrow, lcdcol);
    lcd.print(text);
    delay(DLAY);
    lcd.setCursor(lcdrow, lcdcol);
    printSpaces(strlen(text));
    delay(DLAY);
}
