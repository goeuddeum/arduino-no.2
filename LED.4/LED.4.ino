const int LED=9;
void setup() {
  Serial.begin(115200);
  pinMode(LED,OUTPUT);
}
void loop() {
  if(Serial.available()){
    char userInput=Serial.read();
    switch(userInput){
      case '1':
      digitalWrite(LED,HIGH);
      delay(100);
      digitalWrite(LED,LOW);
      break;
      case '2':
      digitalWrite(LED,HIGH);
      delay(100);
      digitalWrite(LED,LOW);
      delay(100);
      digitalWrite(LED,HIGH);
      delay(100);
      digitalWrite(LED,LOW);
      break;
      default:
      break;
    }
  }
}
