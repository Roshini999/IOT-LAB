int led[]={3,5,6};
void setup() {
  for(int i=0; i<3;i++){
    pinMode(led[i],OUTPUT);
  }
}   
void loop() {
  analogWrite(3,512);
  analogWrite(5,1023);
  analogWrite(6,256);
}
