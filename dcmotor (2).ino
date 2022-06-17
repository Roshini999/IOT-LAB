int enA=9;
int in1=7;
int in2=8;
void setup(){
  pinMode(enA,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
digitalWrite(in1,LOW);
digitalWrite(in2,LOW);
}
void directionControl(){
  analogWrite(enA,255);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  delay(100);

  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  delay(100);
}

void speedControl(){
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  
  for(int i=0;i<256;i++){
    analogWrite(enA,i);
    delay(100);
  }
  for(int i=255;i>=0;i--){
    analogWrite(enA,i);
    delay(100);
  }
 digitalWrite(in1,LOW);
 digitalWrite(in2,LOW); 
}
