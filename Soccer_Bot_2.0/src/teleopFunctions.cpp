#include "robotmap.h"
#include "main.h"
void teleopDrive() {

    chassisModel->arcade(master.get_analog(ANALOG_LEFT_Y), master.get_analog(ANALOG_RIGHT_X), .05);
    //Pineapple program
}

void shooter() {
    if (master.get_digital(DIGITAL_L1)) {
        


    }
}