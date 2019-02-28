#ifndef PINOUT_INC
#define PINOUT_INC

// NODEMCU based on ESP8266

#define GPIO0_PIN 0
#define GPIO1_PIN 1
#define GPIO2_PIN 2
#define GPIO3_PIN 3
#define GPIO4_PIN 4
#define GPIO5_PIN 5
#define GPIO6_PIN 6
#define GPIO7_PIN 7
#define GPIO8_PIN 8
#define GPIO9_PIN 9
#define GPIO10_PIN 10
#define GPIO11_PIN 11
#define GPIO12_PIN 12
#define GPIO13_PIN 13
#define GPIO14_PIN 14
#define GPIO15_PIN 15
#define GPIO16_PIN 16
#define A0_PIN 17

// NODEMCU based on ESP8266 (human names)

#define PIN_D0 GPIO16_PIN // working as OUTPUT, breaks deep sleep mode, NODE-MCU built-in !LED
#define PIN_D1 GPIO5_PIN
#define PIN_D2 GPIO4_PIN
#define PIN_D3 GPIO0_PIN  // working as OUTPUT
#define PIN_D4 GPIO2_PIN  // working as OUTPUT, ESP8266-12 built-in !LED
#define PIN_D5 GPIO14_PIN // working as OUTPUT
#define PIN_D6 GPIO12_PIN
#define PIN_D7 GPIO13_PIN  // RXD2
#define PIN_D8 GPIO15_PIN  // TXD2, working as OUTPUT
#define PIN_D9 GPIO3_PIN   // RXDO,  if used will break serial communication (uC <- PC), working as OUTPUT
#define PIN_D10 GPIO1_PIN  // TXDO, if used will break serial communication (uC -> PC), can work as OUTPUT
#define PIN_D11 GPIO9_PIN  // SDD2 / SD2 // cannot be used at all, internal
#define PIN_D12 GPIO10_PIN // SDD3 / SD3 // can be used as input only

// LEDS

#ifdef DEEP_SLEEP_MODE_ENABLED // cant use D0 in DEEP SLEEP as it is wired to RESET
#define LEDY_PIN PIN_D3        // YELLOW LED // 1 off, 0 on
#else                          // DEEP_SLEEP_MODE_ENABLED
#ifndef LEDY_PIN
#define LEDY_PIN PIN_D0 // YELLOW LED // 1 off, 0 on
#endif                  // LEDY_PIN
#endif                  // DEEP_SLEEP_MODE_ENABLED

// I2C OLED 128x64
// (Kuman 0.96inches I2C OLED 128x64 LCD screen)
#define LCD_SCL_PIN PIN_D1 // cannot be changed! (fixed in the library used)
#define LCD_SDA_PIN PIN_D2 // same as above

// LEDS
#ifndef LEDW_PIN        // 1 off, 0 on
#define LEDW_PIN PIN_D3 // WHITE LED
#endif                  // LEDW_PIN
#ifndef LEDR_PIN        // 1 off, 0 on
#define LEDR_PIN PIN_D4 // RED LED
#endif                  // LEDR_PIN

// FAN
#define FAN_PIN PIN_D6 // 0 off, 1 on

// SERVOS
#define SERVO0_PIN PIN_D7
#define SERVO1_PIN PIN_D8

// BUTTON
#define BUTTON0_PIN PIN_D5

#endif // PINOUT_INC
