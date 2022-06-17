const int EN = 10;
const int CLK = 9;
const int CW = 0;
int Distance = 0 ;
void setup()
{
  pinMode(CW, OUTPUT);
  pinMode(CLK, OUTPUT);
  pinMode(EN, OUTPUT);
  digitalWrite(CW, LOW);
  digitalWrite(CLK, LOW);
  digitalWrite(EN, LOW);
  
}
void loop()
{
  digitalWrite(EN, HIGH);
  digitalWrite(CLK, HIGH);
  delayMicroseconds(100);
  digitalWrite(CLK, LOW);
  delayMicroseconds(100);
  Distance = Distance + 1;
  if (Distance ==200)
  {
    if  (digitalRead(CW) == LOW) {
      digitalWrite(CW, HIGH);
      }
      else
      {
        digitalWrite(CW, LOW);
      }
      Distance = 0;
  }
}
