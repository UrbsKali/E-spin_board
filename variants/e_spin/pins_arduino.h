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

// -----------------------------
// Serial Interfaces
// -----------------------------

#define TX 21
#define RX 20

#define SDA 5
#define SCL 6

// -----------------------------
// RGB LED (WS2020C)
// -----------------------------

#define PIN_RGB_LED     4
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

static const uint8_t A0 = 2;

// -----------------------------
// Digital Pin Map (Logical Order)
// -----------------------------

static const uint8_t D0  = 5;
static const uint8_t D1  = 6;
static const uint8_t D2  = 7;
static const uint8_t D3  = 8;
static const uint8_t D4  = 10;
static const uint8_t D5  = 0;
static const uint8_t D6  = 1;