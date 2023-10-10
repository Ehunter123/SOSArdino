#include <Servo.h> 

Servo myServo;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
	myServo.attach(11); 
	myServo.write(90);
}


void blinkOnce(int time){ 
  digitalWrite(LED_BUILTIN, HIGH);
  delay(time);
  digitalWrite(LED_BUILTIN, LOW);
  delay(time);
}

void loop() {
  blinkOnce(1000); 
}