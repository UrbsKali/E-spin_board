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

#define SDA 4
#define SCL 5

#define SS   10
#define MOSI 7
#define MISO 2
#define SCK  6

// -----------------------------
// RGB LED (WS2020C)
// -----------------------------

#define PIN_RGB_LED     8
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

static const uint8_t D0  = 0;
static const uint8_t D1  = 1;
static const uint8_t D2  = 2;
static const uint8_t D3  = 3;
static const uint8_t D4  = 4;
static const uint8_t D5  = 5;
static const uint8_t D6  = 6;
static const uint8_t D7  = 7;
static const uint8_t D8  = 8;
static const uint8_t D9  = 9;
static const uint8_t D10 = 10;
static const uint8_t D20 = 20;
static const uint8_t D21 = 21;
