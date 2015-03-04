/*
* RobotMap defines motor and sensor ports and buttons/axis for the robot.
* This is for ease of use and so that we can easily make sure that there
* are no conflicts
*/

#ifndef ROBOTMAP_H_
#define ROBOTMAP_H_

//DriveBase motors
const int frontLeftDrive = 1;
const int frontRightDrive = 2;
const int backLeftDrive = 3;
const int backRightDrive = 4;

//CanManipulator motors
const int canLifterMotor = 10;
const int leftUpperArm = 11;
const int rightUpperArm = 12;

//ToteLifter motors
const int toteLifterMotor = 9;

//IntakeArms motors
const int leftIntakeRoller = 5;
const int rightIntakeRoller = 6;
const int leftLowerArm = 7;
const int rightLowerArm = 8;

//Sensor ports
const int gyroPort = 0;

//DriveTank
const int leftDriveAxis = 1;
const int rightDriveAxis = 5;

//Operator
const int intakeInwards = 0;
const int moveToteLifter = 1;
const int moveCanLifter = 2;
const int intakeOutwards = 3;
const int freeDriveCan = 4;
const int freeDriveTote = 5;

#endif /* ROBOTMAP_H_ */
