const int LED = 13;

void setup(){
pinMode(LED,OUTPUT);
}
void loop(){
  for(int t_high=0;t_high<=10;t_high++){
  digitalWrite(LED,HIGH);
  delay(9);
  digitalWrite(LED,LOW);
  delay(1);
}
}
