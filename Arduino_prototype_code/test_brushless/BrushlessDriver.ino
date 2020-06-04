#include "BrushlessDriver.h"

void BrushlessDriver::initialize(int pin_phase_1, int pin_phase_2, int pin_phase_3){
  m_phase_1.initialize(pin_phase_1);
  m_phase_2.initialize(pin_phase_2);
  m_phase_3.initialize(pin_phase_3);
  m_last_output_index=0;
  Serial.begin(115200);
}


void BrushlessDriver::sendNextOutput(){
  m_last_output_index++;
  unsigned int last_index_lookup = m_signal_lookup.getLastIndex();
  m_last_output_index = m_last_output_index%last_index_lookup;
  unsigned int phases_index_distance = last_index_lookup/3; 
  uint8_t phase_1 = m_signal_lookup.getValue(m_last_output_index);
  uint8_t phase_2 = m_signal_lookup.getValue((m_last_output_index+phases_index_distance)%last_index_lookup);
  uint8_t phase_3 = m_signal_lookup.getValue((m_last_output_index+phases_index_distance+phases_index_distance)%last_index_lookup);
  m_phase_1.write_pwm(phase_1);
  m_phase_2.write_pwm(phase_2);
  m_phase_3.write_pwm(phase_3);
//  if(m_last_output_index%10==0){
//    Serial.print("ph1: ");
//    Serial.print(phase_1);
//      Serial.print("ph2: ");
//    Serial.print(phase_2);
//      Serial.print("ph3: ");
//    Serial.print(phase_3);
//    Serial.print("\n");
//  }
}
