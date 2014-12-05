float convert(float inches)
{
  //Conversion rate between inches and encoder counts//
  return (inches * 100); //Only an example, test your own robot to figure out the exact value
                         //Recommended that you figure out how many encoder counts for 10 feet, and divide by 120
}


float convertDegree(float Degree)
{
  //Conversion rate between degrees and encoder counts//
  return (Degree * 10); //Only an example, test your own robot to figure out the exact value
                        //Recommended that you figure out how many encoder counts for 5 complete rotations, and divide by 1800
}


//You can use this function to move the robot a set amount of inches with a set speed//
void goInches(float inches, int speed)
{
  //Reset the encoders...
  nMotorEncoder[RightDrive] = 0;
  nMotorEncoder[LeftDrive] = 0;
  wait1Msec(200);
  //Start up the motors...
  motor[LeftDrive] = speed;
  motor[RightDrive] = speed;
  //Move until the desired number of encoder counts is reached...
  while (abs(nMotorEncoder[RightDrive]) < (convert(inches)) || abs(nMotorEncoder[LeftDrive]) < (convert(inches))){ }
  //Stop the motors after desired number of encoder counts is reached
  motor[LeftDrive] = 0;
  motor[RightDrive] = 0;
  wait1Msec (200);
}

//You can use this function to rotate the robot a set amount of degrees with a set speed//
void goTurn(float Degree, int speed)
{
  //Reset the encoders...
  nMotorEncoder[RightDrive] = 0;
  nMotorEncoder[LeftDrive] = 0;
  wait1Msec(300);
  //Start up the motors...
  motor[LeftDrive] = -speed;
  motor[RightDrive] = speed;
  //Move until the desired number of encoder counts is reached...
  while ((abs(nMotorEncoder[RightDrive]) < (convertDegree(Degree))) || abs(nMotorEncoder[LeftDrive]) < (convertDegree(Degree))){ }
  //Stop the motors after desired number of encoder counts is reached
  motor[LeftDrive] = 0;
  motor[RightDrive] = 0;
  wait1Msec (300);
}
