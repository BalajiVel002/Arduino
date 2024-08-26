int LED = 9;          // LED connected to pin 9
int BUZZER = 10;       // Buzzer connected to pin 10
int ALCOHOL_sensor = A0; // MQ-3 SENSOR connected to analog pin A0
int analogValue;       // Variable to store the analog reading from the sensor

void setup()  
{  
  Serial.begin(9600);  
  pinMode(LED, OUTPUT);  
  pinMode(BUZZER, OUTPUT);  
  pinMode(ALCOHOL_sensor, INPUT);  
}  

void loop()  
{  
  analogValue = analogRead(ALCOHOL_sensor);  
  Serial.print("Analog value: ");
  Serial.println(analogValue);  

  if (analogValue > 400)  // You can adjust this threshold based on your sensor's behavior
  {  
    Serial.println("ALCOHOL detected...");  
    digitalWrite(LED, HIGH);  
    digitalWrite(BUZZER, HIGH);  
  }  
  else  
  {  
    Serial.println("No ALCOHOL detected.");  
    digitalWrite(LED, LOW);  
    digitalWrite(BUZZER, LOW);  
  }  

  delay(1000);  // Adjust the delay as needed
}
