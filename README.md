# Communication Protocols: UART, I2C, SPI

## Overview
This repository demonstrates basic communication protocols used in embedded systems: UART, I2C, and SPI.

---

## UART (Universal Asynchronous Receiver Transmitter)
- Simple serial communication (TX/RX)
- No clock signal required
- Used for debugging and device communication

### Example
- Arduino sends data to Serial Monitor

---

## I2C (Inter-Integrated Circuit)
- Uses 2 wires: SDA (data), SCL (clock)
- Supports multiple devices (master-slave)
- Each device has unique address

### Example
- Sensor connected via I2C communication

---

## SPI (Serial Peripheral Interface)
- Uses 4 wires: MOSI, MISO, SCK, SS
- Faster than I2C
- Used for high-speed communication

### Example
- Communication between microcontroller and module

---

## Comparison

| Protocol | Wires | Speed | Complexity |
|---------|------|------|-----------|
| UART | 2 | Medium | Simple |
| I2C | 2 | Medium | Moderate |
| SPI | 4 | High | Complex |

---

## Applications
- Sensor communication
- Display modules
- Embedded systems interfacing

---

## Status
Basic conceptual and implementation-level understanding of communication protocols
## Diagrams
![Diagram](Screenshot 2026-05-05 002701.png,Screenshot 2026-05-05 002736.png,Screenshot 2026-05-05 002801.png)
