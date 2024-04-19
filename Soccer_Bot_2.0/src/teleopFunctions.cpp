#include "robotmap.h"

void teleopDrive() {

    chassisModel->arcade(master.get_analog(ANALOG_LEFT_Y), master.get_analog(ANALOG_RIGHT_X), .05);
    //Pineapple program
}

void shooter() {
    // while (true) {
    if ((master.get_digital(DIGITAL_L1)) && (master.get_digital(DIGITAL_R1))){
        leftFlywheel.move(-127.0);
        rightFlywheel.move(127.0);}
    else if ((master.get_digital(DIGITAL_L1))){
        leftFlywheel.move(-127.0);
        rightFlywheel.move(127.0 * 0.35);}
    else if ((master.get_digital(DIGITAL_R1))){
        rightFlywheel.move(127.0 * 0.35);
        leftFlywheel.move(-127.0);
    }
    else {
        leftFlywheel.move(0.0);
        rightFlywheel.move(0.0);
    }
    // }
}
void intake() {
    if ((master.get_digital(DIGITAL_A))){
        intakeLeft.set_value(127);
        intakeRight.set_value(127);

        intakeAssistLeft.set_value(127);
        intakeAssistRight.set_value(127);
    } else {
        intakeLeft.set_value(0);
        intakeRight.set_value(0);

        intakeAssistLeft.set_value(0);
        intakeAssistRight.set_value(0);
    }
}