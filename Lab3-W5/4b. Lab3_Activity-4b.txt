#include "esp_sleep.h"

void setup{
  Serial.begin(115200);
}

void loop(){
  int v = analogRead(34)
  Serial.print("Sample = ");
  Serial.println(v);
  esp_sleep_enable_timer_wakeup(2000ULL * 1000ULL); //2s
  Serial.flush();
  esp_light_sleep_start(); //resume
}