#include "PwmPin.h"

void PwmPin::initialize(int pin){
  m_pin = pin;
  pinMode(m_pin, OUTPUT);
}

void PwmPin::write_pwm(uint8_t duty_cycle){
  analogWrite(m_pin, duty_cycle);
}
