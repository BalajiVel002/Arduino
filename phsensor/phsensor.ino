#define sensorPin 12 // Analog input pin to which the pH sensor is connected

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
}

void loop() {
  // Read the analog value from the sensor
  int sensorValue = analogRead(sensorPin);

  // Convert the analog value to a voltage (assuming a reference voltage of 5V)
  float voltage = sensorValue * 5.0 / 1023.0;

  // Calculate the pH using a two-point calibration equation (replace these values with your own calibration values)
  float pH = 3.5 * voltage + 07.12;

  // Print the pH value to the serial monitor
  Serial.print("pH: ");
  Serial.println(pH);

  // Delay for 1 second
  delay(1000);
}