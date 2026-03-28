#pragma once

#include <stdint.h>

// -----------------------------
// Core Arduino Definitions
// -----------------------------

#define USB_VID 0x303A
#define USB_PID 0x1001

// #define EXTERNAL_NUM_INTERRUPTS 22
// #define NUM_DIGITAL_PINS        22
// #define NUM_ANALOG_INPUTS       5

#define EXTERNAL_NUM_INTERRUPTS 10
#define NUM_DIGITAL_PINS        10
#define NUM_ANALOG_INPUTS       5

// -----------------------------
// Serial Interfaces
// -----------------------------

#define TX 21
#define RX 20

#define SDA 5
#define SCL 4

// -----------------------------
// RGB LED (WS2020C)
// -----------------------------

#define PIN_RGB_LED     10
#define RGB_BUILTIN     PIN_RGB_LED

// -----------------------------
// Built-in LED fallback
// -----------------------------

#ifndef LED_BUILTIN
#define LED_BUILTIN PIN_RGB_LED
#endif

// -----------------------------
// Analog pins
// ESP32-C3 ADC1 channels
// -----------------------------

static const uint8_t A0 = 0;
static const uint8_t A1 = 1;
static const uint8_t A2 = 2;
static const uint8_t A3 = 3;
static const uint8_t A4 = 4;

// -----------------------------
// Digital Pin Map (Logical Order)
// -----------------------------

// E-SPIN GPIO numbering from docs/pin.md
// E-SPIN GPIO 1..9 map directly to ESP GPIO 0..9 (with GPIO2 tied to BAT read).
static const uint8_t D1 = 0;
static const uint8_t D2 = 1;
static const uint8_t D3 = 3;
static const uint8_t D4 = 4;
static const uint8_t D5 = 5;
static const uint8_t D6 = 6;
static const uint8_t D7 = 7;
static const uint8_t D8 = 8;
static const uint8_t D9 = 9;

// Optional aliases for common onboard functions.
static const uint8_t PIN_BAT_ADC       = 2;
static const uint8_t PIN_IMU_INTERRUPT = 8;
static const uint8_t PIN_BOOT_BUTTON   = 9;

