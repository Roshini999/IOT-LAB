int sensorPin=6;
int sensorValue=0;
int ledPin=8;
void setup() {
 Serial.begin(9600);
}
void loop() {
     sensorValue=digitalRead(sensorPin);
     Serial.println(sensorValue);
    delay(1000);
if(sensorValue=0){
   digitalWrite(ledPin,HIGH);
   delay(100);
}

else{
   digitalWrite(ledPin,LOW);
  delay(100);
 }
}
