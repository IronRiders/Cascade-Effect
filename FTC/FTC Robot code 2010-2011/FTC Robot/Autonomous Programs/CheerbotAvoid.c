#pragma config(Hubs,  S1, HTMotor,  HTServo,  none,     none)
#pragma config(Sensor, S2,     sonar,               sensorSONAR)
#pragma config(Motor,  motorA,          motorUltrasonic, tmotorNormal, PIDControl, encoder)
#pragma config(Motor,  mtr_S1_C1_1,     LeftDrive,     tmotorNormal, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     RightDrive,    tmotorNormal, openLoop, reversed)
#pragma config(Servo,  srvo_S1_C2_1,    RightServo,           tServoStandard)
#pragma config(Servo,  srvo_S1_C2_2,    LeftServo,            tServoStandard)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "JoystickDriver.c"	 //Include file to "handle" the Bluetooth messages.

void MissionImpossible()
{
  //        100 = Tempo
  //          6 = Default octave
  //    Quarter = Default note length
  //        10% = Break between notes
  //
  PlayTone(  880,    7); wait1Msec(  75);  // Note(D, Duration(32th))
  PlayTone(  933,    7); wait1Msec(  75);  // Note(D#, Duration(32th))
  PlayTone(  880,    7); wait1Msec(  75);  // Note(D, Duration(32th))
  PlayTone(  933,    7); wait1Msec(  75);  // Note(D#, Duration(32th))
  PlayTone(  880,    7); wait1Msec(  75);  // Note(D, Duration(32th))
  PlayTone(  933,    7); wait1Msec(  75);  // Note(D#, Duration(32th))
  PlayTone(  880,    7); wait1Msec(  75);  // Note(D, Duration(32th))
  PlayTone(  933,    7); wait1Msec(  75);  // Note(D#, Duration(32th))
  PlayTone(  880,    7); wait1Msec(  75);  // Note(D, Duration(32th))
  PlayTone(  880,    7); wait1Msec(  75);  // Note(D, Duration(32th))
  PlayTone(  933,    7); wait1Msec(  75);  // Note(D#, Duration(32th))
  PlayTone(  988,    7); wait1Msec(  75);  // Note(E, Duration(32th))
  PlayTone( 1047,    7); wait1Msec(  75);  // Note(F, Duration(32th))
  PlayTone( 1109,    7); wait1Msec(  75);  // Note(F#, Duration(32th))
  PlayTone( 1175,    7); wait1Msec(  75);  // Note(G, Duration(32th))
  PlayTone( 1175,   14); wait1Msec( 150);  // Note(G, Duration(16th))
  PlayTone(    0,   27); wait1Msec( 300);  // Note(Rest, Duration(Eighth))
  PlayTone( 1175,   14); wait1Msec( 150);  // Note(G, Duration(16th))
  PlayTone(    0,   27); wait1Msec( 300);  // Note(Rest, Duration(Eighth))
  PlayTone( 1398,   14); wait1Msec( 150);  // Note(A#, Duration(16th))
  PlayTone(    0,   14); wait1Msec( 150);  // Note(Rest, Duration(16th))
  PlayTone(  784,   14); wait1Msec( 150);  // Note(C, Duration(16th))
  PlayTone(    0,   14); wait1Msec( 150);  // Note(Rest, Duration(16th))
  PlayTone( 1175,   14); wait1Msec( 150);  // Note(G, Duration(16th))
  PlayTone(    0,   27); wait1Msec( 300);  // Note(Rest, Duration(Eighth))
  PlayTone( 1175,   14); wait1Msec( 150);  // Note(G, Duration(16th))
  PlayTone(    0,   27); wait1Msec( 300);  // Note(Rest, Duration(Eighth))
  PlayTone( 1047,   14); wait1Msec( 150);  // Note(F, Duration(16th))
  PlayTone(    0,   14); wait1Msec( 150);  // Note(Rest, Duration(16th))
  PlayTone( 1109,   14); wait1Msec( 150);  // Note(F#, Duration(16th))
  PlayTone(    0,   14); wait1Msec( 150);  // Note(Rest, Duration(16th))
  PlayTone( 1175,   14); wait1Msec( 150);  // Note(G, Duration(16th))
  PlayTone(    0,   27); wait1Msec( 300);  // Note(Rest, Duration(Eighth))
  PlayTone( 1175,   14); wait1Msec( 150);  // Note(G, Duration(16th))
  PlayTone(    0,   27); wait1Msec( 300);  // Note(Rest, Duration(Eighth))
  PlayTone( 1398,   14); wait1Msec( 150);  // Note(A#, Duration(16th))
  PlayTone(    0,   14); wait1Msec( 150);  // Note(Rest, Duration(16th))
  PlayTone(  784,   14); wait1Msec( 150);  // Note(C, Duration(16th))
  PlayTone(    0,   14); wait1Msec( 150);  // Note(Rest, Duration(16th))
  PlayTone( 1175,   14); wait1Msec( 150);  // Note(G, Duration(16th))
  PlayTone(    0,   27); wait1Msec( 300);  // Note(Rest, Duration(Eighth))
  PlayTone( 1175,   14); wait1Msec( 150);  // Note(G, Duration(16th))
  PlayTone(    0,   27); wait1Msec( 300);  // Note(Rest, Duration(Eighth))
  PlayTone( 1047,   14); wait1Msec( 150);  // Note(F, Duration(16th))
  PlayTone(    0,   14); wait1Msec( 150);  // Note(Rest, Duration(16th))
  PlayTone( 1109,   14); wait1Msec( 150);  // Note(F#, Duration(16th))
  PlayTone(    0,   14); wait1Msec( 150);  // Note(Rest, Duration(16th))
  PlayTone( 1398,   14); wait1Msec( 150);  // Note(A#, Duration(16th))
  PlayTone( 1175,   14); wait1Msec( 150);  // Note(G, Duration(16th))
  PlayTone(  880,  108); wait1Msec(1200);  // Note(D, Duration(Half))
  PlayTone(    0,    7); wait1Msec(  75);  // Note(Rest, Duration(32th))
  PlayTone( 1398,   14); wait1Msec( 150);  // Note(A#, Duration(16th))
  PlayTone( 1175,   14); wait1Msec( 150);  // Note(G, Duration(16th))
  PlayTone(  831,  108); wait1Msec(1200);  // Note(C#, Duration(Half))
  PlayTone(    0,    7); wait1Msec(  75);  // Note(Rest, Duration(32th))
  PlayTone( 1398,   14); wait1Msec( 150);  // Note(A#, Duration(16th))
  PlayTone( 1175,   14); wait1Msec( 150);  // Note(G, Duration(16th))
  PlayTone(  784,  108); wait1Msec(1200);  // Note(C, Duration(Half))
  PlayTone(    0,   14); wait1Msec( 150);  // Note(Rest, Duration(16th))
  PlayTone(  932,   14); wait1Msec( 150);  // Note(A#5, Duration(16th))
  PlayTone(  784,   14); wait1Msec( 150);  // Note(C, Duration(16th))
  return;
}

