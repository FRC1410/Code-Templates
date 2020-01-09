#include "Util/Controller.h"

Controller::Controller() {}

double Controller::ApplyDeadzone(int controller, int axis, double axis_value, double joystick_deadzone, double trigger_threshold) {
  if (axis == 1 || axis == 5) {
    raw_magnitude = sqrt(pow(frc::Joystick{controller}.GetRawAxis(axis), 2) + pow(frc::Joystick{controller}.GetRawAxis(axis - 1), 2));
    if (raw_magnitude <= joystick_deadzone) {
      return 0;
    } else {
      return ((raw_magnitude - joystick_deadzone) / (1 - joystick_deadzone)) * (axis_value / raw_magnitude);
    }
  } else if (axis == 0 || axis == 4) {
    raw_magnitude = sqrt(pow(frc::Joystick{controller}.GetRawAxis(axis), 2) + pow(frc::Joystick{controller}.GetRawAxis(axis + 1), 2));
    if (raw_magnitude <= trigger_threshold) {
      return 0;
    } else {
      return ((raw_magnitude - joystick_deadzone) / (1 - joystick_deadzone)) * (axis_value / raw_magnitude);
    }
  } else {
    return axis_value;
  }
}