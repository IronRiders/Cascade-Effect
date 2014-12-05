void LeftBasket()
{
	goInches(11,-speed);
	goTurn(20, speed);
	goInches(4, -speed);
	goTurn(15, speed);
	servo[ArmLeft1] = 105;
	servo[ArmLeft2] = 105;
	servo[ArmRight1] = 150;
	servo[ArmRight2] = 150;
	wait1Msec(750);

	goInches(9.5, -Minspeed);
	wait1Msec(500);
	goInches(.5, -Minspeed);
	wait1Msec(300);
	for (int b = servo[Gate]; b<100; b++)
	{
	servo[Gate] +=1;
	wait1Msec(50);
  }
	wait1Msec(2000);
		goInches(5, -speed);
				goInches(8, speed);
		servo[Gate] = 84;//Reset position
  servo[ArmLeft1] = 255;//always 7 more
  servo[ArmLeft2] = 255;
  servo[ArmRight1] = 0;//always 5 less than Right 2
  servo[ArmRight2] = 0;
  wait1Msec(1000);


}
