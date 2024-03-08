#include<LiquidCrystal.h>
LiquidCrystal lcd(3,4,5,6,7,8);
int ldr =A0 ;
int ldr2 =A1 ;
int ldr2_deger;
int ldr_deger;
int buzzer = 2;
void setup() 
{ 
lcd.begin(16,2);
pinMode(buzzer,OUTPUT);
pinMode(ldr2,INPUT);
pinMode(ldr,INPUT);
Serial.begin(9600);
}
double i = 0;
double a = millis();
double c ;
void loop() 
{
lcd.setCursor(0,0);
lcd.print("CIKIS BEKLENIYOR");  
ldr2_deger =analogRead(ldr2);
Serial.println(ldr2_deger);
if(ldr2_deger>750)
{
digitalWrite(buzzer,HIGH);
delay(100);
digitalWrite(buzzer,LOW);
lcd.clear();
a = millis();
while(true)
{
c = millis();
i = (c - a) / 1000;
lcd.print(i);
lcd.setCursor(10,0);
lcd.print("Saniye");
lcd.setCursor(0,0);
ldr_deger =analogRead(ldr);
Serial.println(ldr_deger);
if(ldr_deger >750)
break;
} 
if(ldr_deger >750)
{
digitalWrite(buzzer,HIGH);
delay(100);
digitalWrite(buzzer,LOW);
while(ldr_deger >750)
{
lcd.setCursor(0,0);
lcd.print(i);
lcd.setCursor(10,0);
lcd.print("Saniye");
lcd.setCursor(0,0);       
}   
}
}
}
