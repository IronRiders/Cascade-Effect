
void RightBasketFar()
{
goInches(49, -speed);
  goTurn(4.5,-speed);
  goInches(19,-speed);
  goTurn(25, -speed);
  goInches(6, -Minspeed);
  wait1Msec(500);
  servo[MagnetBlocker] = 30;
  servo[ArmLeft1] = 105;
  servo[ArmLeft2] = 105;
  servo[ArmRight1] = 155;
  servo[ArmRight2] = 155;
  wait1Msec(500);
	for (int b = servo[Gate]; b<100; b++)
	{
	servo[Gate] +=1;
	wait1Msec(50);
  }
  wait1Msec(2000);

  goInches(9, -speed);
  servo[Gate] = 84;
  servo[ArmLeft1] = 255;//always 7 more
  servo[ArmLeft2] = 255;
  servo[ArmRight1] = 0;//always 5 less than Right 2
  servo[ArmRight2] = 0;
}
