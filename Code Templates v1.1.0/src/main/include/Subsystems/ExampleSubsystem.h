#pragma once

#include "Util/Libraries.h"

class ExampleSubsystem : public frc::Subsystem {
  private:
    int example_variable;
    
  public:
    ExampleSubsystem();
    void InitDefaultCommand() override;
    int ExampleMethod();
};