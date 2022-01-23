#include "InputControl.h"

void InputControl::inputRead(int arg_input_state)
{

    if (arg_input_state == 1 && inputState == 0)
    {

        inputCounter++;
        delay(1000);
        Serial.print("fonk");
        Serial.println(inputCounter);
    }
    inputState = 0;
    arg_input_state = digitalRead(INPUT_PIN);
    //inputWrite();
}

void InputControl ::inputWrite()
{

    if (inputCounter == 1)
    {
        digitalWrite(LED_PIN_1, HIGH);
        delay(100);
        digitalWrite(LED_PIN_1, LOW);
    }
    if (inputCounter == 2)
    {
        digitalWrite(LED_PIN_2, HIGH);
        delay(100);
        digitalWrite(LED_PIN_2, LOW);
    }
    if (inputCounter == 3)
    {
        digitalWrite(LED_PIN_3, HIGH);
        delay(100);
        digitalWrite(LED_PIN_3, LOW);
    }
}