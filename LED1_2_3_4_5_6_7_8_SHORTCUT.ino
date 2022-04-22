int led[]={2,3,4,5,6,7,8,9};
void setup() {
  for(int i=0; i<=7;i++){
    pinMode(led[i],OUTPUT);
  }
}

void loop() {
  for(int i=0; i<=7;i++){
    digitalWrite(led[i],HIGH);
    delay(100);
    digitalWrite(led[i],LOW);
  }
}
