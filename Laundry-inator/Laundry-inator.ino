#include <Servo.h>

Servo s1;
int val = 0;

void setup() {
  pinMode(6, INPUT);     
  s1.attach(7);          
  Serial.begin(9600);    
}

void loop() {
  val = digitalRead(6); 
  Serial.println(val);
  delay(1000);

  if (val == 0) {
    s1.write(0);        
    delay(1000);
  }
  if (val == 1) {
    s1.write(90);        
  }
}
