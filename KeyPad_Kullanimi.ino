#include <Keypad.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
const byte rows=4;//keypad tanımlaması 
const byte cols=3;
char Keys[rows][cols]={//keypad tanımı
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
  };
byte rowPins[rows]={4,3,2,1};
byte colPins[cols]={5,6,7};
int count=0;
Keypad customKeypad=Keypad(makeKeymap(Keys),rowPins,colPins,rows,cols);

void setup() {
lcd.begin(16,2);
}

void loop() {
char key=customKeypad.getKey();
if(key){
  lcd.print(key);
  }
}
