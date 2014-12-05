/*

NXT I2C register storage
location       Rd contents        Wr  contents
0-7            v1.0                  -
8-f            mndsnsrs              -
10-18          ACL3X3g               -

0x40
0x41                              command

0x42           X Tilt data           -
0x43           Y Tilt data           -
0x44           Z Tilt data           -

0x45           X accel data LSB      -
0x46           X accel data MSB      -

0x47           Y accel data LSB      -
0x48           Y accel data MSB      -

0x49           Z accel data LSB      -
0x4A           Z accel data MSB      -


0x4B           X_offset lo        X_offset
0x4C           X_offset hi        X_offset

0x4D           X_range  byte0     X_range
0x4E           X_range  byte1     X_range

0x4F           Y_offset           Y_offset
0x50           Y_offset           Y_offset

0x51           Y_range            Y_range
0x52           Y_range            Y_range

0x53           Z_offset           Z_offset lo
0x54           Z_offset           Z_offset hi

0x55           Z_range            Z_range
0x56           Z_range            Z_range

===================================================
0x41                          command
===================================================

Command                 Action
ASCII      Hex

X          0x58          acquire  X Calibration point
Y          0x59          acquire Y Calibration point
Z          0x5A          acquire  Z Calibration point
x          0x78          End X Calibration mode
y          0x79          End Y Calibration mode
z          0x7A          End Z Calibration mode

*/


const ubyte kAcclID             = 0x02;
const ubyte kAcclCommandReg     = 0x41;

const ubyte kX_Tilt             = 0x42;
const ubyte kY_Tilt             = 0x43;
const ubyte kZ_Tilt             = 0x44;

const ubyte kX_Accl             = 0x45;
const ubyte kY_Accl             = 0x47;
const ubyte kZ_Accl             = 0x49;

const ubyte kX_Offset           = 0x4B;
const ubyte kX_Range            = 0x4D;

const ubyte kY_Offset           = 0x4F;
const ubyte kY_Range            = 0x51;

const ubyte kZ_Offset           = 0x53;
const ubyte kZ_Range            = 0x55;

const ubyte kAccl_X_CAL         = 0x58;
const ubyte kAccl_Y_CAL         = 0x59;
const ubyte kAccl_Z_CAL         = 0x6A;

const ubyte kAccl_X_CAL_END     = 0x78;
const ubyte kAccl_Y_CAL_END     = 0x79;
const ubyte kAccl_Z_CAL_END     = 0x7A;

const ubyte kADPA_on            = 0x4E;
const ubyte kADPA_off           = 0x4F;
const ubyte kAccl_FACTcal       = 0x52;


const tSensors kAcclPort         = S4;    // Connect sensor to this port!!
byte replyMsg[2];



//////////////////////////////////////////////////////////////////////////////
//
//            Read the acceleration   data from Accl sensor
//
//
/////////////////////////////////////////////////////////////////////////////

int  Get_accl(byte axis)
{
  int accl;
  byte acclMsg[5];
  const byte kMsgSize         = 0;
  const byte kAcclAddress     = 1;
  const byte kReadAddress     = 2;
  const byte kCommandAddress  = 2;
  const byte kCommand         = 3;

  // Build the I2C message
  acclMsg[kMsgSize]          = 3;
  acclMsg[kAcclAddress]      = kAcclID ;
  acclMsg[kReadAddress]      = axis ;


  replyMsg[0] = 0;
  replyMsg[1] = 0;

  while (nI2CStatus[kAcclPort] == STAT_COMM_PENDING);
  {
    // Wait for I2C bus to be ready
  }
  sendI2CMsg(kAcclPort, acclMsg[0], 2);
  // when the I2C bus is ready, send the message you built

  while (nI2CStatus[kAcclPort] == STAT_COMM_PENDING);
  {
    // Wait for I2C bus to be ready
  }
  readI2CReply(kAcclPort, replyMsg[0], 2);
  // when the I2C bus is ready, Read the reply

  accl = (replyMsg[0] & 0x00FF);
  accl += replyMsg[1]<<8;
  return(accl);
}


//////////////////////////////////////////////////////////////////////////////
//
//      Read the Tilt   data from Accl sensor
//
//
/////////////////////////////////////////////////////////////////////////////

byte  Get_Tilt(byte axis)
{

  byte acclMsg[5];
  const byte kMsgSize         = 0;
  const byte kAcclAddress     = 1;
  const byte kReadAddress     = 2;
  const byte kCommandAddress  = 2;
  const byte kCommand         = 3;

  // Build the I2C message
  acclMsg[kMsgSize]           = 3;
  acclMsg[kAcclAddress]       = kAcclID ;
  acclMsg[kReadAddress]       = axis ;


  replyMsg[0] = 0;

  while (nI2CStatus[kAcclPort] == STAT_COMM_PENDING);
  {
    // Wait for I2C bus to be ready
  }
  sendI2CMsg(kAcclPort, acclMsg[0], 1);
  // when the I2C bus is ready, send the message you built

  while (nI2CStatus[kAcclPort] == STAT_COMM_PENDING);
  {
    // Wait for I2C bus to be ready
  }
  readI2CReply(kAcclPort, replyMsg[0], 1);
  // when the I2C bus is ready, Read the reply

  return (replyMsg[0] & 0x00FF) - 128;
}











//////////////////////////////////////////////////////////////////////////////
//
//     send command to  Acceleration sensor
//
//
/////////////////////////////////////////////////////////////////////////////

void AcclCommand(byte command)
{

  byte acclMsg[5];
  const byte kMsgSize         = 0;
  const byte kAcclAddress     = 1;
  const byte kReadAddress     = 2;
  const byte kCommandAddress  = 2;
  const byte kCommand         = 3;

  // Build the I2C message
  acclMsg[kMsgSize]          = 3;
  acclMsg[kAcclAddress]      = 0xE0;
  acclMsg[kCommandAddress]   = 0x80 ;
  acclMsg[kCommand]          = command;



  while (nI2CStatus[kAcclPort] == STAT_COMM_PENDING);
  {
    // Wait for I2C bus to be ready
  }
  sendI2CMsg(kAcclPort, acclMsg[0], 0);
  // when the I2C bus is ready, send the message you built

}
