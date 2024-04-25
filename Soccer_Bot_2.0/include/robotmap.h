#include "main.h"

extern std::shared_ptr<OdomChassisController> chassis;
extern std::shared_ptr<ChassisModel> chassisModel;

extern pros::Motor leftFlywheel;
extern pros::Motor rightFlywheel;

extern pros::Controller master;

extern pros::ADIAnalogOut intakeLeft;
extern pros::ADIAnalogOut intakeRight;
extern pros::ADIAnalogOut intakeAssistLeft;
extern pros::ADIAnalogOut intakeAssistRight;

extern pros::ADIAnalogOut indexingMotor;