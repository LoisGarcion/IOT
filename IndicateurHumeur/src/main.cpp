#include <Servo.h>
#include <Arduino.h>

Servo myservo;

int const potPin = A0;
int potVal;
int angle;

void setup(){
  myservo.attach(9);
  Serial.begin(9600);
}

void loop(){
  potVal = analogRead(potPin);
  Serial.print("PotVal : ");
  Serial.print(potVal);
  angle = map(potVal, 0, 1023, 0, 179);
  Serial.print(" , angle : ");
  Serial.println(angle);
  myservo.write(angle);
  delay(15);
}