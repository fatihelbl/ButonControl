#include <Arduino.h>
#include "InputControl.h"

InputControl inputControl;
void setup()
{
  Serial.begin(9600);
  pinMode(INPUT_PIN, INPUT);
  pinMode(LED_PIN_1, OUTPUT);
  pinMode(LED_PIN_2, OUTPUT);
  pinMode(LED_PIN_3, OUTPUT);
}

void loop()
{

  int buttonState = digitalRead(INPUT_PIN);
  delay(1000);
  Serial.println(buttonState);
  inputControl.inputRead(buttonState);
  inputControl.inputWrite();
}
