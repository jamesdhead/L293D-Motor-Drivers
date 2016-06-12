/*
Motor Driver library By Nicholas Finch
2 L293D's
4 outputs
syntax
L293D MotorName(int enable, int MotorInPin, int MotorInPin)
*/
#include <L293DMotor.h>

L293DMotor M1(6, A0, A1);
L293DMotor M2(5, A2, A3);
L293DMotor M4(3, 4, 2);

void setup()
{
}

void loop()
{
  M1.forward(255);
  M2.forward(255);
  M4.forward(255);
  delay(500);
  M1.release();
  M2.release();
  M4.release();
  delay(100);
  M1.backward(255);
  M2.backward(255);
  M4.backward(255);
  delay(500);
}