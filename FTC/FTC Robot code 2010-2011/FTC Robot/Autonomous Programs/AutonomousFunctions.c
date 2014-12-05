

float convert(float inches)
{
  //In this part, you convert the inches to encoder rotations and you return that value//
  return (inches* 112);
}


float convertDegree(float Degree)
{
  //In this part, you convert the inches to encoder rotations and you return that value//
  return (Degree* 16.1854); //15.204);
}


//You can use this function to move the robot a set amount of inches with a set speed//
void goInches(float inches, int speed)
{
  //reset the encoders...
  nMotorEncoder[RightDrive] = 0;
  nMotorEncoder[LeftDrive] = 0;
  wait1Msec(200);
  //start up the motors...
  motor[LeftDrive] = speed;
  motor[RightDrive] = speed;
  //you go move until you reach the desired amount of encoder counts...
  while (abs(nMotorEncoder[RightDrive]) < (convert(inches)) || abs(nMotorEncoder[LeftDrive]) < (convert(inches))){ }
  //You stop the motors after the while loop...
  motor[LeftDrive] = 0;
  motor[RightDrive] = 0;
  wait1Msec (200);
}
void goTurn(float Degree, int speed)
{
  //reset the encoders...
  nMotorEncoder[RightDrive] = 0;
  nMotorEncoder[LeftDrive] = 0;
  wait1Msec(300);
  //start up the motors...
  motor[LeftDrive] = -speed;
  motor[RightDrive] = speed;
  //you go move until you reach the desired amount of encoder counts...
  while ((abs(nMotorEncoder[RightDrive]) < (convertDegree(Degree))) || abs(nMotorEncoder[LeftDrive]) < (convertDegree(Degree))){ }
  //You stop the motors after the while loop...
  motor[LeftDrive] = 0;
  motor[RightDrive] = 0;
  wait1Msec (300);
}
/*void alignIR()
{
  for(int i = 0; i<20;i++)
  {
    while (SensorValue(IR) == 0)
    {
      goTurn(3,50);
    }
    while(SensorValue(IR) < 5)
    {
      goTurn(3,50);
    }

    while(SensorValue(IR) > 5)
    {
      goTurn(3,-50);
    }
  }
}
*/
