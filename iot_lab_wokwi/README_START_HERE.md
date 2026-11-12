# IoT lab: Wokwi circuit + code bundle

## Browser usage
1. Open https://wokwi.com/projects/new/arduino-uno (Experiments 1–5, 9), or https://wokwi.com/projects/new/esp32 (Experiment 8).
2. Open `diagram.json` in the Wokwi editor and replace its full contents with the matching file from an experiment folder.
3. Open `sketch.ino` and replace the example program.
4. For experiments with `libraries.txt`, install those libraries from Wokwi Library Manager or add a libraries.txt with matching contents.
5. Click the green Start Simulation button. Change sensor controls / buttons and watch LEDs, servo, Serial Monitor.

## Project coverage
- 1–5: Arduino Wokwi interactive circuits.
- 6: NO Wokwi support for full Raspberry Pi OS + RDP; physical setup instructions.
- 7: Tkinter runs on your actual PC, NOT Wokwi; `main.py` included.
- 8: ESP32/DHT22 Wokwi sensor-only demo; actual LoRa SX1278 requires physical radio hardware; code and pinout in `real_hardware`.
- 9: MQ2 Wokwi gas sensor SIMULATOR SUBSTITUTE; original experiment specifies MQ4. MQ4 physical sketch included.

## Diagrams
A separate ZIP of wiring-reference diagrams (PNG and SVG) is provided. Wokwi `diagram.json` is the editable graphical circuit wiring source.

## Important
These are prepared project files, not a guarantee of runtime validation in Wokwi's remote service. Sensor thresholds are examples and need calibration on real hardware. Keep mains voltage and flammable gas out of student simulations.
