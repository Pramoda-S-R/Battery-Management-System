# BMS
The repository includes - Circuit diagrams, Code for the hardware used (Arduino and ESP8266 module), Features and Specifications.

# Requirements
1. BQ76925 IC
2. Arduino UNO R3
3. NODEMCU ESP8266
4. Blynk Account
5. 3 - Li-Ion Batteries
6. 5V Power Supply
7. Resistors - (values placeholder)
8. Capacitors - (values placeholder)

# Links
[BQ76925](https://www.ti.com/product/BQ76925)
[Arduino UNO R3](https://docs.arduino.cc/hardware/uno-rev3)
[ESp8266](https://www.make-it.ca/nodemcu-details-specifications/)
[Blynk](https://blynk.io/)

# ESP8266.h
'''
WiFi.reset			// Hardware or software reset for HSP8266 module.
WiFi.begin			// Begin WIFI connection and transmission.
WiFi.end			// End WIFI connection.
WiFi.config			// Configure connection mode and multi connection.
WiFi.join			// Connect to the WiFi access point for the station.
WiFi.disconnect		// Disconnect from the WiFi access point.
WiFi.isConnect		// Inquire the connection establishment status with specified the access point.
WiFi.ip				// Get IP address and report resulted IP address string.
WiFi.status			// Inquire the current WiFi connection status.
WiFi.setup			// Setup access connection topology.
WiFi.connect		// Start the IP connection for client side.
WiFi.server			// Start the IP connection for server side with passive SYN.
WiFi.close			// Close the IP connection.
WiFi.send			// Sending data along with making a connection establishment.
WiFi.receive		// Start listening, and then stores the received data to the buffer.
WiFi.listen			// Starts the listening, and returns data length necessary for receiving.
WiFi.available		// Get the number of bytes available for reading from ESP8266. 
WiFi.read			// Return a character that was received from ESP8266.
'''

