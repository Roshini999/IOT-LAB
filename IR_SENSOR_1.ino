int sensorPin=6;
int sensorValue=0;
int ledPin=9;
void setup() {
 Serial.begin(9600);
}
void loop() {
     sensorValue=digitalRead(sensorPin);
     Serial.println(sensorValue);
    
if(sensorValue==0){
   digitalWrite(ledPin,HIGH);
   delay(500);
}

else{
   digitalWrite(ledPin,LOW);
  delay(100);
 }
}
