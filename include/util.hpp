#pragma once
#include "pros/rtos.hpp"

// Simple async delay helper – lets you `delay(milliseconds)` like Arduino
inline void delay(const uint32_t ms) { pros::delay(ms); }
