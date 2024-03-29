#include "robotmap.h"

std::shared_ptr<OdomChassisController> chassis =
ChassisControllerBuilder()
.withMotors(
    {1, 19}, // Left motors are 1 & 2 (reversed)
    {-11, -20}    // Right motors are 3 & 4
)
// Green gearset, 4 in wheel diam, 11.5 in wheel track
.withDimensions({AbstractMotor::gearset::blue, (1.0)}, {{0_in, 0_in}, imev5BlueTPR})//BUTTER ACTUAL BOT:{AbstractMotor::gearset::blue, (X.0 / Y.0)}, {{4.25_in, 5.0_in}, imev5BlueTPR}
.withGains(
    {0.00095, 0.0, 0.0000},
    {0.00090, 0.0, 0.0000},
    {0.000, 0.0, 0.0000}
)
.withOdometry()
.buildOdometry();

std::shared_ptr<ChassisModel> chassisModel = chassis->getModel();

pros::Controller master{CONTROLLER_MASTER};

pros::Motor leftFlywheel{12};
pros::Motor rightFlywheel{2};


okapi::ADIMotor29 rightIntake{'A'};