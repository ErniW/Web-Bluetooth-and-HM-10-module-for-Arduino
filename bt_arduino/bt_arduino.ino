#include <SoftwareSerial.h>

#define BT_RX_PIN 11
#define BT_TX_PIN 10

SoftwareSerial BT(BT_TX_PIN, BT_RX_PIN);

String message;

void setup() {
  BT.begin(9600);
  Serial.begin(9600);
}

void loop() {
  if(BT.available()){
    message = BT.readStringUntil('\n');
    message += " received";
    BT.println(message);
    Serial.println(message);
  }
}
