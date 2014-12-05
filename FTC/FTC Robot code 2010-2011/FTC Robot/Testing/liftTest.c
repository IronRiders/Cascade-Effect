#pragma config(Hubs,  S1, HTMotor,  HTMotor,  none,     none)
#pragma config(Hubs,  S2, HTServo,  HTServo,  none,     none)
#pragma config(Sensor, S4,     Accel,               sensorI2CHiTechnicAccel)
#pragma config(Motor,  mtr_S1_C1_1,     LeftDrive,     tmotorNormal, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     RightDrive,    tmotorNormal, openLoop)
#pragma config(Motor,  mtr_S1_C2_1,     Lift,          tmotorNormal, openLoop, reversed, encoder)
#pragma config(Motor,  mtr_S1_C2_2,     Gatherer,      tmotorNormal, openLoop, encoder)
#pragma config(Servo,  srvo_S2_C1_1,    armLeft1,             tServoStandard)
#pragma config(Servo,  srvo_S2_C1_2,    armLeft2,             tServoStandard)
#pragma config(Servo,  srvo_S2_C1_3,    armRight1,            tServoStandard)
#pragma config(Servo,  srvo_S2_C1_4,    armRight2,            tServoStandard)
#pragma config(Servo,  srvo_S2_C1_5,    topGate,              tServoStandard)
#pragma config(Servo,  srvo_S2_C1_6,    Gate,                 tServoStandard)
#pragma config(Servo,  srvo_S2_C2_1,    Gatherer3,            tServoStandard)
#pragma config(Servo,  srvo_S2_C2_2,    Gatherer6,            tServoStandard)
#pragma config(Servo,  srvo_S2_C2_3,    Gatherer9,            tServoStandard)
task main()
{
  while(1)
  {
 motor[Lift] = -50;
}
}
