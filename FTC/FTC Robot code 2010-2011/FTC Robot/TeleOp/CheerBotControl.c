#pragma config(Hubs,  S1, HTMotor,  HTServo,  none,     none)
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





task main()
{
  while (true)
  {
    getJoystickSettings(joystick);

    if (joy1Btn(1))
    {
     MissionImpossible();
    }
    if (joy1Btn(5))
    {
      servo[LeftServo] = 255;
    }
    else
    {
      servo[LeftServo] = 127;
    }
    if (joy1Btn(6))
    {
      servo[RightServo] = 0;
    }
    else
    {
      servo[RightServo] = 127;
    }
    if (joystick.joy1_y1 < -25 || joystick.joy1_y1 > 25)
    {
      motor[RightDrive] = (.391)*joystick.joy1_y1;
    }
    else
    {
      motor[RightDrive] = 0;
    }
    if (joystick.joy1_y2 < -25 || joystick.joy1_y2 > 25)
    {
      motor[LeftDrive] = (.391)*joystick.joy1_y2;
    }
    else
    {
      motor[LeftDrive] = 0;
    }

  }
}
