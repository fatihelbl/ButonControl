#ifndef INPUTCONTROL_H
#define INPUTCONTROL_H
#include <Arduino.h>
#define INPUT_PIN 12
#define LED_PIN_1 2
#define LED_PIN_2 3
#define LED_PIN_3 4
//int buttonState = LOW;
class InputControl
{
private:
    int inputCounter = 0;
    int inputState = 0;

public:
    void inputRead(int);
    void inputWrite();
};

#endif