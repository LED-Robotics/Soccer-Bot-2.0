#include "main.h"

extern std::shared_ptr<OdomChassisController> chassis;
extern std::shared_ptr<ChassisModel> chassisModel;

extern pros::Motor leftFlywheel;
extern pros::Motor rightFlywheel;

extern pros::Controller master;

extern pros::ADIMotor intakeLeftMotor;
extern pros::ADIMotor intakeRightMotor;
extern pros::ADIMotor intakeAssistLeftMotor;
extern pros::ADIMotor intakeAssistRightMotor;

extern pros::ADIMotor indexingMotor;