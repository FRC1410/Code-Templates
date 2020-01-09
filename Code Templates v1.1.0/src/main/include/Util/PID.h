#pragma once

#include "Util/Libraries.h"

class PID {
  private:
    double kP, kI, kD;
    double P, I, D;
    double error, previous_error;

    bool D_ran;

  public:
    PID(double kP_input, double kI_input, double kD_input);
    double GetPID(double current, double target, double dt);
    void ResetI();
    void ResetD();
};