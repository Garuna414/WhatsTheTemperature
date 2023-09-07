# WhatsTheTemperature

This Arduino project allows you to read sensor data (humidity and temperature) from a DHT sensor and display it on a local website served by the Arduino. The project consists of Arduino code to read the sensor data and a simple HTML/JavaScript frontend for displaying the data in real-time.

## Hardware Requirements

- Arduino board (e.g., Arduino Uno)
- Ethernet shield (for the web server) or Wi-Fi module (e.g., ESP8266/ESP32)
- DHT sensor (e.g., DHT22)
- Appropriate wiring and power supply

## Installation and Setup

1. **Arduino Code**: Upload the Arduino code (`arduino_sensor_data_display.ino`) to your Arduino board. Make sure to install the required libraries (e.g., DHT sensor library) using the Arduino Library Manager.

2. **Configure Network**: Adjust the network configuration (IP address, MAC address, etc.) in the Arduino code to match your local network settings.

3. **Hardware Connection**: Connect the DHT sensor to the Arduino as per your hardware setup.

## Usage

1. Connect your Arduino to your local network.

2. Open the Arduino Serial Monitor to view the IP address assigned to the Arduino.

3. Open a web browser and enter the Arduino's IP address. You should see a webpage displaying the sensor data (humidity and temperature) in real-time.

## File Structure

- `arduino_sensor_data_display.ino`: Arduino code for reading sensor data and serving a web page.
- `index.html`: HTML file for the local website displaying the sensor data.
- `README.md`: This README file.

## Dependencies

- Arduino IDE (https://www.arduino.cc/en/software)
- DHT sensor library (for the DHT22 sensor)
- Appropriate Ethernet or Wi-Fi libraries for network communication (e.g., Ethernet.h or ESP8266WiFi.h)

## Contributing

If you'd like to contribute to this project, please open an issue or create a pull request with your improvements.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Acknowledgments

- This project was inspired by [Arduino official documentation](https://www.arduino.cc/en/Tutorial/BasicWebServer) on creating a basic web server.

## Contact

For questions or feedback, please contact [Your Name](mailto:your.email@example.com).

