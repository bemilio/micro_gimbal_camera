#ifndef PWM_PIN_CLASS
#define PWM_PIN_CLASS

#include <stdint.h>

class PwmPin{
  private:
  int m_pin;
  void setPwmFrequencyTo32KHz(int pin); //make PWM inaudible
  public:
  void initialize(int pin);
  void write_pwm(uint8_t duty_cycle);
};

#endif
