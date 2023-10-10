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
  myServo.write(90);
  delay(time);
  digitalWrite(LED_BUILTIN, LOW);
  myServo.write(70);
  delay(time);
}

void loop() {
  blinkOnce(1000); 
}




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
  myServo.write(90);
  delay(time);
  digitalWrite(LED_BUILTIN, LOW);
  myServo.write(70);
  delay(time);
}

void loop() {
  blinkOnce(1000); 
}