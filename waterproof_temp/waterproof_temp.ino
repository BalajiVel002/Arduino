// Pin number to which the LED is connected
const int ledPin = 2; // For example, use GPIO 2

void setup() {
  // Set the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Turn the LED on (HIGH)
  digitalWrite(ledPin, HIGH);
  delay(1000); // Wait for 1 second

  // Turn the LED off (LOW)
  digitalWrite(ledPin, LOW);
  delay(1000); // Wait for 1 second
}
