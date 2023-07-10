# ESP-NOW Samples

This repository contains code samples for sending and receiving data using ESP-NOW, a communication protocol supported by Espressif's ESP8266 and ESP32 microcontrollers. The purpose of this repository is to provide a guide for new users on how to utilize ESP-NOW for their embedded projects.

## What is ESP-NOW?

ESP-NOW is a lightweight, peer-to-peer communication protocol designed for low-power devices such as ESP8266 and ESP32. It enables direct communication between ESP-NOW-enabled devices without the need for an access point or a central server. ESP-NOW operates at the data link layer of the OSI model and can be used for various IoT applications where devices need to exchange data efficiently.

ESP-NOW offers the following features:

    Low latency: ESP-NOW provides fast communication between devices, making it suitable for real-time applications.
    Low power consumption: The protocol is designed to be energy-efficient, ensuring extended battery life for battery-operated devices.
    Simple configuration: Setting up an ESP-NOW network is straightforward, requiring minimal configuration.
    Peer-to-peer communication: ESP-NOW allows devices to communicate directly with each other, enabling efficient data exchange without intermediate infrastructure.

Getting Started

To use the code samples provided in this repository, follow these steps:

    1) Ensure you have the necessary hardware:
        ESP8266 or ESP32 microcontroller boards.
        Development environment (e.g., Arduino IDE, PlatformIO) with the required board support.

    2) Clone this repository to your local machine using the following command:

      git clone https://github.com/DiegoArmstrong/ESP-NOW.git
    
    3) Open the sender or receiver directory, depending on your requirement, in your preferred development environment.

    4) Configure the code according to your specific requirements (e.g., Wi-Fi credentials, data format). (Note that the improved sender and receiver code should be able to automatically find MAC addresses)

    5) Upload the code to the respective ESP8266 or ESP32 devices.

    6) Monitor the serial output to observe the ESP-NOW communication process.

## Contributing

Contributions to this repository are welcome! If you have any improvements, bug fixes, or new code samples related to ESP-NOW, please feel free to submit a pull request.

## License

This repository is licensed under the MIT License. You are free to use, modify, and distribute the code samples as per the terms of this license.

## Acknowledgements

This repository is inspired by the official documentation and examples provided by Espressif for ESP-NOW.

