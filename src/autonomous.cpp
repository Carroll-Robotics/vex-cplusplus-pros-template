#include "main.h"
#include "config.hpp"
#include "util.hpp"

static void drive(const int power, const uint32_t ms) {
    leftFrontMotor.move(power);
    leftRearMotor.move(power);
    rightFrontMotor.move(power);
    rightRearMotor.move(power);
    delay(ms);
    leftFrontMotor.move(0);
    leftRearMotor.move(0);
    rightFrontMotor.move(0);
    rightRearMotor.move(0);
}

void autonomous() {
    drive(100, 1000);                          // forward 1 s
    intakeMotor.move(127); delay(500);         // score
    intakeMotor.move(0);
    drive(-100, 1000);                         // back up
}