#include "Commands/Actions/ExampleCommand.h"
#include "Robot.h"
#include "RobotMap/Constants.h"

ExampleCommand::ExampleCommand() {}

void ExampleCommand::Initialize() {}

void ExampleCommand::Execute() {
  //Code Runs Here
}

bool ExampleCommand::IsFinished() {
  return Robot::m_oi.GetDriverButton(kExample_Button_ID);
}

void ExampleCommand::End() {}

void ExampleCommand::Interrupted() {}