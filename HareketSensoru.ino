//#include <LiquidCrystal.h>
//LiquidCrystal lcd(13,12,11,10,9,8);
//#define PirPin 1
int sensor=8;
int tetik=7;
boolean sensorValue=0;
void setup() {
/*lcd.begin(16,2);
pinMode(PirPin,INPUT_PULLUP);*/
Serial.begin(9600);
pinMode(sensor,INPUT);
pinMode(tetik,OUTPUT);
Serial.println("started..");
delay(10);
}

void loop() {
 sensorValue=digitalRead(sensor);
      //lcd.setCursor(0,0);
      //lcd.print("Giris");
      Serial.println("Sensor Value="+String(sensorValue));
      delay(100);
 /*if(pirState==HIGH){
      lcd.setCursor(0,1);
      lcd.print("Hareket VAR!!");
      delay(500);
      lcd.clear();
      }
      else{
      lcd.setCursor(0,0);
      lcd.print("Safe Mode");
      delay(500);
      lcd.clear();
        }*/
        if(sensorValue==1){
           digitalWrite(tetik,HIGH);
          }
          else{
            digitalWrite(tetik,LOW);
            }
}
