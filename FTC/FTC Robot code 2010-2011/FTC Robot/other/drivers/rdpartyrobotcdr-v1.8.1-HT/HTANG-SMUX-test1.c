#pragma config(Sensor, S1,     HTSMUX,              sensorLowSpeed)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*
 * $Id: HTANG-SMUX-test1.c 40 2011-01-03 09:37:09Z xander $
 */

/**
 * HTANG-driver.h provides an API for the HiTechnic Angle Sensor.  This program
 * demonstrates how to use that API.
 *
 * Changelog:
 * - 0.1: Initial release
 *
 * Credits:
 * - Big thanks to HiTechnic for providing me with the hardware necessary to write and test this.
 *
 * License: You may use this code as you wish, provided you give credit where it's due.
 *
 * THIS CODE WILL ONLY WORK WITH ROBOTC VERSION 2.00 AND HIGHER.
 * Xander Soldaat (mightor_at_gmail.com)
 * date 12 November 2009
 * version 0.1
 */

#include "drivers/common.h"
#include "drivers/HTANG-driver.h"

task main () {
  nNxtButtonTask  = -2;
  nxtDisplayCenteredTextLine(0, "HiTechnic");
  nxtDisplayCenteredBigTextLine(1, "Angle");
  nxtDisplayCenteredTextLine(3, "SMUX Test");
  nxtDisplayCenteredTextLine(5, "Connect SMUX to");
  nxtDisplayCenteredTextLine(6, "S1 and ANG to");
  nxtDisplayCenteredTextLine(7, "SMUX Port 1");
  wait1Msec(2000);

  // Before using the SMUX, you need to initialise the driver
  HTSMUXinit();

  // Tell the SMUX to scan its ports for connected sensors
  HTSMUXscanPorts(HTSMUX);

  eraseDisplay();
  nxtDisplayCenteredTextLine(0, "HiTechnic Angle");
  nxtDisplayTextLine(1, "-------------------");
  nxtDisplayTextLine(5, "-------------------");

  while (true) {
    // The accumulated angle or the zero point cannot be reset when connected
    // to a SMUX

    // Read the current angle, accumulated angle and RPM and display them
    nxtDisplayTextLine(2, "Ang: %7d deg", HTANGreadAngle(msensor_S1_1));
    nxtDisplayTextLine(3, "Tot: %7d deg", HTANGreadAccumulatedAngle(msensor_S1_1));
    nxtDisplayTextLine(4, "RPM: %7d", HTANGreadRPM(msensor_S1_1));
    wait1Msec(50);
  }
}


/*
 * $Id: HTANG-SMUX-test1.c 40 2011-01-03 09:37:09Z xander $
 */
