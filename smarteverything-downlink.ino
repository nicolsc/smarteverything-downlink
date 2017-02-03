#include <Arduino.h>
#include <Wire.h>

void setup() {
  SerialUSB.begin(115200);
  SigFox.begin(19200);
  SigFox.print("+++");
  delay(200);
  SigFox.print("AT$SF=6e69636f6c7363,1\r");

}

void loop() {
  while(SigFox.available()){
    SerialUSB.write(SigFox.read());
  }
}
