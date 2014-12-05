#pragma config(Sensor, S4,     HTAC,                sensorLowSpeed)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*
 * $Id: HTAC-test1.c 21 2010-02-17 10:19:42Z xander $
 */

/**
 * HTAC-driver.h provides an API for the HiTechnic Acceleration Sensor.  This program
 * demonstrates how to use that API.
 *
 * Changelog:
 * - 0.1: Initial release
 * - 0.2: Make use of new API calls
 * - 0.3: Better comments
 * - 0.4: Fixed display line (thanks Dave)
 *
 * Credits:
 * - Big thanks to HiTechnic for providing me with the hardware necessary to write and test this.
 *
 * License: You may use this code as you wish, provided you give credit where it's due.
 *
 * THIS CODE WILL ONLY WORK WITH ROBOTC VERSION 2.00 AND HIGHER.
 * Xander Soldaat (mightor_at_gmail.com)
 * 31 December 2009
 * version 0.4
 */

#include "drivers/common.h"
#include "drivers/HTAC-driver.h"

task main () {
  int _x_axis1 = 0;
  int _y_axis1 = 0;
  int _z_axis1 = 0;

  int _x_axis2 = 0;
  int _y_axis2 = 0;
  int _z_axis2 = 0;

  string _tmp;

  nxtDisplayCenteredTextLine(0, "HiTechnic");
  nxtDisplayCenteredBigTextLine(1, "Accel");
  nxtDisplayCenteredTextLine(3, "Test 1");
  nxtDisplayCenteredTextLine(5, "Connect sensor");
  nxtDisplayCenteredTextLine(6, "to S1");
  wait1Msec(2000);

  PlaySound(soundBeepBeep);
  while(bSoundActive);

  while (true) {
    eraseDisplay();

    // You can read the three axes one by one
    HTACreadX(HTAC, _x_axis1);
    HTACreadY(HTAC, _y_axis1);
    HTACreadZ(HTAC, _z_axis1);

    // It's better to read them all at once, if you want to know
    // all of them anyway.  It is a lot more efficient.
    if (!HTACreadAllAxes(HTAC, _x_axis2, _y_axis2, _z_axis2)) {
      nxtDisplayTextLine(4, "ERROR!!");
      wait1Msec(2000);
      StopAllTasks();
    }

    nxtDisplayTextLine(0,"HTAC Test 1");

    // We can't provide more than 2 parameters to nxtDisplayTextLine(),
    // so we'll do in two steps using StringFormat()
    nxtDisplayTextLine(2, "T    X    Y    Z");
    StringFormat(_tmp, "S:%4d %4d", _x_axis1, _y_axis1);
    nxtDisplayTextLine(3, "%s %4d", _tmp, _z_axis1);

    StringFormat(_tmp, "A:%4d %4d", _x_axis2, _y_axis2);
    nxtDisplayTextLine(4, "%s %4d", _tmp, _z_axis2);

    nxtDisplayTextLine(6, "S: 1 by 1");
    nxtDisplayTextLine(7, "A: All at once");

    wait1Msec(100);
  }
}

/*
 * $Id: HTAC-test1.c 21 2010-02-17 10:19:42Z xander $
 */