#include "BrushlessDriver.h"


BrushlessDriver brushless_driver;
void setup() {
  
  int pin_phase_1 = 3;
  int pin_phase_2 = 5;
  int pin_phase_3 = 6;
  brushless_driver.initialize(pin_phase_1, pin_phase_2, pin_phase_3);
  
}

void loop() {
  // put your main code here, to run repeatedly: 
  brushless_driver.sendNextOutput();

  int freq =50; 
  int time_wait = floor(1000000/(freq * 256)); //in microsecs
  delayMicroseconds(time_wait);
}
