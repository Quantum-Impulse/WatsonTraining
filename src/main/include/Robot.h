/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <string>

#include <frc/TimedRobot.h>
#include <frc/smartdashboard/SendableChooser.h>
#include <frc/Compressor.h>
#include <frc/DoubleSolenoid.h>

#include "controller.hpp"
#include "DriveTrain.hpp"

class Robot : public frc::TimedRobot {

/* Creates the controllers objects Driver and Operator
The Drivers ID is set to 0 while the Operator is set to 1*/
 FRC5572Controller Driver{0}; 
 FRC5572Controller Operator{1};

/*The NeoSparks SpeedController instantiation with their CAN ID
 and the type of motor its wired with respectively*/
frc::VictorSP m_leftTopMotor{0};
frc::VictorSP m_rightTopMotor{1};
frc::VictorSP m_leftBottomMotor{2};
frc::VictorSP m_rightBottomMotor{3};

/*DriveTrain Object */
DriveTrain drivetrain{m_leftTopMotor, m_rightTopMotor, m_leftBottomMotor, m_rightBottomMotor, Driver};

 public:
  void RobotInit() override;
  void RobotPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void TestPeriodic() override;
  
};




