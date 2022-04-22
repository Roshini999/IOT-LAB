int led[]={3,5,6};
void setup() {
  for(int i=0; i<3;i++){
    pinMode(led[i],OUTPUT);
  }
}   
void loop() {
  for(int i=0; i<3;i++){
    digitalWrite(led[i],HIGH);
    delay(500);
    digitalWrite(led[i],LOW);
  }
}
