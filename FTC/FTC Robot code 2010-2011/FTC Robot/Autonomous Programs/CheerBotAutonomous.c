#pragma config(Hubs,  S1, HTMotor,  HTServo,  none,     none)
#pragma config(Sensor, S2,     sonar,               sensorSONAR)
#pragma config(Motor,  motorA,          motorUltrasonic, tmotorNormal, PIDControl, encoder)
#pragma config(Motor,  mtr_S1_C1_1,     LeftDrive,     tmotorNormal, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     RightDrive,    tmotorNormal, openLoop, reversed)
#pragma config(Servo,  srvo_S1_C2_1,    RightServo,           tServoStandard)
#pragma config(Servo,  srvo_S1_C2_2,    LeftServo,            tServoStandard)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "JoystickDriver.c"	 //Include file to "handle" the Bluetooth messages.

task main()
{
  while(1)
  {
    nMotorEncoder[motorUltrasonic] = 0;

    while (nMotorEncoder[motorUltrasonic] < 360)
    {
      if (SensorValue[sonar] != 255)
      {
        motor[motorUltrasonic] = 0;
        for(int i = 0; i<10; i++)
        {
          servo[LeftServo] = 127;
          servo[RightServo] = 127;
          wait1Msec(200);
          servo[LeftServo] = 147;
          servo[RightServo] = 147;
          wait1Msec(200);
        }



      }
      else
      {
        servo[LeftServo] = 255;
        servo[RightServo] = 0;
        motor[motorUltrasonic] = 5;
      }


    }

    while (nMotorEncoder[motorUltrasonic] > 0)
    {
      if (SensorValue[sonar] != 255)
      {
        motor[motorUltrasonic] = 0;
        for(int i = 0; i<10; i++)
        {
          servo[LeftServo] = 127;
          servo[RightServo] = 127;
          wait1Msec(200);
          servo[LeftServo] = 147;
          servo[RightServo] = 147;
          wait1Msec(200);
        }

      }
      else
      {
        servo[LeftServo] = 255;
        servo[RightServo] = 0;
        motor[motorUltrasonic] = -5;
      }


    }
  }
}
