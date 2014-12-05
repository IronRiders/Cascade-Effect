task Oscillate3Inch()
{
  while(1)
  {
    servo[Gatherer3] = 0;
    wait1Msec(1000);
    servo[Gatherer3] = 255;
    wait1Msec(1000);
  }
}
task Oscillate6Inch()
{
   while(1)
  {
    servo[Gatherer6] = 255;
    wait1Msec(1000);
    servo[Gatherer6] = 0;
    wait1Msec(1000);
  }
}
task Oscillate9Inch()
{
   while(1)
  {
    servo[Gatherer9] = 0;
    wait1Msec(1000);
    servo[Gatherer9] = 255;
    wait1Msec(1000);
  }
}
