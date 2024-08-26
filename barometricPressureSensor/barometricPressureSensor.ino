#include <Wire.h>
#include <Adafruit_BMP085.h>

Adafruit_BMP085 bmp;

void setup() {
  Serial.begin(9600);
  Serial.println(F("BMP180 test"));

  if (!bmp.begin()) {
    Serial.println(F("Could not find a valid BMP180 sensor, check wiring!"));
    while (1);
  }
}

void loop() {
  float temperature;
  float pressure;

  temperature = bmp.readTemperature();
  pressure = bmp.readPressure() / 100.0F; // Convert Pa to hPa

  Serial.print(F("Temperature = "));
  Serial.print(temperature);
  Serial.println(" *C");

  Serial.print(F("Pressure = "));
  Serial.print(pressure);
  Serial.println(" hPa");

  delay(2000);
}
