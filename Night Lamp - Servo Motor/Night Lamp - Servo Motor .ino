#include <Servo.h>
#define PIN 9 //servomotor

int pos = 0;

Servo myServo;


void setup() {
  myServo.attach(9);  // attaches the servo on pin 9 to the servo object

}

void loop() {

  for (pos = 0; pos <= 180; pos += 1){  // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myServo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(10);                       // waits 25 ms for the servo to reach the position
  }
  
  for (pos = 180; pos >= 0; pos -= 1){ // goes from 180 degrees to 0 degrees
    myServo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(10);             
  }

}
