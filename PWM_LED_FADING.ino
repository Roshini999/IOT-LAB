int ledPin=9;
void setup() {
  pinMode(ledPin,OUTPUT);
}

void loop() {
  analogWrite(ledPin,512);
  delay(500);
  analogWrite(ledPin,256);
  delay(400);
  analogWrite(ledPin,128);
  delay(300);
  analogWrite(ledPin,0);
  delay(200);
}
