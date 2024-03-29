#pragma config(Hubs,  S1, HTMotor,  HTMotor,  none,     none)
#pragma config(Hubs,  S2, HTServo,  HTServo,  none,     none)
#pragma config(Sensor, S3,     touchMux,            sensorHiTechnicTouchMux)
#pragma config(Sensor, S4,     Accel,               sensorI2CCustom)
#pragma config(Motor,  mtr_S1_C1_1,     LeftDrive,     tmotorNormal, openLoop, reversed, encoder)
#pragma config(Motor,  mtr_S1_C1_2,     RightDrive,    tmotorNormal, openLoop, encoder)
#pragma config(Motor,  mtr_S1_C2_1,     Gatherer,      tmotorNormal, openLoop, reversed)
#pragma config(Motor,  mtr_S1_C2_2,     Lift,          tmotorNormal, openLoop)
#pragma config(Servo,  srvo_S2_C1_1,    ,                     tServoStandard)
#pragma config(Servo,  srvo_S2_C1_2,    armLeft1,             tServoStandard)
#pragma config(Servo,  srvo_S2_C1_3,    armLeft2,             tServoNone)
#pragma config(Servo,  srvo_S2_C1_4,    armRight1,            tServoStandard)
#pragma config(Servo,  srvo_S2_C1_5,    armRight2,            tServoStandard)
#pragma config(Servo,  srvo_S2_C1_6,    Gate,                 tServoStandard)
#pragma config(Servo,  srvo_S2_C2_4,    BackHolder1,          tServoStandard)
#pragma config(Servo,  srvo_S2_C2_5,    BackHolder2,          tServoStandard)
#pragma config(Servo,  srvo_S2_C2_6,    FrontHolder,          tServoStandard)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "JoystickDriver.c"
#include "accelDriver.h"
task main()
{
   bDisplayDiagnostics = false;
  bNxtLCDStatusDisplay = false;
  eraseDisplay();
  while(1)
  {
int xAxis;
HTACreadx(Accel, xAxis); //stores the z value to the variable zAxis
nxtDisplayCenteredTextLine(2, "X:"+xAxis);
}
}
