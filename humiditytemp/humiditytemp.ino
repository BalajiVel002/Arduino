#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(9600);

  // Initialize the LCD
  lcd.begin();
  
  // Turn on the backlight
  lcd.backlight();

  // Clear the LCD screen
  lcd.clear();

  // Print a welcome message
  lcd.setCursor(0, 0); // Set cursor to first row, first column
  lcd.print("Welcome");

  // Delay to display the welcome message
  delay(2000);
}

void loop() {
  // Clear the LCD screen
  lcd.clear();

  // Print "Apoorvan" on the first line
  lcd.setCursor(0, 0);
  lcd.print("Apoorvan");

  // Delay for 1 second
  delay(1000);

  // Clear the LCD screen again
  lcd.clear();

  // Print "Gaming" on the second li…
}
