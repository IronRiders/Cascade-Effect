void LeftBasketFar()
{
  goInches(52, -speed);
  goTurn(2.4,speed);
  goInches(17,-speed);
  goTurn(37.5, speed);
  goInches(7, -Minspeed);
  servo[MagnetBlocker] = 30;
  servo[ArmLeft1] = 105;
  servo[ArmLeft2] = 105;
  servo[ArmRight1] = 150;
  servo[ArmRight2] = 150;
  wait1Msec(1500);
  servo[Gate] = 100;
  wait1Msec(2000);
  servo[Gate] = 84;
  servo[ArmLeft1] = 255;//always 7 more
  servo[ArmLeft2] = 255;
  servo[ArmRight1] = 0;//always 5 less than Right 2
  servo[ArmRight2] = 0;
  goInches(9, -speed);
}
