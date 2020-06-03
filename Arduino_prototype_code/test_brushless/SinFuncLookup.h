#ifndef SIN_FUNC_LOOKUP_CLASS_H
#define SIN_FUNC_LOOKUP_CLASS_H

#define SIN_LOOKUP_TABLE_SIZE 255

#include <stdint.h>



class SinFuncLookup{
private:
  uint8_t m_lookup_size=SIN_LOOKUP_TABLE_SIZE;
  uint8_t m_sin_look_up_table[SIN_LOOKUP_TABLE_SIZE];
public:
  SinFuncLookup(); //Fills the look-up table  
  uint8_t getValue(uint8_t index);
  uint8_t getLastIndex();
};


#endif 
