const int led = 13;
const int sensor = 8;
void setup() {
 pinMode(sensor,INPUT);
 pinMode(led,OUTPUT);
 Serial.begin(9600);
}

void loop() {
 int val = digitalRead(sensor);
 if(val==1)
 {
  digitalWrite(led,HIGH);
  delay(500);
  Serial.println(val);
 }
 else
 {
  digitalWrite(led,LOW);
  delay(200);
  Serial.println(val);
 }

}
