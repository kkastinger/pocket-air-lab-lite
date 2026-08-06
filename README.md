# 🔬 Pocket Air Lab LITE ポケット
<p align="left">
  <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="C++">
  <img src="https://img.shields.io/badge/ESP32--C3-E7352C?style=for-the-badge&logo=espressif&logoColor=white" alt="ESP32-C3">
  <img src="https://img.shields.io/badge/Embedded-000000?style=for-the-badge&logo=arduino&logoColor=white" alt="Embedded">
  <img src="https://img.shields.io/badge/Team-blueviolet?style=for-the-badge&logo=github&logoColor=white" alt="Team">
  <img src="https://img.shields.io/badge/Sensors-I2C%2FUART-009688?style=for-the-badge&logo=sensor&logoColor=white" alt="Sensors">
  <img src="https://img.shields.io/badge/PCBWay-green?style=for-the-badge&logo=protomagic&logoColor=white" alt="PCBWay">
</p>
A compact, battery-powered pocket air quality monitor built around the ESP32-C3 on PCB.

> **Status:**  Hardware design & firmware in progress.

## Features
- **CO2, Temperature & Humidity:** Sensirion SCD41
- **VOC & Indoor Chemistry:** Sensirion SGP41
- **Atmospheric Pressure:** BMP280
- **Display & UI:** 1.3" OLED with button control & power-saving mode
- **Connectivity:** Bluetooth Low Energy (BLE) data logging to Excel
- **Expansion Port:** 4-pin UART (2.54mm pitch) for external sensors (for example: PMS5003)

---

## 📁 Repo Structure

```text
pocket-air-lab-lite/
│
├── images/           <- images for readme
├── firmware/         <- ESP32 source code
├── hardware/         <- PDF schematics, and PCB renders
├── gerbers/          <- gerber files for PCBWay 
└── README.md         <- project description
```

---

## Schematics
<div align="left">
    <img src="hardware/esp32c3_oled_baseboard_schematic.png" alt="schem1"/>
  </a>
</div>

---

## 🤝 Sponsorship
Sponsored by **[PCBWay](https://www.pcbway.com)**, who support us in manufacturing our custom PCBs.

<div align="left">
  <a href="https://www.pcbway.com/" target="_blank">
    <img src="images/pcbway.png" alt="PCBWay Logo" width="250"/>
  </a>
</div>


---

## 👥 Contributors

* **[TheAbsurdator](https://github.com/TheAbsurdator)**
  
* **[kkastinger](https://github.com/kkastinger)** 
