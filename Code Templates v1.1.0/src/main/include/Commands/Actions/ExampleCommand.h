#pragma once

#include "Util/Libraries.h"

class ExampleCommand : public frc::Command {
  private:
    bool finished_condition = false;
    
  public:
    ExampleCommand();
    void Initialize() override;
    void Execute() override;
    bool IsFinished() override;
    void End() override;
    void Interrupted() override;
};
