#include <LCD_HD44780.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;

byte softBig[7] = {
  0b10000,
  0b10000,
  0b10000,
  0b11100,
  0b10010,
  0b10010,
  0b11100
};

const int LCD_RS = 12, LCD_RW = 10, LCD_EN = 11, LCD_D4 = 5, LCD_D5 = 4, LCD_D6 = 3, LCD_D7 = 2;

LCD_HD44780 lcd(LCD_RS, LCD_RW, LCD_EN, LCD_D4, LCD_D5, LCD_D6, LCD_D7);

void setup()
{
  lcd.begin(20,4);
  lcd.createChar(0, softBig);
  lcd.clear();
  lcd.write(byte(0x41));
  lcd.write(byte(0xa0));
  lcd.write(byte(0x42));
  lcd.write(byte(0xa1));
  lcd.write(byte(0xe0));
  lcd.write(byte(0x45));
  lcd.write(byte(0xa2));
  lcd.write(byte(0xa3));
  lcd.write(byte(0xa4));
  lcd.write(byte(0xa5));
  lcd.write(byte(0xa6));
  lcd.write(byte(0x4b));
  lcd.write(byte(0xa7));
  lcd.write(byte(0x4d));
  lcd.write(byte(0x48));
  lcd.write(byte(0x4f));
  lcd.write(byte(0xa8));
  lcd.write(byte(0x50));
  lcd.write(byte(0x43));
  lcd.write(byte(0x54));
  lcd.write(byte(0xa9));
  lcd.write(byte(0xaa));
  lcd.write(byte(0x58));
  lcd.write(byte(0xe1));
  lcd.write(byte(0xab));
  lcd.write(byte(0xac));
  lcd.write(byte(0xe2));
  lcd.write(byte(0xad));
  lcd.write(byte(0xae));
  lcd.write(byte(0));
  lcd.write(byte(0xaf));
  lcd.write(byte(0xb0));
  lcd.write(byte(0xb1));
}
  
void loop() {
  delay(600);
}  
  
