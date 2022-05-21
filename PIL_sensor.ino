int sensorPin=A0;
int sensorValue=0;
int out=9;
void setup() {
 Serial.begin(9600);
}
void loop() {
     sensorValue=analogRead(sensorPin);
     Serial.println(sensorValue);
    
if(sensorValue<700){
   digitalWrite(out,LOW);
   delay(500);
}

else{
   digitalWrite(out,HIGH);
  delay(100);
 }
}
