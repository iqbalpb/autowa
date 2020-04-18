
#include<Servo.h>
Servo S;
int pos;
void setup() {
 Serial.begin(9600);
  pinMode(8, INPUT_PULLUP);
  S.attach(2);
  S.write(0);
 }

void loop() {

  int h = digitalRead(8);
  
    if (h==LOW){
        Serial.println("Hand Dectectd");
        S.write(100);
        delay(1000);
        S.write(0);
        delay(1000);
      }
}
