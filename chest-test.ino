// Include the AccelStepper Library
#include <AccelStepper.h>

// Define step constants
#define FULLSTEP 4

// Creates two instances
// Pins entered in sequence IN1-IN3-IN2-IN4 for proper step sequence
AccelStepper stepper1(FULLSTEP, 9, 11, 10, 12);
AccelStepper stepper2(FULLSTEP, 5, 7, 6, 8);

void setup() {
  // set the maximum speed, acceleration factor,
  // initial speed and the target position for motor 1
    stepper1.setMaxSpeed(500);
    stepper1.setAcceleration(50.0);
    stepper1.setSpeed(100);
    stepper1.moveTo(16304);

  
  // set the same for motor 2
  stepper2.setMaxSpeed(500);
  stepper2.setAcceleration(50.0);
  stepper2.setSpeed(100);
  stepper2.moveTo(16304);
}

void loop() {
  // Change direction once the motor reaches target position
  //if (stepper1.distanceToGo() == 0) 
  //  stepper1.moveTo(-stepper1.currentPosition());
  //if (stepper2.distanceToGo() == 0) 
  //  stepper2.moveTo(-stepper2.currentPosition());
  
  // Move the motor one step
  stepper1.run();
  stepper2.speed();
 
}
