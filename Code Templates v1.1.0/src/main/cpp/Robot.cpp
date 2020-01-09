#include "Robot.h"

OI Robot::m_oi;
Controller Robot::m_controller;

ExampleSubsystem Robot::m_subsystem;

void Robot::RobotInit() {
  m_autonomous_command = &m_example_auto;
}

void Robot::RobotPeriodic() {}

void Robot::DisabledInit() {}

void Robot::DisabledPeriodic() {
  frc::Scheduler::GetInstance()->Run();
}

void Robot::AutonomousInit() {
  if (m_autonomous_command != nullptr) {
    m_autonomous_command->Start();
  }
}

void Robot::AutonomousPeriodic() {
  frc::Scheduler::GetInstance()->Run();
}

void Robot::TeleopInit() {
  if (m_autonomous_command != nullptr) {
    m_autonomous_command->Cancel();
    m_autonomous_command = nullptr;
  }
}

void Robot::TeleopPeriodic() {
  frc::Scheduler::GetInstance()->Run();
}

void Robot::TestPeriodic() {}

#ifndef RUNNING_FRC_TESTS
int main() {
  return frc::StartRobot<Robot>(); 
}
#endif