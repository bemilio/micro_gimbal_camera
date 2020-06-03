#include "BrushlessDriver.h"


BrushlessDriver brushless_driver;
void setup() {
  
  int pin_phase_1 = 1;
  int pin_phase_2 = 2;
  int pin_phase_3 = 3;
  brushless_driver.initialize(pin_phase_1, pin_phase_2, pin_phase_3);
}

void loop() {
  // put your main code here, to run repeatedly: 
  brushless_driver.sendNextOutput();
  
}
