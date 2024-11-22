
// 06/11/2024
//  Arduino Code
#include "SR04.h"
#define TRIG_PIN 12
#define ECHO_PIN 11
#define BUZZER_PIN 10  // We connected the buzzer to digital pin 10 of Arduino

#define BLUE 3
#define GREEN 5
#define RED 6

SR04 sr04 = SR04(ECHO_PIN, TRIG_PIN);
long a;

void setup() {
   Serial.begin(9600);
   pinMode(BUZZER_PIN, OUTPUT);
   pinMode(RED, OUTPUT);
   pinMode(GREEN, OUTPUT);
   pinMode(BLUE, OUTPUT);
   analogWrite(RED, 30);
   analogWrite(GREEN, 50);
   analogWrite(BLUE, 80); // LEDs are initially lit with low brightness
   delay(1000);
}

void loop() {
   a = sr04.Distance();
   Serial.print(a);
   Serial.println("cm");

   if (a <= 20) {  // If the distance is 20 cm or less
      digitalWrite(BUZZER_PIN, HIGH);  // Run the buzzer continuously
      analogWrite(RED, 255);  // Turn on the red LED with full brightness when approaching
      analogWrite(GREEN, 0);
      analogWrite(BLUE, 0);
   } else {
      digitalWrite(BUZZER_PIN, LOW);  // Close the buzzer
      analogWrite(RED, 30);  // When the object moves away, turn on the LEDs with low brightness
      analogWrite(GREEN, 50);
      analogWrite(BLUE, 80);
   }

   delay(100);  // Loop time (kept low for near real-time response)
}
