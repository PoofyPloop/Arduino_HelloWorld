#include <Arduino.h>
/**
 * Statement of authorship
 **/

void setup() {
  // put your setup code here, to run once:

  //start the usb serial monitor port
  Serial.begin(115200);

  // print some text to the usb board
  Serial.println("\n\nHello, World!\n\n");
  Serial.println("\n\nRawad Haddad, 000777218");
  Serial.println("\n\nChip ID: " + ESP.getChipId());
  Serial.println("\n\nChip Flash ID: " + ESP.getFlashChipId());
}

void loop() {
  // put your main code here, to run repeatedly:
  long time = millis();
  Serial.println("Time: " + time);
  delay(2000);  
}