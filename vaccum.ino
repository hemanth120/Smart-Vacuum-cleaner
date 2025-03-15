#include<Servo.h>
int time=0;
int distance=0;
int in1 = 7;
int in2 = 8;
int in3 = 9;
int in4 = 10;

int trig=11;
int echo=12;
Servo servo1;
void setup(){
   
    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
    pinMode(in3, OUTPUT);
    pinMode(in4, OUTPUT);
	pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
    servo1.attach(3);
    servo1.write(90);
    Serial.begin(9600);
}

void loop() 
{
digitalWrite(trig,LOW);
delayMicroseconds(2);
digitalWrite(trig,HIGH);
delayMicroseconds(10);
digitalWrite(trig,LOW);
delayMicroseconds(2);
time=pulseIn(echo,HIGH);
distance=(time*0.034)/2;
Serial.println(distance);
delay(100);

if(distance>35)
{
  front();
}
else
{
off();
delay(1000);
servo1.write(150);
delay(1000);
if(distance<30)
{
    servo1.write(30);
    if(distance>30)
    {
    off();
    delay(1000);
    back();
    right();
    front();
    }
    else 
     { off();
      delay(1000);
      back();
      delay(1000);
      right();
      delay(1000);
      front();  
    }
}
    else
    {
      off();
      delay(1000);
      back();
      left();
      delay(1000);
      front();
    }
  }
}



void front() 
{
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    servo1.write(90);
}
void back()
{
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
   delay(1000);
}
void right()
{
 digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);delay(500);

}
void left()
{
  digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    delay(500);
}
void off()
{
   digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
}