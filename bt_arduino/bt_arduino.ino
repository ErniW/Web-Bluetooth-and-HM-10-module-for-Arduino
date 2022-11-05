#include <SoftwareSerial.h>

#define BT_TX 10
#define BT_RX 11

SoftwareSerial BT(BT_RX, BT_TX);

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
