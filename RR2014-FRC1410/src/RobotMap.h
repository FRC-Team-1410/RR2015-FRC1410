/*
 * RobotMap.h
 *
 *  Created on: Jan 31, 2015
 *      Author: Lord Supreme Programmer Isaac
 */

#ifndef ROBOTMAP_H_
#define ROBOTMAP_H_

//drive motors
const int front_left_drive = 1;
const int front_right_drive = 2;
const int back_left_drive = 3;
const int back_right_drive = 4;

//tote intake motors
const int left_intake_wheel = 5;
const int right_intake_wheel = 6;
const int left_elbow_motor = 7;
const int right_elbow_motor = 8;
const int left_inner_wheel = 13;
const int right_inner_wheel = 14;

//elevator motors
const int tote_elev_motor = 9;
const int can_elev_motor = 10;

//can manipulator motors
const int can_manipulator_left = 11;
const int can_manipulator_right = 12;

//drive sensors
const int drive_limit_switch = 0;
const int drive_gyro_channel = 5;
const int left_encoder_a = 1;
const int left_encoder_b = 2;
const int right_encoder_a = 3;
const int right_encoder_b = 4;
//tote intake sensors

//elevator sensors
const int tote_upper_limit = 1;
const int tote_lower_limit = 2;
const int can_upper_limit = 3;
const int can_lower_limit = 4;

//can manipulator sensors

//joystick button numbers
const int inner_rollers_in = 0;
//const int unassigned = 1;
//const int unassigned = 2;
const int inner_rollers_out = 3;
const int reset_robot_button = 4;
const int outer_rollers_toggle = 5;
const int pick_can_up = 6;
const int pick_tote_up = 7;
const int move_can_lifter = 8;
const int move_tote_lifter = 9;

//driver joystick axis numbers
const int left_drive_axis = 1;
const int right_drive_axis = 5;

//operator joystick axis numbers
const int articulate_upper_arms = 0;
const int articulate_lower_arms = 4;
//other constants
const double auto_drive_distance = 48;

#endif /* ROBOTMAP_H_ */
