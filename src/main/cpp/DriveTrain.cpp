#include "DriveTrain.hpp"
#include <iostream>
#include "controller.hpp"
#include <frc/SpeedControllerGroup.h>
#include <frc/VictorSP.h>

DriveTrain::DriveTrain(
    frc::VictorSP& topLeft, 
    frc::VictorSP& topRight, 
    frc::VictorSP& bottomLeft, 
    frc::VictorSP& bottomRight,
    FRC5572Controller& driver){
        this->topLeft = &topLeft;
        this->topRight = &topRight;
        this->bottomLeft = &bottomLeft;
        this->bottomRight = &bottomRight;
        this->driver = &driver;
        this->rightM = new frc::SpeedControllerGroup(topRight,bottomRight);
        this->leftM = new frc::SpeedControllerGroup(topLeft, bottomLeft);
        leftM->SetInverted(true);
    }

void DriveTrain::drive(){
    leftM->Set(driver->L().second * .4);
    rightM->Set(driver->R().second * .4);
}