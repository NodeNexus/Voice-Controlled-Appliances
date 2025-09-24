# 🎤 Voice Controlled Home Appliances (Arduino)

## 📌 Overview
This project lets you **control home appliances using voice commands**.  
We use an **Arduino + Bluetooth (HC-05)** module. Commands are sent from an Android app (e.g. Bluetooth Voice Control) to control relays.

- Say "Light On" → Appliance 1 ON  
- Say "Fan Off" → Appliance 2 OFF  

---

## 🛠️ Hardware Required
- Arduino Uno/Nano  
- HC-05 Bluetooth module  
- 4 × Relay module  
- Appliances (lamp, fan, etc.)  
- Jumper wires, breadboard, 5V supply  

---

## 🔌 Wiring
- HC-05 → Arduino:  
  - VCC → 5V  
  - GND → GND  
  - TX → D2  
  - RX → D3 (with voltage divider)  

- Relays → Arduino:  
  - IN1 → D4  
  - IN2 → D5  
  - IN3 → D6  
  - IN4 → D7  

---

## ▶️ Usage
1. Upload the Arduino sketch.  
2. Pair your phone with **HC-05** (default password: 1234).  
3. Use a Bluetooth Voice Control app to send commands.  
4. Try commands like:  
   - "A" → Appliance 1 ON  
   - "a" → Appliance 1 OFF  
   - "B" → Appliance 2 ON  
   - "b" → Appliance 2 OFF  
   - "C" → Appliance 3 ON  
   - "c" → Appliance 3 OFF  
   - "D" → Appliance 4 ON  
   - "d" → Appliance 4 OFF  

---

## 📂 Repo Structure
```
Voice-Controlled-Appliances/
│── VoiceControl.ino
└── README.md
```

---

## ✨ Future Improvements
- Integrate with Google Assistant or Alexa.  
- Add feedback via LCD or mobile app.  
- Replace Bluetooth with Wi-Fi (ESP8266/ESP32).  
