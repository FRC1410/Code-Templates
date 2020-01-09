#pragma once

#include "Util/Libraries.h"
#include "RobotMap/IDs.h"

class OI {
  private:
    frc::Joystick driver_controller{driver_port}, operator_controller{operator_port}, test_controller{test_port};
    frc::JoystickButton * ExampleCommandRun;

  public:
    OI();

    double GetDriverAxis(int axis);
    bool GetDriverButton(int button);
    int GetDriverDPad();
    void SetDriverRumble(double left, double right);

    double GetOperatorAxis(int axis);
    bool GetOperatorButton(int button);
    int GetOperatorDPad();
    void SetOperatorRumble(double left, double right);

    double GetTestAxis(int axis);
    bool GetTestButton(int button);
    int GetTestDPad();
    void SetTestRumble(double left, double right);
};