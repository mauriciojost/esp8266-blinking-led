#include <Arduino.h>
#include <Pinout.h>

bool toggle = false;

void setup() {

  delay(2 * 1000);

  // Setup pins
  log(CLASS_MAIN, Debug, "Setup pins");
  pinMode(LEDR_PIN, OUTPUT);
  pinMode(LEDW_PIN, OUTPUT);
  pinMode(LEDY_PIN, OUTPUT);

  digitalWrite(LEDR_PIN, LOW);
  digitalWrite(LEDW_PIN, LOW);
  digitalWrite(LEDY_PIN, LOW);

  // Intialize the logging framework
  Serial.begin(115200);     // Initialize serial port
  Serial.setTimeout(10000); // Timeout for read

}

void loop() {

  toggle = !toggle;
  digitalWrite(LEDR_PIN, toggle);
  digitalWrite(LEDW_PIN, toggle);
  digitalWrite(LEDY_PIN, toggle);

  Serial.println("Now: %d", (int)toggle);

  delay(1 * 1000);
}

