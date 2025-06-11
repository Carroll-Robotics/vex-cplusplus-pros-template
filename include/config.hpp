#pragma once
#include "pros/motors.hpp"
#include "pros/imu.hpp"

/* ------------ PORT MAP (edit to match your robot) ------------- */
namespace ports {
    constexpr int leftFront  =  1;
    constexpr int leftRear   =  2;
    constexpr int rightFront = 11;
    constexpr int rightRear  = 12;
    constexpr int intake     =  4;
    constexpr int flywheel   =  6;
    constexpr int imu        = 21;
}
/* ----------- GLOBAL DEVICE SINGLETONS ------------------------- */
/*  Use a *negative* port number for a motor you want reversed.   */

inline pros::Motor leftFrontMotor  ( ports::leftFront ,
                                     pros::v5::MotorGears::green );

inline pros::Motor leftRearMotor   ( ports::leftRear  ,
                                     pros::v5::MotorGears::green );

inline pros::Motor rightFrontMotor ( -ports::rightFront ,   // reversed
                                     pros::v5::MotorGears::green );

inline pros::Motor rightRearMotor  ( -ports::rightRear  ,   // reversed
                                     pros::v5::MotorGears::green );

inline pros::Motor intakeMotor     ( ports::intake ,
                                     pros::v5::MotorGears::blue );

inline pros::Motor flywheelMotor   ( ports::flywheel ,
                                     pros::v5::MotorGears::red  );

inline pros::Imu imu ( ports::imu );
