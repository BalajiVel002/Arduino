// Define the pins for the components
#define RELAY_PIN 2        // Pin connected to the relay
#define MOTOR_PIN 3        // Pin connected to the motor
#define MOISTURE_PIN A0    // Pin connected to the moisture sensor

// Define the threshold value for moisture detection
const int MOISTURE_THRESHOLD = 500;  // Adjust this value according to your sensor readings

void setup() {
  pinMode(RELAY_PIN, OUTPUT);      // Set relay pin as output
  pinMode(MOTOR_PIN, OUTPUT);      // Set motor pin as output
  pinMode(MOISTURE_PIN, INPUT);    // Set moisture sensor pin as input
}

void loop() {
  int moistureValue = analogRead(MOISTURE_PIN);  // Read moisture sensor value

  // Check if moisture level is above the threshold
  if (moistureValue > MOISTURE_THRESHOLD) {
    // Turn on the motor via the relay
    digitalWrite(RELAY_PIN, HIGH);   // Turn on relay
    digitalWrite(MOTOR_PIN, HIGH);   // Turn on motor
  } else {
    // Turn off the motor via the relay
    digitalWrite(RELAY_PIN, LOW);   // Turn off relay
    digitalWrite(MOTOR_PIN, LOW);   // Turn off motor
  }

  // Add a delay to avoid rapid reading
  delay(1000);  // 1 second delay
}
