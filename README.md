Arduino Ultrasonic Distance Sensor with Buzzer and RGB LEDs
This project uses an ultrasonic distance sensor (HC-SR04), a buzzer, and RGB LEDs to create a proximity alert system. When an object comes within 20 cm of the sensor, the buzzer sounds, and the LEDs change color to indicate the proximity.

How It Works
Ultrasonic Distance Measurement:
The HC-SR04 sensor measures the distance of an object by sending out ultrasonic waves and calculating the time it takes for the echo to return.

Proximity Alert:

If the distance is less than or equal to 20 cm, the buzzer turns on, and the RGB LED glows red to signal a warning.
If the distance is greater than 20 cm, the buzzer turns off, and the RGB LED glows in a soft color (blue-green mix).
RGB LED Control:
The brightness and colors of the LEDs are controlled using the analogWrite function.

Components Used
HC-SR04 Ultrasonic Sensor: For distance measurement.
Buzzer: For sound alert.
RGB LED: To indicate proximity with different colors.
Arduino Board: To control the components.
Connections
Component	Arduino Pin
Trigger Pin	D12
Echo Pin	D11
Buzzer	D10
RGB LED (Red)	D6
RGB LED (Green)	D5
RGB LED (Blue)	D3
Code Overview
Libraries Used:

The SR04.h library is used to simplify the distance calculation for the ultrasonic sensor.
Setup:

Initializes the buzzer and RGB LED pins.
Sets the RGB LED to a dim initial color.
Loop:

Measures the distance using the ultrasonic sensor.
Turns on the buzzer and changes the LED to red if the distance is less than or equal to 20 cm.
Turns off the buzzer and resets the LED to a dim color if the object is farther away.
Usage
Upload the code to your Arduino.
Connect the components as per the wiring table.
Monitor the serial output to see the distance measurements in real-time.
Observe the buzzer and LED behavior based on the object's distance from the sensor.
Feel free to modify the code for your own projects! ;)
