#include "pitches.h"
int BUZZER=11;
void setup() {
  Serial.begin(115200);
  pinMode(BUZZER, OUTPUT);
}
void loop() {
  if(Serial.available()){
    char userInput=Serial.read();
    switch(userInput){
      case '1':
      tone(BUZZER,262);
      delay(200);
      noTone(BUZZER);
      tone(BUZZER,196);
      delay(200);
      noTone(BUZZER);
      tone(BUZZER,196);
      delay(200);
      noTone(BUZZER);
      tone(BUZZER,220);
      delay(200);
      noTone(BUZZER);
      tone(BUZZER,196);
      delay(200);
      noTone(BUZZER);
      delay(500);
      tone(BUZZER,247);
      delay(200);
      noTone(BUZZER);
      tone(BUZZER,262);
      delay(200);
      noTone(BUZZER);
      break;
      default:
      break;
    }
  }
}
