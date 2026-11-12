import serial, csv
from datetime import datetime
PORT = "COM3" # change this to your real Arduino port
with serial.Serial(PORT, 9600, timeout=2) as ard, open("light_log.csv", "w", newline="") as f:
    writer=csv.writer(f); writer.writerow(["Timestamp","LDR Value","Relay State"])
    try:
        while True:
            s=ard.readline().decode(errors="ignore").strip().split(",")
            if len(s)==2 and all(v.strip().isdigit() for v in s):
                row=[datetime.now().isoformat(timespec="seconds"),*s]
                writer.writerow(row);f.flush();print(row)
    except KeyboardInterrupt: pass
