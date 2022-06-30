#include <Keypad.h>
#include<LiquidCrystal.h>
const int rs = A0, en = A1, d4 = A2, d5 = A3, d6 = A4,d7 = A5;
const byte ROWS = 4;
const byte COLS= 4;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'},
};
byte rowPins[ROWS] = {9,8,7,6};
byte colPins[COLS] = {5,4,3,2};
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS);
void setup() {
  lcd.begin(16, 2);
  lcd.print("SVECW");

}

void loop() {
  char key = keypad.getKey();
  if (key){
    lcd.setCursor(0,1);
    lcd.print(key);
    
  }
}
