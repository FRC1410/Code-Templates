#include "OI.h"
#include "Robot.h"
#include "RobotMap/Constants.h"

#include "Commands/Actions/ExampleCommand.h"

OI::OI() {
  ExampleCommandRun = new frc::JoystickButton(&driver_controller, kExample_Button_ID);

  ExampleCommandRun->WhenPressed(new ExampleCommand);
}

//Driver Controller
double OI::GetDriverAxis(int axis) {
  return Robot::m_controller.ApplyDeadzone(driver_port, axis, driver_controller.GetRawAxis(axis), kDriver_joystick_deadzone, kDriver_trigger_threshold);
}

bool OI::GetDriverButton(int button) {
  return driver_controller.GetRawButton(button);
}

int OI::GetDriverDPad(){
  return driver_controller.GetPOV();
}

void OI::SetDriverRumble(double left, double right) {
  driver_controller.SetRumble(frc::GenericHID::RumbleType::kLeftRumble, left);
  driver_controller.SetRumble(frc::GenericHID::RumbleType::kRightRumble, right);
}

//Operator Controller
double OI::GetOperatorAxis(int axis) {
  return Robot::m_controller.ApplyDeadzone(operator_port, axis, operator_controller.GetRawAxis(axis), kOperator_joystick_deadzone, kOperator_trigger_threshold);
}

bool OI::GetOperatorButton(int button) {
  return operator_controller.GetRawButton(button);
}

int OI::GetOperatorDPad() {
  return operator_controller.GetPOV();
}

void OI::SetOperatorRumble(double left, double right) {
  operator_controller.SetRumble(frc::GenericHID::RumbleType::kLeftRumble, left);
  operator_controller.SetRumble(frc::GenericHID::RumbleType::kRightRumble, right);
}

//Test Controller
double OI::GetTestAxis(int axis) {
  return Robot::m_controller.ApplyDeadzone(test_port, axis, test_controller.GetRawAxis(axis), kTest_joystick_deadzone, kTest_trigger_threshold);
}

bool OI::GetTestButton(int button) {
  return test_controller.GetRawButton(button);
}

int OI::GetTestDPad(){
  return test_controller.GetPOV();
}

void OI::SetTestRumble(double left, double right) {
  test_controller.SetRumble(frc::GenericHID::RumbleType::kLeftRumble, left);
  test_controller.SetRumble(frc::GenericHID::RumbleType::kRightRumble, right);
}