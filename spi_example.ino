s#include <SPI.h>

void setup() {
  SPI.begin();
  Serial.begin(9600);
}

void loop() {
  digitalWrite(SS, LOW);
  SPI.transfer('A');
  digitalWrite(SS, HIGH);
  delay(1000);
}
