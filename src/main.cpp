#include <Arduino.h>

// Define pins
#define IR_SENSOR_PIN 13 
#define LED_PIN 25     

void setup() {
  pinMode(IR_SENSOR_PIN, INPUT);  
  pinMode(LED_PIN, OUTPUT);       
  Serial.begin(115200);      
}

void loop() {
  int irState = digitalRead(IR_SENSOR_PIN); 

  if (irState == HIGH) {
    digitalWrite(LED_PIN, LOW);  
    Serial.println("No obstacle detected");
  } else {
    digitalWrite(LED_PIN, HIGH);
    Serial.println("Obstacle detected");
  }

  delay(100);
}




