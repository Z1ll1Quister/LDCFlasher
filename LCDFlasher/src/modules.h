#ifndef MODULES_H
#define MODULES_H

#include <LiquidCrystal_I2C.h>

#define COLS 20
#define ROWS 4
#define DLAY 1000

extern LiquidCrystal_I2C lcd;

void printSpaces(int numSpaces);
void flash(const char *text, int lcdrow, int lcdcol);

#endif
