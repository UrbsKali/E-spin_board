# E-SPIN Board Definitions

This repository contains the board definition and variants for the **E-SPIN**, a custom ESP32-C3 based board.
![alt text](image.png)

## Board Overview

- **Name**: E-SPIN
- **MCU**: ESP32-C3 (RISC-V Single Core)
- **Clock Speed**: 160 MHz
- **Flash Size**: 4 MB
- **Description**: A custom ESP32-C3 MINI-1 board designed as a handspinner, featuring WS2020C RGB LEDs and custom pin mapping.

## Features

- **Connectivity**: WiFi, Bluetooth 5 (LE)
- **Framework Support**: Arduino, ESP-IDF
- **Upload Speed**: 460800 baud

## Installation

### PlatformIO

To use this board in PlatformIO, verify that your project structure includes the `boards/` and `variants/` folders as defined in this repository.

1. Copy the `boards/e_spin.json` file to your project's `boards/` directory (or the global PlatformIO boards directory).
2. Copy the `variants/e_spin/` folder to your customized framework variants folder if necessary, or configure your `platformio.ini` to point to the correct variant.

**Example `platformio.ini`:**

```ini
[env:e_spin]
platform = espressif32
board = e_spin
framework = arduino
; If the board definition is local to the project
board_build.variants_dir = variants
board_build.mcu = esp32c3
board_build.f_cpu = 160000000L
```

## Pin Definitions

The pin mapping is defined in [variants/e_spin/pins_arduino.h](variants/e_spin/pins_arduino.h). It includes specific definitions for the onboard peripherals.

## License

This project is licensed under the MIT License.
