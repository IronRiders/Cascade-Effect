void RightBasketFarBridge()
{
RightBasketFar();
goInches(2, speed);
goTurn(47, speed);
goInches(36, speed);
goInches(10,Minspeed);
wait1Msec(300);
goInches(2, Minspeed);
goTurn(92, speed);
goInches(10, speed);
goInches(1, -speed);
  servo[FrontHolder] = 140;
  wait1Msec(1500);
  goInches(4, MountainSpeed);
  servo[FrontHolder] = 0;
  goInches(29.25, MountainSpeed);
  while(1)
  {
    wait1Msec(3000);
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
