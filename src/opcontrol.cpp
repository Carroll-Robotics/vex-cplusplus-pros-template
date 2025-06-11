#include "main.h"
#include "config.hpp"
#include "util.hpp"

void opcontrol() {
    pros::Controller master(pros::E_CONTROLLER_MASTER);

    while (true) {
        int throttle = master.get_analog(ANALOG_LEFT_Y);
        int turn     = master.get_analog(ANALOG_RIGHT_X);

        int left  = throttle + turn;
        int right = throttle - turn;

        leftFrontMotor.move(left);
        leftRearMotor.move(left);
        rightFrontMotor.move(right);
        rightRearMotor.move(right);

        // Intake
        if (master.get_digital(DIGITAL_R1))      intakeMotor.move(127);
        else if (master.get_digital(DIGITAL_R2)) intakeMotor.move(-127);
        else                                     intakeMotor.move(0);

        // Flywheel
        flywheelMotor.move( master.get_digital(DIGITAL_L1) ? 110 : 0 );

        delay(10);
    }
}
