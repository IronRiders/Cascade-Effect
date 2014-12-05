void DoublerCollet()
{



  //Move forward to line up with the center of the mountain
  goInches(54, 50);
  //Turn to face the mountain
  goTurn(90,50);
  //Go forward to cross the bridge
  goInches(75,40);
  //back up a little
  goInches(20,-50);
  //face the ir emitter
  alignIR();
  //move forward a litte
  goInches(22,50);
  //Turn a bit to make up for the inaccuracy of the IR
  goTurn(7,-50);
  //Go Forward to slam against the dispenser
  goInches(15,50);
  //Bring the gatherer 6" servo up and get baton
  servo[Gatherer6] = 0;
  //Wait a bit
  wait1Msec(2000);
  servo[Gatherer6] = 255;
  //wait for it to come back	up
  wait1Msec(2000);
   //Bring the gatherer 6" servo up and get baton
  servo[Gatherer6] = 0;
  //Wait a bit
  wait1Msec(2000);
  servo[Gatherer6] = 255;
  //wait for it to come back	up
  wait1Msec(2000);
  //turn on the ground gatherer
  motor[groundGatherer] = 50;
  //waiit a bit
  wait1Msec(100000);





}
