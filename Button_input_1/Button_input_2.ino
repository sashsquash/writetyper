/*
  This is example code.

  https://github.com/sashsquash/writetyper/edit/main/Button_input_1.ino
*/

#include <LCD_HD44780.h>

const int rs = 12, rw = 10, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LCD_HD44780 lcd(rs, rw, en, d4, d5, d6, d7);

// digital pin 0 has a pushbutton attached to it. Give it a name:
int pushButtonA = 7;
int pushButtonB = 6;

// the setup routine runs once when you press reset:
void setup() {
  // make the pushbutton's pin an input:
  pinMode(pushButtonA, INPUT);
  pinMode(pushButtonB, INPUT);
  lcd.begin(20, 4);
  lcd.clear();
  lcd.setCursor(0, 0);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the first input pin:
  int buttonStateA = digitalRead(pushButtonA);
  if (buttonStateA == 1) {
    (lcd.write(byte(0b01000001)));
  delay(300);
  }

  // read the second input pin:
  int buttonStateB = digitalRead(pushButtonB);
  if (buttonStateB == 1) {
    (lcd.write(byte(0b01000010)));
  delay(300);
  }
}
