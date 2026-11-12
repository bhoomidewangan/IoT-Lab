# ESP32 Radar - Wokwi project (reconstructed)

Source: user's November 2026 report *Real-Time Object Detection and Radar-Style Visualization Using an ESP32 and an Ultrasonic Sensor*. The report does not provide original full code, so this is a matching implementation.

## Wokwi (browser)
1. Open https://wokwi.com/projects/new/esp32
2. Replace sketch.ino with the supplied sketch.ino.
3. Replace diagram.json with the supplied diagram.json.
4. Add ESP32Servo through Wokwi Library Manager, or copy supplied libraries.txt.
5. Start simulation. The servo sweeps 15-165 degrees and the Serial Monitor displays angle,distance at 115200 baud.
6. Click HC-SR04 to change its simulated distance (2-400 cm). The simulator does NOT physically model the sensor rotating with the servo, so changing the distance changes one virtual reading source rather than an actual angular map.

## Processing desktop visualization
1. Install Processing 4, open ESP32_Radar_Processing.pde in Java mode.
2. Start without hardware for demo mode if no serial ports exist. Press D to toggle demo.
3. For hardware, select the correct index from Serial.list() printed to the Processing console. Close Arduino IDE Serial Monitor before connecting.
4. The output must be one line per reading: angle,distance at 115200 baud.
5. Wokwi browser Serial Monitor is not automatically a PC serial COM port: use actual ESP32 hardware with Processing, or test Processing in DEMO mode. An external bridge would be needed for live Wokwi-to-Processing data.

## Real circuit: exactly as reported
- Ultrasonic **3.3V-compatible** VCC -> ESP32 3V3, GND -> GND, Trig -> GPIO 5, Echo -> GPIO 18.
- SG90 signal -> GPIO 13, power -> separately regulated servo supply, ground -> ESP32/common ground.
- The report used a 4-cell battery pack for the servo. Verify the *actual voltage* is suitable for your servo. Do not use four fresh alkaline cells without checking voltage against the motor specification.
- For a **standard 5V HC-SR04**, power sensor from 5V and divide Echo down to ~3.3V: 1k from Echo to ESP32 GPIO18, 2k from GPIO18 to GND.
- Wokwi's standard HC-SR04 model is 5V-powered, while the uploaded report's actual sensor was specified to support 3.3V. The included Wokwi wiring is a *virtual demonstration*, not safe physical wiring: do not connect a real 5V Echo directly to an ESP32 input. The Wokwi virtual schematic uses a direct simulated ECHO signal because Wokwi resistor analog behavior is limited; the **real hardware diagram is authoritative** for physical wiring.

## Report parameters
- 15-165 degree sweep, 1 degree increments, 30 ms dwell
- 10 us TRIG pulse, 25 ms echo timeout, d = duration * 0.034 / 2
- Serial CSV: angle,distance, baud 115200
- Processing screen range: 40 cm with 10,20,30,40 cm rings

Included: sketch.ino, diagram.json, libraries.txt, ESP32_Radar_Processing.pde.
