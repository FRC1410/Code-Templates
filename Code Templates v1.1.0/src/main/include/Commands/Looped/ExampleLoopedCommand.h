#pragma once

#include "Util/Libraries.h"

class ExampleLoopedCommand : public frc::Command {
  private:
    int example_variable;
    
  public:
    ExampleLoopedCommand();
    void Initialize() override;
    void Execute() override;
    bool IsFinished() override;
    void End() override;
    void Interrupted() override;
};
