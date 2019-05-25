#include <SigFox.h>
#include <ArduinoLowPower.h>

void setup() {
  Serial.begin(115200);
  while (!Serial) {};

  if (!SigFox.begin()) {
    Serial.println("Shield error,unable to init the Atmel ATA8520 Sigfox chipset!");
    return;
}

  SigFox.debug();
 
  short numx1= 128;
  SigFox.beginPacket();
  SigFox.write(numx1);
  SigFox.endPacket();

}


void loop(){}
