////////////////////////////////////MAIN FUNCTIONS WHICH ARE ACCESSABLE TO OTHER FILES/////////////////
void checkJoystick1()
{

  checkJoy1_y1();
  checkJoy1_y2();
checkButtonsJoy1();

}

void checkJoystick2()
{
  checkJoy2_y1();
  checkJoy2_y2();
checkButtonsJoy2();

}

void checkButtonsJoy1()
{



  if (joy1Btn(1))
  {
speed = 25;
  }
  if (joy1Btn(2))
  {
   speed = 50;

  }
  if (joy1Btn(3))
  {
   speed = 75;

  }

  if (joy1Btn(4))
  {
speed = 100;
  }
  if (joy1Btn(7))
  {
  /* nVolume = 4;
   for (int b = 0; b<500; b++)
   {
   for(int i = 0; i< 100; i++)
   {
              PlayTone(200, 5);
 PlayTone(784, 5);
       PlayTone(900, 5);
  PlayTone(500, 5);
    PlayTone(800, 5);
          PlayTone(900, 5);
      PlayTone(900, 5);

  }
  PlayTone(800, 10000);
} */ }



}
void checkButtonsJoy2()
{
  if (joy2Btn(7))
{
 motor[Lift] = 60;
}
else if (joy2Btn(8))
{
 motor[Lift] = -60;
}
else
{
 motor[Lift] = 0;
}
if (joy2Btn(5))
{

}
else if (joy2Btn(6))
{

}
else
{

}

  if (joy2Btn(9))
  {


  }
  else if (joy2Btn(10))
  {

  }
  else
  {

  }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////SUB FUNCTIONS ACCESSED BY MAIN FUNCTIONS///////////////////////////////////
void checkJoy2_y1()
{
//motor[Gatherer] = 50;
  if (joystick.joy2_y1 > 25 || joystick.joy2_y1 < -25)
  {
      motor[Gatherer] = (joystick.joy2_y1 * (.391));
  }
  else
  {
    motor[Gatherer] = 0;
  }

}
void checkJoy2_y2()
{
  //If joystick 2 of Y2 is pressed, the arm will go up
  if (joystick.joy2_y2 > 25 || joystick.joy2_y2 < -25)
  {
    if (joystick.joy2_y2 < -25)
    {
      {
        servo[armLeft1] ++;

        servo[armRight1] --;

      }
    }
    if (joystick.joy2_y2 > 25)
    {
       servo[armLeft1] --;

       servo[armRight1] ++;

    }
  }

}
void checkJoy1_y1()
{
  if (joystick.joy1_y1 > 25 || joystick.joy1_y1 < -25)
  {

    if (joystick.joy1_y1 < -25)
    {
      motor[LeftDrive] = -speed;
    }
    if (joystick.joy1_y1 > 25)
    {
      motor[LeftDrive] = speed;
    }
  }
  //if not, it will stop the left drive
  else
  {
    motor[LeftDrive] = 0;
  }
}
void checkJoy1_y2()
{
  //If joystick 1 of Y2 is pressed, Right motor wil move at 'speed'
  if (joystick.joy1_y2 > 25 || joystick.joy1_y2 < -25)
  {
    if (joystick.joy1_y2 < -25)
    {
      {
        motor[RightDrive] = -speed;
      }
    }
    if (joystick.joy1_y2 > 25)
    {
      motor[RightDrive] = speed;
    }
  }
  //if not, it will be back to 0
  else
  {
    motor[RightDrive] = 0;
  }
}
//////////////////////////////////////////////////////////////////////////////////////////////////////
