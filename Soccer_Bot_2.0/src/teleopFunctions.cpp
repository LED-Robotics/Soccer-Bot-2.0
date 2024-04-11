#include "robotmap.h"
#include "main.h"
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
        daMotor.set_value(-127);
        daMotor2.set_value(-127);    
        }
    else {
        daMotor.set_value(0);
        daMotor2.set_value(0);
    }

        
        
    

}

    

    


    
