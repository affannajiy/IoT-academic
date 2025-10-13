// ESP32 simple: blink + A0 read
const int LED = 13;  // Use 2 if you want the built-in LED instead
unsigned long tLED = 0, tA0 = 0;
const unsigned long LED_MS = 1000, A0_MS = 2000;
bool on = false;

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  unsigned long now = millis();

  if (now - tLED >= LED_MS) {
    tLED = now;
    on = !on;
    digitalWrite(LED, on);
  }

  if (now - tA0 >= A0_MS) {
    tA0 = now;
    int v = analogRead(34);  // GPIO 34 (input-only on many ESP32 boards)
    Serial.print("A34 = ");
    Serial.println(v);
  }
}