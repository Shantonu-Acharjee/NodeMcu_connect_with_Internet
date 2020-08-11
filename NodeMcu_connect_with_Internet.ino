/*
 * Lcd SCL ---> D3
 * Lcd SDA ---. D4
 */

#include<ESP8266WiFi.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F, 16, 2);
const char* ssid = "If You Connect You Will Be Hack";
const char* pass = "ilovereya";

void setup(){
  Serial.begin(9600);
  WiFi.begin(ssid,pass);
  Serial.print("Connecting...");
  Wire.begin(2,0);
  lcd.init();   // initializing the LCD
  lcd.backlight(); // Enable or Turn On the backlight 
}

void loop(){
   lcd.setCursor(0,0); 
   lcd.print(ssid); // Start Printing
  
}
