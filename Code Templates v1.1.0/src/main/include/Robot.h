#pragma once

#include "Util/Libraries.h"
#include "Util/PID.h"
#include "Util/Controller.h"

#include "OI.h"

#include "Subsystems/ExampleSubsystem.h"

#include "Commands/Looped/ExampleLoopedCommand.h"

#include "Commands/Groups/Auto/ExampleAuto.h"

class Robot : public frc::TimedRobot {
  private:
    frc::Command* m_autonomous_command = nullptr;
    ExampleAuto m_example_auto;
    frc::SendableChooser<frc::Command*> m_chooser;

  public:
    static OI m_oi;
    static Controller m_controller;
    
    static ExampleSubsystem m_subsystem;

    void RobotInit() override;
    void RobotPeriodic() override;
    void DisabledInit() override;
    void DisabledPeriodic() override;
    void AutonomousInit() override;
    void AutonomousPeriodic() override;
    void TeleopInit() override;
    void TeleopPeriodic() override;
    void TestPeriodic() override;
};
