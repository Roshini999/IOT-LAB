int ledPin=9;
void setup() {
  pinMode(ledPin,OUTPUT);
}

void loop() {
  analogWrite(ledPin,256);
}
