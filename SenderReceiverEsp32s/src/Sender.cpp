#include <Arduino.h>
#include <esp_now.h>
#include <WiFi.h>

// Replace with the MAC address of the receiver ESP32
uint8_t receiverMacAddress[] = {0xF4, 0x12, 0xFA, 0xF9, 0xB0, 0x00};

void setup() {
  Serial.begin(115200);

  // Initialize ESP-NOW
  if (esp_now_init() != ESP_OK) { // checks if initialization was successful, returns ESP_OK if it is
    Serial.println("Error initializing ESP-NOW");
    return;
  }

  // Register the receiver ESP32's MAC address
  esp_now_peer_info_t peerInfo; // Creates a struct called peerInfo, holds info about peer that we want to connect to
  memcpy(peerInfo.peer_addr, receiverMacAddress, 6); // copies mac address of receiver to the peer_adr member of the peerInfo Structure
  peerInfo.channel = 0; // sets communication channel, ESP-NOW supports three channels, 0,1,2
  peerInfo.encrypt = false; // no encryption to be used for communication
  if (esp_now_add_peer(&peerInfo) != ESP_OK) { // checks if there were any issues registering the peer
    Serial.println("Error registering peer");
    return;
  }
}

void loop() {
  // Send a message to the receiver ESP32
  char message[] = "Hello, world!";
  esp_err_t result = esp_now_send(receiverMacAddress, (uint8_t*) message, sizeof(message));
  if (result == ESP_OK) {
    Serial.println("Message sent successfully");
  } else {
    Serial.println("Error sending message");
  }

  delay(1000);
}