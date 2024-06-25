# ESP32 Tilt Sensor Project

### Project Overview
The ESP32 Tilt Sensor project demonstrates how to interface a tilt sensor with an ESP32 microcontroller to detect changes in orientation (tilt). The tilt sensor used in this project can be a simple tilt switch that changes state when tilted beyond a certain angle.

### Components Needed
- **ESP32 Microcontroller**: Controls and processes sensor data.
- **Tilt Sensor**: Detects tilt or inclination changes.
- **Jumper Wires**: Connects the tilt sensor to the ESP32.
- **Breadboard**: Optional, for organizing circuit connections.

### Circuit Setup
1. **Connecting the Tilt Sensor to ESP32:**
   - **Digital Input**: Connect the output pin of the tilt sensor to any GPIO pin on the ESP32 (e.g., GPIO 5).
   - **Pull-up Resistor**: Use `pinMode(tiltSensorPin, INPUT_PULLUP)` to enable the internal pull-up resistor on the GPIO pin connected to the tilt sensor.

### Instructions
1. **Setup:**
   - Initialize Serial communication using `Serial.begin(9600)` for debugging purposes.
   - Configure the tilt sensor pin as input with internal pull-up resistor using `pinMode(tiltSensorPin, INPUT_PULLUP)`.

2. **Operation:**
   - **Reading Tilt State:**
     - Use `digitalRead(tiltSensorPin)` to read the state of the tilt sensor (HIGH or LOW).
     - Print the tilt state to the Serial Monitor based on the sensor reading.

3. **Output:**
   - Display "Tilt detected!" if the tilt sensor detects a tilt (LOW state).
   - Display "No tilt detected." if the tilt sensor is not tilted (HIGH state).

4. **Considerations:**
   - **Sensor Positioning:** Ensure the tilt sensor is positioned correctly to detect the desired tilt angle.
   - **Sensor Sensitivity:** Adjust the sensor or circuit sensitivity if needed for specific tilt detection requirements.
   - **Debouncing:** Add debouncing techniques if the sensor output is unstable due to mechanical vibrations.

### Applications
- **Orientation Detection:** Monitor tilt or inclination of objects or surfaces.
- **Alarm Systems:** Trigger alarms or notifications based on tilt events.
- **Robotics:** Detect orientation changes in robotic applications.

### Useful Links
🌐 [ProjectsLearner - ESP32 Tilt Sensor](https://projectslearner.com/learn/esp32-tilt-sensor)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner
