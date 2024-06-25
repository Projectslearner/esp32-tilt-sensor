/*
   Project name: ESP32 Tilt Sensor
   Modified Date: 25-06-2024
   Code by: Projectslearner
   Website: https://projectslearner.com/learn/esp32-tilt-sensor
*/

// Define the pin connected to the tilt sensor
const int tiltSensorPin = 5; // Example GPIO pin 5 on ESP32

void setup() {
  Serial.begin(9600); // Initialize serial communication
  pinMode(tiltSensorPin, INPUT_PULLUP); // Set the tilt sensor pin as input with internal pull-up resistor
}

void loop() {
  // Read the state of the tilt sensor
  int tiltState = digitalRead(tiltSensorPin);

  // Print the tilt state to the Serial Monitor
  if (tiltState == LOW) {
    Serial.println("Tilt detected!");
  } else {
    Serial.println("No tilt detected.");
  }

  delay(500); // Delay before the next reading
}
