// Include necessary libraries
#include <LiquidCrystal.h>

// Define the analog pin for pH sensor
const int pH_pin = A0;

// Create an LCD object
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // Initialize the LCD
  lcd.begin(16, 2);

  // Initialize Serial communication
  Serial.begin(9600);
}

void loop() {
  // Read the analog value from pH sensor
  int sensorValue = analogRead(pH_pin);
  Serial.print("value: ");
Serial.println(sensorValue);
  // Convert the analog value to voltage
  float voltage = sensorValue * (5.0 / 1023.0);

  // Convert the voltage to pH value
  float pH = 7 - (voltage - 2.5);

  // Print the pH value to Serial monitor
    lcd.print("pH Value:");
  lcd.setCursor(0, 1);
  lcd.print(pH, 2); // Print pH value with 2 decimal places

  delay(1000); // Delay for stability
}