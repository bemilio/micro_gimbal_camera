#ifndef SIN_FUNC_LOOKUP_CLASS_H
#define SIN_FUNC_LOOKUP_CLASS_H

#include <stdint.h>

class SinFuncLookup{
private:
  uint8_t m_sin_look_up_table[256];
public:
  SinFuncLookup(); //Fills the look-up table  
  uint8_t getValue(uint8_t index);
};


#endif 
