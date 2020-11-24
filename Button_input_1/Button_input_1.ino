/*
  DigitalReadSerial

  Reads a digital input on pin 2, prints the result to the Serial Monitor

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/DigitalReadSerial
*/

#include <LCD_HD44780.h>

const int rs = 12, rw = 10, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LCD_HD44780 lcd(rs, rw, en, d4, d5, d6, d7);

// digital pin 0 has a pushbutton attached to it. Give it a name:
int pushButton = 0;

// the setup routine runs once when you press reset:
void setup() {
  // make the pushbutton's pin an input:
  pinMode(pushButton, INPUT);
  lcd.begin(20, 4);
  lcd.clear();
  lcd.setCursor(0, 0);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  int buttonState = digitalRead(pushButton);
  if (buttonState == 0) {
  (lcd.write(byte(0b01000001)));
  delay(300);
  }
}
