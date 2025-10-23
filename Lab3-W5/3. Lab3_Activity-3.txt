#include <LowPower.h>

void setup() {
  Serial.begin(9600);
}

void loop() {
  int v = analogRead(A0);
  Serial.print("A0 = ");
  Serial.println(v);
  Serial.flush();  //added this to ensure all data is sent before sleep
  LowPower.powerDown(SLEEP_8S, ADC_OFF, BOD_ON);  // sleep ~8s
}