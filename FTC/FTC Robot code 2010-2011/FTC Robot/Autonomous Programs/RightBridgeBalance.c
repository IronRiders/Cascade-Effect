/*
This mission is to start from the red Left side and climb onto the Bridge. It will balance.
VALUE: 15PTS.
*/

void RightBridgeBalance()
{
  RightBasket();
  goInches(2, -speed);
  goTurn(145, speed);
  goInches(12.5, speed);
  goInches(1, -speed);
  servo[FrontHolder] = 185;
  wait1Msec(1500);
  goInches(4, MountainSpeed);
  servo[FrontHolder] = 0;
  goInches(28.25, MountainSpeed);
  while(1)
  {
    wait1Msec(2500);
    int xAxis;
    HTACreadX(Accel, xAxis); //stores the z value to the variable zAxis
    nxtDisplayCenteredTextLine(2, "X:"+xAxis);
    if (xAxis > 2)
    {
      goInches(.1, MountainSpeed);
    }
    else if (xAxis < -24)
    {
      goInches(.1, -MountainSpeed);
    }
    else
    {
      break;
    }


  }

}
