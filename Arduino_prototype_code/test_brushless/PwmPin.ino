#include "PwmPin.h"

void PwmPin::initialize(int pin){
  m_pin = pin;
  setPwmFrequencyTo32KHz(pin);
  pinMode(m_pin, OUTPUT);
}

void PwmPin::write_pwm(uint8_t duty_cycle){
  analogWrite(m_pin, duty_cycle);
}


void PwmPin::setPwmFrequencyTo32KHz(int pin) {
  if(pin == 5 || pin == 6 || pin == 9 || pin == 10) {
    if(pin == 5 || pin == 6) {
      TCCR0B = TCCR0B & 0b11111000 | 0x01;
    } else {
      TCCR1B = TCCR1B & 0b11111000 | 0x01;
    }
  }
  else if(pin == 3 || pin == 11) {
    TCCR2B = TCCR2B & 0b11111000 | 0x01;
  }
}
