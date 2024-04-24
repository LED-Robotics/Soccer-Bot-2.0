#include "main.h"

extern std::shared_ptr<OdomChassisController> chassis;
extern std::shared_ptr<ChassisModel> chassisModel;

extern pros::Motor leftFlywheel;
extern pros::Motor rightFlywheel;

extern pros::Controller master;

extern pros::ADIMotor intakeLeft;
extern pros::ADIMotor intakeRight;
extern pros::ADIMotor intakeAssistLeft;
extern pros::ADIMotor intakeAssistRight;

extern pros::ADIMotor indexingMotor;