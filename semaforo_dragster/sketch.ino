const int ledPins[] = {27,16,26,17,5,18,19,22,23};
const int numleds = sizeof(ledPins) / sizeof(ledPins[0]);
const int espera = 500;

void setup() {
  for (int i=0; i < numleds;i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < numleds; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(espera);
    digitalWrite(ledPins[i], LOW);
    delay(espera);
  }
}