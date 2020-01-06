#ifndef SRC_DriveTrain_HPP_
#define SRC_DriveTrain_HPP_

#include <iostream>
#include "controller.hpp"
#include <frc/SpeedControllerGroup.h>
#include <frc/VictorSP.h>

/**
 * @class	    DriveTrain
 * @description Makes the main.cpp(Robot.cpp) more readable 
 * @notes	    This class should be updated for other versions as needed.
 */
class DriveTrain{
  public:
  DriveTrain(
    frc::VictorSP& topLeft, 
    frc::VictorSP& topRight, 
    frc::VictorSP& bottomLeft, 
    frc::VictorSP& bottomRight,
    FRC5572Controller& driver
    );

  void drive();
  
  private:
  frc::VictorSP* topLeft;
  frc::VictorSP* topRight;
  frc::VictorSP* bottomLeft;
  frc::VictorSP* bottomRight;
  frc::SpeedControllerGroup* rightM;
  frc::SpeedControllerGroup* leftM;
  FRC5572Controller* driver;

  };  
#endif