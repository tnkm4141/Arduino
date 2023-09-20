//Flame  sensörü kullanımı
/*
//Ledli
int led=13;
//int buzzer=9;
int alevSensor=2;
void setup() {
pinMode(led,OUTPUT);
//pinMode(buzzer,OUTPUT);
pinMode(alevSensor,OUTPUT);
}
void loop() {
 int alinan_deger=digitalRead(alevSensor);
 if(alinan_deger==HIGH){
  digitalWrite(led,HIGH);
 // digitalWrite(buzzer,HIGH);
  }
  else{
    digitalWrite(led,LOW);
    //digitalWrite(buzzer,LOW);
    }
}*/

//LCD ile
#include <LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
#define FlamePin A0
void setup(){
  lcd.begin(16,2);
  pinMode(FlamePin,INPUT_PULLUP);
  }
  void loop(){
    int flame=digitalRead(FlamePin);
    if(flame==HIGH){
      lcd.setCursor(0,0);
      lcd.print("Flame Detected");
      delay(500);
      lcd.clear();
      }
      else{
      lcd.setCursor(0,0);
      lcd.print("Safe Mode");
      delay(500);
      lcd.clear();
        }
    }
