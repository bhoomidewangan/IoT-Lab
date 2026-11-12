# Experiment 5: Automatic Light LDR Relay CSV

Click LDR and adjust lux. Low lux means greater ADC: the lamp LED turns ON. The relay is shown and controlled; D8 lamp LED represents a safe, low-voltage load. The CSV logger in this folder runs against a real Arduino serial port, not the Wokwi browser serial monitor.

Open Wokwi, choose Arduino Uno, paste `diagram.json` and `sketch.ino`, and add libraries from `libraries.txt` when present.
