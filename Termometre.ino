
#include <LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
#define TempPin A0
void setup() {
lcd.begin(16,2);
  pinMode(TempPin,INPUT_PULLUP);
}

void loop() {
  int TempValue = analogRead(TempPin); // Getting LM35 value and saving it in variable // Sıcaklık sensöründen bir okuma alın:
  float TempCel =  TempValue*(5000/1024.0)   ; //(TempValue/1023.0)*5000; // Getting the celsius value from 10 bit analog value  // Okumayı voltaja dönüştürün:
  float Temp=TempCel/10.0; // Voltajı Santigrat derece cinsinden sıcaklığa dönüştürün:
 /* lcd.print(Temp);
  lcd.setCursor(2,1);
  lcd.println("C");*/

  delay(1000); // wait a second between readings
      lcd.clear();
     if(Temp>30){
   lcd.print("DIKKAT !!");
      lcd.setCursor(2,1);
      lcd.print("SICAKLIK YUKSELDI !!");
       // digitalWrite(buzzer,HIGH);
      delay(1000);
      lcd.clear();
        //digitalWrite(buzzer,LOW);
  
  }
  if(Temp<20){
   lcd.print("DIKKAT !!");
      lcd.setCursor(2,1);
      lcd.print("SICAKLIK DUSTU !!");
       // digitalWrite(buzzer,HIGH);
      delay(1000);
      lcd.clear();
        //digitalWrite(buzzer,LOW);
  
  }
}
