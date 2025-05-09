#include <Servo.h>
Servo myServo;

int ledPin = 13;
int pirPin = 2;
int pirState = LOW;
int val = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(pirPin, INPUT);
  Serial.begin(9600);
  myServo.attach(9);
}

void lightonoff() {
  val = digitalRead(pirPin);
  if (val == HIGH) {
    digitalWrite(ledPin, HIGH);
    if (pirState == LOW) {
      Serial.println("Motion detected!");
      pirState = HIGH;
    }
  } else {
    digitalWrite(ledPin, LOW);
    if (pirState == HIGH) {
      Serial.println("Motion ended!");
      pirState = LOW;
    }
  }
}

void serv(int a, int b, int c)
  myServo.write(a); 
  delay(1000);
  myServo.write(b);
  delay(1000);
  myServo.write(c);
  delay(1000);
