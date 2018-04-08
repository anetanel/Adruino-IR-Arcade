/*
Send an IR command when receiving a serial input.
*/


#include <IRremote.h>
int incomingByte = 0;
IRsend irsend;

void setup()
{
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    incomingByte = Serial.read();
      for (int i = 0; i < 3; i++) {
        irsend.sendNEC(0x4FB4AB5, 32);
        delay(40);
      }
  }
}
