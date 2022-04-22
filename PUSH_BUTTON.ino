int btn=2;
int temp;
void setup()
   {
pinMode(btn,INPUT);
Serial.begin(9600);
   }
   
void loop() {
temp=digitalRead(btn);
Serial.print("Value of Button:");
Serial.println(temp);
}
  
     
