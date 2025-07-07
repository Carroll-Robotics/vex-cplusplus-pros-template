#include "main.h"

//example
void setIntake(int intakePower) {
  // Set the 11watt intake motor to the intake power
  intake11w.move_velocity(intakePower);  
  // Set the 5watt intake motor group to the intake power
  intake5w.move_velocity(intakePower);
}