#include "BrushlessDriver.h"

void BrushlessDriver::initialize(int pin_phase_1, int pin_phase_2, int pin_phase_3){
  m_phase_1.initialize(pin_phase_1);
  m_phase_2.initialize(pin_phase_2);
  m_phase_3.initialize(pin_phase_3);
  m_last_output_index=0;
}


void BrushlessDriver::sendNextOutput(){
  m_last_output_index++;
  
  m_last_output_index = m_last_output_index%255;
  int phases_index_distance = 50; //no idea, random value. TODO: fix it
  m_phase_1.write_pwm(sin_lookup.getValue(m_last_output_index));
  m_phase_2.write_pwm(sin_lookup.getValue((m_last_output_index+phases_index_distance)%255));
  m_phase_3.write_pwm(sin_lookup.getValue((m_last_output_index+phases_index_distance+phases_index_distance)%255));
}
