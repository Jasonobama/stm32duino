#include <dht.h>
#include <LiquidCrystal_I2C.h>
#include <Wire.h> 
LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 and 0x3F for a 16 chars and 2 line display

dht DHT;//create a variable type of dht

const int DHT11_PIN= PA3 ;//Humiture sensor attach to pin7

void setup()
{
  Serial.begin(9600);//initialize the serial
  lcd.begin();  //initialize the lcd
  lcd.backlight();  //open the backlight 
}

void loop()
{
D: int chk = DHT.read11(DHT11_PIN);//read the value returned from sensor
  // DISPLAY DATA
  lcd.setCursor(0, 0);
  lcd.print("Tem:");
  lcd.print(DHT.temperature,1); //print the temperature on lcd 
  lcd.print(char(223));//print the unit" ℃ "
  lcd.print("C");
  lcd.setCursor(0, 1);
  lcd.print("Hum:");
  lcd.print(DHT.humidity,1); //print the humidity on lcd
  lcd.print(" %"); 
  delay(200); //wait a while 
}