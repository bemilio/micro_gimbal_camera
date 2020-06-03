#include "SinFuncLookup.h"

SinFuncLookup::SinFuncLookup()
:m_sin_look_up_table{} //todo: fil
{
}

uint8_t SinFuncLookup::getValue(uint8_t index){  
    return m_sin_look_up_table[index]; //this should be fine without checking the index if i use uint8
}
