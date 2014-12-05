void LeftBridge()
{
  goInches(30, -speed);
  goTurn(90, -speed);
  goInches(12.5, speed);
  goInches(.5, -speed);
  servo[FrontHolder] = 185;
  wait1Msec(800);
  goInches(4, MountainSpeed);
  servo[FrontHolder] = 0;
  goInches(29.25, MountainSpeed);
  while(1)
  {
    wait1Msec(2500);
    int xAxis;
    HTACreadX(Accel, xAxis); //stores the z value to the variable zAxis
    nxtDisplayCenteredTextLine(2, "X:"+xAxis);
    if (xAxis > 2)
    {
      goInches(.08, MountainSpeed);
    }
    else if (xAxis < -24)
    {
      goInches(.08, -MountainSpeed);
    }
    else
    {
      break;
    }


  }
}
