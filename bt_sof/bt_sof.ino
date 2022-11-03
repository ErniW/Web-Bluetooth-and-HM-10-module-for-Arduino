#include <SoftwareSerial.h>

#define BT_RX 10
#define BT_TX 11

SoftwareSerial BT(BT_RX, BT_TX);

String message;

void setup() {
  BT.begin(9600);
  Serial.begin(9600);
}

void loop() {
  if(BT.available()){
    message = BT.readStringUntil('\n');
    BT.println(message);
    Serial.println(message);
  }
}
