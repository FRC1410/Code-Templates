#include "Subsystems/ExampleSubsystem.h"
#include "RobotMap/IDs.h"

ExampleSubsystem::ExampleSubsystem() : frc::Subsystem("ExampleSubsystem") {}
  
void ExampleSubsystem::InitDefaultCommand() {}

int ExampleSubsystem::ExampleMethod() {
  return example_variable;
}