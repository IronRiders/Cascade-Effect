#pragma config(Hubs,  S1, HTMotor,  HTMotor,  none,     none)
#pragma config(Hubs,  S2, HTServo,  HTServo,  none,     none)
#pragma config(Motor,  mtr_S1_C1_1,     motorD,        tmotorNormal, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     motorE,        tmotorNormal, openLoop)
#pragma config(Motor,  mtr_S1_C2_1,     motorF,        tmotorNormal, openLoop)
#pragma config(Motor,  mtr_S1_C2_2,     motorG,        tmotorNormal, openLoop)
#pragma config(Servo,  srvo_S2_C1_1,    ,                     tServoStandard)
#pragma config(Servo,  srvo_S2_C1_5,    topGate,              tServoStandard)
#pragma config(Servo,  srvo_S2_C1_6,    gate,                 tServoStandard)
#pragma config(Servo,  srvo_S2_C2_1,    gatherer3,            tServoStandard)
#pragma config(Servo,  srvo_S2_C2_2,    gatherer6,            tServoStandard)
#pragma config(Servo,  srvo_S2_C2_3,    gatherer9,            tServoStandard)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
  while(1)
  {
  servo[topGate] = 100;
  wait1Msec(2000);
    servo[topGate] = 160;
    wait1Msec(2000);
  }
}
