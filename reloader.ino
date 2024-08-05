#include"reloader.h"
#include <Arduino.h>

uint8_t a = 60;
reloader myservo(9,2,0);

void setup() {
  Serial.begin(9600);
  myservo.reset();
}

void loop(){
  a = myservo.write(a);
  Serial.print(myservo.buttonstate());
  Serial.print(" : ");
  Serial.print(myservo.getcount());
  Serial.print(" : ");
  Serial.println(a);
}
