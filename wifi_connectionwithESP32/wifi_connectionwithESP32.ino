#include <WiFi.h>

const char* ssid = "ESP32_GO"; // Group Owner's SSID
const char* password = "password"; // Group Owner's password

void setup() {
  Serial.begin(115200);
  
  // Set up Wi-Fi access point (AP)
  WiFi.softAP(ssid, password);
  
  Serial.println("Wi-Fi Direct Group Owner (GO) ready");
}

void loop() {
  // Check if any clients are connected
  if (WiFi.softAPgetStationNum() > 0) {
    Serial.println("Client connected to GO");
  }
  else {
    Serial.println("No clients connected to GO");
  }
  
  delay(1000);
}
