#ifndef BRUSHLESS_DRIVER_CLASS_H
#define BRUSHLESS_DRIVER_CLASS_H

#include "PwmPin.h"
#include "SinFuncLookup.h"
#include "SpaceVectorWaveLookup.h"
#include <stdint.h>
class BrushlessDriver{
private:
  PwmPin m_phase_1;
  PwmPin m_phase_2;
  PwmPin m_phase_3;
  SinFuncLookup m_signal_lookup;
//  SpaceVectorWaveL/ookup m_signal_lookup;
  uint8_t m_last_output_index;
public:  
  void initialize(int pin_phase_1, int pin_phase_2, int pin_hase_3);
  void sendNextOutput();
};

#endif
