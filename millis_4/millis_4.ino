const int LED=13;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  for(int on_off=0;on_off<=1;on_off++){
  digitalWrite(LED,on_off);   // turn the LED off by making the voltage LOW
  delay(500);                      // wait for a second
}
}
