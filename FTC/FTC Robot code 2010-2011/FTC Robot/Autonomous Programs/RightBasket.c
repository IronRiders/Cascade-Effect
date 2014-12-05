
void RightBasket()
{

	goInches(10.75,-speed);
	goTurn(15, -speed);
	goInches(4.25, -speed);
	goTurn(15, -speed);
	servo[ArmLeft1] = 105;
	servo[ArmLeft2] = 105;
	servo[ArmRight1] = 150;
	servo[ArmRight2] = 150;
	wait1Msec(1500);

	goInches(9, -Minspeed);
	wait1Msec(500);
	goInches(.5, -Minspeed);
	wait1Msec(1000);
	for (int b = servo[Gate]; b<100; b++)
	{
	servo[Gate] +=1;
	wait1Msec(50);
  }
	wait1Msec(2000);
			goInches(5, -speed);
				goInches(10.5, speed);
		servo[Gate] = 76;//Reset position
  servo[ArmLeft1] = 255;//always 7 more
  servo[ArmLeft2] = 255;
  servo[ArmRight1] = 0;//always 5 less than Right 2
  servo[ArmRight2] = 0;
  wait1Msec(1000);



}
