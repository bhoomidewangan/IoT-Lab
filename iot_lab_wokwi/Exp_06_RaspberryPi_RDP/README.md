# Experiment 6 — Raspberry Pi RDP setup (NOT simulatable in Wokwi)

Wokwi does not simulate full Raspberry Pi OS desktop or Windows RDP. Run on a physical Raspberry Pi with Raspberry Pi OS Desktop and Windows PC on the same LAN.

1. On Raspberry Pi terminal: `sudo apt update && sudo apt install xrdp -y`
2. Run `sudo systemctl enable --now xrdp`
3. Run `hostname -I` and record the IP address.
4. On Windows press Win+R, enter `mstsc`, and connect to Pi IP using its username/password.

Compatibility depends on the Raspberry Pi OS desktop session; some systems require choosing a compatible X11 session. Keep RDP restricted to a trusted LAN.
