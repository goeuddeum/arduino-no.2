#include <Servo.h>

Servo servo;

const int t1_LED=10;
unsigned int on_off = 0;
unsigned long t1_prev=0;
const unsigned long t1_delay=500;

const int analogPin = A0;

void setup(){
servo.attach(9);
  pinMode(t1_LED,OUTPUT);

}

void loop(){
  int sensorInput=analogRead(analogPin);
  analogWrite(t1_LED,sensorInput/4);

  unsigned long t1_now=millis();
  if(t1_now-t1_prev >= t1_delay){
    t1_prev = t1_now;
    
    on_off++;
    if(on_off>1) on_off = 0;
  digitalWrite(t1_LED,on_off);   
}
servo.write(map(analogRead(A0),0,1023,0,179));
delay(10);
  }
