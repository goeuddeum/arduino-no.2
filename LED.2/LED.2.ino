int sw = 7; 
int LED1 = 6;
int LED2 = 9;
int LED3 = 10;
void setup() {
  pinMode(sw, INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}
 
void loop() {
  if(digitalRead(sw) == HIGH) 
  {
  digitalWrite(6, HIGH);
  delay(100);
  digitalWrite(6, LOW);
  digitalWrite(9, HIGH);
  delay(200);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  delay(300);
  digitalWrite(10, LOW);
}
}