#if (ARDUINO >= 100)
  #include "Arduino.h"
#else
  #if defined(__AVR__)
    #include <avr/io.h>
  #endif
  #include "WProgram.h"
#endif
#include <L293DMotor.h>

L293DMotor::L293DMotor(int enable, int pin1, int pin2) {
        // Constructor code here
        pinMode(enable, OUTPUT);
        pinMode(pin1, OUTPUT);
        pinMode(pin2, OUTPUT);
        _enable = enable;
        _pin1 = pin1;
        _pin2 = pin2;
}

void L293DMotor::forward(int pwm) {
        // Initialization code here
        analogWrite(_enable, pwm);
        digitalWrite(_pin1, LOW);
        digitalWrite(_pin2, HIGH);
}
void L293DMotor::backward(int pwm) {
        // Initialization code here
        analogWrite(_enable, pwm);
        digitalWrite(_pin1, HIGH);
        digitalWrite(_pin2, LOW);
}
void L293DMotor::release(void) {
        // Initialization code here
        analogWrite(_enable, 0);
        digitalWrite(_pin1, LOW);
        digitalWrite(_pin2, LOW);
}
