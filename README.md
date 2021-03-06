# RR2015-FRC1410
The code is written in C++, using the Command Based Robot template. We have 4 subsystems, the DriveBase, IntakeArms, ToteLifter, and CanManipulator. 

The DriveBase Subsystem has 4 CANTalons, two per side to drive the robot. It also has a Gyro, for turning. We drive the DriveBase using a two stick tank drive, meaning that the left stick drives the left side of the robot, and the right stick drives the right side. Inside of this subsystem are also methods to return the Encoder (we have 2, one per side) values and Gyro values during Auto.

The IntakeArms Subsystem has 4 CANTalons, two per side, with one motor to move the arm and one to turn a roller on each side. There are two methods, one to move the elbows, and one to toggle the rollers. Also, we have methods to use potentiometers, but we figured that we couldn't have them on the robot for mechanical reasons, so these methods are never used. 

The ToteLifter Subsystem has 1 CANTalon, used to drive the elevator up and down. We have one method to drive the elevator, one to return the state of the top (reverse) limit switch, and one to return the bottom (forward) limit switch.

The CanManipulator Subsystem has 3 CANTalons, one to drive the elevator, and one on each side to move the arm. There is also one potentiometer plugged into the left and right CANTalon, and two limit switches in the elevator motor. There are two main methods, one to drive the elevator, and one to drive them arms. We also have methods to return potentiometer and limit switch values, and to reset the potentiometers. 

Moving on to control of the robot we have 2 Joysticks, which are Xbox 360 controllers for us. One is driver_stick, and is only used to drive the robot around, axis 1 for left, and axis 5 for right. The second is operator_stick, on which we use 4 JoystickButtons and 2 axis. JoystickButton 1 (A button) toggles the rollers. JoystickButton 2 (B button) toggles the back (ToteLifter) elevator. JoystickButton 3 (X button) moves the front (CanManipulator) elevator down, and JoystickButton 4 (Y button) moves it up. Axis 0 moves the upper (CanManipulator) arms, and axis 4 moves the lower (IntakeArms) arms. 

All of the Commands are organized into folders labeled with their respective Subsystems, so there are 4 (DriveBase, IntakeArms, CanManipulator, ToteLifter) folders. There is also an Auto folder, but this is unfinished at this time. 
You may notice two weird things. The first is the array and method at the top of the OI. These are used to add a dead-zone into the controller, making them less sensitive. The second would be the SimultaneousOp CommandGroups in the IntakeArms and CanManipulator Commands folders. These are used so that we can both drive the rollers/arms, and the elevator/arms simultaneously. We could have had a command for this, but by using a command group we can also use the separate commands outside of it. 

