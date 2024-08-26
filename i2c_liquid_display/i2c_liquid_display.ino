#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  // Initialize the LCD
  lcd.init();
  
  // Turn on the backlight
  lcd.backlight();
  
  // Print a message to the LCD
  lcd.setCursor(0, 0); // Set cursor to first column, first row
  lcd.print("Hello, World!");
}

void loop() {
  // Scroll the text to the right
  for (int positionCounter = 0; positionCounter < 16; positionCounter++) {
    lcd.scrollDisplayRight(); // Scroll one position to the right
    delay(500); // Delay for visibility
  }
  
  // Scroll the text to the left
  for (int positionCounter = 0; positionCounter < 16; positionCounter++) {
    lcd.scrollDisplayLeft(); // Scroll one position to the left
    delay(500); // Delay for visibility
  }
}
