#include <SoftwareSerial.h>

SoftwareSerial BT(2, 3); // RX | TX

#define RELAY1 4
#define RELAY2 5
#define RELAY3 6
#define RELAY4 7

void setup() {
  Serial.begin(9600);
  BT.begin(9600);

  pinMode(RELAY1, OUTPUT);
  pinMode(RELAY2, OUTPUT);
  pinMode(RELAY3, OUTPUT);
  pinMode(RELAY4, OUTPUT);

  digitalWrite(RELAY1, LOW);
  digitalWrite(RELAY2, LOW);
  digitalWrite(RELAY3, LOW);
  digitalWrite(RELAY4, LOW);

  Serial.println("Voice Controlled Appliance Ready!");
}

void loop() {
  if (BT.available()) {
    char cmd = BT.read();
    Serial.println(cmd);

    switch (cmd) {
      case 'A': digitalWrite(RELAY1, HIGH); break; // Turn ON Appliance 1
      case 'a': digitalWrite(RELAY1, LOW); break;  // Turn OFF Appliance 1
      case 'B': digitalWrite(RELAY2, HIGH); break; // Turn ON Appliance 2
      case 'b': digitalWrite(RELAY2, LOW); break;  // Turn OFF Appliance 2
      case 'C': digitalWrite(RELAY3, HIGH); break; // Turn ON Appliance 3
      case 'c': digitalWrite(RELAY3, LOW); break;  // Turn OFF Appliance 3
      case 'D': digitalWrite(RELAY4, HIGH); break; // Turn ON Appliance 4
      case 'd': digitalWrite(RELAY4, LOW); break;  // Turn OFF Appliance 4
    }
  }
}
