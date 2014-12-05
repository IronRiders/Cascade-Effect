void ChooseStrategy()
{

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////																																														 ///////
  ////////																	 Choosing the Color																				 ///////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////

  eraseDisplay();
 /* nxtDisplayTextLine(1,"Choose Color:");
  nxtDisplayStringAt(15,46, "Red");

  while (nNxtButtonPressed!=Ok)
  {
    if (nNxtButtonPressed==Backward || nNxtButtonPressed==Forward)
    {
        PlayImmediateTone(900, 15);
      if (color==Blue)
      {
        color=Red;
        nxtDisplayClearTextLine(2);
        nxtDisplayStringAt(15,46, "Red");
      }
      else if (color==Red)
      {
        color=Blue;
        nxtDisplayClearTextLine(2);
        nxtDisplayStringAt(15,46, "Blue");
      }
    }
    wait1Msec(300);
  }
  PlayImmediateTone(800, 15);*/
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////																																														 ///////
  ////////																	Choosing Which Side																				 ///////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////


  nxtDisplayTextLine(1, "Choose Side:");
  nxtDisplayStringAt(15,46, "Left");
  wait1Msec(300);

  while (nNxtButtonPressed!=Ok)
  {
    if (nNxtButtonPressed==Backward || nNxtButtonPressed==Forward)
    {
        PlayImmediateTone(900, 15);
      if (side==LeftSide)
      {
        side=RightSide;
        nxtDisplayClearTextLine(2);
        nxtDisplayStringAt(15,46, "Right");
      }
      else if (side == RightSide)
      {
        side=LeftSide;
        nxtDisplayClearTextLine(2);
        nxtDisplayStringAt(15,46, "Left");
      }
    }


    wait1Msec(250);
  }
  PlayImmediateTone(800, 15);
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////																																														 ///////
  ////////																	 Choosing the strategy																		 ///////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////

  nxtDisplayTextLine(3, "Choose Strategy:");
  nxtDisplayStringAt(15,30, "Score");

  wait1Msec(300);
  while (nNxtButtonPressed!=Ok)
  {
    if (nNxtButtonPressed==Backward || nNxtButtonPressed==Forward)
    {
        PlayImmediateTone(900, 15);
      if (strategy==Score)
      {
        strategy=OtherSide;
        nxtDisplayClearTextLine(4);
        nxtDisplayStringAt(15,30, "Other Side");
      }
      else if (strategy==OtherSide)
      {
        strategy=Balance;
        nxtDisplayClearTextLine(4);
        nxtDisplayStringAt(15,30, "Balance");
      }
      else if (strategy==Balance)
      {
        strategy=Block;
        nxtDisplayClearTextLine(4);
        nxtDisplayStringAt(15,30, "Block");

      }
      else if (strategy==Block)
      {
        strategy=Score;
        nxtDisplayClearTextLine(4);
        nxtDisplayStringAt(15,30, "Score");
      }
    }



    wait1Msec(250);

  }
  PlayImmediateTone(800, 15);
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////																																														 ///////
  ////////																	 Choosing the goal - Only if scoring											 ///////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if (strategy == Score)
  {
    nxtDisplayClearTextLine(6);

    nxtDisplayTextLine(5, "Choose Score:");
    nxtDisplayStringAt(15,14, "Dump");
    wait1Msec(300);
    while (nNxtButtonPressed!=Ok)
    {
      if (nNxtButtonPressed==Backward || nNxtButtonPressed==Forward)
      {
        PlayImmediateTone(900, 15);
        if (goal==Doubler)
        {
          goal=preloadDump;
          nxtDisplayClearTextLine(6);
          nxtDisplayStringAt(15,14, "Dump");
        }
        else if (goal==preloadDump)
        {
          goal=ScoreAndCross;
          nxtDisplayClearTextLine(6);
          nxtDisplayStringAt(15,14, "Dump and Cross");
        }
        else if (goal==ScoreAndCross)
        {
          goal=Corrigated;
          nxtDisplayClearTextLine(6);
          nxtDisplayStringAt(15,14, "Corrigated");
        }

        else if (goal==Corrigated)
        {
          goal=FarDump;
          nxtDisplayClearTextLine(6);
          nxtDisplayStringAt(15,14, "Far Dump");
        }
        else if (goal==FarDump)
        {
          goal=FarDumpMountain;
          nxtDisplayClearTextLine(6);
          nxtDisplayStringAt(15,14, "Far Dump Mountain");
        }
        else if (goal==FarDumpMountain)
        {
          goal=FarDumpBridge;
          nxtDisplayClearTextLine(6);
          nxtDisplayStringAt(15,14, "Far Dump Bridge");
        }
        else if (goal==FarDumpBridge)
        {
          goal=Doubler;
          nxtDisplayClearTextLine(6);
          nxtDisplayStringAt(15,14, "Get Doubler");
        }

      }
      wait1Msec(150);
    }
  }
  PlayImmediateTone(800, 15);
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////
  ////////																																														 ///////
  ////////																	Choosing where to block - Only if blocking								 ///////
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if (strategy == Block)
  {


    nxtDisplayTextLine(5, "Choose Block:");
    nxtDisplayStringAt(15,14, "Ramp");

    wait1Msec(300);
    while (nNxtButtonPressed!=Ok)
    {
      if (nNxtButtonPressed==Backward)
      {
        PlayImmediateTone(900, 15);
        if (block==Ramp)
        {
          block = Bridge;
          nxtDisplayClearTextLine(6);
          nxtDisplayStringAt(15,14, "Bridge");
        }
        else if (block==Bridge)
        {
          block=DoublerBlock;
          nxtDisplayClearTextLine(6);
          nxtDisplayStringAt(15,14, "Doubler");
        }
        else if (block==DoublerBlock)
        {
          block=Ramp;
          nxtDisplayClearTextLine(6);
          nxtDisplayStringAt(15,14, "Ramp");
        }
      }
      if (nNxtButtonPressed==Forward)
      {
        if (Block==Bridge)
        {
          block=Ramp;
          nxtDisplayClearTextLine(6);
          nxtDisplayStringAt(15,14, "Ramp");
        }
        else if (block==Ramp)
        {
          block=DoublerBlock;
          nxtDisplayClearTextLine(6);
          nxtDisplayStringAt(15,14, "Doubler");
        }
         else if (block==DoublerBlock)
        {
          block=Bridge;
          nxtDisplayClearTextLine(6);
          nxtDisplayStringAt(15,14, "Bridge");
        }
      }

      wait1Msec(250);
    }
  }


  PlayImmediateTone(800, 150);
  eraseDisplay();

}
