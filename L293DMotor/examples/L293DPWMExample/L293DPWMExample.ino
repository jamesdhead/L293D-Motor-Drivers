#include <L293DMotor.h>
L293DMotor M1(6, A0, A1);
L293DMotor M2(5, A2, A3);
L293DMotor M4(3, 4, 2);
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 255; i++){
    M1.forward(i);
    M2.forward(i);
    M4.forward(i);
    delay(10);
  }
}