void SuperM()
{
  //        180 = Tempo
  //          5 = Default octave
  //    Quarter = Default note length
  //        10% = Break between notes
  //
  PlayTone(  783,   15); wait1Msec( 167);  // Note(G, Duration(Eighth))
  PlayTone(  783,   15); wait1Msec( 167);  // Note(G, Duration(Eighth))
  PlayTone(  783,   15); wait1Msec( 167);  // Note(G, Duration(Eighth))
  PlayTone(  784,   30); wait1Msec( 333);  // Note(C6)
  PlayTone(  784,   15); wait1Msec( 167);  // Note(C6, Duration(Eighth))
  PlayTone( 1175,   60); wait1Msec( 667);  // Note(G6, Duration(Half))
  PlayTone(    0,   15); wait1Msec( 167);  // Note(Rest, Duration(Eighth))
  PlayTone( 1175,   15); wait1Msec( 167);  // Note(G6, Duration(Eighth))
  PlayTone( 1320,   23); wait1Msec( 250);  // Note(A6, Duration(Eighth .))
  PlayTone( 1175,    8); wait1Msec(  83);  // Note(G6, Duration(16th))
  PlayTone( 1047,   15); wait1Msec( 167);  // Note(F6, Duration(Eighth))
  PlayTone( 1175,  120); wait1Msec(1333);  // Note(G6, Duration(Whole))
  PlayTone(    0,   15); wait1Msec( 167);  // Note(Rest, Duration(Eighth))
  PlayTone(  783,   15); wait1Msec( 167);  // Note(G, Duration(Eighth))
  PlayTone(  783,   15); wait1Msec( 167);  // Note(G, Duration(Eighth))
  PlayTone(  783,   15); wait1Msec( 167);  // Note(G, Duration(Eighth))
  PlayTone(  784,   30); wait1Msec( 333);  // Note(C6)
  PlayTone(  784,   15); wait1Msec( 167);  // Note(C6, Duration(Eighth))
  PlayTone( 1175,   60); wait1Msec( 667);  // Note(G6, Duration(Half))
  PlayTone(    0,   15); wait1Msec( 167);  // Note(Rest, Duration(Eighth))
  PlayTone( 1175,   15); wait1Msec( 167);  // Note(G6, Duration(Eighth))
  PlayTone( 1320,   23); wait1Msec( 250);  // Note(A6, Duration(Eighth .))
  PlayTone( 1175,    8); wait1Msec(  83);  // Note(G6, Duration(16th))
  PlayTone( 1047,   15); wait1Msec( 167);  // Note(F6, Duration(Eighth))
  PlayTone( 1320,   15); wait1Msec( 167);  // Note(A6, Duration(Eighth))
  PlayTone( 1175,   90); wait1Msec(1000);  // Note(G6, Duration(Half .))
  PlayTone(    0,   30); wait1Msec( 333);  // Note(Rest)
  PlayTone(  784,   15); wait1Msec( 167);  // Note(C6, Duration(Eighth))
  PlayTone(  784,   15); wait1Msec( 167);  // Note(C6, Duration(Eighth))
  PlayTone(  784,   15); wait1Msec( 167);  // Note(C6, Duration(Eighth))
  PlayTone( 1481,   90); wait1Msec(1000);  // Note(B6, Duration(Half .))
  PlayTone( 1175,   45); wait1Msec( 500);  // Note(G6, Duration(Quarter .))
  PlayTone(  784,   15); wait1Msec( 167);  // Note(C6, Duration(Eighth))
  PlayTone(  784,   15); wait1Msec( 167);  // Note(C6, Duration(Eighth))
  PlayTone(  784,   15); wait1Msec( 167);  // Note(C6, Duration(Eighth))
  PlayTone( 1481,   90); wait1Msec(1000);  // Note(B6, Duration(Half .))
  PlayTone( 1175,   45); wait1Msec( 500);  // Note(G6, Duration(Quarter .))
  PlayTone(  784,   15); wait1Msec( 167);  // Note(C6, Duration(Eighth))
  PlayTone(  784,   15); wait1Msec( 167);  // Note(C6, Duration(Eighth))
  PlayTone(  784,   15); wait1Msec( 167);  // Note(C6, Duration(Eighth))
  PlayTone( 1481,   15); wait1Msec( 167);  // Note(B6, Duration(Eighth))
  PlayTone( 1320,   15); wait1Msec( 167);  // Note(A6, Duration(Eighth))
  PlayTone( 1481,   15); wait1Msec( 167);  // Note(B6, Duration(Eighth))
  PlayTone( 1046,   60); wait1Msec( 667);  // Note(C7, Duration(Half))
  PlayTone(  784,   15); wait1Msec( 167);  // Note(C6, Duration(Eighth))
  PlayTone(  784,   15); wait1Msec( 167);  // Note(C6, Duration(Eighth))
  PlayTone(  784,   15); wait1Msec( 167);  // Note(C6, Duration(Eighth))
  PlayTone(  784,   15); wait1Msec( 167);  // Note(C6, Duration(Eighth))
  PlayTone(  784,   15); wait1Msec( 167);  // Note(C6, Duration(Eighth))
  PlayTone(  784,   90); wait1Msec(1000);  // Note(C6, Duration(Half .))
  return;
}



task main()
{

  while (1)
  {

          servo[LeftServo] = 127;
          servo[RightServo] = 127;
          wait1Msec(200);
          servo[LeftServo] = 147;
          servo[RightServo] = 147;
          wait1Msec(200);

    int dist = SensorValue[sonar];
    if (dist == 255)
    {
      motor[LeftDrive] = 100;
      motor[RightDrive] = 100;
    }
    else
    {
      motor[LeftDrive] = -100;
      motor[RightDrive] = -100;
      wait1Msec(500);
      motor[LeftDrive] = 100;
      motor[RightDrive] = -100;
      wait1Msec(500);
    }


  }
}
