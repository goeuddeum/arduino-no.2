#include <Servo.h>

int servoPin = 9; // 서보모터 핀
int ledPin = 10; // LED 핀
int potPin = A0; // 가변저항 핀

Servo servo; // 서보모터 객체 생성

void setup() {
  servo.attach(servoPin); // 서보모터 핀 초기화
  pinMode(ledPin, OUTPUT); // LED 핀을 출력으로 초기화
}

void loop() {
  int potValue = analogRead(potPin); // 가변저항으로부터 값을 읽어옴
  int servoAngle = map(potValue, 0, 1023, 0, 180); // 읽어온 값 범위를 0~180도로 매핑
  servo.write(servoAngle); // 서보모터 각도 조절
  
  int ledValue = map(potValue, 0, 1023, 0, 255); // 읽어온 값 범위를 0~255로 매핑
  analogWrite(ledPin, ledValue); // LED 밝기 조절
}