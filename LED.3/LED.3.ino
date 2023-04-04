int LED_1=9;
int LED_2=10;
int LED_3=6;
void setup() {
Serial.begin(9600); 
pinMode(LED_1,OUTPUT);
pinMode(LED_2,OUTPUT);
pinMode(LED_3,OUTPUT);
}
void loop() {
  char ch = Serial.read();
  if(ch == '1'){
    digitalWrite(LED_1,HIGH);
    delay(100);
    digitalWrite(LED_1, LOW);
  }
  if(ch == '2'){
    digitalWrite(LED_2,HIGH);
    delay(100);
    digitalWrite(LED_2,LOW);
    delay(100);
    digitalWrite(LED_2,HIGH);
    delay(100);
    digitalWrite(LED_2,LOW);
  }
    if(ch == '3'){
    digitalWrite(LED_3,HIGH);
    delay(100);
    digitalWrite(LED_3,LOW);
    delay(100);
    digitalWrite(LED_3,HIGH);
    delay(100);
    digitalWrite(LED_3,LOW);
    delay(100);
    digitalWrite(LED_3,HIGH);
    delay(100);
    digitalWrite(LED_3,LOW);
  }
}

  
  
