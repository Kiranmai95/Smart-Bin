#include <Servo.h>
char cache;
Servo myservo;  
int dis = 20; 
const int trigPin = 5;
const int echoPin = 6;
long duration;
float distance;
int const trigPin1 = 10;
int const echoPin1 = 9;
int const buzzPin = 2;
const int ledPin = 13;
long duration1;
float distance1;
String inputString="";
void setup() 
{
   Serial.begin (9600);
   
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT); 
  pinMode(ledPin, OUTPUT);
  pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT); 
   pinMode(buzzPin, OUTPUT);
    myservo.attach(11);
  myservo.write(dis);
}

void firstsensor()
{
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  duration = pulseIn(echoPin, HIGH);
  distance = 0.034*(duration/2);
   if (distance < 27)
  {

    myservo.write(dis+160);
    delay(1000);
  }
  else 
  {

      myservo.write(dis);
  }
  delay(300);
}
void secondsensor()
{
  digitalWrite(trigPin1, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin1, HIGH);
  delayMicroseconds(10);
  
duration1 = pulseIn(echoPin1, HIGH);
 distance1 = 0.034*(duration1/2);

if (distance1 <= 30 && distance1 >= 0) {
// Buzz
digitalWrite(buzzPin, HIGH);
digitalWrite(ledPin, HIGH);
} else {
// Don't buzz
digitalWrite(buzzPin, LOW);
digitalWrite(ledPin, LOW);
}
// Waiting 60 ms won't hurt any one
delay(60);
}
void blue()
{
  if(Serial.available())
{
while(Serial.available())
{
char inChar = (char)Serial.read();
inputString += inChar;
}
Serial.println(inputString);
while (Serial.available()>0)
{
cache = Serial.read();
}

while (millis()>100)
{
if(inputString == "a")
{
//digitalWrite(13,HIGH);
digitalWrite(buzzPin, HIGH);

}
else if(inputString == "b")
{
//digitalWrite(13,LOW);
digitalWrite(buzzPin, LOW);

}
inputString = "";
}
}
}
void loop() {
Serial.println("\n");
firstsensor();
secondsensor();
blue();
}
