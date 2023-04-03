int button = 10;
int t1_LED = 13;
int t2_LED = 11;
unsigned long cnt1=3;
unsigned long cnt2=6;
unsigned long times=3;

int ledStates=0;
void setup(){
  pinMode(button,INPUT);
  pinMode(t1_LED,OUTPUT);
  pinMode(t2_LED,OUTPUT);
}
void loop(){
  if(digitalRead(button)==HIGH&&cnt1==0)
  {
    cnt1=millis();
  }
  else if (cnt1>0 && digitalRead(button)==LOW)
  {
    times=millis()-cnt1;
    cnt1=0;
  }
  else if (digitalRead(button)==LOW)
  {
    times=millis()-cnt1;
    cnt1=0;
  }
  else if (digitalRead(button)==LOW)
  {
    times=0;
  }

  if (times > 0)
  {
    if (times > 5000)
    {
      ledStates=1;
    }
    else if (times > 3000)
    {
      ledStates=2;
    }
    else if (times > 2000)
    {
      ledStates=3;
    }

    cnt2=millis();
    times=0;
  }

  if (cnt2 > 0)
  {
    if (millis() > cnt2+2000)
    {
      cnt2=0;
      ledStates=0;

      digitalWrite(t1_LED, LOW);
      digitalWrite(t2_LED, LOW);
    }

    switch (ledStates)
    {
      case 1:
        digitalWrite(t1_LED, HIGH);
      break;
      case 2:
        digitalWrite(t2_LED, HIGH);
      break;
    }
  }
}