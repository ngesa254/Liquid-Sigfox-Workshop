#include <SigFox.h>
void setup() {
  if (!SigFox.begin()) {
     Serial.println("Shield error,unable to init the Atmel ATA8520 Sigfox chipset!");
    return;
  }
  SigFox.debug();
  short numx1= 128;
 
  SigFox.beginPacket();
  SigFox.write(numx1);
  SigFox.endPacket(true);
}  

void loop(){
  while (SigFox.available()) {
      Serial.print("0x");
      Serial.println(SigFox.read(), HEX);
    }
 }
