#pragma config(Hubs,  S1, HTMotor,  none,     none,     none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Motor,  mtr_S1_C1_1,     leftMotor,     tmotorTetrix, openLoop, reversed, driveLeft)
#pragma config(Motor,  mtr_S1_C1_2,     rightMotor,    tmotorTetrix, openLoop, driveRight)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "JoystickDriver.c"

#pragma DebuggerWindows("joystickSimple")

task main()
{
  while(1 == 1)
  {
    getJoystickSettings(joystick);
    motor[leftMotor] = joystick.joy1_y1;
    motor[rightMotor] = joystick.joy1_y2;
  }
}
