#include "main.h"
#include "config.hpp"
#include "util.hpp"

void initialize() {
    // Reset IMU & give it time to calibrate
    imu.reset();
    while (imu.is_calibrating()) delay(20);

    // Stop all motors
    leftFrontMotor.brake();
    leftRearMotor.brake();
    rightFrontMotor.brake();
    rightRearMotor.brake();
    intakeMotor.brake();
    flywheelMotor.brake();
}

void disabled() {
    // Optional: zero your flywheel or stop tasks when disabled
}

void competition_initialize() {
    // Run any pre‑match autonomous selector here
}
