#include <Servo.h>
Servo s1;
int val=0;
void setup()
{
  pinMode(6,INPUT);
  s1.attach(7);
}
void loop()
{
val= digitalRead(7);
Serial.println(val);
delay(500);

if (val == 0)
{
s1.write(90);
delay(500);
}
if (val == 1)
{
  s1.write(0);
}
}