#ifndef _L293DMOTOR_H
#define _L293DMOTOR_H

#if (ARDUINO >= 100)
# include <Arduino.h>
#else
#include <WProgram.h>
#endif

class L293DMotor {
        private:
                // Private functions and variables here
                int _enable;
                int _pin1;
                int _pin2;
        public:
                L293DMotor(int enable, int pin1, int pin2);
                void forward(int pwm);
                void backward(int pwm);
                void release();
};

#endif
