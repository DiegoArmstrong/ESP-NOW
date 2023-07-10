#include <Arduino.h>
#include <esp_now.h>
#include <WiFi.h>

// Define the message handler function
void OnDataRecv(const uint8_t *mac_addr, const uint8_t *data, int len) {
  Serial.print("Received message from ");
  Serial.print(mac_addr[0], HEX);
  Serial.print(":");
  Serial.println(mac_addr[5], HEX);
  Serial.print("Message: ");
  Serial.println((char*)data);
}

void setup() {
  Serial.begin(115200);

  // Initialize ESP-NOW
  if (esp_now_init() != ESP_OK) {
    Serial.println("Error initializing ESP-NOW");
    return;
  }

  // Register the message handler function
  esp_now_register_recv_cb(OnDataRecv);
}

void loop() {
  // Your code here
}