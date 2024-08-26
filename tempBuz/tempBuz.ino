#include <OneWire.h>
#include <DallasTemperature.h>
#include <LiquidCrystal.h>

#define ONE_WIRE_BUS 2 // Pin where the DS18B20 is connected
#define LCD_RS 8
#define LCD_EN 9
#define LCD_D4 4
#define LCD_D5 5
#define LCD_D6 6
#define LCD_D7 7
#define LCD_COLUMNS 16
#define LCD_ROWS 2
#define BUZ 3

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);
LiquidCrystal lcd(LCD_RS, LCD_EN, LCD_D4, LCD_D5, LCD_D6, LCD_D7);

void setup() {
  lcd.begin(LCD_COLUMNS, LCD_ROWS);
  sensors.begin();
  pinMode(BUZ,OUTPUT);
}

void loop() {
  sensors.requestTemperatures(); // Request temperature readings
  float temperatureC = sensors.getTempCByIndex(0); // Read temperature in Celsius
  lcd.setCursor(0, 0);
  lcd.print("Temperature:");
  lcd.setCursor(0, 1);
  lcd.print(temperatureC);
  lcd.print(" C");
  if(temperatureC<=27)
  {
     digitalWrite(BUZ,HIGH);
  }
  else{
    digitalWrite(BUZ,LOW);
  }   
  delay(1000); // Update every second
}
