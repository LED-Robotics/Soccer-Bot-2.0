#include "robotmap.h"

int intakeLeftOn = false;

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
    
}
// void intake2() {
//     if (master.get_digital(DIGITAL_Y)){
//         intakeLeft.set_value(127);
//     }

//     else {
//         intakeLeft.set_value(0);
//     }
//     }


void intakeLeft() {
     if (master.get_digital(DIGITAL_LEFT)){
         intakeLeftMotor.set_value(127);
    }
     else {
         intakeLeftMotor.set_value(0.0);
    }
}

void intakeLeftAssist() {
    if (master.get_digital_new_press(DIGITAL_L2)){
    intakeLeftOn = pros::millis();
    }

    if(!intakeLeftOn) return;
    int timePassed = pros::millis() - intakeLeftOn;
    if(timePassed > 0 && timePassed <= 500) {
        intakeAssistLeftMotor.set_value(127);
    } else if(timePassed > 500 && timePassed < 1000) {
        intakeAssistLeftMotor.set_value(-127);
    } else if(timePassed >= 1000) {
        intakeAssistLeftMotor.set_value(0);
        intakeLeftOn = 0;
    }
}


void intakeRight() {
     if (master.get_digital(DIGITAL_A)){
         intakeRightMotor.set_value(127);
    }
     else {
         intakeRightMotor.set_value(0.0);
    }
}
    
void intakeRightAssist() {
     if (master.get_digital(DIGITAL_R2)){
        
        intakeAssistRightMotor.set_value(127);
        intakeAssistRightMotor.set_value(127);

 
     }
     else {
    
         intakeAssistRightMotor.set_value(0);

    }
}
void index() {
        indexingMotor.set_value(127 * master.get_digital(DIGITAL_B));
}