#include <Arduino.h>
#include <Pinout.h>

bool toggle = false;

void setup() {

  delay(2 * 1000);

  // Setup pins
  pinMode(LEDR_PIN, OUTPUT);
  pinMode(LEDW_PIN, OUTPUT);
  pinMode(LEDY_PIN, OUTPUT);

  digitalWrite(LEDR_PIN, LOW);
  digitalWrite(LEDW_PIN, LOW);
  digitalWrite(LEDY_PIN, LOW);

  Serial.begin(115200);     // Initialize serial port

}

void loop() {

  toggle = !toggle;

  Serial.printf("Now: %d\n", (int)toggle);
  digitalWrite(LEDR_PIN, toggle);
  digitalWrite(LEDW_PIN, toggle);
  digitalWrite(LEDY_PIN, toggle);

  delay(1 * 1000);
}

